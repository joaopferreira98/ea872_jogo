#include <iostream>

#include "dinamicos.hpp"
#include "visualizacao.hpp"

#pragma once

using namespace std;

class TelaCalc{
    private:
        shared_ptr<Dinamicos> dynamics;
        shared_ptr<Visualizacao> view;
        int escala;
    public:
        TelaCalc(shared_ptr<Dinamicos> dynamics, shared_ptr<Visualizacao> view, int escala);
        void position();
};