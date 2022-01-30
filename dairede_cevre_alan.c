#include <stdio.h>
#include<conio.h>

int main(){
	float pi=3.14 ;
	float yaricap , cevre , alan;
	printf("yaricapi giriniz:");
	scanf("%f",&yaricap);
	
	cevre= (2*pi*yaricap);
	alan= pi*yaricap*yaricap;
	printf("yaricap:%.2f, cevre:%.2f, alan:%.2f",yaricap,cevre,alan);
	getch();
	return 0;
}

