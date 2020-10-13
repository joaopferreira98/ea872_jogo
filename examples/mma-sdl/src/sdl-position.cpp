/* MODEL */

/* header file dessa classe */
#include "../include/sdl-position.hpp"

SDLPosition::SDLPosition(){
}

/* salva a posicao x,y do bloco na tela */
void SDLPosition::set_position(int pixel_x, int pixel_y){
    this->target.x = pixel_x;
    this->target.y = pixel_y;
}

/* determina as dimensoes do objeto em questao */
void SDLPosition::set_dimension(int width, int height){
    this->target.w = width;
    this->target.h = height;
}

/* retorna a posicao em x */
int SDLPosition::get_pix_x(){
    return target.x;
}

/* retorna a posicao em y */
int SDLPosition::get_pix_y(){
    return target.y;
}

/* retorna um pointeiro para a largura do objeto */
int* SDLPosition::get_width(){
    return &target.w;
}

/* retorna a altura do objeto */
int* SDLPosition::get_height(){
    return &target.h;
}

SDL_Rect* SDLPosition::get_target(){
    return &target;
}