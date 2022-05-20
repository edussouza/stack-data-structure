/*
	Name: Pilha.h 2.0	
	Author: Eduardo Cruz de Souza
	Date: 29/04/22 10:26
	Description: Implementation of the Stack data structure
*/


Pilha createStack(){
	Pilha A;
	A.topo = sinal;
	return A;
}

bool emptyStack(Pilha A){
	bool empty;
	if(A.topo == sinal) empty = true;
	else empty = false;
	return empty;
}

bool fullStack(Pilha A){
	bool full;
	if(A.topo != Max - 1) full = false;
	else full = true;
	return full;
}

int getSize(Pilha A){
	int size;
	size = A.topo + 1;
	return A.topo;	
}

Pilha pushStack(Pilha A, unsigned char x){
	int t;
	int m = Max - 1;
	if (A.topo != m){
	A.topo += 1;
	t = A.topo;
	A.Vetor[t] = x;
  }
	return A;	
}

Pilha popStack(Pilha A){
	if (A.topo != sinal){
	int t = A.topo;
	A.topo = t - 1;
	}
	return A;
}

void showStack(Pilha A){
	int t = A.topo;
	if(t == sinal) printf("\npilha vazia");
	else{
		int k;
		for(k = t; k>=0; k--){
			printf("%d\n", A.Vetor[k]);
		}
	}
}

unsigned char accessTop(Pilha A){
	unsigned char ch;
	if(A.topo == sinal) ch = ghost;
	else ch = A.Vetor[A.topo];
	return ch;
}