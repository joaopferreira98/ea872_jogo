/* CONTROLLER */

/* biblioteca que essa classe utiliza */
#include <memory>

/* header files que essa classe precisa em sua definicao */
#include "dinamicos.hpp"
#include "visualizacao.hpp" /* metodo antigo de visualizacao, deixei aqui para fins de debug */
#include "sdl-position.hpp"

/* para evitar conflitos de nome */
#pragma once

/* simplifica alguns comandos */
using namespace std;

/* essa classe vai calcular a posicao na tela em pixel */
class TelaCalc{
    private:
        shared_ptr<Dinamicos> dynamics;
        shared_ptr<Visualizacao> view;
        shared_ptr<SDLPosition> pixposition;
    public:
        TelaCalc(shared_ptr<Dinamicos> dynamics, shared_ptr<Visualizacao> view, shared_ptr<SDLPosition> pixposition); /* inicializa as classes necessarias */
        void position(); /* calcula a posicao */
};