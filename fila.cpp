#include <iostream>
#include "fila.h"

using namespace std;

struct elem {
	int info;
	struct elem *no;
};

struct fila {
	Telem *inicio;
	Telem *fim;
};

Fila* criaFila() {
	Fila *f = new Fila;
	f->inicio = NULL;
	f->fim = NULL;
	
	return f;
}

bool inserir(Fila *f, int info) {
	Telem *pointer;
	
	pointer = malloc(sizeof(Telem));
	if(pointer == NULL) {
		return false;
	}
	
	pointer->info = info;
	pointer->no = NULL;
	
	if(f->inicio == NULL) {
		f->inicio = pointer;
	} else {
		f->fim->no = pointer;
	}
	
	f->fim = pointer;
	return true;
}

bool remover(Fila *f, int *info) {
	Telem *pointer;
	
	if(f->inicio == NULL) {
		return false;
	}
	
	pointer = f->inicio;
	*info = pointer->info;
	f->inicio = pointer->no;
	
	if(f->inicio == NULL) {
		f->fim = NULL;
	}
	
	free(pointer);
	return true;
}

int tamanho(Fila *f) {
	Telem *pointer;
	int count = 0;
	
	pointer = f->inicio;
	while(pointer != NULL) {
		count++;
		pointer = pointer->no;
	}
	
	return count;
}
