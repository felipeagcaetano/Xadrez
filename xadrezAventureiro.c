#include <stdio.h>

int main(){
int bispo = 0, rainha = 0, cavalo = 0, movimentoCompleto = 1;
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

//Mover cavalo cima, cima, direita

for (movimentoCompleto; movimentoCompleto > 0; movimentoCompleto--)
{
    while (cavalo < 2)
        
    {
        cavalo++;
        printf("Cima ");
    }
    printf("Direita ");
}


    return 0;
}