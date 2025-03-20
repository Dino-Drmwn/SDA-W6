#include <stdio.h>
#include "queue.h"

void CreateQueue(Queue *Q){
	Q->front = -1;
	Q->rear = -1;
}

int is_Empty(Queue Q){
	return (Q.front == -1);
}

int is_Full(Queue Q){
	return (Q.rear == MAX -1);
}

void EnQueue(Queue *Q, int X){
	if (is_Full(*Q)){
		printf("Queue penuh!\n");
		return;
	}
	if (is_Empty(*Q)){
		Q->front = 0;
	}
	Q->rear++;
	Q->data[Q->rear] = X;
}

void DeQueue(Queue *Q, int *X){
	if (is_Empty(*Q)){
		printf("Queue kosong!\n");
		return;
	}
	*X = Q->data[Q->front];
	if (Q->front == Q->rear){
		Q->front = -1;
		Q->rear = -1;
	}else{
		Q->front++;
	}
}

void ConvertToBinary(Queue *Q, int desimal){
	while (desimal > 0){
		EnQueue(Q, desimal % 2);
		desimal /= 2;
	}
}

void PrintQueue(Queue Q){
    if (is_Empty(Q)){
        printf("Queue kosong!\n");
        return;
    }
    
    printf("Hasil biner: ");
    
    int i;  // Deklarasi variabel sebelum loop (sesuai dengan standar C90)
    for (i = Q.rear; i >= Q.front; i--){  // Ubah i++ menjadi i--
        printf("%d", Q.data[i]);
    }
    
    printf("\n");
}






















