#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer
{
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct
{
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer pc;
    pc.cpu_speed_GHz = 3.7;
    pc.ram_size_GB = 16;
    pc.bits = 64;

    Notebook notes;
    notes.cpu_speed_GHz = 2.8;
    notes.ram_size_GB = 8;
    notes.bits = 64;

    printf("My computer CPU Speed is %.f\n", pc.cpu_speed_GHz);
    printf("My computer RAM SIZE is %d\n", pc.ram_size_GB);
    printf("My computer BITS is %.d\n", pc.bits);
    printf("My notebook CPU Speed is %.f\n", notes.cpu_speed_GHz);
    printf("My notebook RAM SIZE is %d\n", notes.ram_size_GB);
    printf("My notebook BITS is %.d\n", notes.bits);

    return 0;
}