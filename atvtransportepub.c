#include <stdio.h>
int main (){
    int idade;
    printf("Digite a sua idade para confirmar o direito ao transporte público gratuito:\n");
    scanf("%i", &idade);
    if (idade >= 60){
        printf("Gratuito\n");
    }
    else {
        printf("Pagante\n");
    }
return 0;
}
