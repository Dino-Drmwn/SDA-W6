#include <stdio.h>
#include "queue.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    Queue Q;
    CreateQueue(&Q);
    int desimal;

    printf("Masukkan bilangan desimal: ");
    scanf("%d", &desimal);

    if (desimal == 0) {  // Tangani input 0
        printf("Hasil biner: 0\n");
        return 0;
    }

    ConvertToBinary(&Q, desimal);
    PrintQueue(Q);

    return 0;
}

