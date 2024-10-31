#include "funcoesgerais.h"

void SubMenuFornecedores() {
    string Op;
    while (true) {
        system("cls");
        cout << "[1] - Mostrar Fornecedores" << endl;
        cout << "[2] - Cadastrar Fornecedor" << endl;
        cout << "[0] - Sair" << endl;
        cout << ": ";
        cin >> Op;
        if (Op == "1") {
            LerFornecedores();
        }
        else if (Op == "2") {
            AddFornecedores();
        }
        else if (Op == "0") {
            system("cls");
            cout << "Voltando para o menu principal aguarde..";
            sleep(2.5);
            //quebra o while do submenu login
            break;
        }
    }
}