#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
	printf("Nhap vao mot chuoi bat ky:");
	fgets(str,200,stdin);
	str[strcspn(str,"\n")]='\0';
	int length=(int)strlen(str);
    int count = 0;  
    int trongTu = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && trongTu == 0) { 
            count++; 
            trongTu = 1;
        } 
        else if (str[i] == ' ') {
            trongTu = 0;
        }
    }
    printf("Chuoi: %s\n", str);
    printf("So tu trong chuoi la: %d\n",count);
    return 0;
}

