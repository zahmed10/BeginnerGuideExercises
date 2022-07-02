#include <stdio.h>

main(){
    int ctr; //loop counter
        int idSearch; // Customer to look for the (key)
        int found=0; // 1 (true) if customer is found

        int custID[10] ={313,453,502,101,892,475,792,912,343,633};
        float custBal[10]={0.00,45.43,71.23,301.56,9.08,192.41,389.00,
        229.67,18.31,59.54};
        int tempID,inner,outer,didSwap,i; //For sorting
        float tempBal;

        for (outer=0; outer<9; outer++){
            didSwap=0;
            for(inner=outer; inner<10; inner++){
                if (custID[inner]< custID[outer]){
                    tempID=custID[inner];
                    tempBal=custBal[inner];

                    custID[inner]=custID[outer];
                    custBal[inner]=custBal[outer];
                    custID[outer]=tempID;
                    custBal[outer]=tempBal;
                    didSwap=1;
                }
            }
            if (didSwap==0){
                break;
            }
        }
        printf("What is the customer number? ");
        scanf(" %d", &idSearch);

        for (ctr=0; ctr<10; ctr++){
            if (idSearch==custID[ctr]){
                found=1;
                break;
            }
            if (custID[ctr]>idSearch){
                break;
            }
        }
        if (found){
            if (custBal[ctr]>100){
                printf("\n** That customer's balance is $%.2f.\n", 
                custBal[ctr]);
                printf("No additional credit.\n");
            } else {
                printf("\n**The customer's credit is good!\n");
            } 
        } else {
            printf("** You have entered an incorrect customer ID.");
            printf("\n ID %3d was not found in the list.\n", idSearch);
        }

        return(0);
}