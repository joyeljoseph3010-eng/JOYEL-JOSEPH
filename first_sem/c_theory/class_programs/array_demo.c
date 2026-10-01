#include<stdio.h>
int main(){
    int sub_marks[5];   //declares an array 'sub_marks'
    //with size 5 of 'int' type
    //storing data/array initialization - array_name[index]=data/value;
    sub_marks[0]=80;  //stores '80' in an array position whose index is '0'
    sub_marks[1]=78;
    sub_marks[2]=68;
    sub_marks[3]=58;
    sub_marks[4]=88;   //static array initialization

    //fetch first array element from 'sub_marks'

    printf("first subject mark: %d\n",sub_marks[0]);
    printf("second subject mark: %d\n",sub_marks[1]);
    printf("third subject mark: %d\n",sub_marks[2]);
    printf("fourth subject mark: %d\n",sub_marks[3]);
    printf("first subject mark: %d\n",sub_marks[4]);
    


}