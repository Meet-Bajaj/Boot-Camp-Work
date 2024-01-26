// Write a C program to read the roll no and marks of three subjects and calculate the total, percentage and division.
/* 
Test Data:-
-Input the Roll Number of the student :784
-Input the marks of Physics, Chemistry and Computer Application : 70 80 90
Expected Output :-
    Roll No : 784
    Marks in Physics : 70
    Marks in Chemistry : 80
    Marks in Computer Application : 90
    Total Marks = 240
    Percentage = 80.00
    Division = First
*/
#include<stdio.h>
int main() {
    long long int roll_no;
    int physics, chemistry, comp_app;

    printf("Enter the Roll Number of the Student: ");
    scanf("%lld", &roll_no);
    printf("Enter the Marks of Physics, Chemistry and Computer Application: ");
    scanf("%d %d %d", &physics, &chemistry, &comp_app);

    printf("Roll No.: %lld\n",roll_no);
    printf("Marks in Physics: %d\n",physics);
    printf("Marks in Chemistry: %d\n",chemistry);
    printf("Marks in Computer Application: %d\n",comp_app);

    float total_marks = (float)physics + (float)chemistry + (float)comp_app;
    float perc = (total_marks/3);

    printf("Total Marks = %.0f\n",total_marks);
    printf("Percentage = %.2f%%\n",perc);

    if(perc >= 80){
        printf("Division = First\n");
    }
    else if(perc >= 60 && perc < 80){
        printf("Division = Second\n");
    }
    else{
        printf("Division = Third\n");
    }
    return 0;
    }
    // Sample Input:
    //  Enter the Roll Number of the Student: 230301014
    //  Enter the Marks of Physics, Chemistry and Computer Application: 75 80 90
    // Output:
    //  Roll No.: 2301301014
    //  Marks in Physics: 75
    //  Marks in Chemistry: 80
    //  Marks in Computer Application: 90
    //  Total Marks = 245
    //  Percentage = 81.66%
    //  Division = First


