/* MODEL */

/* para evitar conflitos de nome */
#pragma once

/* essa classe vai armazenar o estado dinamico do bloco, como posicao, velocidade, aceleracao, etc. */
class Dinamicos{
    private:
        float tmp, pos, vel, accel, fext;
    public:
        Dinamicos();
        void set_dynamic(float tmp, float pos, float vel, float accel); /* define o estado dinamico do bloco */
        void set_fext(float fext); /* define forca externa atual */ 
        float get_tmp(); /* retorna o instante temporal discretizado */
        float get_pos(); /* retorna a posicao */
        float get_vel(); /* retorna a velocidade */
        float get_accel(); /* retorna a aceleracao */
        float get_fext(); /* retorna a forca externa aplicada pela seta */
};