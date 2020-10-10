
# definicoes
CC	= g++
OBJS = src/mma-sdl.o
OBJS_TEMPLATE = src/mma-sdl-template.o
HEADER =
OUT = mma-sdl
OUT_TEMPLATE = mma-sdl-template
TARGET = ./mma-sdl
TARGET_TEMPLATE = ./mma-sdl-template

# gerar os executaveis
all: $(OBJS)
	$(CC) $(OBJS) -o $(OUT)

old: $(OBJS_TEMPLATE)
	$(CC) $(OBJS_TEMPLATE) -o $(OUT_TEMPLATE)

mma-sdl.o: src/mma-sdl.cpp
	$(CC) src/mma-sdl.cpp

mma-sdl-template.o: src/mma-sdl-template.cpp
	$(CC) src/mma-sdl-template.cpp

# apagar os arquivos
clean:
	rm -f src/*.o $(OUT) $(OUT_TEMPLATE)