#include<stdio.h>
int main(){ 
    int arraysize=read_array_size();
    int isvaild=validate_array_size(arraysize); 
    if(isvaild == 0){
        
        
    }    
}
int read_array_size(){
    int size;
    printf("enter the array size[>4]:");
    scanf("%d",&size);
    return size;
}

int validate_array_size(int array_size){
    if(array_size >= 4){
        return 1;
    
    }
    return 0;      
    
}





