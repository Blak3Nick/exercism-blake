#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "vendor/unity.h"
#include "../src/word_count.h"
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
word_count_word_t  tests[1];
void tester(word_count_word_t *wordArray){
// Access to the array of word structs can be obtained through simple array indexing
  printf("%d\n", wordArray[0].count);
}
char currentWord[50];
bool isTrue(void){
  bool yup = true;
  return yup;
}
void clearWord (){
  for(int j=0; j<50; j++){
    currentWord[j] = '\0';
  }
}

int main(void) {
  char word[] = "hell\0";
  for(int j=0; j<5; j++){
    word[j] = '\0';
  }
  printf("The length of the word is %d\n\n", strlen(word));
  tests[0].count = 1;
  strncpy(tests[0].text, "word", 5);
  tester(tests);
  char * words[2];
  words[0] = "hello";
  words[1] = "goodbye";
  printf("%s\t%s\n", words[0], words[1]);
  if(isTrue()){
    printf("It's true\n");
  } 
  clearWord();

  return 0;
}
