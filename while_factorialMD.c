#include <stdio.h>

int main()
{

int a,b,i,f;
f=i=1;


printf("Ludzu ievadiet skaitli kuram aprekinat faktorialu: ");
scanf("%d", &a);

printf("Ludzu izvelieties kadu datu tipu velaties izmantot (int = 1, char = 2, long long 3) : ");
scanf("%d", &b);

if(b == 1)
{
	while(i<=a)
	{
		f*=i;
		i++;
	}

printf("Ievadita skaitla fatorials ir: %d \n", f);
}

if(b == 2)
{
	char a,i,f;// need to edit what's here for char data type
	while(a > 1)
	{
		f=f * a;
		a--;
	}

printf("Ievadita skaitla fatorials ir: %d \n", a);
}


return 0;
}
