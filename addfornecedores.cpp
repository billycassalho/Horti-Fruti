#include "../include/funcoesgerais.h"


using namespace std;


void AddFornecedores() {
    system("cls");
    string Saida, ID, Nome, Empresa, Contato, Descricao, Op;
    int IDA;

    cout << "Nome: ";
    cin >> Nome;

    system("cls");

    cout << "Empresa: ";
    cin >> Empresa;

    system("cls");

    cout << "Contato: ";
    cin >> Contato;

    system("cls");

    cout << "Descricao: ";
    cin >> Descricao;

    system("cls");

    cout << "______________________________" << endl;
    cout << "Nome: " << Nome << endl;
    cout << "Empresa: " << Empresa << endl;
    cout << "Contato: " << Contato << endl;
    cout << "Descricao: " << Descricao << endl;
    cout << "______________________________" << endl;
    cout << "Voce Deseja realmente salvar este fornecedor?\nS/N: ";
    cin >> Op;
    if (Op == "s" || Op == "S") {
        ifstream Ler(ArquivosFornecedores);
        while (getline(Ler, Saida)) {
            stringstream SaidaLeitura(Saida);
            getline(SaidaLeitura, ID, ',');
            cout << ID << endl;
            IDA = stoi(ID);
        }
        fstream Fornecedor(ArquivosFornecedores, ios::app);

        if (Fornecedor.is_open()) {
            IDA++;
            Fornecedor << "\n" << IDA << "," << Nome << "," << Empresa << "," << Contato << "," << Descricao;
        }
        else {
            cout << "Erro";
        }
        system("cls");
        cout << "O arquivou foi salvo com sucesso, aguarde...";
        sleep(1.5);
        system("cls");
        cout << "Voltando para o menu..";
        sleep(1);
        system("cls");
    }
    else {
        system("cls");
        cout << "Voltando para o menu..";
        sleep(1.5);
        system("cls");
    }
}