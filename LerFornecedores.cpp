#include "../include/funcoesgerais.h"


using namespace std;
    
void LerFornecedores() {
    system("cls");
    string Saida, ID, Nome, Empresa, Contato, Descricao, Op;
    ifstream LeitorFornecedores(ArquivosFornecedores);
    cout << "______________________________" << endl;
    while (getline(LeitorFornecedores, Saida)) {
        stringstream ss(Saida);
        getline(ss, ID, ',');
        getline(ss, Nome, ',');
        getline(ss, Empresa, ',');
        getline(ss, Contato, ',');
        getline(ss, Descricao, ',');

        cout << "ID: " << ID << endl;
        cout << "Nome: " << Nome << endl;
        cout << "Empresa: " << Empresa << endl;
        cout << "Contato : " << Contato << endl;
        cout << "Descricao: " << Descricao << endl;
        cout << "______________________________" << endl;
    }
    LeitorFornecedores.close();
    cout << "[S] Para Sair: ";
    cin >> Op;
    system("cls");
    cout << "voltando para o menu aguarde..";
    sleep(1.5);
    system("cls");
}