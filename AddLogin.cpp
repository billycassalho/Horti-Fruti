#include "funcoesgerais.h"

void AddLogin() {
    system("cls");
    string Login, Senha, Cargo, ID, Saida, Op;
    int AID;

    system("cls");

    cout << "Nome: ";
    cin >> Login;

    system("cls");

    cout << "Senha: ";
    cin >> Senha;

    system("cls");

    cout << "Cargo: ";
    cin >> Cargo;
    //Limpa o terminal depois mostra e pergunta se o cliente quer realmente registrar, caso não volta para o menu principal, se sim ele registra
    system("cls");
    cout << "______________________________" << endl;
    cout << "Login: " << Login << endl;
    cout << "Senha: " << Senha << endl;
    cout << "Cargo: " << Cargo << endl;
    cout << "______________________________" << endl;
    cout << "Deseja cadastrar:\nS/N: ";
    cin >> Op;
    //Para esta pegando o ID certo foi feito a leitura do ultimo ID do arquivo Login.csv
    if (Op == "S" || Op == "s") {
        ifstream LeitorLogin(ArquivosLogins);
        while (getline(LeitorLogin, Saida)) {
            stringstream Loginsaida(Saida);

            getline(Loginsaida, ID, ',');
            AID = stoi(ID);
        }
        //Apos a leitura do ID ele começa a gravar o novo login dentro do arquivo
        fstream ArqLogin(ArquivosLogins, ios::app);
        if (ArqLogin.is_open()) {
            //Aqui ele esta fazendo a soma do ultimo ID main 1
            AID++;
            ArqLogin << "\n" << AID << "," << Login << "," << Senha << "," << Cargo;
            //Apos editar o arquivo ele fecha aqui
            ArqLogin.close();
            //Logo após ele terminar de gravar ele mostra esta mensagem e faz uma pause de 3 segundo e volta ao menu pricipal
            system("cls");
            cout << "O arquivou foi salvo com sucesso, aguarde...";
            sleep(1.5);
            system("cls");
            cout << "Voltando para o menu..";
            sleep(1);
            system("cls");
        } else {
            cout << "Erro";
        }
    }
}
