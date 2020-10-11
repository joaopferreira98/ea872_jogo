#include <memory>

#include "dinamicos.hpp"
#include "oscilador.hpp"
#include "visualizacao.hpp"

#pragma once

using namespace std;

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