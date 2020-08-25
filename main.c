#include <stdio.h>
#include <readline/readline.h>

int main(void) {
  char *userName = readline("Enter your name: ");
 printf("Hello, %s !\n", userName);
  return 0;
}