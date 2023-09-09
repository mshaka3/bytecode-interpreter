#include "stdlib.h"

#include "memory.h"
#include <stdio.h>
#include <stdlib.h>

void *reallocate(void *pointer, size_t oldSize, size_t newSize) {
  if (oldSize == 0 && newSize == 0) {
    return NULL;
  }
  if (newSize == 0) {
    free(pointer);
    return NULL;
  }

  void *result = realloc(pointer, newSize);

  if (result == NULL) {
    exit(0);
  }

  return result;
}
