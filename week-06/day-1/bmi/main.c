#include <stdio.h>
#include <stdlib.h>

main()
{
    double massInKg = 81.2;
    double heightInM = 1.78;
    double bmi = massInKg / (heightInM * heightInM);

    printf("The Bmi index is %.2f", bmi);

}
