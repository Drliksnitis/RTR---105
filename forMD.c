#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,f;
    char l,m,n;
    long long o,p,r;

printf("Ludzu ievadiet skaitli kuram aprekinat faktorialu: ");
scanf("%d", &a);
if(a<0)
{
    printf("Ievaditjam skaitlim nav iespejams aprekinat faktorialu. Ievaditajam skaitlim jabut lielakam vai vienadam ar 0. ");
}
else
{

printf("Ludzu izvelieties kadu datu tipu velaties izmantot (int = 1, char = 2, long long = 3) : ");
scanf("%d", &b);

if(b == 1)
{
	for(f=i=1;i<=a;i++)
	{
		f*=i;
	}

printf("Ievadita skaitla faktorials ir: %d \n", f);
}

if(b == 2)
{
printf("Ievaditajam skaitlim nevar aprekinat faktorialu ar izveleto datu tipu");
}
if(b == 3)
{
    for(o=p=1;o<=a;o++)
    {
        p=p * o;
    }
    printf("Ievadita skaitla faktorials ir: %lld", p);
}
}
    return 0;
}
