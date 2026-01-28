#include<stdio.h>

int main(){

    int account_no,pin,choice,deposit=0,transfer,withdraw1,balance=0,total_transfer=0,r_accountno,withdraw=0,O_pin,N_pin,total_deposit=0;
    printf("------------------------nirali bank--------------------------\n");

    printf("enter account number:");
    scanf("%d",&account_no);

    printf("enter pin:");
    scanf("%d",&pin);

    printf("login successful✅\n");

    do
    {
    printf("\n.......................menu........................\n");
    printf("1.deposit\n");
    printf("2.withdraw\n");
    printf("3.check balance\n");
    printf("4.transaction history\n");
    printf("5.transfer money\n");
    printf("6.change pin\n");
    printf("7.exit\n");
   
    printf("enter your choice:");
    scanf("%d",&choice);
    printf("------------------------------------------------------------\n");

    if(choice==1)
    {
        printf("depositing money\n");
        printf("enter amount to deposit:");
        scanf("%d",&deposit);
        total_deposit += deposit;
        balance += deposit;
        printf("amount deposited successfully✅\n");
        printf("current balance:%d\n",balance);
    }
    else if(choice==2)
    {
       
        printf("withdrawing money\n");
        printf("enter amount to withdraw:");
        scanf("%d",&withdraw1);
        if(withdraw1>balance)
        {
            printf("insufficient balance❌\n");
        }
        else
        {
            withdraw+=withdraw1;
            balance-=withdraw1;
            printf("amount withdrawn successfully✅\n");
            printf("current balance:%d\n",balance);
        }
    }

    else if(choice==3)
    {
       
        printf("checking balance...\n");
        printf("current balance:%d\n",balance);
    }

    else if(choice==4)
    {
        printf("transaction history\n");

        printf("deposited amount:%d\n",total_deposit);
        printf("withdrawn amount:%d\n",withdraw);
        printf("current balance:%d\n",balance);
        printf("total transferred amount: %d\n", total_transfer);
        printf("------------------------------------------------------------\n");
        
    }

    else if(choice==5)
    {
    printf("transferring money\n");
    printf("enter account number to transfer money:");
    scanf("%d",&r_accountno);

    printf("enter amount to transfer:");
    scanf("%d",&transfer);

         if(transfer > balance)
        {
          printf("insufficient balance❌\n");
        }
         else
        {
          total_transfer += transfer;  
          balance -= transfer;
          printf("amount transferred successfully✅\n");
          printf("current balance:%d\n",balance);
          printf("receiver balance:%d\n",transfer);
        }
}

    else if (choice==6)
    {
    
        printf("changing pin\n");
        printf("enter old pin:");
        scanf("%d",&O_pin);

        if(pin!=O_pin)
        {
            printf("incorrect pin❌\n");
            continue;
        }
        printf("enter new pin:");
        scanf("%d",&N_pin);
        pin=N_pin;
        printf("pin changed successfully✅\n");
    }

    else if (choice==7)
    {
        printf("exiting\n");
        
        printf("thank you for using nirali bank!😊\n");
       
    }
    else
    {
        printf("invalid choice❌\n");
        
    }
    }while(choice!=7);

    return 0;

}