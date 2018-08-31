#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *abbreviate(const char *phrase){
    char * acro =NULL;
    size_t len = strlen(phrase);
    char letters[len];

    char c = phrase[0];
    letters[0] = toupper(c);
    for (size_t i =1; i<len; i++){
      c = phrase[i];
      if(c== ' '){
        i++;
        c = phrase[i];
        c = toupper(c);
      }
    }
    for(int i =0; i < 5; i++){
      printf("%c\n", letters[i]);
    }
    acro = letters;
    return acro;
}
