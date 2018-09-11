#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>
#include "word_count.h"
#include <stdbool.h>
//Global variables
char currentWord[50];
char currentChar;
char * allTheWords[21];

bool isWordComplete(){
  //int len = strlen(currentWord);
  if(currentChar == ' ' || currentChar == ','){
    printf("The word is complete in the method\n" );
    return true;
  }
  return false;
}
void clearWord (){
  for(int j=0; j<50; j++){
    currentWord[j] = '\0';
  }
}
bool wordAlreadyCounted(int wordCount) {
  for (int i=0; i < wordCount; i++){
    int compare = strncmp(currentWord, allTheWords[i], 50);
      if (compare == 0){
        return true;
      }
    }
  return false;
}
int word_count(const char *input_text, word_count_word_t * words){
  //words is a pointer to an array of word_count_word_t need to access via indexing
  int len = strlen(input_text);
  int index = 0;
  int indexForWords = 0;
  int wordCount = 0;
  int found;
  allTheWords[0] = NULL;
  clearWord();
  words[indexForWords].count =1;
  //char theword[50];
  for(int i=0; i<len; i++){
    found = 0;
    currentChar = input_text[i];
    if(currentChar == '\n'){
      continue;
    }
    if(!isWordComplete() ){
      if(isalpha(currentChar) || isdigit(currentChar) ){
          currentWord[index] = currentChar;
      }
    }
    if (isWordComplete()){
        char * theword = currentWord;
        printf("The word is complete.\n");
            if(wordAlreadyCounted(wordCount) ){
              words[indexForWords].count += 1;
              found = 1;
            }

          if(found == 1){
            clearWord();
            continue;
          }
          printf("The word is\t%s\n\n", theword);
          strncpy(words[indexForWords].text, theword, len);
          allTheWords[wordCount] = currentWord;
          words[indexForWords].count = 1;
          wordCount ++;
          indexForWords ++;
          index = -1;
          clearWord();
    }
    if ( i == (len-1)){
      char * theword = currentWord;
      if(wordAlreadyCounted(wordCount) ){
        words[indexForWords].count += 1;
        found = 1;
      }
      if(found == 1){
        clearWord();
        continue;
      }
      printf("The word is\t%s\n\n", theword);
      strncpy(words[indexForWords].text, theword, len);
      words[indexForWords].count = 1;
      allTheWords[wordCount] = currentWord;
      wordCount ++;
      indexForWords ++;
      index = -1;
      clearWord();
    }

      index ++;
    }
    return wordCount;
  }
