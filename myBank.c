#include <stdio.h>
#include "myBank.h"

double arrAccount [2][50]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int counter = 0;
int AccountNumber=901;

void Open(double sum){
	int b=1;
	if(counter<50){
		if (sum>0){
		for (int i = 0; i < 2 && b; ++i){
			for (int j = 0; i < 50 && b ; ++j){
				if(arrAccount[i][j]==0){
					arrAccount[0][counter]=1;
					arrAccount[1][counter]=sum;
					counter++;
					AccountNumber = AccountNumber + j;
					printf("%d\n",AccountNumber );
					b=0;
				}

			}
		 }
	   }
	  else{
                	printf("Invalid Amount");
	    }
	}

}
void Blance(int AccountNumber){
	if(AccountNumber<951 && AccountNumber>900){
	
	  	if(arrAccount[0][AccountNumber-901]==1)	{
			printf("The balance of account number %d is: %.2lf \n",AccountNumber,arrAccount[1][AccountNumber-901]);
			
	    } 
	   
	    else{
			printf("The account is closed \n");
		}
    }  
			
	else{
				printf("Failed to read the account number \n");
		}
}

void Depositee(int AccountNumber,double deposit){
	if(AccountNumber<951 && AccountNumber>900){
	
	    if(arrAccount[0][AccountNumber-901]==1) {
	    	if(deposit>0){
			double sum = arrAccount[1][AccountNumber-901] + deposit;
			printf("%f\n", sum);
			arrAccount[1][AccountNumber-901] = arrAccount[1][AccountNumber-901] + deposit;
		   } 
	        else{
	   	   printf("Cannot deposit a negative amount");
	        }
	    }
	   else{
	   	printf("This account is closed");

	   }

		
    }  
			
	else{
				printf("Invalid account number");
		}


}

void Withdrawal(int AccountNumber,double pull){

	if(AccountNumber<951 && AccountNumber>900) {

     	if(arrAccount[0][AccountNumber-901]==1) {

	   		if(arrAccount[1][AccountNumber-901]-pull>0){
				double sum = arrAccount[1][AccountNumber-901]-pull;
				arrAccount[1][AccountNumber-901] = sum;
				printf("The new balance is: %.2lf \n", sum);
			}
			else{
				printf("Cannot withdraw more than the balance\n");
			}
			
		} 
	   
	    else{
		printf("The account is closed\n");
		}

    }  
			
	else{
	printf("Invalid account is closed\n");
		}
}



void Close(int AccountNumber){
	if(AccountNumber<951 && AccountNumber>900){
		if(arrAccount[0][AccountNumber-901]==1){	
		arrAccount[0][AccountNumber-901]=0;
		arrAccount[1][AccountNumber-901]=0;
		counter--;
		printf("Close account number %d", AccountNumber);
		}
		else{
			printf("this account is closed");
		}
				
	}
	else{
		printf("Invalid account number");
	}


}

void Interest(double x){

	if (x<-100){
                	printf("Invalid interst rate");
                }
		for (int j = 0; j < 50; ++j){
			if(arrAccount[0][j]==1){
				double add = arrAccount[1][j]*(x/100);
				arrAccount[1][j] = add + arrAccount[1][j];
			}
		}
	}

void Print(){
	
		for (int i = 0; i < 50; ++i){
			if(arrAccount[0][i]==1){
				int NumberOfCount = 901 + i;
				double sum = arrAccount[1][i];
				printf("The balance of account number %d is: %.2lf \n",NumberOfCount,sum);
			}
		}
	}


	void Exit(){
		for (int i = 0; i < 2; ++i) {
			for (int j = 0; i < 50; ++j){
				arrAccount[0][j]=0;
				arrAccount[1][j]=0;
				counter=0;
			}
		}
	}





