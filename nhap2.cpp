#include<bits/stdc++.h> 
#define ptp main

typedef struct{
	char hoten[20];
	float diemtrungbinh;
	char truong[20];
}danhsach;

ptp() {
	FILE *in, *out;
	in= fopen("innhap2","r");
	if(in == NULL){
		puts("loi doc tep !");
		return 0;
	}

	int n; fscanf(in,"%d\n",&n);
	danhsach *ds;  ds = (danhsach*)malloc(sizeof(danhsach)*n); 
	for(int i=0; i<n;i++){
		fgets(ds[i].hoten, 20, in);
		fscanf(in,"%f\n",  &ds[i].diemtrungbinh);
		fgets(ds[i].truong, 20, in);
	}
	fclose(in);

	out=fopen("outnhap.txt", "w");
	for(int i=0;i<n;i++){
		fprintf(out, "thong tin hoc sinh thu %d la : \n",i+1);
		fprintf(out,"ho va ten : %s",ds[i].hoten);
		fprintf(out,"diem trung binh : %.2f\n",ds[i].diemtrungbinh);
		fprintf(out,"ho va ten : %s",ds[i].truong);
	}
	fclose(out);
	return 0;
}