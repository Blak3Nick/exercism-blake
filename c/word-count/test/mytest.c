#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "vendor/unity.h"
#include "../src/word_count.h"

void tester(word_count_word_t *wordArray){

  word_count_word_t *theword =  wordArray[0];
  printf("%d\n", (*theword).count);
}

int int main(void) {

  return 0;
}
