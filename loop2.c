#include <stdio.h>

    int main(){

        int numero;

        do
        {
            printf("Digite um numero\n");
            scanf("%d", &numero);
            if (numero % 2 == 0)
            {
                printf("%d é par!\n", numero);
            } else {
                printf("%d é inpar!\n", numero);
            }
            printf("Saindo do programa!!!!\n");

        } while (numero % 2 != 0);
        




        return 0;
    }
