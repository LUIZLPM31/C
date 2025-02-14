#include <stdio.h>

int main(){

    int i = 0;

    while(i <= 50){
        if(i % 2 != 0)
        {
            printf("O numero %d é inpar!!\n", i);
        }
        i++;
    }

}