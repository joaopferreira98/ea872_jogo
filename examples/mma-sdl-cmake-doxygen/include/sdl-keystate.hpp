/* MODEL */

/* bibliotecas que ela vai utilizar na suas definicoes */
#include <SDL2/SDL.h>

/* evita conflitos de nome */
#pragma once

/* essa classe armazena o estado do teclado */
class SDLKeyState{
        private:
                SDL_Event evento; /* struct que armazena eventos discretos */
                const Uint8 *state; /* ponteiro pro vetor que armazena o estado das teclas */
        public:
                SDLKeyState();
                void set_state(const Uint8 *state); /* define o vetor que armazena o estado do teclado */
                const Uint8* get_state();  /* retorna o endereco do vetor de estados */
                void set_event(SDL_Event evento); /* define a struct que armazena os eventos discretos */
                SDL_Event* get_event(); /* retorna o endereco da struct de eventos */
                Uint32 get_event_type(); /* retorna o tipo de evento */
                int get_arrow_down(); /* retorna o estado da seta para baixo */
                int get_arrow_up(); /* retorna o estado da seta para cima */
};