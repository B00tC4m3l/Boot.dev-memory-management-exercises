#include <string.h>
#include "exercise.h"

int smart_append(TextBuffer* dest, const char* src) {
  // ?
  if(!dest || !src){
    return 1;
  }
  size_t MAX_BUFFER_SIZE = 64;
  int src_length = strlen(src);
  int dest_remaining_length = MAX_BUFFER_SIZE - (dest->length+1);
  if(src_length > dest_remaining_length){
    strncat(dest->buffer, src, dest_remaining_length);
    dest->length = MAX_BUFFER_SIZE - 1;
    return 1;
  }
  else{
    strcat(dest->buffer, src);
    dest->length += src_length;
    return 0;
  }
}
