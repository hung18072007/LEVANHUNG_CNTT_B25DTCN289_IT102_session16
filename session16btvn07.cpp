#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chuoi[200];
    printf("Nhap vao mot chuoi bat ky:");
	fgets(chuoi,200,stdin);
	chuoi[strcspn(chuoi,"\n")]='\0';
    int chuCai = 0, chuSo = 0, kyTuDacBiet = 0;

    for (int i = 0; i < strlen(chuoi); i++) {
        if (isalpha(chuoi[i])) {  
            chuCai++;
        } else if (isdigit(chuoi[i])) { 
            chuSo++;
        } else if (!isspace(chuoi[i])) { 
            kyTuDacBiet++;
        }
    }
    printf("Chuoi: %s\n", chuoi);
    printf("So ky tu la chu cai: %d\n", chuCai);
    printf("So ky tu la chu so: %d\n", chuSo);
    printf("So ky tu dac biet: %d\n", kyTuDacBiet);

    return 0;
}

