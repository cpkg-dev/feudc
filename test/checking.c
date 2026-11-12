#include "../include/feudc.h"
#include <stdio.h>

int main(void) {
  printf("%d\n", check_for("cpkg", "--"));
  printf("%d\n", check_for("--feudc", "--"));

  return 0;
}
