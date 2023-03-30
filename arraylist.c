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
  
  ArrayList *Lista = NULL;
  Lista = (ArrayList *) malloc(sizeof(ArrayList));
  
  Lista->data = (void *) malloc(sizeof(void *));
  Lista->capacity = 2;
  Lista->size = 0;
  return Lista;
  
}

void append(ArrayList * l, void * data){
  
  if (l->size == l->capacity)
  {
    l->capacity *= 2;
    l->data = (void *) realloc(l->data, (l->capacity) * sizeof(void *));
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
   // l->data = (void *) realloc(l->data, (l->capacity) * sizeof(void *));
  }

  
    for (j = l->size ; j >= i ; j--)
      {
        l->data[j + 1] = l->data[j];
      }

      l->data[i] = data;
      
    l->size += 1;
  
  

}

void* pop(ArrayList * l, int i){
  void *valorEliminado = NULL;
  int j;

  if (l->size == 0)
  {
    return NULL;
  }
  
  if( i >=0 )
  {
    valorEliminado = l->data[i];

    for (j = i ; j < l->size ; j++ )
      {
        l->data[j] =l->data[j + 1];
      }
    l->size = (l->size - 1);
  }
  else
  {
    valorEliminado = l->data[l->size + i];

    for (j = (l->size + i) ; j < l->size ; j++)
      {
        l->data[j] = l->data[j + 1];
      }
    l->size = (l->size - 1);
  }
  
    return valorEliminado;
}

void* get(ArrayList * l, int i){

  if ( i >= l->size)
  {
    return NULL;
  }

  if (i >= 0)
  {
    return l->data[i];
  }
  else
  {
    return l->data[l->size + i];
  }
  
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){

  l->capacity = 5;
  l->size = 0;

  l->data = (void *) realloc(l->data, 2 * sizeof(void *));
    
}
