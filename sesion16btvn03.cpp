#include<stdio.h>
#include<string.h>
int main(){
	char str[200];
	printf("Nhap vao mot chuoi bat ky:");
	fgets(str,200,stdin);
	str[strcspn(str,"\n")]='\0';
	int length=(int)strlen(str);
	printf("Chuoi ban dau:%s",str);
	printf("\nChuoi dao nguoc:");
	for(int i=length-1;i>=0;i--){
		printf("%c",str[i]);
	}
	printf("\n");
}
