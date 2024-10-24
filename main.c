#include <stdio.h>

int main(void) {
    int righe;
    printf("inserisci il numero di righe:\n");
    scanf("%d", &righe);
    for (int i = righe; i > 0; i--) {
        for (int spazi = 0; spazi < righe - i; spazi++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
