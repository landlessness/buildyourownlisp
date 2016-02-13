#include <stdio.h>

void print_hello_times(int count) {
  int i = 0;
  do {
    puts("i see you!");
    i += 1;
  } while (i < count);
}

int main(int argc, char** argv) {
  print_hello_times(10);
  return 0;
}
