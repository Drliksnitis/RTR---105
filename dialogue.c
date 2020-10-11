

#include<stdio.h>


void main()
 {

 char a;
 printf("Cienijamais lietotaj, ludzu ievadi vienu burtu: ");
 scanf("%c",&a);
 printf("cienijamais lietotaj, tu esi ievadijis simbolu: %c\n",a);
 printf("cienijamais lietotaj, tu esi ievadijis simbolu, kura dec kods ir: %d\n",a);
 printf("cienijamais lietotaj, tu esi ievadijis simbolu, kura hec kods ir: 0x%x\n",a);
 printf("cienijamais lietotaj, tu esi ievadijis simbolu, kura hec kods ir: %o\n",a);
 printf("P.S. ka reals skaitlis: %f\n",a);

 int b;
 printf("Cienijamais lietotaj, ludzu ievadi vienu burtu: ");
 scanf("%d",&b);
 printf("cienijamais lietotaj, tu esi ievadijis simbolu: %c\n",b);
 printf("cienijamais lietotaj, tu esi ievadijis simbolu, kura dec kods ir: %d\n",b);
 printf("cienijamais lietotaj, tu esi ievadijis simbolu, kura hec kods ir: 0x%x\n",b);
 printf("cienijamais lietotaj, tu esi ievadijis simbolu, kura hec kods ir: %o\n",b);
 printf("P.S. ka reals skaitlis: %f\n",b);

 double c;
 printf("Cienijamais lietotaj, ludzu ievadi vienu burtu: ");
 scanf("%lf",&c);
 printf("cienijamais lietotaj, tu esi ievadijis simbolu: %c\n",c);
 printf("cienijamais lietotaj, tu esi ievadijis simbolu, kura dec kods ir: %d\n",c);
 printf("cienijamais lietotaj, tu esi ievadijis simbolu, kura hec kods ir: 0x%x\n",c);
 printf("cienijamais lietotaj, tu esi ievadijis simbolu, kura hec kods ir: %o\n",c);
 printf("P.S. ka reals skaitlis: %f\n",c);



 }
