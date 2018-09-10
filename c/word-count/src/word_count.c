#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>
#include "word_count.h"
#include <stdbool.h>


bool isWordComplete(char currentChar, char * currentWord){
  int len = strlen(currentWord);
  if(len <1){
    return false;
  }
  if(currentChar == ' ' || currentChar == ','){
    return true;
  }
  return false;
}

int word_count(const char *input_text, word_count_word_t * words){
  //words is a pointer to an array of word_count_word_t need to access via indexing
  int len = strlen(input_text);
  char currentChar;
  int index = 0;
  int indexForWords = 0;
  int wordCount = 0;
  char currentWord[len];
  char * allTheWords[21];
  allTheWords[0] = NULL;
  int found;
  for(int j=0; j<len; j++){
    word[j] = '\0';
  }
  words[indexForWords].count =1;
  //char theword[50];
  for(int i=0; i<len; i++){
    found = 0;
    b = input_text[i];
    if(b == '\n'){
      continue;
    }
    if(b != ' ' && b!= ',' ){
      if(isalpha(b) || isdigit(b) ){
          word[index] = b;
      }

    }
    if (b == ' '|| b == ','){
      char * theword = word;
        for(int i =0; i <wordCount; i++){
          if(strncmp(word, allTheWords[i], 50) == 0){
            words[indexForWords].count += 1;
            found = 1;
            break;
          }
        }
        if(found == 1){
          for(int j=0; j<len; j++){
            word[j] = '\0';
          }
          continue;
        }
        printf("The word is\t%s\n\n", theword);
        strncpy(words[indexForWords].text, theword, len);
        allTheWords[wordCount] = word;
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
      for(int i =0; i <wordCount; i++){
        if(strncmp(word, allTheWords[i], 50) == 0){
          words[indexForWords].count += 1;
          found = 1;
          break;
        }
      }
      if(found == 1){
        for(int j=0; j<len; j++){
          word[j] = '\0';
        }
        continue;
      }
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
