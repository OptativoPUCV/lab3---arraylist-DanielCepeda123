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
    l->capacity *= 2;
    l->data = (void *) realloc(l->data, (l->capacity) * sizeof(void));
    l->data[l->size] = data;
    l->size += 1;
  }
  else
  {
    l->data[l->size] = data;
    l->size += 1;
  }

}

void push(ArrayList * l, void * data, int i){

  int j;
  
  if ( i > l->size)
  {
    return ;
  }

  if (l->size == l->capacity)
  {
    l->capacity *= 2;
    //l->data = (void *) realloc(l->data, (l->capacity) * sizeof(void));
    
    for (j = l->size ; j >= i ; j--)
      {
        l->data[j + 1] = l->data[j];
      }
  }
  else
  {
    for (j = l->size ; j >= i ; j--)
      {
        l->data[j + 1] = l->data[j];
      }

      l->data[i] = data;
      l->size += 1;
    
  }
  

}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){

  if ( i >= l->size)
  {
    return NULL;
  }

  if (i >= 0)
  {
    
  }
  else
  {
    
  }
  
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
