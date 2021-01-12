#include <stdio.h>
#include <math.h>

char *sin_izteiksme =
"                                                           \n"
"     \n"
"                 500     \n"
"               ______  \n"
"               \\        2*k   4*k+2  \n"
"                \\   (-1)  *  x        \n"
"    sin^2(x) =    >  ----------------   \n"
"                /                  2        \n"
"               /_____    ((2*k+1)!)        \n"
"                 k=0    \n"
"                                   \n";

char *rekurences_reizinatajs =
"                                        4       \n"
"                                       x            \n"
"    rekurences reizinatajs: ------------------------   \n"
"                                               2  \n"
"                                ((2*k)*(2*k+1))     \n"
"           ";

double sin(double x) {
double a, S;
 int k=0;
a = (x*x);
S = a;
printf("a0 = %.8f\t \tS0 = %.8f\n", a, S);
   while (k<501){
    k++;
    a = a*pow(x,4)/(pow((2*k)*(2*k+1),2));
    S = S + a ;
       if (k == 499)
       {
          printf("a499 = %.175f\t S499 = %.8f\n", a, S);
       }
       if (k == 500)
       {
           printf("a500 = %.175f\t S500 = %.8f\n", a, S);
       }
    }
return S ;
}

 void main()
 {
double x = 0, y;
printf("(sin(x))^2 aprekinasana:\n");
printf("Ludzu ievadiet argumentu x ar vismaz vienu ciparu aiz komata: ");
scanf("%lf\n", &x);
printf("\nFunkcijas vertiba (sin(x))^2 = %.8f\n", pow(sin(x),2));
y = pow(sin(x),2);
printf ( "(sin(x))^2 ar math.h: y = (sin (%.2f ))^2 = %.8f \n" ,x , y);
printf("(sin(x))^2 izteiksme:\n");
printf("%s", sin_izteiksme);
printf("Rekurences reizinatajs:\n");
printf("%s", rekurences_reizinatajs);

}
