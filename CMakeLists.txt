# Versao minima do cmake
 cmake_minimum_required(VERSION 3.0)

# Nome do meu projeto
 project(NAV.io-Local)

# Codigo fonte do meu projeto
 add_executable(NAV.io-Local src/main.cpp)

# Especificar onde estao os header files
 include_directories(include)

# Diretorios das texturas
 include_directories(assets)

# Bibliotecas locais (estaticas)
 add_library(classes-sdl src/sdl-render.cpp src/sdl-textures.cpp src/sdl-position.cpp src/sdl-view.cpp src/sdl-ptr.cpp src/sdl-buffer.cpp src/sdl-keyread.cpp src/sdl-keystate.cpp)
 target_link_libraries(NAV.io-Local classes-sdl)

# Garantir que usaremos C++11 (ou superior, se preciso)
 set(CMAKE_CXX_STANDARD 11)
 set(CMAKE_CXX_STANDARD_REQUIRED True)

# Bibliotecas linkadas externamente
 target_link_libraries(NAV.io-Local SDL2)
 target_link_libraries(NAV.io-Local SDL2_image)

# Automatizacao do Doxygen
find_package(Doxygen REQUIRED dot)

set(DOXYGEN_EXTRACT_ALL YES)
set(DOXYGEN_EXTRACT_PRIVATE YES)
set(DOXYGEN EXTRACT_STATIC YES)
set(DOXYGEN_TEMPLATE_RELATIONS YES)
set(DOXYGEN_COLLABORATION_GRAPH YES)
set(DOXYGEN_UML_LOOK YES)
set(DOXYGEN_CLASS_GRAPH YES)

doxygen_add_docs(doc)