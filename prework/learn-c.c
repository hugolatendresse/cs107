#include <stdio.h>
#include <string.h>

int main()
{
  char* laureate = "Barry Sharpless";
  int length = strspn(laureate + 1, "road");
  printf("%d", length);

}