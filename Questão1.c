#include <stdio.h>

int main() {
    int valores[10];
    int elementos = 10;

    
    printf ("insira:");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
    }

    for (int linha = 1; linha <= 10; linha++) {
        int novoArray[9];
        
        for (int i = 1; i < elementos; i++) {
            novoArray[i - 1] = valores[i];
        }
        
        for (int i = 0; i < elementos - 1; i++) {
            novoArray[i] = novoArray[i] + novoArray[i + 1];
            printf("%d", novoArray[i]);
            if (i < elementos - 2) {
                printf(" ");
            }
        }
        printf("\n");
        
        elementos--;
        for (int i = 0; i < elementos; i++) {
            valores[i] = novoArray[i];
        }
    }

    return 0;
}
