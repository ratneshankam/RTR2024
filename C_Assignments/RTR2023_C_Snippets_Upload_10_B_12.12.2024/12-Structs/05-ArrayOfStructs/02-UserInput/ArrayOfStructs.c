#include <stdio.h>

#define NUM_EMPLOYEES 5 // simply change this constant value to have as many number of employee records as you please ...

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee
{
    char name_ra[NAME_LENGTH];
    int age_ra;
    float salary_ra;
    char sex_ra;
    char marital_status_ra[MARITAL_STATUS];
};

int main(void)
{
    // function prototypes
    void myGetString(char[], int);

    // variable declarations
    struct Employee employeeRecord_ra[NUM_EMPLOYEES]; // an array of <NUM_EMPLOYEES> struct - each being type 'struct employee'

    int i_ra;

    // code
    // ******* user input initialization of array of 'struct employee' ********
    for ( i_ra = 0; i_ra < NUM_EMPLOYEES; i_ra++)
    {
        printf("\n\n\n\n");
        printf("******* Data entry for employee number %d *******\n", (i_ra + 1));

        printf("\n\n");
        printf("Enter employee name : ");
        myGetString(employeeRecord_ra[i_ra].name_ra, NAME_LENGTH);
        printf("\n\n");
        printf("Enter employee age (in years): ");
        scanf("%d", &employeeRecord_ra[i_ra].age_ra);
        printf("\n\n");
        printf("Enter employee salary (in indian rupees): ");
        scanf("%f", &employeeRecord_ra[i_ra].salary_ra);
        printf("\n\n");
        printf("Enter employee sex (M/F): ");
        employeeRecord_ra[i_ra].sex_ra = getch();
        printf(" %c", &employeeRecord_ra[i_ra].sex_ra);
        employeeRecord_ra[i_ra].sex_ra = toupper(employeeRecord_ra[i_ra].sex_ra);
        printf("\n\n");
        printf("Enter employee marital status (M/S): ");
        
    }
    
    // ******** Employee 1 *********
    strcpy(employeeRecord_ra[0].name_ra, employee_rajesh_ra);
    employeeRecord_ra[0].age_ra = 30;
    employeeRecord_ra[0].sex_ra = 'M';
    employeeRecord_ra[0].salary_ra = 50000.0f;
    strcpy(employeeRecord_ra[0].marital_status_ra, "Unmarried");

    // *** Display ***
    printf("\n\n\n\n");
    printf("******* Displaying employee records *******\n\n");
    for (i_ra = 0; i_ra < NUM_EMPLOYEES; i_ra++)
    {
        printf("****** Employee number %d ******\n\n", (i_ra + 1));
        printf("Name        : %s\n", employeeRecord_ra[i_ra].name_ra);
        printf("Age        : %s\n", employeeRecord_ra[i_ra].age_ra);

        if (employeeRecord_ra[i_ra].sex_ra == 'M' || employeeRecord_ra[i_ra].sex_ra == 'm')
        {
            printf("Sex        : Male\n");
        }
        else
        {
            printf("Sex        : Female\n");
        }

        printf("Salary          : Rs. %f\n", employeeRecord_ra[i_ra].salary_ra);
        printf("Marital Status : %s\n", employeeRecord_ra[i_ra].marital_status);

        printf("\n\n");
    }
    return (0);
}

// *** Simple rudimentary implementation of gets_s() ***
// *** Implemented due to different behaviour of get_s() / fgets() / fscanf() on different platforms ***
// *** Backspace / character deletion and arrow key cursor movement not implemented ***

void myGetString(char str_ra[], int str_size_ra)
{
    // variable declarations
    int i_ra;
    char ch_ra = '\0';

    // code
    i_ra = 0;
    do
    {
        ch_ra = getch();
        str_ra[i_ra] = ch_ra;
        printf("%c", str_ra[i_ra]);
        i_ra++;
    } while ((ch_ra != '\r') && (i_ra < str_size_ra));

    if (i_ra == str_size_ra)
    {
        str[i_ra - 1] = '\0';
    }
    else
    {
        str[i_ra] = '\0';
    }
}