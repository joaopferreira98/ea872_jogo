#pragma once

class Oscilador{
    private:
        float mass, tam, elast, dmp;
    public:
        Oscilador();
        void new_oscillator(float mass, float tam, float elast, float dmp);
        float get_mass();
        float get_tam();
        float get_elast();
        float get_dmp();
};