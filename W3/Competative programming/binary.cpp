#include "bits/stdc++.h"
using namespace std;


void printBinary(int num) {
   for (int i = 10; i >= 0; --i)
   {
      printf("%d", ((num >> i) & 1));
   }
   printf(("\n"));
}

void ifSetbit(int n , int i){
   if(n & (1 << i))
      printf("set bit");
   else
      printf("unset bit");
}

int setBit(int num , int i){
   return num | ( 1 << i);
}
int usetBit(int num , int i){
   return num & ~(1<<i);
}
int tougleBit(int num , int i){
   return num ^ (1 << i);
}

int countSetbit(int num ){
   int count = 0;
   for (int i = 0; i < 31; i++)
   {
      if( num & (1 << i))           //if((num >> i) & 1)  
         count++ ;
   }
   return count;
}

void findOE(int num ){
   if(!(num & 1)) printf(" Even");
   else printf("Odd");
}

int devideBy2(int num){
   return (num >> 1);
}

int multBy2(int num){
   return num << 1;
}

int upperCase(int num){
   return num & ~(' ');  //'_'
}
int lowerCase(int num){
   return num | ' ';
}

int swapVal(int a , int b){
   a = a ^ b;
   b = a ^ b;
   a = a ^ b;
   printf("%d %d",a,b);
}





int main() {
   int num = 144;
   int i = multBy2(num);
   char c = 'A';
   char a = lowerCase(c);

   printBinary(c);
   printf("%c \n",c);
   printBinary(a);
   printf("%c",a);

   return 0;
}