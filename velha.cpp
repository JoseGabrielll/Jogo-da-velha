#include "velha.h"

using namespace std;

//void ImprimeTabuleiro(tabuleiro[][4]);

bool Velha::FazerJogada(int jogador){
    //jogador = 1 : add 1 no tabuleiro
    //jogador = 2 : add 0 no tabuleiro
    int jogada, a, b, i, j;

    cout << "Tabuleiro Atual" << endl;

    for(i = 1; i < 4; i++){
        for(j = 1; j < 4; j++){
            std::cout << " | " << tabuleiro[i][j];
        }
        std::cout << std::endl;
    }

    cout << "Escreva a posição da sua jogada" << endl;
    cin >> jogada;

    a = jogada/10; //pega o primeiro numero que eu recebo
    b = jogada%10; //pega o segundo numero que eu recebo

    if(tabuleiro[a][b] != (-1)){ // se a posição já foi ocupada
        while(tabuleiro[a][b] != (-1)){ //enquanto adicionar uma posicao inválida fica preso

            cout << "Jogada Inválida, tente novamente" << endl;
            cin >> jogada;
            a = jogada/10; //pega o primeiro numero que eu recebo
            b = jogada%10; //pega o segundo numero que eu recebo
        }
    }

    //Se a posição foi válida coloca a jogada no tabuleiro
    if(jogador == 1) {
        tabuleiro[a][b] = 1;
    }
    if(jogador == 2) {
        tabuleiro[a][b] = 0;
    }
    //Teste para saber se alguem ganhou

    //Condições para jogador 1 ganhar
        if((tabuleiro[1][1] == 1) && (tabuleiro[1][2] == 1) && (tabuleiro[1][3] == 1)){
            std::cout << "O jogador 1 Ganhou a" << endl;
            return true;
        }
        if((tabuleiro[2][1] == 1) && (tabuleiro[2][2] == 1) && (tabuleiro[2][3] == 1)){
            std::cout << "O jogador 1 Ganhou b" << endl;
            return true;
        }
        if((tabuleiro[3][1] == 1) && (tabuleiro[3][2] == 1) && (tabuleiro[3][3] == 1)){
            std::cout << "O jogador 1 Ganhou c" << endl;
            return true;
        }
        if((tabuleiro[1][1] == 1) && (tabuleiro[2][1] == 1) && (tabuleiro[3][1] == 1)){
            std::cout << "O jogador 1 Ganhou d" << endl;
            return true;
        }
        if((tabuleiro[1][2] == 1) && (tabuleiro[2][2] == 1) && (tabuleiro[3][2] == 1)){
            std::cout << "O jogador 1 Ganhou e" << endl;
            return true;
        }
        if((tabuleiro[1][3] == 1) && (tabuleiro[2][3] == 1) && (tabuleiro[3][3] == 1)){
            std::cout << "O jogador 1 Ganhou f" << endl;
            return true;
        }
        if((tabuleiro[1][1] == 1) && (tabuleiro[2][2] == 1) && (tabuleiro[3][3] == 1)){
            std::cout << "O jogador 1 Ganhou g" << endl;
            return true;
        }
        if((tabuleiro[1][3] == 1) && (tabuleiro[2][2] == 1) && (tabuleiro[3][1] == 1)){
            std::cout << "O jogador 1 Ganhou h" << endl;
            return true;
        }

        //Condições para jogador 2 ganhar
        if((tabuleiro[1][1] == 0) && (tabuleiro[1][2] == 0) && (tabuleiro[1][3] == 0)){
            std::cout << "O jogador 2 Ganhou" << endl;
            return true;
        }
        if((tabuleiro[2][1] == 0) && (tabuleiro[2][2] == 0) && (tabuleiro[2][3] == 0)){
            std::cout << "O jogador 2 Ganhou" << endl;
            return true;
        }
        if((tabuleiro[3][1] == 0) && (tabuleiro[3][2] == 0) && (tabuleiro[3][3] == 0)){
            std::cout << "O jogador 2 Ganhou" << endl;
            return true;
        }
        if((tabuleiro[1][1] == 0) && (tabuleiro[2][1] == 0) && (tabuleiro[3][1] == 0)){
            std::cout << "O jogador 2 Ganhou" << endl;
            return true;
        }
        if((tabuleiro[1][2] == 0) && (tabuleiro[2][2] == 0) && (tabuleiro[3][2] == 0)){
            std::cout << "O jogador 2 Ganhou" << endl;
            return true;
        }
        if((tabuleiro[1][3] == 0) && (tabuleiro[2][3] == 0) && (tabuleiro[3][3] == 0)){
            std::cout << "O jogador 2 Ganhou" << endl;
            return true;
        }
        if((tabuleiro[1][1] == 0) && (tabuleiro[2][2] == 0) && (tabuleiro[3][3] == 0)){
            std::cout << "O jogador 2 Ganhou" << endl;
            return true;
        }
        if((tabuleiro[1][3] == 0) && (tabuleiro[2][2] == 0) && (tabuleiro[3][1] == 0)){
            std::cout << "O jogador 2 Ganhou" << endl;
            return true;
        }

        return false; //se nao entrar em nenhuma condição, ninguem ganhou entao retorna falso
    
}