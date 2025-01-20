#include<iostream>
using namespace std;

class atm
{

public:
	
	int wd,dp,da;
	
void checkpin(int mainbal)
{

		cout<<"\n\tYOU ARE AN AUTHORISED PERSON"<<endl<<endl;
		cout<<"\n\tWELCOME TO THE BANK"<<endl<<endl;
		
	
}


int withdraw(int mainbal)
{
	     cout<<"ENTER THE WITHDRAWAL AMOUNT :";
	     cin>>wd;
	     if(wd>mainbal)
	     {
	     	cout<<"INSUFFICIENT FUND"<<endl<<endl;
		 }
		 else
		 {
		 
	     mainbal-=wd;
	     cout<<" UPDATED MAIN BALANCE        :"<<mainbal<<endl;
	 }
	 
	 return mainbal;
	
}



int deposit(int mainbal)
{
	
	     cout<<" ENTER THE DEPOSIT AMOUNT    :";
	     cin>>dp;
	     if(dp>=25000)
		 {
	     	cout<<endl<<"<<BANK DEDUCTS 2 PERCENT FROM THE DEPOSITED AMOUNT"<<endl;
	     	da=0.02*dp;
	     	dp-=da;
	     	cout<<"DEDUCTED AMOUNT :"<<da;
	     	//scanf("%d",&dp);
	     	
	     	mainbal+=dp;
	     	cout<<"UPDATED MAIN BALANCE :"<<mainbal;
		 }
		 else
		 {
		 
	     mainbal+=dp;
	     cout<<" UPDATED MAIN BALANCE        :"<<mainbal<<endl;
}
	
	
	
	return mainbal;
	
	
	
}


void check(int mainbal)
{
	cout<<"CHECK THE BALANCE AFTER WITHDRAWAL OR DEPOSIT :"<<mainbal<<endl;
	
}

int show(int serv)
{
	cout<<"SHOW THE SERVICES :\n\t\t\t\t1.WITHDRAWAL\n\t\t\t\t2.DEPOSIT\n\t\t\t\t3.CHECK BALANCE\n\n\t";
	cin>>serv;
	return serv;
	 
}

};

int main()
{
    int acno,pin,serv,re,mainbal=20000;
    int x=1,y=1;
    atm obj;
	cout<<"Enter the Account number :";
	cin>>acno;
	cout<<"Enter the pin number     :";
	cin>>pin;
	while(y==1){
	
	if(acno==2468 && pin==1234)
	{
	
	obj.checkpin(mainbal);
	
	while(x==1)	
	{
	
       serv= obj.show(serv);

	if(serv==1)
	{
	
    mainbal=obj.withdraw(mainbal);
   
     }

    else if(serv==2)
    {
	mainbal=obj.deposit(mainbal);

    }
    
    
    else if(serv==3)
    {
    	obj.check(mainbal);
	}
     
	cout<<"Do you want to continue?(1/0)"<<endl;
		cin>>x;
		  
	
} 
	y=0;
}
	else
	
	{
		cout<<"PIN IS INVALID" <<endl<< "YOU ARE NOT AN AUTHORISED PERSON"<<endl<<endl;
	    cout<<"REENTER THE PIN : ";
		cin>>pin;
		y=1;
	
		
	}

}

	

	

	
	
	

}
