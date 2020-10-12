/* CONTROLLER */

/* biblioteca que essa classe utiliza */
#include <memory>

/* header files que essa classe precisa em sua definicao */
#include "dinamicos.hpp"
#include "visualizacao.hpp"

/* para evitar conflitos de nome */
#pragma once

/* simplifica alguns comandos */
using namespace std;

/* essa classe vai calcular a posicao na tela em pixel */
class TelaCalc{
    private:
        shared_ptr<Dinamicos> dynamics;
        shared_ptr<Visualizacao> view;
        int escala; /* define a escala de exibicao */
    public:
        TelaCalc(shared_ptr<Dinamicos> dynamics, shared_ptr<Visualizacao> view, int escala); /* inicializa as classes necessarias e salva a escala */
        void position(); /* calcula a posicao */
};