#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	float x[100], y[100], xp, yp=0, p;
	int i,j,n;
	printf ("Nhap so phan tu(n):");
	scanf ("%d",&n);
	printf ("Nhap ham so cho boi bang:\n");
	for (i=1; i<=n; i++){
		printf ("x[%d]=",i);
		scanf ("%f",&x[i]);
		printf ("y[%d]=",i);
		scanf ("%f",&y[i]);
	}
	printf ("\nNhap diem noi suy:");
	scanf("%f",&xp);
	for (i=1; i<=n; i++){
		p=1;
		for(j=1; j<=n; j++){
			if(i!=j){
				p = p* (xp-x[j])/(x[i]-x[j]);
			}
		}
		yp += y[i]*p;
	}
	printf ("\nGia tri noi suy la %f",yp);
}