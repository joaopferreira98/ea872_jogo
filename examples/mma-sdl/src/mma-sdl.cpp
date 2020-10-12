/* CODIGO PRINCIPAL */

/* bibliotecas gerais que iremos utilizar */
#include <memory>

/* classes do simulador físico */
#include "../include/dinamicos.hpp"
#include "../include/oscilador.hpp"
#include "../include/visualizacao.hpp"
#include "../include/equacoes.hpp"
#include "../include/telacalc.hpp"

/* classes do SDL */
#include "../include/sdl-render.hpp"
#include "../include/sdl-ptr.hpp"
#include "../include/sdl-textures.hpp"
#include "../include/sdl-position.hpp"
#include "../include/sdl-view.hpp"

/* utiliza o namespace sdl para facilitar alguns comandos */
using namespace std;

int main(){
    shared_ptr<Dinamicos> dynamics (new Dinamicos); /* classe dos parametros dinamicos */
    shared_ptr<Oscilador> oscillator (new Oscilador); /* classe dos parametros do oscilador */
    shared_ptr<Visualizacao> view (new Visualizacao); /* classe para visualizacao */
    unique_ptr<Equacoes> modelo (new Equacoes(dynamics, oscillator, view)); /* classe para as equacoes */
    unique_ptr<TelaCalc> pixel_calc (new TelaCalc(dynamics, view, 10)); /* classe para calcular a posicao na tela */

    modelo->parametros_dinamicos(0.0, 10.0, 0, 0); /* parametros dinamicos iniciais da massa */
    modelo->parametros_sistema(5.0, 10.0, 5.0, 10.0); /* parametros do oscilador */

    /* faz n iteracoes pra simulacao */
    for (int n = 0; n <= 200; n++){
        modelo->calculo();
        pixel_calc->position();
    }

    return 0;
}