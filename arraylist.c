#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {
  ArrayList *Lista;
  Lista = (ArrayList *) malloc(sizeof(ArrayList));
  
  Lista->data = (void *) malloc(sizeof(void));
  Lista->capacity = 2;
  Lista->size = 0;
    return Lista;
}

void append(ArrayList * l, void * data){
  
  if (l->size == l->capacity)
  {
    l->data = (void *) realloc(data, (l->capacity * 2));
    l->data[l->size] = data;
    
    
  }
  else
  {
    l->data[l->size] = data;
    l->size += 1;
  }
  
  
  

}

void push(ArrayList * l, void * data, int i){

}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
