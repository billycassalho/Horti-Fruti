#include "../../include/funcoesgerais.h"

void LerLogins() {
    system("clt");
    string Saida, ID, Login, Senha, Cargo, Op;
    ifstream LeiorLogin(ArquivosLogins);
    // Esta passando linha por linha do arquivo
    system("cls");
    cout << "______________________________" << endl;
    while (getline(LeiorLogin, Saida)) {
        stringstream Loginsaida(Saida);
        // Esta salvando os item da linha que esta lendo dentro de suas variaveis representante 
        getline(Loginsaida, ID, ',');
        getline(Loginsaida, Login, ',');
        getline(Loginsaida, Senha, ',');
        getline(Loginsaida, Cargo, ',');
        //Imprimindo no terminal a lista inteira
        cout << "ID: " << ID << endl;
        cout << "Login: " << Login << endl;
        cout << "Senha: " << Senha << endl;
        cout << "Cargo: " << Cargo << endl;
        cout << "______________________________" << endl;
    }
    LeiorLogin.close();
    cout << "[S] Para Sair: ";
    cin >> Op;
    system("cls");
    cout << "voltando para o menu aguarde..";
    sleep(1.5);
}