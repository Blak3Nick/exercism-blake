#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "vendor/unity.h"
#include "../src/word_count.h"
word_count_word_t  tests[1];
void tester(word_count_word_t *wordArray){

  printf("%d\n", wordArray[0].count);
}

int main(void) {

  tests[0].count = 1;
  strncpy(tests[0].text, "word", 5);
  tester(tests);

  return 0;
}
