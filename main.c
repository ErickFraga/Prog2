#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 5

void Fa(int n);
void Fb(int n);
void Fc(int n);
void Fd(int n);
void Fe(int n);

void Diagonal();
void Secundaria();
void Triangular_Superior();
void Triangular_Inferior();

int main()
{
    int n, op, opF, opM, dnv = 1;

    do{
       do{
            printf("\n_____-_-_-_MENU PRINCIPAL_-_-_-_____");
            printf("\n\t 1 - Matrizes");
            printf("\n\t 2 - Funcoes");
            printf("\n\t 3 - sair");
            printf("\n\t Sua Opcao : ");
            scanf("%i", &op);
        }while((op<1)||(op>3));
        switch (op) {
            case 1 : //Materia - Matrisez
                do{
                    system("cls");
                    printf("\n_____-_-_-_MENU MATRIZES_-_-_-_____");
                    printf("\n\t 1 - Matriz Diagonal");
                    printf("\n\t 2 - Matriz Secundaria");
                    printf("\n\t 3 - Matriz Triangular Superior");
                    printf("\n\t 4 - Matriz Triangular Inferior");
                    printf("\n\t 5 - Voltar");
                    printf("\n\t 6 - Sair");
                    printf("\n\t Sua Opacao : ");
                    scanf("%i", &opM);
                }while((opM < 1) || (opM > 6));

                //int Matriz[TAM][TAM];

                switch (opM){
                    case 1 : //Digonal principal
                        Diagonal();
                    break;
                    case 2 : // Diagonal secundaria
                        Secundaria();
                    break;
                    case 3 : //Matriz triangular Superior
                        Triangular_Superior();
                    break;
                    case 4 : //Matriz triangular Inferior
                        Triangular_Inferior();
                    break;
                    case 5 : //Meunu Anterior
                        dnv = 1;
                    break;
                    case 6 : // Sair
                        dnv = 0;
                    break;
                }
            break;
            case 2 : // Materia - Funçoes matematicas
                do{
                    system("cls");
                    printf("\n_____-_-_-_MENU DE FUNCOES_-_-_-_____");
                    printf("\n\t 1 - Fa(n) = (3 ^ n) - (2 ^ n) ");
                    printf("\n\t 2 - Fb(n) = ((5 ^ n) -1) / (4 ^ n)");
                    printf("\n\t 3 - Fc(n) = (2 ^ n - 2) / ((2 ^ n) ^ 1/2)");
                    printf("\n\t 4 - Fd(n) = ((e ^ n) - e)/ (ln n)");
                    printf("\n\t 5 - Fe(n) = (((3 ^ n) - (2 ^ n)) ^ 1/3) / ((n ^ 3) + 1)");
                    printf("\n\t 6 - Voltar");
                    printf("\n\t 7 - Sair");
                    printf("\n\tSua Opcao : ");
                    scanf("%i", &opF);
                }while((opF < 1) || (opF > 7));
                printf("Indique um numero 'N': ");
                scanf("%i", &n);

                switch (opF) {
                    case 1 : // Ex 01_a = Fa(n)
                        Fa(n);
                    break;
                    case 2 : // Ex 01_b = Fb(n)
                        Fb(n);
                    break;
                    case 3 : // Ex 01_c = Fc(n)
                        Fc(n);
                    break;
                    case 4 : // Ex 01_e = Fd(n)
                        Fd(n);
                    break;
                    case 5 : // Ex 01_e = Fe(n)
                        Fe(n);
                    break;
                    case 6 : //Menu Anterior
                        dnv = 1;
                    break;
                    case 7 : //Sair
                        dnv = 0;
                    break;
                    }

            break;
            case 3 : //Sair
                dnv = 0;
            break;
        }
        system("pause");
        system("cls");
    }while(dnv);
        printf("Volte Sempre!");
    return 0;
}

void Fa(int n){
    int a = pow(3, n), b = pow(2, n);
    printf("\nFa(%i) = 3 ^ %i - 2 ^ %i", n, n, n);
    printf("\nFa(%i) = %i\n", n, (a - b));
}

void Fb(int n){
    int a = pow(5, n), b = pow(4, n);
    printf("\nFb(%i) = (5 ^ %i -1) / 4 ^ %i", n, n, n);
    printf("\nFb(%i) = %i\n", n, (a -  1) / b);
}

void Fc(int n){
    int a = pow(2, n), b = sqrt(pow(2, n));
    printf("\nFc(%i) = (2 ^ %i - 2) / (2 ^ %i) ^ 1/2", n, n, n);
    printf("\nFc(%i) = %i\n", n, (a - 2)/ b);
}

void Fd(int n){
    float e = 2.718;
    float a = pow(e, n), b = log(2);
    printf("\nFd(%i) = ((e ^ %i) - e)/ ln %i", n, n, n);
    printf("\nFd(%i) = %.2f\n", n, (a - e) / b);
}

void Fe(int n){
    float a = pow(3, n), b = pow(2, n), c = pow((a-b), 1/3), d = pow(n, 3);
    printf("\nFe(%i) = (((3 ^ %i) - (2 ^ %i)) ^ 1/3) / ((%i ^ 3) + 1)", n, n, n, n);
    printf("\nFe(%i) = %.2f\n", n, (c/d + 1));
}


void Diagonal(){
    int i, j;
    int Matriz[TAM][TAM];
    srand(time(NULL));
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j ++){
            if(i==j){
                Matriz[i][j] = ((rand() % 80) + 10);
            }else{
                Matriz[i][j] = 0;
            }
            printf("\t%i", Matriz[i][j]);
        }
        printf("\n");
    }
}

void Secundaria(){
    int i, j;
    int Matriz[TAM][TAM];
    srand(time(NULL));
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j ++){
            if(i + j == TAM - 1){
                Matriz[i][j] = ((rand() % 80) + 10);
            }else{
                Matriz[i][j] = 0;
            }
            printf("\t%i", Matriz[i][j]);
        }
        printf("\n");
    }
}

void Triangular_Superior(){
    int i, j;
    int Matriz[TAM][TAM];
    srand(time(NULL));
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j ++){
            if(i<=j){
                Matriz[i][j] = ((rand() % 80) + 10);
            }else{
                Matriz[i][j] = 0;
            }
            printf("\t%i", Matriz[i][j]);
        }
        printf("\n");
    }
}

void Triangular_Inferior(){
    int i, j;
    int Matriz[TAM][TAM];
    srand(time(NULL));
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j ++){
            if(i > j){
                Matriz[i][j] = ((rand() % 80) + 10);
            }else{
                Matriz[i][j] = 0;
            }
            printf("\t%i", Matriz[i][j]);
        }
        printf("\n");
    }
}
