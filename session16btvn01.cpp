#include<stdio.h>
#include<string.h>
int main(){
	char str[200];
	printf("Nhap vao mot chuoi bat ky:");
	fgets(str,200,stdin);
	str[strcspn(str,"\n")]='\0';
	printf("Chuoi vua nhap :%s",str);
}

