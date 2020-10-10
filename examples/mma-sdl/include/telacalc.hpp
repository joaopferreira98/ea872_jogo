#pragma once

class TelaCalc{
    private:
        shared_ptr<Dinamicos> dynamics;
        shared_ptr<Visualizacao> view;
        int escala;
    public:
        TelaCalc(shared_ptr<Dinamicos> dynamics, shared_ptr<Visualizacao> view, int escala);
        void position();
};