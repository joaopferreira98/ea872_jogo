/* VIEW */

/* esse eh o metodo antigo de visualizacao, apenas para fins de debug */

/* pra evitar conflitos de nome */
#pragma once

/* essa classe eh responsavel por exibir a evolucao do sistema na simulacao */
class Visualizacao{
    public:
        Visualizacao();
        void render(float t, float p, float v, float a); /* imprime todos os parametros dinamicos */
        void pixel_pos(int x, int y); /* imprime a posicao em pixel na tela */
};