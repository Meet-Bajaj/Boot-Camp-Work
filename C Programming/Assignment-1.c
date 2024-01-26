//Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
#include<stdio.h>
int main() {
    int x, y;
    printf("Enter Coordinate point in X and Y :");
    scanf("%d %d",&x,&y);
    if(x>0 && y>0){
        printf("Coordinates Lies In 1st Quadrant\n");
    }
    else if(x<0 && y>0){
        printf("Coordinates Lies In 2nd Quadrant\n");
    }
    else if(x<0 && y<0){
        printf("Coordinates Lies In 3rd Quadrant\n");
    }
    else if(x>0 && y<0){
        printf("Coordinates Lies In 4th Quadrant\n");
    }
    else if(x==0 && y==0){
        printf("Coordinate Points Lies on The Origin.\n");
    }
    else {
        printf("Invalid Input!!");
    }
    return 0 ;
}