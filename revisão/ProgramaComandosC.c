#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Declaração de variáveis
    int n = 10; //atribuindo valor para variável
    float n2 = 6.79; //float é uma variável que posssui casas decimais
    char letra = 'a'; //variável do tipo caracter
    char frase[10] = "Bom dia!"; //string
    double n3 = 1.23456; //variável real com precisão dupla

    int valor1, valor2, soma, sub, mult, div, numero, resto, dia, cont;
    float nota1, nota2, media, frequencia;

    //Usos do comando printf com diversas variáveis
    printf("Hello World!\n");
    printf("Exibindo o numero inteiro(integer) %d\n", n);
    printf("Exibindo o numero real(float) %f\n", n2);
    printf("Exibindo o caracter(char) %c\n", letra);
    printf("Exibindo uma string(char) %s\n", frase);
    printf("Exibindo o numero real de dupla precisao(double) %f\n", n3);
    printf("Valores: %d %f %c %s %f\n", n, n2, letra, frase, n3); //Exibindo várias variáveis num mesmo print

    /*
    //Utilização de scanf
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor1);
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor2);

    //Operadores aritméticos
    soma = valor1 + valor2;
    sub = valor1 - valor2;
    mult = valor1 * valor2;
    div = valor1 / valor2;

    printf("Valor da soma de %d + %d = %d\n", valor1, valor2, soma);
    printf("Valor da subtracao de %d - %d = %d\n", valor1, valor2, sub);
    printf("Valor da multiplicacao de %d * %d = %d\n", valor1, valor2, mult);
    printf("Valor da divisao de %d / %d = %d\n", valor1, valor2, div);
    

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    resto = numero % 2;

    printf("Resto da divisao %d \n", resto);

    //Condicional if...else
    if(resto == 0){
        printf("Numero par!\n");
    }
    else{
        printf("Numero impar!\n");
    }
    
    //Formatando variávies do tipo float
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Media  = %.2f\n", media);

    //If aninhado
    if(media >= 6){
        if(media < 7){
            printf("Fazer recuperacao!\n");
        }
        else if(media >= 7){
            printf("Aprovado!\n");
        }
    }
    else{
        printf("De recuperacao!\n");
    }

    //Condicinal switch..case
    printf("Digite um valor de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terca\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta\n");
        break;
    case 7:
        printf("Sabado\n");
        break;
    
    default:
        printf("Valor invalido!\n");
        break;
    }

    //Operador ternário: pode ser mais curto que usar if...else em algumas ocasições
    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    //Condição a testar? verdadeiro : falso
    numero > 0 ? printf("Positivo!\n") : printf("Negativo!\n");

   //Operadores lógicos && e ||
    printf("Digite a sua frequencia: ");
    scanf("%f", &frequencia); 
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Media  = %.2f\n", media);

    //If aninhado
    if(media >= 7  && frequencia >= 75){//operador lógico &&
        printf("Aprovado!\n");

    }
    else{
        if((media >= 6 && media < 7) && frequencia >= 75){
         printf("Fazer recuperacao!\n");
        }
        else if(media < 6 || frequencia < 75){
        printf("Reprovado!\n");
        }
    }
    
    //Estrutura de repetição for - 57:07
    for(cont = 1; cont <= 100; cont++){
        printf("%d - Boa tarde\n", cont);
    }
    */
   //Estrutura de repetição while
   cont = 1;
   while(cont <= 5){
        printf("%d - Linguagem C\n", cont);
        cont++;
   }

    system("Pause"); //somente para windows
    return 0;
}