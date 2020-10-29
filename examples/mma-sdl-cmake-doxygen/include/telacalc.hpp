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
        Dinamicos &dynamics;
        Visualizacao &view;
        SDLPosition &pixposition;
    public:
        TelaCalc(Dinamicos &dynamics, Visualizacao &view, SDLPosition &pixposition); /* inicializa as classes necessarias */
        void position(); /* calcula a posicao */
};