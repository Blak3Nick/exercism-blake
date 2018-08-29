#include "isogram.h"

bool is_isogram(const char phrase[]){
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  int next =0;
  char c = phrase[next];
  char b;
  int found;
  while (c != '\0'){
    found = 0;
    for (int i=0; i< 26; i++){
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
