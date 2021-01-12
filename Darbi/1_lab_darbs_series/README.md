# 1. laboratorijas darba - Teilora rindas - atskaite

## Teorija

Viena no skaitliskajām metodēm, ko izmanto ir Teilora rindas. Ar to palīdzību ir iespējams uzzināt trigonometrisko funkciju vērtības izmantojot C algoritmus. Izveidojot nepieciesamo kodu, lietotajs ir spejigs uzzinat kada vertiba atbilst noteiktajai funkcijai.

### Kods
```

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

```
Komentari par kodu:


### Rezultats
```
(sin(x))^2 aprekinasana:
Ievadi argumentu x ar vismaz vienu ciparu aiz komata: 43,00

Teilora rindas funkcijas iznakums (sin(x))^2 = 0.69184922
(sin(x))^2 no math.h: y = (sin (43.00 ))^2 = 0.69184922
(sin(x))^2 izteiksme:


                 500
               ______
               \        2*k   4*k+2
                \   (-1)  *  x
    sin^2(x) =    >  ----------------
                /                  2
               /_____    ((2*k+1)!)
                 k=0

Definicijas apgabals pieder visam x vertibam
Rekurences reizinatajs:
                                        4
                                       x
    rekurences reizinatajs: ------------------------
                                               2
                                ((2*k)*(2*k+1))

```

### Analize

Pec ievadita koda veidosanas vareja uzzinat kaa var isaka veida uzrakstit nepieciesamas vertibas. Ar so metodi ir iespejams uzzinat loti precizas funkcijas vertibas noteiktaja argumenta vertibas vieta. ATbilde ieklaujas ar vairakiem cipariem aiz komata, kas pierada to precizitati. Ta ka funkcijai sin^2(x) pieder visas x argumenta vertibas nebija ierobezojumi to aprekinat. Tacu vareja uzzinat, ka y arguments atrodas vertibu apgabala: 0<y<1
 

### Bildes

Grafika izveidotais attels: https://github.com/Drliksnitis/RTR---105/blob/master/Darbi/1_lab_darbs_series/funkcijas%20attels.png
