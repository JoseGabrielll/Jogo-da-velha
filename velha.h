#ifndef VELHA_H
#define VELHA_H

#include <iostream>

using namespace std;

class Velha{
    private:

    public:
    int tabuleiro[4][4] =   {{-1, -1, -1, -1},
                            {-1, -1, -1, -1},
                            {-1, -1, -1, -1},
                            {-1, -1, -1, -1}};
    bool FazerJogada(int jogador);
    //void ImprimeTabuleiro(tabuleiro[][4]);




};




#endif