#include <stdio.h>


int main ()
{

int a, b, c;

  printf("Ievadiet deimalskaitli :\n");
  scanf("%d", &a);

  for (b = 25; b >= 0; b--)
  {
    c = a >> b;

    if (c & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");


return 0;
}
