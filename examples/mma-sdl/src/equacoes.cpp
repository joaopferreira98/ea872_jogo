#include "../include/equacoes.hpp"

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