#include<stdio.h>
int main(){
	int n;
	int max=0,min=0;
	printf("So phan tu cua mang la:");
	scanf("%d",&n);
	int numbers[n];
	printf("Nhap gia tri cac phan tu:\n");
	for (int i = 0; i < n; i++ ){
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]);
	}
	max=numbers[0];
	min=numbers[0];
	for (int i = 0; i < n; i++ ){
		if (max<numbers[i]){
			max=numbers[i];
		}
		if (min>numbers[i]){
			min=numbers[i];
		}
	}
	printf("Gia tri lon nhat la:%d\n",max);
	printf("Gia tri nho nhat la:%d\n",min);
}
