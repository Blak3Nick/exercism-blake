#include "isogram.h"
#include <ctype.h>
#include <stdio.h>

bool is_isogram(const char phrase[]){
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  int next =0;
  char c = phrase[next];
  c = tolower(c);

  char b;
  int found;
  while (c != '\0'){
    if(c == ' ' || c == '-'){
        //printf("True in check\n");
        next ++;
        c = phrase[next];
        found = 1;
    }
    found = 0;
    for (int i=0; i< 27; i++){
      b = alphabet[i];
      if (b == c){
        alphabet[i] = 1;
        next ++;
        c = phrase[next];
        found = 1;
        break;
    }
  }
    if (found == 0){
    return false;
    }
  }
  return true;
}
