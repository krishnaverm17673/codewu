#include <stdio.h>

struct Emp {
    char name[30];
    int id;
};

int main() {
    struct Emp e = {"Ravi", 10}, r;

    FILE *fp = fopen("emp.bin", "wb");
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    fp = fopen("emp.bin", "rb");
    fread(&r, sizeof(r), 1, fp);

    printf("%s %d", r.name, r.id);

    fclose(fp);
    return 0;
}
