#ifndef FUNCOESGERAIS_H
#define FUNCOESGERAIS_H

//Bibliotecas usadas
#include <iostream>
#include <fstream>  // Usado para gerenciar arquivos
#include <sstream>  // Usado para recortar informações para variaveis
#include <unistd.h> // Usado para fazer um sleep no programa
using namespace std;
//Todas as funções do programa

//Logins
void LerLogins();
void AddLogin();
void VerificarMenus(string cargo);
string VerificarLogin(string ULogin, string USenha);

//Estoque
void LerEstoque();
void AddItemEstoque();
void AvisosEstoque();

//Fornecedores
void LerFornecedores();
void AddFornecedores();

//Menus
void MenuAdmin();
void MenuEstoque();

//SubMenu
void SubmenuLogin();
void SubMenuFornecedores();

//Variaveis dos arquivos que o programa vai ler
const string ArquivosEstoque = "../DB/Estoque.csv";
const string ArquivosFornecedores = "../DB/Fornecedores.csv";
const string ArquivosLogins = "../DB/Logins.csv";

#endif