/* MODEL */

/* header file dessa classe */
#include "../include/dinamicos.hpp"

Dinamicos::Dinamicos(){
    fext = 0;
}

/* define o estado dinamico atual do bloco */
void Dinamicos::set_dynamic(float tmp, float pos, float vel, float accel){
    this->tmp = tmp;
    this->pos = pos;
    this->vel = vel;
    this->accel = accel;
}
/* define o valor da forca externa aplicada */
void Dinamicos::set_fext(float fext){
    this->fext = fext;
}

/* as proximas funcoes retornam os parametros dinamicos, utilizados para fins de calculo */

float Dinamicos::get_tmp(){
    return tmp;
}

float Dinamicos::get_pos(){
    return pos;
}

float Dinamicos::get_vel(){
    return vel;
}

float Dinamicos::get_accel(){
    return accel;
}

float Dinamicos::get_fext(){
    return fext;
}