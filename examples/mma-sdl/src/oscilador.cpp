#include "../include/oscilador.hpp"

Oscilador::Oscilador(){
}

void Oscilador::new_oscillator(float mass, float tam, float elast, float dmp){
    this->mass = mass;
    this->tam = tam;
    this->elast = elast;
    this->dmp = dmp;
}

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