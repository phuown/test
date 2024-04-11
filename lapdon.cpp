#include<stdio.h>
#include<math.h>
#include<conio.h>
float g(float x){
	return pow(x+1,1.0/3);
}
int main(){
	float x0,k,err,saiso;
	printf ("Nhap x0,k,err:");
	scanf ("%f%f%f",&x0,&k,&err);
	float x1;
	do{
		x1=g(x0);
		saiso=fabs(x1-x0);
		x0=x1;
		printf ("%f\n",x1);
	}while(saiso<err*(1-k)/k);
}