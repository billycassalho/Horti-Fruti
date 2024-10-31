cmake_minimum_required(VERSION 3.29)
project(Hortfruit)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(Hortfruit
    include/funcoesgerais.h
    main/main.cpp
    Menus/Admin.cpp
        src/Fornecedores/addfornecedores.cpp
        src/Estoque/AddItemEstoque.cpp
        src/Login/AddLogin.cpp
        src/Estoque/LerEstoque.cpp
        src/Fornecedores/LerFornecedores.cpp
        src/Login/LerLogins.cpp
        src/Login/VerificarLogin.cpp
        src/Menu/VerificarMenu.cpp
        src/Pesagem/Pesagem.cpp
        Menus/Pesagem.cpp
        Menus/Estoque.cpp
        src/Estoque/AvisosEstoque.cpp
)
