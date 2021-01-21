#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    double a,b,x,delta_x,y,atvasin,difference,atvasin2,difference2;
    FILE *results;


    printf("Ludzu ievadiet a vertibu: \n");
    scanf("%lf",&a);
    printf("Ludzu ievadiet b vertibu: \n");
    scanf("%lf",&b);
    printf("Ludzu ievadiet precizitates vertibu: \n");
    scanf("%lf",&delta_x);

    printf("x\t\tf(x)\t\tf'(x) a\t\tf'(x) fd\tf''(x) a\tf''(x) fd\n");
    results = fopen("derivative.dat","w");
    fprintf(results,"x\t\tf(x)\t\tf'(x) a\t\tf'(x) fd\tf''(x) a\tf''(x) fd\n");
    for(x=a;x<=b;x+=delta_x)
    {
        y = pow(sin(x),2);
        atvasin = 2*sin(x)*cos(x); // ista atvasinajumu izteiksme
        difference = pow(sin(x+delta_x),2)-y;// diferencesanas metode
        atvasin2 = 2*((pow(cos(x),2))-(pow(sin(x),2))); // 2. pakapes atvasinajums
        difference2 = 2*((pow(cos(x+delta_x),2))-(pow(sin(x+delta_x),2))); // diferencesanas metode 2.pakapes atvasinajumam
        fprintf(results,"\n%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t",x,y,atvasin,difference,atvasin2,difference2);
        printf("\n%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t",x,y,atvasin,difference,atvasin2,difference2);

    }
    fclose(results);
}
