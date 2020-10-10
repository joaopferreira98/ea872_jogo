#pragma once

class Visualizacao{
    public:
        Visualizacao();
        void render(float t, float p, float v, float a);
        void pixel_pos(int x, int y);
};