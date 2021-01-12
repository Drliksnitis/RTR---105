#include <stdio.h>
#include <stdlib.h>
#include <math.h>


char *sinx_izteiksme =
"                                                                                            \n"
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



char *rekurences_reiz =
"                                        4       \n"
"                                       x            \n"
"    rekurences reizinatajs: ------------------------   \n"
"                                               2  \n"
"                                ((2*k)*(2*k+1))     \n"
"           ";

double sinx(double x) {
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
printf("Ievadi argumentu x ar vismaz vienu ciparu aiz komata: ");
scanf("%lf\n", &x);
printf("\nTeilora rindas funkcijas iznakums (sin(x))^2 = %.8f\n", pow(sin(x),2));
y = pow(sin(x),2);
printf ( "(sin(x))^2 no math.h: y = (sin (%.2f ))^2 = %.8f \n" ,x , y);
printf("(sin(x))^2 izteiksme:\n");
printf("%s", sinx_izteiksme);
printf("Definicijas apgabals pieder visam x vertibam\n");
printf("Rekurences reizinatajs:\n");
printf("%s", rekurences_reiz);
}
