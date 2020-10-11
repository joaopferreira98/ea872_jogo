#include <memory>

#include "../include/telacalc.hpp"
#include "../include/dinamicos.hpp"
#include "../include/visualizacao.hpp"

using namespace std;

TelaCalc::TelaCalc(shared_ptr<Dinamicos> dynamics, shared_ptr<Visualizacao> view, int escala):
    dynamics(dynamics),
    view(view)
{
    this->escala = escala;
}

void TelaCalc::position(){
    const int height = 400;
    const int width = 200;

    int pos_x = width/2;
    int pos_y = height/2;

    pos_y+=escala*dynamics->get_pos();

    view->pixel_pos(pos_x, pos_y);
}