#include "exercise.h"
#include <stdio.h>
#include <string.h>

void concat_strings(char *str1, const char *str2) {
  // ?
  int str1_join_place = 0;
  for(int i = 0; i <= strlen(str1); i++){
    if(str1[i] != '\0'){
      continue;
    }else{
      str1_join_place = i;
      break;
    }
  }
  
  for(int i = 0; i < strlen(str2); i++){
    str1[str1_join_place+i] = str2[i];
  }
}
