#include<AT89X52.H>
void serial(unsigned char);
void main(void)
{
TMOD=0X20;
TH1=0XFD;
SCON=0X50;
TR1=1;
while(1)
{
serial('y');
 serial('e');
serial('s');
}
}
void serial(unsigned char X)
{
SBUF=X;
while(TI==0);
TI=0;
}
