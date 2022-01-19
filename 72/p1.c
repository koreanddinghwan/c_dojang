#include <stdio.h>
#include <string.h>

struct Point2D {
    float x;
    float y;
} __attribute__((aligned(1), packed));

struct RectangleFileFormat {
    short magic;
    int version;
    struct Point2D p1;
    struct Point2D p2;
    char desc[30];
} __attribute__((aligned(1), packed));

int main()
{
    struct RectangleFileFormat rf;
    memset(&rf, 0, sizeof(rf));

    rf.magic = 're';
    rf.version = 1;
    rf.p1.x = 4.5f;
    rf.p1.y = 2.1f;
    rf.p2.x = 9.2f;
    rf.p2.y = 8.7f;
    strcpy(rf.desc, "Rectangle File Format");

    FILE *fp = fopen("rect.bin", "wb");


    fwrite(&rf, sizeof(rf), 1, fp);

    fclose(fp);

    return 0;
}
