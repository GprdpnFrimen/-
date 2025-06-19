#include <8051.h>
void tput(unsigned char c1)
{
SBUF=c1; 
while(!TI);
TI=0; 
}
void main()
{
char z;
int i;
unsigned char src[10]={'a','b','c','d','e','f','g','h','i','j'};
PCON=0x80;
for(i=0; i<10; i++)
{
ACC=src[i];
SCON = 0x88;
tput (src[i]);
}
while(1){}
}