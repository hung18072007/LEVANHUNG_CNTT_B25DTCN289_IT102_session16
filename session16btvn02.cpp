#include<stdio.h>
#include<string.h>
int main(){
	char str[200];
	printf("Nhap vao mot chuoi bat ky:");
	fgets(str,200,stdin);
	str[strcspn(str,"\n")]='\0';
	int length=(int)strlen(str);
	for(int i=0;i<length;i++){
		printf("%c",str[i]);
		printf(" ");
	}
}
