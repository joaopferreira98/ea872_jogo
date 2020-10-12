/* MODEL */

/* para evitar conflitos de nome */
#pragma once

/* essa classe vai armazenar os parametros do nosso oscilador */
class Oscilador{
    private:
        float mass, tam, elast, dmp;
    public:
        Oscilador();
        void new_oscillator(float mass, float tam, float elast, float dmp); /* define os parametros do oscilador */
        float get_mass(); /* retorna a massa */
        float get_tam(); /* retorna o tamanho */
        float get_elast(); /* retorna a elasticidade */
        float get_dmp(); /* retorna o amortecimento */
};