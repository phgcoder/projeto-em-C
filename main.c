#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void espaco(void){
printf("===================================================\n");
return;
}

void loading(void){
int i;

    printf("progresso: [");
    for(i = 0; i <= 20; i++){
        Sleep(100);
        printf("#");
    }

    printf("] sistema inicializado...\n");
    return;
}

struct ferramenta{
char nome[50];
int codigo;
float valor;
};

int main()
{
    int opcao = 0;
    struct ferramenta ferramenta;

        printf("iniciando o sistema de ferramentas ...\n");
        printf("\n");
        Sleep(2000);
        printf("[*] conectando o banco de dados do inventario\n");
        Sleep(1000);
        printf("[*] carregando modulo de leitura de QR code\n");
        Sleep(1000);
        printf("[*] verificando status e validade das garantias\n");
        Sleep(1000);
        printf("[*] sincronizando dados...");
        Sleep(1000);

        system("cls");

        loading();
        Sleep(1500);

    do {
        system("cls");

        espaco();
        printf("           sistema ferralog - INVENTARIO\n");
        espaco();

        printf("bem-vindo ao controle logistico de ferramentas\n");

        printf("selecione uma opcao no menu abaixo\n");
        printf("(1) cadastrar nova ferramenta\n");
        printf("(2) consultar ferramenta no setor\n");
        printf("(3) verificar status da ferramenta\n");
        printf("(4) sair do sistema\n");
        printf("(5) cadastro em lote\n");
        espaco();

        printf("digite a opcao desejada: ");
        scanf("%d", &opcao);
        while(getchar() != '\n');

        switch (opcao){

    case 1:
        system("cls");
        char continuar;
        char nome[50];
        int codigo;
        float valor;

        while (1)
        {
            espaco();
            printf("         cadastro de ferramentas\n");
            espaco();

            printf("nome da ferramenta: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0';

            printf("codigo QR: ");
            scanf("%d", &codigo);
            while(getchar() != '\n');

            while(codigo <= 0){
                printf("codigo invalido, digite novamente: ");
                scanf("%d", &codigo);
                while(getchar() != '\n');
            }

            printf("valor: R$");
            scanf("%f", &valor);
            while(getchar() != '\n');

            while(valor <= 0){
                printf("valor invalido, digite novamente: R$");
                scanf("%f", &valor);
                while(getchar() != '\n');
            }

            system("cls");
            printf("<< FERRAMENTA CADASTRADA >>\n");
            printf("nome da ferramenta: %s\n", nome);
            printf("codigo QR da ferramenta: %d\n", codigo);
            printf("valor da ferramenta: %.2f\n", valor);
            printf("\n");

            //continuar
            printf("deseja cadastrar mais alguma ferramenta? [s/n] ");
            scanf(" %c", &continuar);
            while(getchar() != '\n');
            while (continuar != 's' && continuar != 'n'){
                printf("opcao invalida, digite novamente. [s/n] ");
                scanf(" %c", &continuar);
                while(getchar() != '\n');
            }

            if (continuar == 's'){
                system("cls");
                continue;
            } else if (continuar == 'n'){
                system("cls");
                break;
            }
        }
        break;

    case 2:
        printf("consultar ferramenta no setor em desenvolvimento...\n");
        Sleep(1000);
        system("cls");
        break;

    case 3:
        printf("status da ferramenta em desenvolvimento...\n");
        Sleep(1000);
        system("cls");
        break;

    case 4:
        printf("desconectando do banco de dados...\n");
        Sleep(2000);
        printf("<< VOLTE SEMPRE >>\n");
        break;

    case 5:
        system("cls");
        int quantidade, i;

        printf("quantas ferramentas deseja cadastrar? ");
        scanf("%d", &quantidade);

        if(quantidade <= 0){
            printf("quantidade invalida\n");
        }
        else{
            for(i = 1; i <= quantidade; i++){
                printf("digite o valor da ferramenta: ");
                scanf("%f", &ferramenta.valor);
            }
        printf("%.2f\n", ferramenta.valor);
        }
        break;

    default:
        printf("valor invalido\n");
        system("pause");
        system("cls");
        }
    } while (opcao != 4);
    return 0;
}
