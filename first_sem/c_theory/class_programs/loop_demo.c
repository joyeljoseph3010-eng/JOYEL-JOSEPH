#include<stdio.h>
int main(){
    int choice;
    int accountno=1000;
    float balance=500;
     int amount=200;
    int i=1;
    printf("----welcome to my bank----\n");

    while(i==1){
    printf("1.deposit\n");
    printf("2.withdraw\n");
    printf("3.account view\n");
    printf("4.exit\n");
{
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
      
        case 1: 
            printf("enter the accountno:\n");
            scanf("%d",&accountno);
            if (accountno ==1000)
            {
 
                printf("accountno:");
                scanf("%f",&amount);
                if(amount <= balance) {
                    balance -= amount;
                    printf("%.2f withdrawn successfully\n", amount);
                } else {
                    printf("Insufficient balance\n");
                }
                break;

            case 3: 
                printf("Your current balance is: %.2f\n", balance);
                break;

            case 4: 
                printf("Thank you for using my bank\n");
                return 0;

            default:
                printf("Invalid option\n");
    }        
                    
    }
}
    return 0;
    }
              

    
}