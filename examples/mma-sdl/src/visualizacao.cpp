/* VIEW */

/* biblioteca que essa classe utiliza */
#include <iostream>

/* header file dela */
#include "../include/visualizacao.hpp"

/* utiliza esse namespace para simplificar alguns comandos */
using namespace std;

Visualizacao::Visualizacao(){
}

/* imprime todos os dados dinamicos do bloco */
void Visualizacao::render(float t, float p, float v, float a){
        cout << "Tempo: " << t << " \t";
        cout << "Posicao: " << p << " \t";
        cout << "Velocidade: " << v << " \t";
        cout << "Aceleracao: " << a << endl;
}

/* imprime a posicao em pixel na tela */
void Visualizacao::pixel_pos(int x, int y){
    cout << "(" << x << ", " << y << ")" << endl;
}