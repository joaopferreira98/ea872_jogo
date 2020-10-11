#include <memory>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "../include/dinamicos.hpp"
#include "../include/oscilador.hpp"
#include "../include/visualizacao.hpp"
#include "../include/equacoes.hpp"
#include "../include/telacalc.hpp"
#include "../include/texturas.hpp"

using namespace std;

int main(){
    shared_ptr<Dinamicos> dynamics (new Dinamicos);
    shared_ptr<Oscilador> oscillator (new Oscilador);
    shared_ptr<Visualizacao> view (new Visualizacao);
    unique_ptr<Equacoes> modelo (new Equacoes(dynamics, oscillator, view));
    unique_ptr<TelaCalc> pixel_calc (new TelaCalc(dynamics, view, 10));

    modelo->parametros_dinamicos(0.0, 10.0, 0, 0);
    modelo->parametros_sistema(5.0, 10.0, 5.0, 10.0);

    for (int n = 0; n <= 200; n++){
        modelo->calculo();
        pixel_calc->position();
    }

    return 0;
}