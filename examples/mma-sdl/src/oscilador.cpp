/* MODEL */

/* header file dessa classe */
#include "../include/oscilador.hpp"

Oscilador::Oscilador(){
}

/* essa funcao define os parametros do oscilador */
void Oscilador::new_oscillator(float mass, float tam, float elast, float dmp){
    this->mass = mass;
    this->tam = tam;
    this->elast = elast;
    this->dmp = dmp;
}

/* as proximas funcoes vao retornar cada parametro configurado, para fins de calculo */

float Oscilador::get_mass(){
    return mass;
}

float Oscilador::get_tam(){
    return tam;
}

float Oscilador::get_elast(){
    return elast;
}

float Oscilador::get_dmp(){
    return dmp;
}