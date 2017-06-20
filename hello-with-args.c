#include <stdio.h>

int main(int argc, char* argv) {
  if (argc == 0) {
    printf("Hello, world!\n");
  }
  else {
    printf("Hello, " + argv[1] + "\n");
  }
}
  
