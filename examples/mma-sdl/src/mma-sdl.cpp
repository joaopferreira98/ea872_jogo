#include <iostream>
#include <memory>
#include <cmath>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#define TEMPO 0.1

using namespace std;

/* MODEL */

class Texturas{
    private:
        SDL_Texture *bloco = IMG_LoadTexture(renderer, "textures/bloco.png");
        SDL_Texture *fundo = IMG_LoadTexture(renderer, "textures/fundo.png");
    public:
        Texturas();
};

Texturas::Texturas(){
}

class Dinamicos{
    private:
        float tmp, pos, vel, accel;
    public:
        Dinamicos();
        void set_dynamic(float tmp, float pos, float vel, float accel);
        float get_tmp();
        float get_pos();
        float get_vel();
        float get_accel();
};

Dinamicos::Dinamicos(){
}

void Dinamicos::set_dynamic(float tmp, float pos, float vel, float accel){
    this->tmp = tmp;
    this->pos = pos;
    this->vel = vel;
    this->accel = accel;
}

float Dinamicos::get_tmp(){
    return tmp;
}

float Dinamicos::get_pos(){
    return pos;
}

float Dinamicos::get_vel(){
    return vel;
}

float Dinamicos::get_accel(){
    return accel;
}

class Oscilador{
    private:
        float mass, tam, elast, dmp;
    public:
        Oscilador();
        void new_oscillator(float mass, float tam, float elast, float dmp);
        float get_mass();
        float get_tam();
        float get_elast();
        float get_dmp();
};

Oscilador::Oscilador(){
}

void Oscilador::new_oscillator(float mass, float tam, float elast, float dmp){
    this->mass = mass;
    this->tam = tam;
    this->elast = elast;
    this->dmp = dmp;
}

float Oscilador::get_mass(){
    return mass;
}

float Oscilador::get_tam(){
    return tam;
}

float Oscilador::get_elast(){
    return elast;
}

float Oscilador::get_dmp(){
    return dmp;
}

/* VIEW */

class SDL_View{
    private:
    public:
};

class Visualizacao{
    public:
        Visualizacao();
        void render(float t, float p, float v, float a);
        void pixel_pos(int x, int y);
};

Visualizacao::Visualizacao(){
}

void Visualizacao::render(float t, float p, float v, float a){
        cout << "Tempo: " << t << " \t";
        cout << "Posicao: " << p << " \t";
        cout << "Velocidade: " << v << " \t";
        cout << "Aceleracao: " << a << endl;
}

void Visualizacao::pixel_pos(int x, int y){
    cout << "(" << x << ", " << y << ")" << endl;
}

/* CONTROLLER */

class SDL_Inicializar{
    private:
    public:
        SDL_Inicializar();
        void window_create();
        void window_destroy();
};

SDL_Inicializar::SDL_Inicializar(){
    if (SDL_Init (SDL_INIT_VIDEO) < 0){
        std::cout << SDL_GetError();
        return 1;
    }
}

class SDL_Render{
    private:
    public:
}

class Equacoes{
    private:
        shared_ptr<Dinamicos> const dynamics;
        shared_ptr<Oscilador> const oscillator;
        shared_ptr<Visualizacao> const view;
    public:
        Equacoes(shared_ptr<Dinamicos> dynamics, shared_ptr<Oscilador> oscillator, shared_ptr<Visualizacao> view);
        void parametros_dinamicos(float t_cfg, float p_cfg, float v_cfg, float a_cfg);
        void parametros_sistema(float m_cfg, float t_cfg, float e_cfg, float d_cfg);
        void calculo();
};

Equacoes::Equacoes(shared_ptr<Dinamicos> dynamics, shared_ptr<Oscilador> oscillator, shared_ptr<Visualizacao> view):
    // Lista de inicializacao
    dynamics(dynamics),
    oscillator(oscillator),
    view(view)
{
}

void Equacoes::calculo(){

    float massa, tamanho, elasticidade, amortecimento;
    float tempo, posicao, velocidade, aceleracao;
    float damp_ratio;
    float forca_mola;

    massa = oscillator->get_mass();
    tamanho = oscillator->get_tam();
    elasticidade = oscillator->get_elast();
    amortecimento = oscillator->get_dmp();

    damp_ratio = amortecimento / (2*sqrt(massa*elasticidade));

    posicao = dynamics->get_pos();
    velocidade = dynamics->get_vel();
    aceleracao = dynamics->get_accel();
    tempo = dynamics->get_tmp();

    forca_mola = - (elasticidade*posicao) - (damp_ratio*velocidade);

    aceleracao = forca_mola/massa;
    velocidade += aceleracao*TEMPO;
    posicao += velocidade*TEMPO;
    tempo += TEMPO;
    forca_mola = - (elasticidade*posicao) - (damp_ratio*velocidade);
    
    dynamics->set_dynamic(tempo, posicao, velocidade, aceleracao);
}

void Equacoes::parametros_sistema(float m_cfg, float t_cfg, float e_cfg, float d_cfg){
    oscillator->new_oscillator(m_cfg, t_cfg, e_cfg, d_cfg);
}

void Equacoes::parametros_dinamicos(float t_cfg, float p_cfg, float v_cfg, float a_cfg){
    dynamics->set_dynamic(t_cfg, p_cfg, v_cfg, a_cfg);
}

class TelaCalc{
    private:
        shared_ptr<Dinamicos> dynamics;
        shared_ptr<Visualizacao> view;
        int escala;
    public:
        TelaCalc(shared_ptr<Dinamicos> dynamics, shared_ptr<Visualizacao> view, int escala);
        void position();
};

TelaCalc::TelaCalc(shared_ptr<Dinamicos> dynamics, shared_ptr<Visualizacao> view, int escala):
    dynamics(dynamics),
    view(view)
{
    this->escala = escala;
}

void TelaCalc::position(){
    const int height = 400;
    const int width = 200;

    int pos_x = width/2;
    int pos_y = height/2;

    pos_y+=escala*dynamics->get_pos();

    view->pixel_pos(pos_x, pos_y);
}

/* FUNÇÃO PRINCIPAL */

int main(){
    shared_ptr<Dinamicos> dynamics (new Dinamicos);
    shared_ptr<Oscilador> oscillator (new Oscilador);
    shared_ptr<Visualizacao> view (new Visualizacao);
    unique_ptr<Equacoes> modelo (new Equacoes(dynamics, oscillator, view));
    unique_ptr<TelaCalc> pixel_calc (new TelaCalc(dynamics, view, 10));

    modelo->parametros_dinamicos(0.0, 10.0, 0, 0);
    modelo->parametros_sistema(5.0, 10.0, 5.0, 10.0);

    for (int n = 0; n <= 200; n++){
        modelo->calculo();
        pixel_calc->position();
    }

    return 0;
}