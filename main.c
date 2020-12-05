#include <stdio.h>
#include "myBank.h"

    int main() {
        char func;
        int AccountNumber;
        double interest_rate=0;
        double amount=0;
        

       do
        {

        printf("Please choose a transaction type \nO-Open Account \nB-Balance Inquiry \nD-Deposit \nW-Withdrawal \nC-Close Account \nI-Interest \nP-Print \nE-Exit: \n");
        scanf(" %c",&func);
        

                switch (func) 
                {
                case 'O': 
                printf("Please enter amount for deposit :");
                if((scanf("%lf",&amount)==0)){
                	printf("Failed to read the amount\n"); 
                	printf("\n");
                	break;
                }

                else{
                	printf("New account number is: ");
                	scanf("%lf",&amount);
                }
                Open(amount);
                printf("\n");
                break;

                case 'B':
                printf("Please enter account number :");
                if(scanf(" %d",&AccountNumber)==0){
                	printf("Failed to read the account number\n");
                	break;
                	
                }
                Blance(AccountNumber); 
                printf("\n");
                break;

                case 'D':
                printf("Please enter account number:");
              if(scanf(" %d",&AccountNumber)==0){
              	printf("Failed to read the account number");
              	printf("\n");
              	break;
              }
             	if(scanf(" %lf",&amount)==0){
             		printf("Failed to read the amount");
             		printf("\n");
             		break;
             	}
             	printf("The new balace is:");
                Depositee(AccountNumber,amount);
                printf("\n");
                break;

                case 'W':
                printf("Please enter account number?: ");
                if(scanf(" %d",&AccountNumber)==0){
                	printf("Failed to read the account number");
                	printf("\n");
                	break;
                }
                printf("Please enter the amount to withdraw: ");
                if(scanf(" %lf",&amount)==0){
                	printf("Failed to read the amount");
                	printf("\n");
                	break;
                }
                Withdrawal(AccountNumber,amount);
                printf("\n");
                break;

                case 'C':
                printf("Please enter account number?: ");
                if(scanf(" %d",&AccountNumber)==0){
                	printf("Failed to read the account number\n");
                	printf("\n");
                	break;
                }
                Close(AccountNumber);
                printf("\n");
                break;

                case 'I':
                printf("Please enter interst rate: ");
                if(scanf(" %lf",&interest_rate)==0){
                	printf("Failes to read the invalid interst rate");
                	break;
                }

                Interest(interest_rate);
                break;

                case 'P':
                
                Print();
                printf("\n");
                break;

                case 'E':
                 Exit();
                 printf("All Accounts are closed, Program is finished running.");
                 break;
                                                              
                default:
                printf("Invalid transaction type");
                printf("\n");
                printf("\n");
                break;
                }

			
			}

              while ( func != 'E');
                
                                                                                                                                                                                                                                                                                                               
        
    }                                        
    










