 // operacijas
 // bitu operacijas




 #include <stdio.h>
 #include <time.h>

 int main()
 {

 char a = 5;// 0000 0101
 char b = 5;
// char c = a << b;// 0000 0101 << 1 -> 0000 1010 (0000 1010)
 char c;
 printf("%d << %d = %d\n"a,b,c);

 clock_t begin = clock();
 c = a << b; // 0000 0|101 << 5-> 1010 0000
 //                               -101 1111
 //                             +
 //                                110 0000
 // 1 * 2^5
 double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
 printf("Reizinasa ar 2 ar << operaciju: %g\n",time_spent);
 printf("%d << %d = %d\n",a,b,c);

 begin = clock();
 c = a * 2*2*2*2*2;
 time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
 printf("Reizinasa ar 2 ar * operaciju: %g\n",time_spent);
 printf("%d * 2 = %d\n",a,c);





//* here do your job
 b = 2;// 00|00 0101 << 2 -> 0001 01|00 (0001 0100)
 c = a << b;
 printf("%d << %d = %d\n"a,b,c);
 b = 3;// 000|0 0101 << 3 -> 0010 1|000 (0010 1000)
 c = a << b;
 printf("%d << %d = %d\n"a,b,c);





 return 0;

 }