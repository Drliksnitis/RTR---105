#include <stdio.h>

int main()
{
int a, b, c, s;
printf("Ludzu ievadiet tris decimalskaitlus:\n");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
printf("Jusu ievaditie skaitli ir: %d %d %d \n", a, b, c);
printf("Ludzu izvelieties secibu kada velaties sakartot skaitlus (1=dilstosa, 0=augosa) :\n");
scanf("%d", &s);
if(s == 1)
{
if ((a > b) && (b > c))
{
 printf("Jusu ievaditie skaitli dilstosa seciba ir: %d %d %d\n", a, b, c);
}
else if ((a > c) && (c > b))
{
 printf("Jusu ievaditie skaitli dilstosa seciba ir: %d %d %d\n", a, c, b);
}
else if ((b > a) && (a > c))
{
 printf("Jusu ievaditie skaitli dilstosa seciba ir: %d %d %d\n", b, a, c);
}
else if ((b > c) && (c > a))
{
 printf("Jusu ievaditie skaitli dilstosa seciba ir: %d %d %d\n", b, c, a);
}
else if ((c > a) && (a > b))
{
 printf("Jusu ievaditie skaitli dilstosa seciba ir: %d %d %d\n", c, a, b);
}
else if ((c > b) && (b > a))
{
 printf("Jusu ievaditie skaitli dilstosa seciba ir: %d %d %d\n", c, b, a);
}
else
{
 printf("Nevar noteikt\n");
}
}
else if (s == 0)
{
if ((a > b) && (b > c))
{
 printf("Jusu ievaditie skaitli augosa seciba ir: %d %d %d\n", c, b, a);
}
else if ((b > a) && (a > c))
{
 printf("Jusu ievaditie skaitli augosa seciba ir: %d %d %d\n", c, a, b);
}
else if ((a > c) && (c > b))
{
 printf("Jusu ievaditie skaitli augosa seciba ir: %d %d %d\n", b, c, a);
}
else if ((c > b) && (b > a))
{
 printf("Jusu ievaditie skaitli augosa seciba ir: %d %d %d\n", a, b, c);
}
else if ((b > c) && (c > a))
{
 printf("Jusu ievaditie skaitli augosa seciba ir: %d %d %d\n", a, c, b);
}
else if ((c > a) && (a > b))
{
 printf("Jusu ievaditie skaitli augosa seciba ir: %d %d %d\n", b, a, c);
}
else
{
 printf("Nevar noteikt\n");
}

}







return 0;
}
