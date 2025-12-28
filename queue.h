#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef struct Node {
player player1 ; 
  struct Node* next;
} Node;
typedef struct Queue {
    Node* front;
    Node* rear;
    int size;
} Queue;
Queue* CreateQueue();
bool IsEmpty(Queue* q);
int GetSize(Queue* q);
void Enqueue(Queue* q, player player1);
int Dequeue(Queue* q);
int Peek(Queue* q);
void Display(Queue* q);
void DestroyQueue(Queue* q);
#endif
