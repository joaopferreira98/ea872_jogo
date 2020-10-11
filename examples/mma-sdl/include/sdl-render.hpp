#pragma once

class SDLRender{
    private:
        SDL_Window* window;
    public:
        SDLRender();
        void window_init();
        void render_init();
};