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
    int count3 = 0;
    if (b == ' '){
      mywords[count1][count2] = '\0';
      for (int t=0; t<50; t++){
        (*words).text[count3] = mywords[count1][t];
        count3 ++;
        if(mywords[count1][t] == '\0'){
          (*words).count ++;
          break;
        }
      }
      count1 ++;
      count2 =0;
      continue;
    }
    mywords[count1][count2]= b;
  }

  for (int j=0; j<50; j++){
  printf("%c", mywords[0][j]);
  }
  return 0;
}
