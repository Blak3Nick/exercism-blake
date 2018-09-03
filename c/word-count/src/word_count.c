#include <stdio.h>
#include <string.h>
#include "word_count.h"

int word_count(const char *input_text, word_count_word_t * words){
  int len = strlen(input_text);
  printf("%s\n", input_text);
  printf("Words text are:\t%s\n", (*words).text);
  printf("Count is:\t%d\n", (*words).count);
  char b;
  int count1 =0;
  //char theword[50];
  for(int i=0; i<len; i++){
    b = input_text[i];
    if (b == ' '){
      (*words).count = count1+1;
      
      (*words).text[i] = '\0';
      break;
      }
    (*words).text[i] = b;
    }
    printf("The word was:\t");
    for(int i=0; i<5; i++){
      printf("%c", (*words).text[i]);
    }
    printf("\n");
    return (*words).count;
  }
