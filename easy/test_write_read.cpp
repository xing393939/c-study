#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int main(void) {
    FILE *fp1 = fopen("int.txt", "wb");
    int data1[4] = {1, 2, 3, 4};
    fwrite(data1, sizeof(int), 4, fp1);
    fclose(fp1);

    FILE *fp2 = fopen("int.txt", "rb");
    int data2[4];
    fread(data2, sizeof(int), 4, fp2);
    fclose(fp2);
    for (int i = 0; i < 4; i++) {
        printf("%d\n", data1[i]);
    }

    typedef struct {
        int age;
        char name[30];
    } people;
    FILE *fp3 = fopen("people.txt", "wb");
    people per1[2];
    per1[0].age = 18;
    strcpy(per1[0].name, "wa");
    per1[1].age = 20;
    strcpy(per1[1].name, "li");
    fwrite(per1, sizeof(people), 2, fp3);
    fclose(fp3);

    FILE *fp4 = fopen("people.txt", "rb");
    struct stat buf;
    stat("people.txt", &buf);
    int rows = buf.st_size / sizeof(people);
    people per2[rows];
    fread(per2, sizeof(people), rows, fp4);
    fclose(fp4);
    for (int i = 0; i < rows; i++) {
        printf("%d %s\n", per2[i].age, per2[i].name);
    }

    return 0;
}