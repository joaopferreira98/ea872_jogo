#include <iostream>
#include <memory>
#include <cmath> // biblioteca para as funcoes de seno e cosseno

#define PI 3.141593
#define TEMPO 0.1

using namespace std;

class Massa{
    private:
        float mass;
    public:
        Massa();
        void new_mass(float m);
        float get_mass();
};

class Mola{
    private:
        float tam, elast;
    public:
        Mola();
        void new_spring(float A, float k);
        float get_tam();
        float get_elast();
};

class Equacoes{
    private:
        shared_ptr<Massa> block;
        shared_ptr<Mola> spring;
    public:
        Equacoes();
        void calculo();
};

void Massa::new_mass(float m){
    this->mass = m;
}

float Massa::get_mass(){
    return mass;
}

Massa::Massa(){
}

void Mola::new_spring(float A, float k){
    this->tam = A;
    this->elast = k;
}

float Mola::get_tam(){
    return tam;
}

float Mola::get_elast(){
    return elast;
}

Mola::Mola(){
}

void Equacoes::calculo(){
    shared_ptr<Massa> block (new Massa);
    shared_ptr<Mola> spring (new Mola);

    block->new_mass(5.0);
    spring->new_spring(10, 5);

    float massa, posicao, velocidade, aceleracao, amplitude, elasticidade;
    float freq_ang, periodo;

    massa = block->get_mass();
    elasticidade = spring->get_elast();
    amplitude = spring->get_tam();

    freq_ang = sqrt(elasticidade/massa);
    periodo = (2*PI)/freq_ang;

    for (int n=0; n<100; n++){
        posicao = amplitude * cos(freq_ang*(n*TEMPO));
        velocidade = - freq_ang * amplitude * sin(freq_ang*(n*TEMPO));
        aceleracao = - (freq_ang*freq_ang) * amplitude * cos(freq_ang*(n*TEMPO));
        cout << "Tempo: " << n*TEMPO << " \t";
        cout << "Posicao: " << posicao << " \t";
        cout << "Velocidade: " << velocidade << " \t";
        cout << "Aceleracao: " << aceleracao << " \t";
        cout << "Periodo: " << periodo << endl;
    }    
}

Equacoes::Equacoes(){
}

int main(){
    shared_ptr<Equacoes> modelo;
    modelo->calculo();
    return 0;
}