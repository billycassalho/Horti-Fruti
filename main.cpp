#include "../include/funcoesgerais.h"

int main(){
    string Cargo, login, senha;
    cout << "Login: ";
    cin >> login;
    cout << "Senha: ";
    cin >> senha;
    VerificarMenus(VerificarLogin(login, senha));
    return 0;
}