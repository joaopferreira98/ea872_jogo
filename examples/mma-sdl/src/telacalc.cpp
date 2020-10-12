/* CONTROLLER */

/* bibliotecas que essa classe vai precisar */
#include <memory>

/* header files que vai precisar */
#include "../include/telacalc.hpp"
#include "../include/dinamicos.hpp"
#include "../include/visualizacao.hpp"

/* utiliza esse namespace para simplificar alguns comandos */
using namespace std;

/* inicializa as classes necessarias e salva a escala escolhida */
TelaCalc::TelaCalc(shared_ptr<Dinamicos> dynamics, shared_ptr<Visualizacao> view, int escala):
    dynamics(dynamics),
    view(view)
{
    this->escala = escala;
}

/* calcula a posicao em pixel baseada numa tela de 200x400 */ 
void TelaCalc::position(){
    const int height = 640;
    const int width = 480;

    int pos_x = width/2;
    int pos_y = height/2;

    pos_y+=escala*dynamics->get_pos();

    view->pixel_pos(pos_x, pos_y); /* exibe a posicao que o bloco estaria */
}