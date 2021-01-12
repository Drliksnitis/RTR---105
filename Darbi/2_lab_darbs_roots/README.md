# 2. laboratorijas darba – Dihotomijas metode - atskaite

## Teorija

Viena no skaitliskajām metodēm ir Dihotomijas metode. Ar šīs metodes palīdzību ir iespējams noteikt precīzas koordinātes noteiktā intervālā, kur viena no trigonometriskās funkcijās vērtībām krustojas ar x asi. Ar izslēgšanas palīdzību ir iespējams noteikt kur atrodas precīzais punkts. Tātad sadalot doto intervālu uz pusēm, var noteikt kurā daļā atrodas meklētais punkts. Ja esošā intervālu galapunktu reizinājums ir pozitīvs, tad ir zināms ka meklētais punkts neatrodas tajā intervālā. Ja esošo intervālu galapunktu reizinājums ir negatīvs, tad tajā intervālā atrodas meklētais punkts.


### Kods
```
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    float a,b,c,p,x;
    int k=0;

float modified_sin(float x, float c){
 return (pow(sin(x),2))-c;
}

    printf("Ludzu ievadit a vertibu: \n");
    scanf("%f",&a);
    printf("Ludzu ievadit b vertibu: \n");
    scanf("%f",&b);
    printf("Ludzu ievadit c vertibu: \n");
    scanf("%f",&c);
    printf("Ludzu ievadit precizitates vertibu: \n");
    scanf("%f",&p);

    if(modified_sin(a,c)*modified_sin(b,c)>0)
    {
        printf("Ievaditaja intervala [%.2f;%.2f] funkcijai sin(x)^2 saknu nav vai taja ir paru saknu skaits. \n",a,b);
        return 1;
    }
    else


    while((b-a)>p){
        k++;
        x = (a+b)/2;
        if(modified_sin(a,c)*modified_sin(b,c)>0)
        {
          a = x;
        }
        else
        {
            b = x;
        }
      printf("%d\t\t %f\n",k,b-a);
 }

 printf("Funkcijas sin^2(x) reala vertiba: %f\n",pow(sin(c),2));
 printf("Aproksimeta x vertiba: %f\n",x);
 printf("Nepieciesamais iteraciju skaits: %d\n",k);

return 0;

}
```
Komentari par kodu:  

### Rezultats
```
Ludzu ievadit a vertibu:
0.0023
Ludzu ievadit b vertibu:
0.9231
Ludzu ievadit c vertibu:
0.6253
Ludzu ievadit precizitates vertibu:
0.0001
1                0.460400
2                0.230200
3                0.115100
4                0.057550
5                0.028775
6                0.014387
7                0.007194
8                0.003597
9                0.001798
10               0.000899
11               0.000450
12               0.000225
13               0.000112
14               0.000056
Funkcijas sin^2(x) reala vertiba: 0.342624
Aproksimeta x vertiba: 0.462644
Nepieciesamais iteraciju skaits: 14

```

### Analize

Ta ka sin^2(x) funkcija, tad ir nepieciesams ievadit skaitlus, kas ir mazaki par viens, lai varetu pielietot Dihotomijas metodi. Ja netiek ievadita c vertiba kas atrodas pirms tam ievaditaja [a;b] intervala, tad ta funkcija neizpildas, jo sin^2(x) nekrustojas ar x asi.

### Bildes

Funkcijas bilde: https://github.com/Drliksnitis/RTR---105/blob/master/Darbi/2_lab_darbs_roots/funkcijas%20attels%202.png

