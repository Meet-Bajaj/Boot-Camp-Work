// Write a C program to determine eligibility for admission to a professional course based on the following criteria:
// Marks in Maths >=65
// Marks in Phy >=55
// Marks in Chem>=50
// Total in all three subject >=190
//            or
// Total in Math and Physics >=140.
#include<stdio.h>
int main() {
    int maths,phy,chem;
    printf("Enter marks in Maths: ");
    scanf("%d",&maths);
    printf("Enter marks in Physics: ");
    scanf("%d", &phy);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chem);
    if ((maths >= 65) || (phy >= 55)|| (chem >= 50))
    {
        printf("You are Eligible for Admission.\n");
    }
    else if((maths + phy + chem) >= 190 || ( maths + phy) >= 140 )
    {
         printf("You are Eliginle for Admission.\n");
    }
    else{
        printf("Sorry! You are not eligible for admission.");
    }
return 0 ;
}