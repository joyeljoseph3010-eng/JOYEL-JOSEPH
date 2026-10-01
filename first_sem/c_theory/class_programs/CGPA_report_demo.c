#include<stdio.h>
int rollno;
float marks1,marks2,marks3,marks4,marks5;
float total,average,gpa,cgpa;
void getstudent(){
    printf("enter the roll number");
    scanf("%d",&rollno);
    printf("enter the marks of 5 subject:\n");
    printf("1.subject1:");
    scanf("%f",&marks1);
    printf("2.subject2:");
    scanf("%f",&marks2);
    printf("3.subject3:");
    scanf("%f",&marks3);
    printf("4.subject4:");
    scanf("%f",&marks4);
    printf("5.subject5:");
    scanf("%f",&marks5);
} 
void gettotal(){
    total = marks1 + marks2 + marks3 + marks4 + marks5;   
}
void getaverage(){
    average = total / 5;

}
void getcgpa(){
    cgpa = average / 9.5;
} 
void displaystudentdetails(){
    printf("\n -----student cgpa report-----\n");
    printf("roll number : %d\n",rollno);
    printf("total marks : %.2f\n",total);
    printf("average :%2f\n.",average);
    printf("cgpa : %.2f\n",cgpa);
}       


    
    


int main(){
    getstudentdata();
    gettotal();
    getaverage();
    getcgpa();
    displaystudentdetails();





}    
