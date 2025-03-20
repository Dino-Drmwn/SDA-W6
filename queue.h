#ifndef QUEUE_H
#define QUEUE_H

#define MAX 100

typedef struct{
	int data[MAX];
	int front;
	int rear;
} Queue;

void CreateQueue(Queue *Q);
int is_Empty(Queue Q);
int is_Full(Queue Q);
void EnQueue(Queue *Q, int X);
void DeQueue(Queue *Q, int *X);
void ConvertToBinary(Queue *Q, int desimal);
void PrintQueue(Queue Q);

#endif
