#include <stdio.h>
#include <string.h>
#include "word_count.h"

int word_count(const char *input_text, word_count_word_t * words){
  int len = strlen(input_text);
  printf("%s\n", input_text);
  printf("Words text are:\t%s\n", (*words).text);
  (*words).count =0;
  printf("Count is:\t%d\n", (*words).count);
  char b;
  //char theword[50];
  for(int i=0; i<len; i++){
    b = input_text[i];
    if (b == ' '){
      (*words).count += 1;

      (*words).text[i] = '\0';
      }
    (*words).text[i] = b;
    }
    (*words).count ++;

    printf("The word was:\t");
    printf("%s\n", (*words).text);
    return (*words).count;
  }
