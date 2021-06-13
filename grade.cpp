#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
int main()
{
    char result[15];
    char grade;
    printf("Enter the grade \n");
    scanf("%c", &grade);
    grade = toupper(grade);
    switch(grade)
    {
    case 'E':
        strcpy(result, " EXCELLENT");
        break;
    case 'V':
        strcpy(result, " VERY GOOD");
        break;
    case 'G':
        strcpy(result, " GOOD");
        break;
    case 'A':
        strcpy(result, " AVERAGE");
        break;
    case 'F':
        strcpy(result, " FAIL");
        break;
    default :
        strcpy(result, "ERROR IN GRADE \n");
        break;
    }
    printf("RESULT  : %s\n", result);
return 0;
}
