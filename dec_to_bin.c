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







/*
char a,b,c;

printf("Ievadiet decimal skaitli: \n");
scanf("%d",&a);

b = 2;
printf("%d % %d = %d\n",a,b,c);


/*
dn=n;
i=1;

 for(j=n;j>0;j=j/2)
 {
  binno=binno+(n%2)*i;
  i=i*10;
  n=n/2;

 }

 printf("Binarais skaitlis ir %d skaitlim %d. \n",binno,dn);


*/
return 0;
}
