#include <iostream>

#include "../include/visualizacao.hpp"

using namespace std;

Visualizacao::Visualizacao(){
}

void Visualizacao::render(float t, float p, float v, float a){
        cout << "Tempo: " << t << " \t";
        cout << "Posicao: " << p << " \t";
        cout << "Velocidade: " << v << " \t";
        cout << "Aceleracao: " << a << endl;
}

void Visualizacao::pixel_pos(int x, int y){
    cout << "(" << x << ", " << y << ")" << endl;
}