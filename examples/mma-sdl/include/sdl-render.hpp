/* pra evitar conflitos de nome */
#pragma once

class SDLRender{
    private:
        SDL_Window* window; /* struct da janela */
        SDL_Renderer* renderer; /* struct do renderer */
    public:
        SDLRender();
        int window_init();
        int render_init();
};