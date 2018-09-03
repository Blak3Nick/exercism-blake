#include <stdio.h>
#include <string.h>
#include "word_count.h"

int word_count(const char *input_text, word_count_word_t * words){
  int len = strlen(input_text);
  char b;
  size_t count1 =0;
  size_t count2 = 0;
  char mywords [20][50];
  for(int i=0; i<len; i++){
    b = input_text[i];
    if (b == ' '){
      count1 ++;
      count2 =0;
      continue;
    }

  }
}
