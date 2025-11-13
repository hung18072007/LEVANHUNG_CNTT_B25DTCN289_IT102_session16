#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Nhap vao mot chuoi bat ky:");
	fgets(str,200,stdin);
	str[strcspn(str,"\n")]='\0';
    printf("Chuoi: %s\n\n", str);
    printf("So lan xuat hien cua tung ky tu:\n");
    for (int i = 0; i < strlen(str); i++) {
        int dem = 1;

        if (str[i] == '0')
            continue;
        for (int j = i + 1; j < strlen(str); j++) {
            if (str[i] == str[j]) {
                dem++;
                str[j] = '0';
            }
        }
        printf("%c: %d\n", str[i], dem);
    }

    return 0;
}

