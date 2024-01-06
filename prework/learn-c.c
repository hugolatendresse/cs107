#include <stdio.h>
#include <string.h>
#include <math.h>

void printBinary(int number) {
    int i;
    unsigned int mask = 1 << (sizeof(number) * 8 - 1);

    for (i = 0; i < sizeof(number) * 8; i++) {
        putchar((number & mask) ? '1' : '0');
        mask >>= 1;
    }
}

int main()
{
  int a = 15;
  int minus15 = -15;

  printf("This is straight up minus 15 in binary:\n");
  printBinary(minus15);
  printf("\n");
  long long int x = pow(2, 32) - 15;
  printBinary(x);
  

}