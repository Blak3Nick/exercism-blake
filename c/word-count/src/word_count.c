#include <stdio.h>
#include <string.h>
#include "word_count.h"

int word_count(const char *input_text, word_count_word_t * words){
  int len = strlen(input_text);
  printf("%s\n", input_text);
  printf("Words text are:\t%s\n", (*words).text);  
  (*words).count =0;
  printf("Count is:\t%d\n", (*words).count);
  char theword[len];
  char b;
  int count1 =0;
  //char theword[50];
  for(int i=0; i<len; i++){
    b = input_text[i];
    theword[i] = b;
    if (b == ' '){
      (*words).count = count1+1;

      (*words).text[i] = '\0';
      break;
      }
    (*words).text[i] = b;
    }
    if(len>0 && count1 <1 ){
      (*words).count = 1;
      for (int j=0; j<len; j++){
      (*words).text[j] = theword[j];
      }

    }
    printf("The word was:\t");
    printf("%s\n", (*words).text);
    return (*words).count;
  }
