# Versao minima do cmake
 cmake_minimum_required(VERSION 3.0)

# Nome do meu projeto
 project(Simulador-MMA-SDL)

# Codigo fonte do meu projeto
 add_executable(Simulador-MMA-SDL src/mma-sdl.cpp)

# Especificar onde estao os header files
 include_directories(include)

# Diretorios das texturas
 include_directories(assets)

# Bibliotecas locais (estaticas)
 add_library(classes-simulador src/dinamicos.cpp src/equacoes.cpp src/oscilador.cpp src/telacalc.cpp src/visualizacao.cpp)
 add_library(classes-sdl src/sdl-render.cpp src/sdl-textures.cpp src/sdl-position.cpp src/sdl-view.cpp src/sdl-ptr.cpp src/sdl-buffer.cpp src/sdl-keyread.cpp src/sdl-keystate.cpp)
 target_link_libraries(Simulador-MMA-SDL classes-simulador)
 target_link_libraries(Simulador-MMA-SDL classes-sdl)

# Garantir que usaremos C++11 (ou superior, se preciso)
 set(CMAKE_CXX_STANDARD 11)
 set(CMAKE_CXX_STANDARD_REQUIRED True)

# Bibliotecas linkadas externamente
 target_link_libraries(Simulador-MMA-SDL SDL2)
 target_link_libraries(Simulador-MMA-SDL SDL2_image)
