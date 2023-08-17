#include <stdio.h>

char frase[20] = "uma frase";

int main() {
    int i = 0;
    while (frase[i] != '\0') {
        printf("%c", frase[i]);
        i++;
    }
    
    return 0;
}
