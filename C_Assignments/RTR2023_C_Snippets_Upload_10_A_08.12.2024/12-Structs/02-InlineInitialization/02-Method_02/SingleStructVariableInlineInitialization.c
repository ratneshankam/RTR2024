#include <stdio.h>

// Defining Struct
struct MyData
{
    int i_ra;
    float f_ra;
    double d_ra;
    char c_ra;
}; 

struct MyData data = {9, 8.2f, 9.61998, 'P'};

int main(void)
{
    // code
    // displaying values of the data members of 'struct MyData'
    printf("\n\n");
    printf("Data members of 'struct MyData' are : \n\n");
    printf("i = %d\n", data.i_ra);
    printf("f = %f\n", data.f_ra);
    printf("d = %lf\n", data.d_ra);
    printf("c = %c\n\n", data.c_ra);

    return (0);
}