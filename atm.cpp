#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
void user_interface();
void display();
using namespace std;
float balance=10000.0;
float withdraw;
float deposit;
int option;
int old_pin=9999;
int pin;
short c=0;

void user_interface()
{
	
	cout<<" ***            *** "
	cout<<"  ***          ***   "
	cout<<"   ***  ****  ***   "
	cout<<"    ****     ***  "
	cout<<"     **********  "
	
   	short p=0;
	t:
	cout<<"Enter your pin"<<endl;
	cin>>pin;
    display();
	if(pin != old_pin)
	{   
		p++;
		if(p==3)
		{
		
		cout<<"Wrong pin inserted 3 times!!!!.... Login Denied....."<<endl;	
	    }
	    else
	    {
	    	cout<<"Wrong pin inserted!!!!!.......Please try again!!!"<<endl;
	    	goto t;
		}
	    
    } 
	
    deny:	
	if(p!=3 && c!=3)
	{
    main_menu:
	cout<<"                                       1) Withdraw.                    "<<endl;
	cout<<"                                       2) Deposit.                     "<<endl;
	cout<<"                                       3) Check balance.               "<<endl;
	cout<<"                                       4) Change PIN.                  "<<endl;
	cout<<"                                       5) Exit.                        "<<endl;
	cin>>option;
	switch(option)
	{
		case 1: Case1:
		        cout<<"Enter the amount you want to withdraw "<<endl;
		        cin>>withdraw;
		        if(withdraw > balance)
		        {
		        cout<<"Balance is insufficient to be withdrawed ........Please try again."<<endl;
		        goto Case1;
		       }
		        else
		        {
		        	balance = balance - withdraw;
				cout<<"Transaction Successfull!!!!!"<<endl;
			    }
				cout<<" Your current balance is "<<balance<<endl;
				goto main_menu;
	
	    case 2: Case2:
		        cout<<"Enter the amount you want to deposit "<<endl;
	            cin>>deposit;
	            if(deposit > 0)
	            {
	            balance = balance + deposit;
	            cout<<"Transaction Successfull!!!!"<<endl;
	            cout<<" Your current balance is "<<balance<<endl;
	            }
	            else
	            {
	            cout<<"Invalid amount !!!!!........... Transaction failed!!!.......Retry again!!!"<<endl;
	            goto Case2;
	            }
	            
	            goto main_menu;
        case 3: cout<<"Your current account's balance is "<<balance<<endl;
                goto main_menu;
        case 4: Case5:
		        int re_new_pin;
                cout<<" Enter your old pin "<<endl;
                cin>>pin;
                
                if(pin == old_pin)
                {
                	Case4:
                	cout<<"Enter the new pin"<<endl;
                	cin>>pin;
                	cout<<"Re-enter the new pin to confirm "<<endl;
                	cin>>re_new_pin;
                	if(re_new_pin!=pin)
                	{
                		cout<<"The new pin match failed!!!!!.......Please retry again!!!!"<<endl;
                		goto Case4;
					}
					else
					{
						cout<<"Your new pin now is "<<pin<<endl;
						old_pin=pin;
					}
				}
				else
				{
					
					c++;
                	if(c==3)
                	{
                	cout<<"Wrong pin inserted 3 times!!!.....You are now logged out of the system."<<endl;
                	goto deny;
					}
					else
					cout<<"Wrong pin entered!!!......Please try again!!!"<<endl;
					goto Case5;
				}
				goto main_menu;
	    case 5: break;
	}
 }
	
}
void display()
{|

}
int main()
{
	user_interface();
}

