#include "funcoesgerais.h"

void SubmenuLogin() {
    string Op;
    while (true) {
        system("cls");
        cout << "[1] - Logins" << endl;
        cout << "[2] - Cadastrar Login" << endl;
        cout << "[0] - Sair" << endl;
        cout << ": ";
        cin >> Op;
        if (Op == "1") {
            //Chama a função lerlogin para ler todos os login do sistema
            LerLogins();
        } else if (Op == "2") {
            //Chama a função addlogin para adicionar um novo login para o sistema
            AddLogin();
        } else if (Op == "0") {
            system("cls");
            cout << "Voltando para o menu principal aguarde..";
            sleep(2.5);
            //quebra o while do submenu login
            break;
        }
    }
}
