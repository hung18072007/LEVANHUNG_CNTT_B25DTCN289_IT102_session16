#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	char str[200];
	printf("Nhap vao mot chuoi bat ky:");
	fgets(str,200,stdin);
	str[strcspn(str,"\n")]='\0';
	int length=(int)strlen(str);
	int i=0;
	while(str[i]!='0'){
		if(i==0||str[i-1]==' '&&str[i]!=' '){
			str[i]=toupper(str[i]);
		}
		i++;
	}
	printf("Chuoi sau khi format: .%s",str);
}

