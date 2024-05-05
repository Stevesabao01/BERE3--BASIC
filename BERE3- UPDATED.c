//Duvida do dia: se pode usar varios structs, nao ficaria mto redundante como fiz abaixo?, Teria como colocar varios typedef dentro de um apenas struct Main?

//Inclusao de Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//struct que armazena dados do Sistema
typedef struct {
     char* titulo;
     char* opcoes[10];
     int numOpcoes;
     struct Menu* submenu[10];
     int numSubmenu;
} MenuPrincipal;

typedef struct {
    ItemMenu* Menu;
    int Opcaoselecionada;
} ItemMenu;

typedef struct{
    int id;
    char descricao[100];
    float estoque;
}SUBMENU;

//struct com dados do menu principal,conforme a base foi criada acima
Menu_Principal = {
    .titulo = "BEM-VINDA BERE",
    .opcoes = {"Limpeza", "Padaria", "Alimentos" , "Pagamento" , "Sair"},
    .numOpcoes = 5,
    .submenu = {&Submenu_Limpeza, &Submenu_Alimentos, &Submenu_Padaria, &Submenu_Pagamento},
    .numSubmenu = 4
}; MenuPrincipal;

//struct do primeiro submenu
Submenu_Limpeza = {
    .titulo = "Submenu Limpeza",
    .opcoes = {"Detergente R$1.99", "Sabao em Po(1kg) R$8.99", "Esponja - SEM ESTOQUE", "Amaciante(1Lt) R$15.00", "Bucha de Pia(kit c/ 3) R$4.99", "Desinfetante(1Lt) R$7.99", "Sabao em Barra R$1.00", "Voltar ao Menu Principal"},
    .numOpcoes = 8,
    .submenu = {&Submenu_Limpeza},
    .numSubmenu = 3
}; SUBMENU1;

//segundo submenu produtos
Submenu_Alimentos = {
    .titulo = "Submenu Alimentos",
    .opcoes = {"Cafe R$19.99", "Leite(cx) R$5.90", "Arroz(1kg) R$4.50", "Feijao Preto(1kg) R$8.00", "Acucar R$5.00", "Sal(1kg) R$2.00", "Farinha de Trigo(1kg) R$5.00", "Voltar ao Menu Principal"},
    .numOpcoes = 8,
    .submenu = {&Submenu_Alimentos},
    .numSubmenu = 2
}; SUBMENU2;

//terceiro submenu de produtos
Submenu_Padaria = {
    .titulo = "Submenu Padaria",
    .opcoes = {"Pao de forma R$9.50", "Pao Integral - SEM ESTOQUE", "Pao Frances R$1.90", "Sonho R$8.50", "Biscoito R$12.50", "Pao doce R$2.50", "Salgado R$17.50", "Voltar ao Menu Principal"},
    .numOpcoes = 8,
    .submenu = {&Submenu_Padaria},
    .numSubmenu = 1
}; SUBMENU3;

//submenu principal do Pagamento
Submenu_Pagamento = {
    .titulo = "Pagamento de Alimentos",
    .opcoes = {"Cartao de Credito", "Dinheiro", "Voltar ao Menu Principal"},
    .numOpcoes = 3,
    .submenu = {&Submenu_Pagamento},
    .numSubmenu = 0
}; PAGAMENTOS;


//funcao para mostrar o menu principal e decisoes
void(MenuPrincipal), {
printf("\n==== BEM-VINDA BERE ====\n", Menu.titulo),
printf("\n ID |      Produtos        |  Precos   \n",  Menu.opcoes    ),
printf("\n ========================================================\n"),
printf("\n 1.    Limpeza                         \n", .SUBMENU1.titulo),
printf("\n ========================================================\n"),
printf("\n 2.   Alimentos                        \n", .SUBMENU2.titulo),
printf("\n ========================================================\n"),
printf("\n 3.    Padaria                         \n", .SUBMENU3.titulo),
printf("\n ========================================================\n"),
printf("\n 4.   Pagamento                        \n",  .SUBMENU.opcoes),
printf("\n ========================================================\n"),
printf("\n 5.     Sair                           \n",  .SUBMENU.opcoes),
};

//funcao do submenu1 
void(Submenu), {
printf("\n ======== Limpeza ========\n", SUBMENU1.titulo),
printf("\n 1. | Detergente          |   R$1.99       \n",                ),
printf("\n 2.   Sabao em Po(1kg)        R$8.99       \n",                ),
printf("\n 3.   Esponja                SEM ESTOQUE   \n",                ),
printf("\n 4.   Amaciante(1Lt)          R$15.00      \n",                ),
printf("\n 5.   Bucha de Pia(kit 3)     R$4.99       \n",                ),
printf("\n 6.   Desinfetante(1Lt)       R$7.99       \n",                ),
printf("\n 7.   Sabao em Barra          R$1.00       \n",                ),
printf("\n     Voltar ao Menu Principal \n")
}

//submenu2
void(Submenu), {
printf("\n ======== Alimento ========\n", SUBMENU1.titulo),
printf("\n 1. | Cafe                 |  R$19.99       \n",               ),
printf("\n 2.   Leite(cx)               R$5.90        \n",               ),
printf("\n 3.   Arroz(1kg)              R$4.50        \n",               ),
printf("\n 4.   Feijao Preto(1kg)       R$8.00        \n",               ),
printf("\n 5.   Acucar                  R$5.00        \n",               ),
printf("\n 6.   Sal(1kg)                R$2.00        \n",               ),
printf("\n 7.   Farinha de Trigo(1kg)   R$5.00        \n",               ),
printf("\n 8.   Voltar ao Menu Principal \n",                            ),
}






































};

