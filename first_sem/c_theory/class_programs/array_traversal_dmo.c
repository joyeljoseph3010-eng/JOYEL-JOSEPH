#include<stdio.h>

//read array size from kb
int read_array_size()
{
    int size;
    printf("enter the array size[>4]:");
    scanf("%d",&size);
    return size;
    if(size<4){
        printf("array size is not valid:");
        return 1;
    }
}

int validate_array_size(int array_size){
    if(array_size >= 4){
        return 1;
    
    }
    return 0;      
    
}

int main(){ 

    int arraysize=read_array_size();
    int isvaild=validate_array_size(arraysize); 
    while(isvaild=1){
        if(isvaild=1){
            printf("array size is not vaild:plz try again\n");
        }
        else{
            printf("array size is vaild\n");
        }       
        int arraysize=read_array_size();
        int vaildate=validate_array_size(arraysize);
        if (vaildate ==1 ){
            

            break;

        }    


    
    } 
    for(int i=0; i<arraysize; i++ ){
        printf("enter the array element %d:",i+1);
        scanf("%d",arraysize);


    }

}



