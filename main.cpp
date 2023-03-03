#include <iostream>
#include <stdlib.h>
#include <string>
#include <windows.h>
#include <fstream> //ofstream , ifstream , fstream
#include <locale.h>
#include <sstream>
#include <string>

using namespace std;

int menu(){
    int verif=0;
    int escolha;

    while(verif==0){

        system("color 4b");

        string menu;
        ifstream menu_arquivo;
        menu_arquivo.open("./dialogos/menu.txt");

        while(menu_arquivo.eof()==false) {
            getline(menu_arquivo, menu);
            Sleep(50);
            cout<<menu<<endl;
        }
        cin>>escolha;

        if(escolha==1 or escolha == 2 or escolha == 3){
            verif++;
        }
        system("cls");
    }

    system ("cls");
    return escolha;

}

void creditos(){

    int digit=0;

    system("color 00");

    system("cls");
    char credito;

        ifstream credito_arquivo;
        credito_arquivo.open("./dialogos/creditos.txt");

        while(credito_arquivo.eof()==false){
            credito = credito_arquivo.get();
            Sleep(5);
            cout<<credito;

        }
        cout<<"\n";
        while(digit!=1){
            cout<<"Digite 1 para voltar.";
            cin>>digit;
        }


    system("cls");

}

struct equipamento{



};

struct player{

    int atk, agil, def, hp, mp, intelig, luck;
    string nome;
    string slots[2];

};

player classe(player &p1, int opcao){

    switch(opcao){

        case 1:
            p1.atk = 6;
            p1.agil = 5;
            p1.def = 6;
            p1.hp= 20;
            p1.mp = 3;
            p1.intelig = 2;
            p1.luck = 4;

            return p1;
        break;
        case 2:

            p1.atk = 2;
            p1.agil = 3;
            p1.def = 3;
            p1.hp= 20;
            p1.mp = 10;
            p1.intelig = 6;
            p1.luck = 6;


            return p1;
        break;
        case 3:

            p1.atk = 4;
            p1.agil = 7;
            p1.def = 4;
            p1.hp= 20;
            p1.mp = 6;
            p1.intelig = 2;
            p1.luck = 4;

            return p1;
        break;
    }

}

struct inimigo{
    int atk, def, hp;

};

inimigo stats(inimigo &i1, int opcao){

    switch(opcao){
        case 1:///GOBLIN
            i1.atk = 3;
            i1.def = 5;
            i1.hp = 10;

        break;
        case 2:///GUARDA
            i1.atk = 5;
            i1.def = 6;
            i1.hp = 15;

        break;
        case 3:///DONO DO CASTELO
            i1.atk = 15;
            i1.def = 15;
            i1.hp = 18;

        break;
        case 4:///BARÃO
            i1.atk = 15;
            i1.def = 16;
            i1.hp = 19;

        break;
    }


}

void combate(inimigo i1,int opcao){
    stats(i1,opcao);




}

void taverna() {
    int opcao;
    string taverna;
    ifstream taverna_arquivo;
    taverna_arquivo.open("./dialogos/taverna.txt");

    system("cls");
    system("color 07");

    while(opcao != 1){

    while(taverna_arquivo.eof() == false) {
        taverna = taverna_arquivo.get();
        Sleep(1);
        cout<<taverna;
    }

    cout<<"\n\n";1
    cin>>opcao;

    taverna_arquivo.close();

    if(opcao == 2) {
        string cerveja;
        ifstream cerveja_arquivo;
        cerveja_arquivo.open("./dialogos/cerveja.txt");

        system("cls");
        while(cerveja_arquivo.eof() == false){
            cerveja = cerveja_arquivo.get();
            Sleep(1);
            cout<<cerveja;
        }

        p1.agil -= 2;
    }
    }

}

void cerveja(player p1){



}

int main(){

    setlocale(LC_ALL,"Portuguese");
    int e;

    while(e!=1){

    e = menu();

    if(e == 3){
        return 0;
    }
    if(e == 2) {
        creditos();
    }

    }
    /// aqui começa o jogo

    int escolhaClasse;
    int comecarJogo=0;
    player p1;
    inimigo i1;

    while(comecarJogo!=1){

        escolhaClasse=0;

        cout<<"Qual será o nome do personagem?"<<endl;
        cin>>p1.nome;

        while(escolhaClasse!=1 and escolhaClasse!=2 and escolhaClasse!=3){
            cout<<"Escolha entre: Guerreiro[1], Mago[2] ou Ladino[3]"<<endl;
            cin>>escolhaClasse;

            if(escolhaClasse == 1) {
                classe(p1, 1);
            } else if(escolhaClasse == 2) {
                classe(p1, 2);
            } else if (escolhaClasse == 3) {
                classe(p1, 3);
            } else {
                cout<<"1 2 ou 3"<<endl;
                system ("pause");
                system("cls");
            }

        }


        system("cls");

        cout<<"Seu personagem: \n"<<endl;
        cout<<"Nome: "<<p1.nome<<endl;
        cout<<"Força: "<<p1.atk<<"\n"<<endl;
        cout<<"Agilidade: "<<p1.agil<<"\n"<<endl;
        cout<<"Defesa: "<<p1.def<<"\n"<<endl;
        cout<<"Vida: "<<p1.hp<<"\n"<<endl;
        cout<<"Pontos de Mana: "<<p1.mp<<"\n"<<endl;
        cout<<"Inteligência: "<<p1.intelig<<"\n"<<endl;
        cout<<"Sorte: "<<p1.luck<<"\n"<<endl;

        cout<<"\nBelo Personagem!"<<endl;
        cout<<"Para começar o jogo digite 1, para recriar seu personagem digite outro número"<<endl;
        cin>>comecarJogo;
        system("cls");

    }
    ///jogo de vdd

    taverna();

    ///combate



    combate(i1,1);







    return 0;
}
