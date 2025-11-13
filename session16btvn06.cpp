#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char chuoi[200];
    int dem = 0;
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';
    for (int i = 0; i < strlen(chuoi); i++) {
        if (isalpha(chuoi[i])) {
            dem++;
        }
    }
    printf("So ky tu la chu cai trong chuoi la: %d\n", dem);

    return 0;
}

