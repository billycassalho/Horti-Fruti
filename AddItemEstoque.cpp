#include "../include/funcoesgerais.h"

void AddItemEstoque() {
    system("clt");
    string Item, Quantidade, Validade, ValorKG, Alerta, Op, Saida, ID;
    int AID;
    // Perguntando as caracteriscas do produto
    system("cls");

    cout << "Produto: ";
    cin >> Item;

    system("cls");

    cout << "Quantidade: ";
    cin >> Quantidade;

    system("cls");

    cout << "Validade: ";
    cin >> Validade;

    system("cls");
    cout << "Valor por KG: ";
    cin >> ValorKG;

    system("cls");

    cout << "Limite para aviso: ";
    cin >> Alerta;

    system("cls");

    // Pergunta se realmente deseja a cadastradar
    cout << "______________________________" << endl;
    cout << "Item: " << Item << endl;
    cout << "Quantidade: " << Quantidade << endl;
    cout << "Valor por KG: R$:" << ValorKG << endl;
    cout << "Validade: " << Validade << endl;
    cout << "Limite de alerta: " << Alerta << endl;
    cout << "______________________________" << endl;
    cout << "Voce Deseja realmente salvar este produto?\nS/N: ";
    cin >> Op;

    if (Op == "s" || Op == "S") {

        ifstream LeitorEstoque(ArquivosEstoque);

        while (getline(LeitorEstoque, Saida)) { //Esta percorrendo por todos os ID para pegar o ultimo

            stringstream SaidaLeitor(Saida);

            getline(SaidaLeitor, ID, ',');

            AID = stoi(ID); //Quando chega no ultimo ID ele corve de String para INT
        }
        //abre o arquivo em modo de edição
        fstream Estoque(ArquivosEstoque, ios::app);

        if (Estoque.is_open()) {// Abre o arquivo e verifica se o arquivo esta pronto para editar se sim
            AID++;  //Adiciona +1 no ultimo ID pego

            //Esta jogando as informações para dentro do arquivo Estoque.csv

            Estoque << "\n" << AID << "," << Item << "," << Quantidade << "," << ValorKG << "," << Validade << "," << Alerta;
            Estoque.close();
            system("cls");
            cout << "Os itens estao sendo salvo, agurde...";
            sleep(1.5);
            system("cls");
            cout << "Voltando ao menu principal";
            sleep(1);
        }
        else {
            cout << "Deu Erro" << endl;
        }
    }
    else { //Caso for n ou N ele retornara para o menu
        system("cls");
        cout << "Voltando ao menu principal";
        sleep(1.5);
    }
}