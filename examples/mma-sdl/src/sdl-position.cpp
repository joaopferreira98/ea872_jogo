/* MODEL */

/* header file dessa classe */
#include "../include/sdl-position.hpp"

SDLPosition::SDLPosition(){
}

/* salva a posicao x,y do bloco na tela */
void SDLPosition::set_position(int pixel_x, int pixel_y){
    this->pixel_x = pixel_x;
    this->pixel_y = pixel_y;
}

/* retorna a posicao em x */
int SDLPosition::get_pix_x(){
    return pixel_x;
}

/* retorna a posicao em y */
int SDLPosition::get_pix_y(){
    return pixel_y;
}