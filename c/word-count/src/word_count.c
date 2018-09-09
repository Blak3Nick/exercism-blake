#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "word_count.h"

int word_count(const char *input_text, word_count_word_t * words){
  //words is a pointer to an array of word_count_word_t need to access via indexing
  int len = strlen(input_text);
  char b;
  int index = 0;
  int indexForWords = 0;
  int wordCount = 0;
  char word[len];
  words[indexForWords].count =1;
  //char theword[50];
  for(int i=0; i<len; i++){
    b = input_text[i];
    if(b != ' '){
    word[index] = b;
    }
    if (b == ' '){
      char * theword = word;
      printf("The word is\t%s\n\n", theword);
      strncpy(words[indexForWords].text, theword, len);
      words[indexForWords].count = 1;
      wordCount ++;
      indexForWords ++;
      index = -1;
      for(int j=0; j<len; j++){
        word[j] = '\0';
      }
    }
    if ( i == (len-1)){
      char * theword = word;
      printf("The word is\t%s\n\n", theword);
      strncpy(words[indexForWords].text, theword, len);
      words[indexForWords].count = 1;
      wordCount ++;
      indexForWords ++;
      index = -1;
      for(int j=0; j<len; j++){
        word[j] = '\0';
      }
    }

      index ++;
    }
    return wordCount;
  }
