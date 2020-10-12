/* MODEL */

/* para evitar conflitos de nome */
#pragma once;

/* essa classe vai armazenar a posicao em pixel na janela para o SDL exibir a textura no local correto */
class SDLPosition{
    private:
        int pixel_x, pixel_y;
    public:
        SDLPosition();
        void set_position(int pixel_x, int pixel_y); /* determina a posicao x,y atual */
        int get_pix_x(); /* retorna a posicao em x */
        int get_pix_y(); /* retorna a posicoa em y */
};