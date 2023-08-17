#include <stdio.h>

char f1[10];
char f2[10];

int main() {
    printf("Digite a primeira string: ");
    scanf("%s", f1);

    printf("Digite a segunda string: ");
    scanf("%s", f2);
    
    int i = 0;
    while (f1[i] != '\0' && f2[i] != '\0' && f1[i] == f2[i]) {
        i++;
    }

    if (f1[i] == '\0' && f2[i] == '\0') {
        printf("São iguais\n");
    } else {
        printf("São diferentes!!\n");
    }
    
    return 0;
}
