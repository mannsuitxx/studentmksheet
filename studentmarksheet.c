/*
------------------------------------------------------------------------------
 Made and submitted by: Mannat Suthar
 Contact: mannatsuthar38@gmail.com
------------------------------------------------------------------------------
*/
#include<stdio.h>
#include<conio.h>
char getGrade(float marks){
    if(marks > 90) return 'A';
    else if (marks > 80 ) return 'B';
    else if (marks > 70 ) return 'C';
    else if (marks > 60 ) return 'D';
    else if (marks > 50 ) return 'E';
    else return 'F';
}
int main(){
    char name[50];
    int rollno, sem;
    float fop, ephy, beee, bcps , math;
    float marks;

    // DATA ENTRY FOR STUDENT 
    printf("\n\t\t-- MARKSHEET MAKER TOOL --\n");
    printf("\n\t\tENTER THE STUDENT NAME : ");
    scanf("%s", &name);
    printf("\n\t\tENTER THE STUDENT ROLL NO : ");
    scanf("%d", &rollno);
    printf("\n\t\tENTER THE SEMISTER  : ");
    scanf("%d", &sem);
    
    // GETTING THE GRADE FROM THE USER
    printf("\n\n\n\t\t-- STUDENT MARKS --\n");  
    printf("\n\t\tENTER MARKS OF F.O.P : ");
    scanf("%f", &fop);
    while ( fop < 0 || fop > 100)
    {
        printf("\n\t\tINVALID MARKS PLEASE RANGE MARKS BETWEEN 0-100!\n");
        printf("\n\t\tENTER MARKS OF F.O.P : ");
        scanf("%f", &fop);
    }
    printf("\n\t\tENTER THE MARKS OF ENGG. PHYSICS : ");
    scanf("%f", &ephy);
    while ( ephy < 0 || ephy > 100)
    {
        printf("\n\t\tINVALID MARKS PLEASE RANGE MARKS BETWEEN 0-100!\n");
        printf("\n\t\tENTER THE MARKS OF ENGG. PHYSICS : ");
        scanf("%f", &ephy);
        
    }
    printf("\n\t\tENTER THE MARKS OF B.E.E.E : ");
    scanf("%f", &beee);
    while ( beee < 0 || beee > 100)
    {
        printf("\n\t\tINVALID MARKS PLEASE RANGE MARKS BETWEEN 0-100!\n");
        printf("\n\t\tENTER THE MARKS OF B.E.E.E : ");
        scanf("%f", &beee);
    }
    printf("\n\t\tENTER THE MARKS OF B.C.P.S : ");
    scanf("%f", &bcps);
    while ( bcps < 0 || bcps > 100)
    {
        printf("\n\t\tINVALID MARKS PLEASE RANGE MARKS BETWEEN 0-100!\n");
        printf("\n\t\tENTER THE MARKS OF B.C.P.S : ");
        scanf("%f", &bcps);
    }
    printf("\n\t\tENTER THE MARKS OF MATHS : ");
    scanf("%f", &math);
    while ( math < 0 || math > 100)
    {
        printf("\n\t\tINVALID MARKS PLEASE RANGE MARKS BETWEEN 0-100!\n");
        printf("\n\t\tENTER THE MARKS OF MATHS : ");
        scanf("%f", &math);
    }

    // CALCULATION ALGO
    float total = fop + ephy + beee + bcps + math;
    marks = (total/500)*100;

    // RESULT PRINTING
    printf("\n\t\t+-------------------+---------+-------+");
    printf("\n\t\t|      KADI SARVA VISHWA-VIDHYALAYA   |");
    printf("\n\t\t+-------------------+---------+-------+");
    printf("\n\t\t| NAME : %s  SEM : %d  ROLL NO : %d |", name, sem, rollno);
    printf("\n\t\t+-------------------+---------+-------+");
    printf("\n\t\t|        SUBJECT    |  MARKS  | GRADE |");
    printf("\n\t\t|      FOP MARKS    |  %-.2f  |   %c   |", fop, getGrade(fop) );
    printf("\n\t\t|     E.PHY MARKS   |  %-.2f  |   %c   |", ephy, getGrade(ephy) );
    printf("\n\t\t|    B.E.E.E MARKS  |  %-.2f  |   %c   |", beee, getGrade(beee) );
    printf("\n\t\t|    B.C.P.S MARKS  |  %-.2f  |   %c   |", bcps, getGrade(bcps) );
    printf("\n\t\t|     MATHS MARKS   |  %-.2f  |   %c   |", math, getGrade(math) );
    printf("\n\t\t+-------------------+-------+-------+");
    printf("\n\t\t|     TOTAL MARKS   | %-.2f  |   %c   |", total, getGrade(total) );
    printf("\n\t\t|     PERCENTAGE    |  %-.2f  |   %c   |", marks, getGrade(marks) );
    printf("\n\t\t+-------------------+-------+-------+");

/*
------------------------------------------------------------------------------
 Made and submitted by: Mannat Suthar
 Contact: mannatsuthar38@gmail.com
------------------------------------------------------------------------------
*/
}