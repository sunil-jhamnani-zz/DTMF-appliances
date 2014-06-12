#include<reg51.h>
sbit A1=P2^0;
sbit A2=P2^1;
sbit B1=P2^2;
sbit B2=P2^3;
void main()
{
 int temp=0;
 A1=A2=B1=B2=0;
 P1=0xff;
 while(1)
 {
  temp=0x0f&P1;
  if(temp==0x02)
     {
	  
	  A1=1;
	  A2=0;
	  B1=1;
	  B2=0;
	 }
  if(temp==0x08)
     {
	  A1=0;
	  A2=1;
	  B1=0;
	  B2=1;
	 
	 }
  if(temp==0x04)
     {
	  A1=0;
	  A2=1;
	  B1=1;
	  B2=0;
	 	  
	 } 
 if(temp==0x06)
     {
	  A1=1;
	  A2=0;
	  B1=0;
	  B2=1;
	 }
 if(temp==0x01)
     {
	  A1=0;
	  A2=0;
	  B1=1;
	  B2=0;
	 }
if(temp==0x03)
     {
	  A1=1;
	  A2=0;
	  B1=0;
	  B2=0;
	 }

 if(temp==0x05)
     {
	  A1=1;
	  A2=1;
	  B1=1;
	  B2=1;
	 }
 }
}