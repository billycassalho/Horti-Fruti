#include "funcoesgerais.h"

void AvisosEstoque() {
    string ID, Item, Quantidade, Valor, Validade, Alerta, Saida, ValorKG, Op;
    double SAlerta, SQuantidade;
    system("cls");
    fstream Estoque(ArquivosEstoque);
    cout << "______________________________" << endl;

    while (getline(Estoque, Saida)) {
        stringstream arq(Saida);
        getline(arq, ID, ',');
        getline(arq, Item, ',');
        getline(arq, Quantidade, ',');
        getline(arq, ValorKG, ',');
        getline(arq, Validade, ',');
        getline(arq, Alerta, ',');

        SAlerta = stod(Alerta);
        SQuantidade = stod(Quantidade);

        if (SQuantidade <= SAlerta) {
            cout << "Esta em alerta" << endl;
            cout << "______________________________" << endl;
            cout << "ID: " << ID <<endl;
            cout << "Item: " << Item <<endl;
            cout << "Quantidade: " << Quantidade <<endl;
            cout << "Valor por KG: " << ValorKG <<endl;
            cout << "Validade: " << Validade <<endl;
            cout << "Alertas: " << Alerta <<endl;
            cout << "______________________________" << endl;
        }
    }
    Estoque.close();
    cout << "[S] Para Sair: ";
    cin >> Op;
    system("cls");
    cout << "voltando para o menu aguarde..";
    sleep(1.5);
}