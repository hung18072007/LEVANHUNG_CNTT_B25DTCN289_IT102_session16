#include<stdio.h>
#include<string.h>
int main(){
	char str[200];
	char x;
	int count =0;
	printf("Nhap vao mot chuoi bat ky:");
	fgets(str,200,stdin);
	str[strcspn(str,"\n")]='\0';
	int length=(int)strlen(str);
	printf("Nhap ki tu can tim:");
	scanf("%c",&x);
	for(int i=0;i<length;i++){
		if(str[i]==x){
			count++;
		}
	}
	printf("Ky tu %c xuat hien %d lan trong chuoi",x,count);
}

