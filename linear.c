#include <stdio.h>
#include "linear.h"

#define CAPACITY 64000

static char heap[CAPACITY];
static size_t used = 0;

void *malloc_lib(size_t n){
	if(n+used > CAPACITY) return NULL;
	void *mem = &heap[used];
	used += n;
	return mem;
}

void reset(){
	used = 0;
}

