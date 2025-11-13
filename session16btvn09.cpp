#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Nhap vao mot chuoi bat ky:");
	fgets(str,200,stdin);
	str[strcspn(str,"\n")]='\0';
    char kyTu;
    char ketQua[200];
    int j = 0;

    printf("Chuoi ban dau: %s\n", str);
    printf("Nhap vao mot ky tu can xoa: ");
    scanf("%c", &kyTu);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != kyTu && str[i] != kyTu - 32 && str[i] != kyTu + 32) { 
            ketQua[j++] = str[i];
        }
    }

    ketQua[j] = '\0'; // K?t thúc chu?i k?t qu?

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", kyTu, ketQua);

    return 0;
}

