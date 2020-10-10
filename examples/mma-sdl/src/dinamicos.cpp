#include "../include/dinamicos.hpp"

Dinamicos::Dinamicos(){
}

void Dinamicos::set_dynamic(float tmp, float pos, float vel, float accel){
    this->tmp = tmp;
    this->pos = pos;
    this->vel = vel;
    this->accel = accel;
}

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