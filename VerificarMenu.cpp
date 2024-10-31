#include "../../include/funcoesgerais.h"

void VerificarMenus(string cargo) {
    if (cargo == "Admin" || cargo == "admin") {
        MenuAdmin();
    }else if (cargo == "Estoque" || cargo == "estoque") {
        MenuEstoque();
    }
}