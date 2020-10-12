/* CONTROLLER */

/* pra utilizar o 'shared_ptr' */
#include <memory>

/* header files que estao relacionados com essa classe */
#include "dinamicos.hpp"
#include "oscilador.hpp"
#include "visualizacao.hpp"

/* para evitar conflitos de nome */
#pragma once

/* para simplificar alguns comandos */
using namespace std;

/* essa classe eh responsavel por aplicar as leis fisicas no nosso sistema, alem determinar os parametros oscilatorios dele e salvar os dinamicos */
class Equacoes{
    private:
        shared_ptr<Dinamicos> const dynamics; /* precisamos dos parametros dinamicos */
        shared_ptr<Oscilador> const oscillator; /* do oscilador */
        shared_ptr<Visualizacao> const view; /* e de visualizacao */
    public:
        Equacoes(shared_ptr<Dinamicos> dynamics, shared_ptr<Oscilador> oscillator, shared_ptr<Visualizacao> view); /* inicializa as classes necessarias pra simulacao */
        void parametros_dinamicos(float t_cfg, float p_cfg, float v_cfg, float a_cfg); /* definir o estado dinamico atual do bloco */
        void parametros_sistema(float m_cfg, float t_cfg, float e_cfg, float d_cfg); /* definir os parametros do oscilador */
        void calculo(); /* aplicar uma iteracao de simulacao */
};