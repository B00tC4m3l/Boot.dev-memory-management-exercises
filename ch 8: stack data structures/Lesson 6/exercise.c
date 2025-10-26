#include "snekstack.h"
#include "stdlib.h"
#include <string.h>

void stack_push_multiple_types(stack_t *s) {
  // pushing float to the stack
  float *flt = malloc(sizeof(float));
  *flt = 3.14;
  stack_push(s, flt);

  // pushing string to the stack
  char *strung = "Sneklang is blazingly slow!";
  char *shush = malloc(strlen(strung)+1);
  strcpy(shush, strung);
  stack_push(s, shush);
}
