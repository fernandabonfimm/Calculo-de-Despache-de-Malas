// Author: Fernanda Bonfim Santos - Ciência da Computação || 2Semestre //

#include <stdio.h>
#include <stdlib.h>

int main(){
        int malas;
        float peso, altura, largura, comprimento, total;
        
    printf("\n|--------------------------------------------------|");
    printf("\n|      Bem-Vindo á Area de Despache de Malas!      |");
    printf("\n|--------------------------------------------------|");

    printf("\nQuantas Malas pretende Despachar:\n");
    scanf("%d", &malas);

    if(malas > 1){
        printf("Não despachamos mais de uma Mala por vez!");

    }else{
        printf("\nInforme o Peso da Mala: \n");
        scanf("%f", &peso);

        printf("\nInforme a Altura do Mala: \n");
        scanf("%f", &altura);

        printf("\nInforme a Largura do Mala: \n");
        scanf("%f", &largura);

        printf("\nInforme o Comprimento do Mala: \n");
        scanf("%f", &comprimento);
        
            total = altura + largura + comprimento;
            if((total > 158) || (peso > 15)){
                printf("\nSua Mala não pode Embarcar, tente novamente!\n");
                printf("\n O'que pode ter ocorrido: \n");
                printf("\n1- O peso da Mala está se sobressaindo ao peso ideal e máximo de até 15K.\n");
                printf("\n2- O Tamanho de sua Mala é maior que o Ideal e Máximo de 158CM.\n");
                printf("\n\n O'que Fazer nessa situação? \n");
                printf("\n1-Retire algumas coisas não essênciais de sua Mala, para que não ultrapasse o peso máximo de 15K.\n");
                printf("\n2- Utilize uma Mala menor que o tamanho ideal de 158CM.\n");
                printf("\n\nBoa sorte, e Volte Sempre!\n");
            }else{
                printf("Tudo Certo com sua Mala, Boa Viagem!\n");
            }
        
        }
        return 0;
}































    return 0;
}