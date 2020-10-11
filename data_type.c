
// Kods dazadu datu tipu petisanai
// Informacijas vienibas, ar kuram opere cilveks - simboli un skaitli
// simboli: burti, cipari, punktuacijas zimes utt. - ASCII tabula - simbols VS binars kods

// skaitli: veseli, realie, kompleksie skaitli (divas dalas - Re un Im)

// Informacijas vieniba, ar kuru opere dators - bits (0/1)
// Informacijas vieniba ar adresi (datora) - baits
// 1 byte == 8 bits
// ASCII table - one symbol == 1 byte
// unique binary combinations inside 1 byte - 256
// 1 bits: 0, 1 - 2 kombinacijas
// 2 biti: 00, 01, 10, 11 - 4 kombinacijas
// 3 biti: 000, 001, 010, 011, 100, 101, 110, 111 - 8 kombinacijas
// x biti: ... - (stavoklu skaits)^biti - (2)^8 = 256
// ASCII tabula - 256 unikali simboli (ASCII tabula 1. dala - 128 simboli)


#include<stdio.h>
#define A 11


void main()
 {

 char a = 10; // definesana
 // 1. darbiba - RAM atmina tiek atveleta vieta viena char datu tipa mainiga glabasanai
 // si vieta ir viennozimigi sakedeta ar identifikatoru "a" (bet, vietai ir ari adrese)
 // saskana ar char datu tipu, vietas izmers - 1 baits
 // ka saja bridi izskatijas atminas apgabals: 0000 0101 vai 1111 1110 vai 0000 1010
 // char a;
 // 2. darbiba - vertibas pieskirsana
 // a = 10; // vertibas pieskirsana
 // a -> 0000 1010
 printf("Mainiga a vertiba (laika momenta t1) ir: %d\n",a);
 a = 125;
 printf("Mainiga a vertiba (laika momenta t2) ir: %d\n",a);
 printf("Konstantes A vertiba (laika momenta t3) ir: %d\n",A);
 // A = 126; //konstanti mainit nevar
// printf("Konstantes A vertiba (laika momenta t4) ir: %d\n",A);
 char mans_mainiigais = 45;//centisimies izmantot mneimoniskus nosaukumus - nosaukums atspogulo mainiga jegu vai noluku
 a = 0x10;// |||||||||| |||||||||||||||
 printf("Mainiga a vertiba (laika momenta t4) ir: %d\n",a);// prognoze - 16
 printf("Mainiga a vertiba (laika momenta t5) ir: 0x%x\n",a);// prognoze - 10
 printf("Mainiga a vertiba (laika momenta t6) ir: %o (oct)\n",a);// prognoze - 20
// printf("Mainiga a vertiba (laika momenta t7) ir: %b (bin)\n",a);// prognoze - 20

 a = 65;
 printf("Mainiga a vertiba ir: %d\n",a);
 printf("Mainiga a vertiba ir: 0x%x \n",a);
 printf("Mainiga a vertiba ir: %o (oct) \n",a);
 printf("Mainiga a vertiba ka simbols: %c \n",a);

 a = 'k';
 printf("Mainiga a vertiba ir: %d\n",a);
 printf("Mainiga a vertiba ir: 0x%x \n",a);
 printf("Mainiga a vertiba ir: %o (oct) \n",a);
 printf("Mainiga a vertiba ka simbols: %c \n",a);

// http://cplusplus.com/reference/cstdio/printf/?kw=printf

 a = 125;
 printf("Mainiga a vertiba ir: %d\n",a);
 a = 126;
 printf("Mainiga a vertiba ir: %d\n",a);
 a = 127;
 printf("Mainiga a vertiba ir: %d\n",a);
// 1 byte -> 256 numbers
// => without sign 0 ... 255
// => with sign -128 ... 0 ... 127

 a = 128;
 printf("Mainiga a vertiba ir: %d\n",a);

 a = 258; //258 = 256 + 2 -> 1 0000 0001 | 0000 0010 |
 printf("Mainiga a vertiba ir: %d\n",a);

unsigned char b = 128;
 printf("Mainiga a vertiba ir: %d\n",b);

// int
int c;
 printf("int datu tipa izmers baitos: %ld\n",sizeof(c));
 // soreiz int atbilst 4 baiti
 // => without sign 0 ... (2^32-1)
 // => with sign -(2^31) ... 0 ... (2^31-1)

//---------------------------------------------------
float d = 6.5;//double
 printf("int datu tipa skaitla attelosanai: %f\n",d);
 printf("int datu tipa skaitla attelosanai: %.2f\n",d);
 printf("int datu tipa skaitla attelosanai: %.f\n",d);


 }
