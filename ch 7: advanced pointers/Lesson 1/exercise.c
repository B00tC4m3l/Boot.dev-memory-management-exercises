#include "stdlib.h"

#include "exercise.h"

void allocate_int(int **pointer_pointer, int value) {
  // ?
  int *pointer = (int*)malloc(sizeof(int));
  *pointer = value;
  *pointer_pointer = pointer;
}
