#include<stdio.h>
#include<math.h>
int sapxep(int a[], int n){
    if (a[n-1]>a[n-2])
        {
			int tg =a[n-1];
            a[n-1] = a[n-2];
            a[n-2] =tg;
        }
    return sapxep(a, n-1); 
}
int main()
{
    int a[50], n, i;
    printf ("Nhap n:"); 
    scanf ("%d", &n);
    for ( i=0; i<n; i++){
    	printf ("a[%d]=", i); 
        scanf ("%d", &a[i]);
    }
    printf ("Day da sap xep:"); 
    sapxep(a,n);
}
