#include <stdio.h>

char frase[20];

int main() {
    printf("Digite o valor: ");
    scanf("%s", frase);
    
    int tamanho = 0;
    while (frase[tamanho] != '\0') {
        tamanho++;
    }
    
    printf("O tamanho da cadeia de caracteres é: %d\n", tamanho);
    
    return 0;
}
#include <stdio.h>

char frase[20];

int main() {
    printf("Digite o valor: ");
    scanf("%s", frase);
    
    int tamanho = 0;
    while (frase[tamanho] != '\0') {
        tamanho++;
    }
    
    printf("O tamanho da cadeia de caracteres é: %d\n", tamanho);
    
    return 0;
}
Usando o while para correr em cada caractere da string frase até encontrarmos o caractere nulo ''\0'', 
  que indica o final da string. Assim vai incrementando a cada vez que roda , e conta o numero de cada string.
