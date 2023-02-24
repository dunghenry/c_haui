#include <stdio.h>
#include <string.h>
// mehtods: strlen, strcpy, strcat, strcmp, strrev, strlwr, strupr, strstr(string, match)
int main()
{
    char hoten[256];
    char copyHoten[256];
    printf("Nhap ho ten: ");
    fflush(stdin);
    gets(hoten);
    // printf("Ten cua ban la: %s", hoten);
    // printf("\n");
    puts(hoten);
    // Copy chuoi
    strcpy(copyHoten, hoten);
    printf("Ho ten copy: %s", copyHoten);
    // Noi hai chuoi
    strcat(hoten, " Oke");
    puts(hoten);
    // So sanh hai chuoi
    // d > D
    printf("%5d", strcmp("Dung", "dung"));
    printf("\n");
    printf("%s", strrev(hoten));
    printf("\n");
    printf("%s", strlwr(hoten));
    printf("\n");
    printf("%s", strupr(hoten));
    printf("\n");
    char *sub;
    sub = strstr(hoten, "NU");
    printf("\nChuoi con la: %s", sub);
    return 0;
}
