#include <iostream>
#include "velha.h"

using namespace std;

int main(){

    int jogador = 1, count = 0; //Qual jogador irá iniciar a partida
    bool ganhar = false;
    Velha JogoVelha;

    while(ganhar==false){
        cout << "Vez do jogador " << jogador << endl;
        ganhar = JogoVelha.FazerJogada(jogador); // se retornar true alguem ganhou e para o while


       jogador == 1 ? jogador = 2 : jogador = 1;
       
       count++;
       if(count == 9 && ganhar == false){
           cout << "Ninguém Ganhou! :(" << endl;
           ganhar = true;
       }


    }





    return 0;
}