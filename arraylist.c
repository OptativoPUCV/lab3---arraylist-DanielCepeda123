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
 
  return NULL;
}

void append(ArrayList * l, void * data){
  

}

void push(ArrayList * l, void * data, int i){
 int j;
  
  if ( i > l->size) return ;

  if (l->capacity == l->size)
  {
    l->capacity *= 2;
    l->data = realloc(l->data, sizeof(void *) * l->capacity);
  }

  
    for (j = l->size ; j >= i ; j--)
    {
        l->data[j + 1] = l->data[j];
    }

    l->data[i] = data;
      
    l->size += 1;
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
