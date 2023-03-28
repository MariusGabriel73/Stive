#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Node{
	char val;
	struct Node *next;
}Node;

typedef struct Queue{
Node *front ,* rear ;
}Queue;

typedef char Data;
Queue* createQueue();
void enQueue(Queue*q, char v);
char deQueue(Queue*q);
int isQmpty(Queue*q);
void deleteQueue(Queue*q);
