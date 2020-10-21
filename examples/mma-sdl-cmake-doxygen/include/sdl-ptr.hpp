/* MODEL */

/* bibliotecas que ela vai utilizar na suas definicoes */
#include <SDL2/SDL.h>

/* evita conflitos de nome */
#pragma once

/* essa classe vai servir exclusivamente para armazenar os ponteiros do renderer e da window */
class SDLPointer{
    private:
        SDL_Window *janela;
        SDL_Renderer *renderer;
    public:
        void set_window(SDL_Window *janela);
        void set_renderer(SDL_Renderer *renderer);
        SDL_Window* get_window();
        SDL_Renderer* get_renderer(); 
};