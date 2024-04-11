#include<stdio.h>
#include<math.h>
void nhapmang(int n, int a[]){
	for (int i=0; i<n; i++){
		printf ("a[%d]=", i);
		scanf ("%d", &a[i]);
	} 
} 

int ktranguyento(int n, int a[]){
	for (int i=0; i<n; i++){
		for (int j=2; j*j<=a[i]; j++)
			if (a[i]%j==0)
				return 0; 
	}  
	return 1; 
} 

int main()
{
	int n, a[100];
	printf ("Nhap so phan tu cua mang:");
	scanf ("%d", &n);
	nhapmang(n,a);
	if (ktranguyento(n,a)==1)
		printf ("\nMang chua toan so nguyen to");
	else 
		printf ("\nMang khong chua toan bo so nguyen to"); 
}
