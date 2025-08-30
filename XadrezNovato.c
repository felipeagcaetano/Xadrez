#include <stdio.h>

int main(){
int bispo = 0, rainha = 0;
    //Mover torre 5 casas para a direita

for (int torre = 0; torre < 5; torre++)
{
    printf("Direita \n");
}

//Mover o bispo 5 casas na diagonal para cima e a direita

while (bispo < 5)
{
    printf("Cima direita \n");
    bispo++;
}

//Mover Rainha 8 casas para a esquerda

do
{
    printf("Esquerda \n");
    rainha++;

} while (rainha < 8);


    return 0;
