
# definicoes
CC = g++
SDL_FLAGS = -lSDL2 -lSDL2_image
OBJS = src/mma-sdl.o
CLASSES = src/dinamicos.cpp src/equacoes.cpp src/oscilador.cpp src/telacalc.cpp src/visualizacao.cpp
SDL_CLASSES = src/sdl-render.cpp src/sdl-textures.cpp src/sdl-position.cpp src/sdl-view.cpp src/sdl-ptr.cpp src/sdl-buffer.cpp src/sdl-keyread.cpp src/sdl-keystate.cpp
HEADER =
OUT = mma-sdl
TARGET = ./mma-sdl

# gerar os executaveis
all: $(OBJS)
	$(CC) $(OBJS) $(CLASSES) $(SDL_CLASSES) $(SDL_FLAGS) -o $(OUT)

mma-sdl.o: src/mma-sdl.cpp
	$(CC) src/mma-sdl.cpp

# apagar os arquivos
clean:
	rm -f src/*.o $(OUT) $(OUT_TEMPLATE)
