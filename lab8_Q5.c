#include <stdio.h>

int main() {
    int i,j;
    char a = 'A';
    for(i=1;i < 5; i++){
        for (j =0; j < i; j++){
            printf("%c", a);
            a++;
        }
        printf("\n");
    }

    return 0;
}