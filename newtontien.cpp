#include<stdio.h>
#include<math.h>
int main(){
	int i,j,n;
	float xp,x,y[100],D[100], p=0,h;
	printf ("Nhap n:");
	scanf ("%d",&n);
	printf ("Nhap gia tri y:");
	for (i=0; i<n; i++){
		printf ("y[%d]=",i);
		scanf("%f",&y[i]);
	}
	printf ("Nhap gia tri x0:");
	scanf ("%f",&x);
	printf("Nhap h:");
	scanf("%f",&h);
	printf ("Nhap gia tri x can tim:");
	scanf("%f",&xp);
	float t=(xp-x)/h;
	for(i=0; i<=n-1;i++){
		D[i]=(y[i+1]-y[i])/h;
	}
	p = p + t*D[0];
	for(j=2; j<=n; j++){
		for (i=0; i<=n-j;i++){
			D[i]=(D[i+1]-D[i])/h;
		}
		t = t*(t-j+1)/j;
		p = p + t*D[0];
	}
	printf ("Gia tri gan dung la:%.2f",p);
}