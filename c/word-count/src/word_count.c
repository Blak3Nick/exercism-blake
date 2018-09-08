#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "word_count.h"

int word_count(const char *input_text, word_count_word_t * words){
  //words is a pointer to an array of word_count_word_t
  int len = strlen(input_text);
  char b;
  int index = 0;
  int indexForWords = 0;
  int wordCount = 1;
  char word[len];
  words[indexForWords].count =1;
  //char theword[50];
  for(int i=0; i<len; i++){
    b = input_text[i];
    if (b == ' '){
      word[index +1] = '\0';
      char * theword = word;
      int size = sizeof(word);
      strncpy(words[indexForWords].text, theword, size);
      words[indexForWords].count += 1;
      wordCount ++;
      for(int j=0; j<len; j++){
        word[j] = '\0';
      }
    }
      word[index] = b;
      strncpy(words[0].text, "word", 5);
      words[0].count = 1;
      index ++;
    }
    return wordCount;
  }
