#include "../include/feudc.h"
#include <stdio.h>
#include <string.h>

char *feud_return_long(char *argument) {
  char start[3];

  memcpy(start, argument, 2);
  start[2] = '\0';

  printf("%s\n", start);

  if (strcmp(start, "--") == 0) {
    return argument;
  }

  return NULL;
}

char *feud_return_short(char *argument) {
  char start[2];

  memcpy(start, argument, 1);
  start[1] = '\0';

  printf("%s\n", start);

  if (strcmp(start, "-") == 0) {
    return argument;
  }

  return NULL;
}

char *feud_return_word(char *argument) {
  if (feud_return_long(argument) && feud_return_short(argument) != NULL) {
    return argument;
  }

  return NULL;
}

int main(int argc, char **argv) {
  for (int i = 1; argc > i; i++) {
    char *argument_word = feud_return_word(argv[i]);
    if (argument_word != NULL) {
      printf("%s\n", argument_word);
    }

    char *argument_short = feud_return_short(argv[i]);
    if (argument_short != NULL) {
      printf("%s\n", argument_short);
    }

    char *argument_long = feud_return_long(argv[i]);
    if (argument_long != NULL) {
      printf("%s\n", argument_long);
    }
  }

  return 0;
}
