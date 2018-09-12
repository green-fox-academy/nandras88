#include<stdio.h>

main()
{
    double semester = 17;


    double daily_hours = 6;


    double work_hours = 52;


    double coding_hours = (semester * daily_hours) * 5;

    double conding_presentage = coding_hours / (semester * work_hours) * 100 ;

    printf("The coding hours is %.0f\n", coding_hours);
    printf("The presentage of coding hours is %.2f", conding_presentage);

}
