#include <stdio.h> 

int main (){
//Movimentações Requisitadas.
//Definem as casas que cada peca precisa mover
int movimentoBispo = 5;
int movimentoTorre = 5;
int movimentoRainha = 8;


// faz o loop for  utilizando // CONDICAO ? SE VERDADEIRO ; INCREMENTO
// Imprime a //                  int i ate chegar a 5 (o qunato o bispo precisa mover) ; incrementa 1 ++ por loop.
//                                                   
printf("***Movimentacao do BISPO (Diagonal - Superior e Direita)***\n");
for(int i = 0; i <= movimentoBispo; i++)
{   
    printf("Casa %d: ", i);
    printf("Cima e Direita \n"); // simula a diagonal (cima direita).
}
printf("\n");


//faz loop usando  a estrutura while 
// faz um loop enquanto (while) acrescentando 1++ todo movimento ate chegar ao numero da movimentacao requisitada// 
printf("***Movimentacao do TORRE (Horizontal - Direita)***\n");
int ContarTorre = 1;
while (ContarTorre <= movimentoTorre)
{
    printf ("Casa %d: ", ContarTorre);
    printf ("Direita\n");
    ContarTorre++;  //Incrementa o contador para avançar para a próxima casa
} 

printf("\n");

// Faz o loop usando o do-while ( faça enquanto)
// inclue um contadordemcasas para a rainha
// executa(do) um loopde ++1 enquanto(enquanto) a contagem de casas chegam a quantidade requisitada de movimentos para a rainha (8)
// enquanto a contagem for true imprime a int ContarRainha e o MovimentoRainha
// e tambem imprime para onde ela esta movimentando
printf("***Movimentacao da Rainha (Esquerda)***\n");

int ContarRainha = 1;

do
{
    printf("Casa %d: ", ContarRainha);
    printf("Esquerda\n");
    ContarRainha++;   
} while (ContarRainha <= movimentoRainha);

printf("\n"); // pula linha



return 0; //fim de programa
}