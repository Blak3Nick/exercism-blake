#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char* letters;
char *abbreviate(const char *phrase){
    //char * acro =NULL;


    if(phrase == NULL)  {
        return NULL;
    }
    size_t len = strlen(phrase);
    if(len <1){
      return NULL;
    }
    letters = malloc(len);
  //  letters[len];

    char c = phrase[0];
    c = toupper(c);
    letters[0] = c;
    int count = 1;
    for (size_t i =1; i<len; i++){
      c = phrase[i];
      if(c== ' '){
        i++;
        c = phrase[i];
        c = toupper(c);
        letters[count] = c;
        count ++;
      }
    }
    count ++;
    letters[count] = '\0';
    printf("Abrev:\t%s\n", letters);
    //acro = letters;
    return letters;
}
