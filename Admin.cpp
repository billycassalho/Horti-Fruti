#include "../include/funcoesgerais.h"

void MenuAdmin() {
    //Menu Admin
    string Op;
    while (true) {
        //Menu principal do admin
        system("cls");
        cout << "Voce esta logado como: " << "Admin" << endl;
        cout << "[1] - Estoque" << endl;
        cout << "[2] - Logins" << endl;
        cout << "[3] - Fornecedores" << endl;
        cout << "[0] - Sair" << endl;
        cout << ": ";
        cin >> Op;

        if (Op == "1") {
            //Submenu do Estoque
            MenuEstoque();
        } else if (Op == "2") {
            //Submenu do login
            SubmenuLogin();
        } else if (Op == "3") {
            //Submenu dos fornecedores
            SubMenuFornecedores();
        } else if (Op == "0") {
            //Saida
            system("cls");
            cout << "Deslogando do sistema..";
            sleep(2);
            system("cls");
            break;
        }
    }
}
