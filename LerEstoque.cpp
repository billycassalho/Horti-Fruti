#include "../../include/funcoesgerais.h"


using namespace std;

void LerEstoque() {
    system("cls");
    string ID, Item, Quantidade, Valor, Validade, Alerta, Saida, ValorKG, Op;
    // Abre o arquivo em modo de leitura
    ifstream Leitor(ArquivosEstoque, ios::app);
    cout << "______________________________" << endl;
    // Le a linha inteira do arquivo e jogo para variavel de saida
    while (getline(Leitor, Saida)) {
        stringstream ss(Saida);
        // Joga a saida dentro de suas veriaveis com o divisor de ","
        getline(ss, ID, ',');
        getline(ss, Item, ',');
        getline(ss, Quantidade, ',');
        getline(ss, ValorKG, ',');
        getline(ss, Validade, ',');
        getline(ss, Alerta, ',');
        // Mostra as informações de cada item registrado

        cout << "ID: " << ID << endl;
        cout << "Item: " << Item << endl;
        cout << "Quantidade: " << Quantidade << endl;
        cout << "Valor por KG: R$:" << ValorKG << endl;
        cout << "Validade: " << Validade << endl;
        cout << "Limite de alerta: " << Alerta << endl;
        cout << "______________________________" << endl;
    }
    Leitor.close();
    cout << "[S] Para Sair: ";
    cin >> Op;
    system("cls");
    cout << "voltando para o menu aguarde..";
    sleep(1.5);
}



