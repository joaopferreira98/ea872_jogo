
# definicoes
CC = g++
SDL_FLAGS = -lSDL2 -lSDL2_image
OBJS = src/mma-sdl.o
OBJS_TEMPLATE = src/mma-sdl-template.o
CLASSES = src/dinamicos.cpp src/equacoes.cpp src/oscilador.cpp src/telacalc.cpp src/visualizacao.cpp
SDL_CLASSES = src/sdl-render.cpp src/sdl-textures.cpp src/sdl-position.cpp src/sdl-view.cpp
HEADER =
OUT = mma-sdl
OUT_TEMPLATE = mma-sdl-template
TARGET = ./mma-sdl
TARGET_TEMPLATE = ./mma-sdl-template

# gerar os executaveis
all: $(OBJS)
	$(CC) $(OBJS) $(CLASSES) $(SDL_CLASSES) $(SDL_FLAGS) -o $(OUT)

old: $(OBJS_TEMPLATE)
	$(CC) $(OBJS_TEMPLATE) -o $(OUT_TEMPLATE)

mma-sdl.o: src/mma-sdl.cpp
	$(CC) src/mma-sdl.cpp

mma-sdl-template.o: src/mma-sdl-template.cpp
	$(CC) src/mma-sdl-template.cpp

# apagar os arquivos
clean:
	rm -f src/*.o $(OUT) $(OUT_TEMPLATE)
