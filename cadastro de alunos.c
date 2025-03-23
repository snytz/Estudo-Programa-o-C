#include <stdio.h>
#include <string.h>

int main() {

    char nome[50];
    int matricula, idade;
    float altura;
    

        printf("Olá bem vindo a nossa instituição, para realizar seu cadastro por favor, preencha o formulário!\n");
        printf("Digite seu nome completo: ");
        fgets(nome, 50, stdin);
        nome[strcspn(nome, "\n")] = 0;
        printf("Digite sua Matricula: ");
        scanf("%d", &matricula);
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Digite sua altura: ");
        scanf("%f", &altura);

        printf("Muito bem seu cadastro foi realizado em nosso portal!\nSeu nome é %s, matricula: %d, possui %d anos e mede %.2f de altura.", nome, matricula, idade, altura);


        return 0;
}
