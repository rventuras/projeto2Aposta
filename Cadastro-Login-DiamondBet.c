#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int opcaoCadastro = 2;
    int opcaoLogin = 1;
    int opcao;
    char nome[50], nomeDeUsuario[50], sobrenome[50], senha[50], email[50], cpf[50], telefone[50], endereco[50], 
    cidade[50], estado[50], cep[50], pais[50], data[50], sexo[50];


    printf("Bem-vindo a DiamondBet, o melhor site de apostas do Brasil!\n");
    printf("Ja possui cadastro em nosso site? \n");
    printf("1 - Sim \n");
    printf("2 - Nao \n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    if(opcao == opcaoLogin){
        printf("Digite seu nome de usuario: \n");
        scanf("%s", &nome);
        fflush(stdin);
        printf("Digite sua senha: \n");
        scanf("%s", &senha);
        fflush(stdin);
        printf("Login realizado com sucesso!\n");
        printf("Bem-vindo, %s!\n", nome);

    } else if (opcao == opcaoCadastro){

        printf("VAMOS COMECAR PELOS SEUS DADOS PESSOAIS\n");

        printf("Qual o seu nome? \n");
        scanf("%s", &nome);
        fflush(stdin);

        printf("E seu sobremone? \n");
        scanf("%s", &nome);
        fflush(stdin);
        
        printf("Digite sua data de nascimento: \n");
        scanf("%s", &data);
        fflush(stdin);

        printf("Digite seu sexo: \n");
        scanf("%s", &sexo);
        fflush(stdin);

        printf("Agora digite um nome de usuario: \n");
        scanf("%s", &nomeDeUsuario);
        fflush(stdin);
        
        printf("Digite seu melhor email: \n");
        scanf("%s", &email);
        fflush(stdin);

        printf("Por fim crie uma senha: \n");
        scanf("%s", &senha);
        fflush(stdin);

        printf("SEGUIREMOS AGORA COM SEUS DADOS CADASTRAIS!\n");

        printf("Digite seu CPF: \n");
        scanf("%s", &cpf);
        fflush(stdin);

        printf("Digite seu telefone com o DDD: \n");
        scanf("%s", &telefone);
        fflush(stdin);
        
        printf("Digite seu pais: \n");
        scanf("%s", &pais);
        fflush(stdin);
        
        printf("Digite seu estado: \n");
        scanf("%s", &estado);
        fflush(stdin);
        
        printf("Digite sua cidade: \n");
        scanf("%s", &cidade);
        fflush(stdin);

        printf("Digite seu endereco: \n");
        scanf("%s", &endereco);
        fflush(stdin);

        printf("Digite seu CEP: \n");
        scanf("%s", &cep);
        fflush(stdin);

        printf("Cadastro realizado com sucesso!\n");
    } else {
        printf("Opcao invalida!\n");
    }


       
} 












/*aposta[50],
     valor[50], dataaposta[50], horario[50], time[50], time2[50], time3[50], time4[50],
      time5[50], time6[50], time7[50], time8[50], time9[50], time10[50], time11[50],
       time12[50], time13[50], time14[50], time15[50], time16[50], time17[50], time18[50]*/