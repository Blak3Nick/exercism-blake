#include "hello_world.h"
//#include "<stdio.h>"
char *hello_world;
const char *hello(void)
{
   hello_world = "Hello, World!";
  return  hello_world;
}
