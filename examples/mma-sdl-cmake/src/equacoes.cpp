/* CONTROLLER */

/* bibliotecas que essa classe utiliza */
#include <memory>
#include <cmath>

/* header files que essa classe utiliza */
#include "../include/equacoes.hpp"
#include "../include/oscilador.hpp"
#include "../include/dinamicos.hpp"
#include "../include/visualizacao.hpp"

/* define o minimo intervalo temporal de calculo */
#define TEMPO 0.1

/* utiliza o namespace std para simplificar alguns comandos */
using namespace std;

/* inicializa as classes necessarias */
Equacoes::Equacoes(shared_ptr<Dinamicos> dynamics, shared_ptr<Oscilador> oscillator, shared_ptr<Visualizacao> view):
    // Lista de inicializacao
    dynamics(dynamics),
    oscillator(oscillator),
    view(view)
{
}

/* a funcao principal dessa classe aplica a lei fisica para uma iteracao de simulacao */
void Equacoes::calculo(){

    float massa, tamanho, elasticidade, amortecimento; /* parametros do sistema */
    float tempo, posicao, velocidade, aceleracao, fexterna; /* parametros dinamicos */
    float damp_ratio; /* amortecimento do oscilador */
    float forca_mola; /* forca dela */

    /* pega os parametros do sistema que foram determinados previamente */
    massa = oscillator->get_mass();
    tamanho = oscillator->get_tam();
    elasticidade = oscillator->get_elast();
    amortecimento = oscillator->get_dmp();

    /* calcula o amortecimento do oscilador */
    damp_ratio = amortecimento / (2*sqrt(massa*elasticidade));

    /* pega os parametros dinamicos do ultimo estado */
    posicao = dynamics->get_pos();
    velocidade = dynamics->get_vel();
    aceleracao = dynamics->get_accel();
    tempo = dynamics->get_tmp();
    fexterna = dynamics->get_fext();

    /* calcula a forca presente na mola */
    forca_mola = - (elasticidade*posicao) - (damp_ratio*velocidade) + (fexterna);

    /* calcula os parametros dinamicos para a forca atual */
    aceleracao = forca_mola/massa;
    velocidade += aceleracao*TEMPO;
    posicao += velocidade*TEMPO;
    tempo += TEMPO;
    
    /* armazena esses parametros dinamicos calculados */
    dynamics->set_dynamic(tempo, posicao, velocidade, aceleracao);
}

/* define os parametros do oscilador do sistema */
void Equacoes::parametros_sistema(float m_cfg, float t_cfg, float e_cfg, float d_cfg){
    oscillator->new_oscillator(m_cfg, t_cfg, e_cfg, d_cfg);
}

/* determina o estado dinamico atual do bloco */
void Equacoes::parametros_dinamicos(float t_cfg, float p_cfg, float v_cfg, float a_cfg){
    dynamics->set_dynamic(t_cfg, p_cfg, v_cfg, a_cfg);
}