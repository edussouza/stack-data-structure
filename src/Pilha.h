/*	Name: Pilha.h 2.0		Author: Eduardo Cruz de Souza	Date: 29/04/22 10:26	Description: Implementation of the Stack data structure*/#ifndef STACK_H_INCLUDED#define STACK_H_INCLUDED#include <stdio.h>#include <stdlib.h>#include <stdbool.h> // Using instead of typedef enum {FALSE, TRUE} boolean;#define Max 10 #define sinal -1#define ghost -2typedef struct {	int topo;	unsigned char Vetor[Max];	} Pilha;Pilha createStack();bool emptyStack(Pilha );bool fullStack(Pilha );int getSize(Pilha );Pilha pushStack(Pilha , unsigned char );Pilha popStack(Pilha );void showStack(Pilha );unsigned char accessTop(Pilha );#endif