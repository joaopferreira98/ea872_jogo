/* CONTROLLER */

/* bibliotecas que essa classe vai precisar */
#include <memory>

/* header files que vai precisar */
#include "../include/telacalc.hpp"
#include "../include/dinamicos.hpp"
#include "../include/visualizacao.hpp"
#include "../include/sdl-position.hpp"

/* utiliza esse namespace para simplificar alguns comandos */
using namespace std;

/* inicializa as classes necessarias e salva a escala escolhida */
TelaCalc::TelaCalc(Dinamicos &dynamics, Visualizacao &view, SDLPosition &pixposition):
    dynamics(dynamics),
    view(view),
    pixposition(pixposition)
{
}

/* calcula a posicao em pixel baseada numa tela de 200x400 */ 
void TelaCalc::position(){
    const int height = 480;
    const int width = 640;

    const int escala = 10;

    int pos_x = width/2;
    int pos_y = height/2;

    pos_y+=escala*dynamics.get_pos();

    // view->pixel_pos(pos_x, pos_y); /* exibe a posicao que o bloco estaria */
    pixposition.set_position(pos_x, pos_y);
}