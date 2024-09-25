#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main() {
  char hello[] = "Hello!"; 
  char hello2[] = { 72, 101, 108, 108, 111, 33, 0 };
  char hi[] = "Hi!";

  puts(hello);
  puts(hello2);
  puts(hi);
}
