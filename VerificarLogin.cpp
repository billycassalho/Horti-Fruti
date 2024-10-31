#include "../../include/funcoesgerais.h"

string VerificarLogin(string ULogin, string USenha) {
    string ID, Login, Senha, Cargo, Saida;
    // Esta Lendo o arquivo Login.csv
    ifstream LeiorLogin(ArquivosLogins);
    // Esta passando linha por linha do arquivo
    while (getline(LeiorLogin, Saida)) {
        stringstream Loginsaida(Saida);
        // Esta salvando os item da linha que esta lendo dentro de suas variaveis representante 
        getline(Loginsaida, ID, ',');
        getline(Loginsaida, Login, ',');
        getline(Loginsaida, Senha, ',');
        getline(Loginsaida, Cargo, ',');
        // Esta verificando se o login e senha que foi pego pelo usuario esta batendo com o banco de dados
        if (ULogin == Login && USenha == Senha) {

            return Cargo;
        }
    }
}