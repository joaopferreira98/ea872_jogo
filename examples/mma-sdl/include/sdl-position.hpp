/* MODEL */

#include<SDL2/SDL.h>

/* para evitar conflitos de nome */
#pragma once

/* essa classe vai armazenar a posicao em pixel na janela para o SDL exibir a textura no local correto */
class SDLPosition{
    private:
        SDL_Rect target;
    public:
        SDLPosition();
        void set_position(int pixel_x, int pixel_y); /* determina a posicao x,y atual */
        void set_dimension(int width, int height); /* determina as dimensoes do objeto a ser movido */
        int get_pix_x(); /* retorna a posicao em x */
        int get_pix_y(); /* retorna a posicoa em y */
        int* get_width(); /* retorna a largura */
        int* get_height(); /* retorna a altura */
        SDL_Rect* get_target(); /* retorna um ponteiro para o target */
};