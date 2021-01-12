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
