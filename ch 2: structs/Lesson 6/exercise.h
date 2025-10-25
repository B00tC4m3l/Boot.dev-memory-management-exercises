#pragma once

typedef struct SneklangVar {
  char *name;
  int scope_level;
  int value;
  char type;
  char is_constant;
} sneklang_var_t;
