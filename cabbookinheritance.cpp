#include<iostream>
#include<cstdlib>
using namespace std;

class cabbook
{
	
	public:
		int ac;
	   
	 cabbook()
	{
			
	cout<<"Install the OLA App on your Mobile "<<endl;
	cout<<"Select whether account is created or not  :\n1.Existing user\n2.New user\n";
	cin>>ac;
	
}
};

class user
{

    public:
    	int ac;
    	 char pk[10],dp[10];
   void us()
   {
   
	if(ac==1) 
	{
	     cout<<"Already an user"<<endl;	
	     cout<<"Enter the pickup location :";
	     cin>>pk;
	     cout<<"Searching for a driver nearby........"<<endl;
	     cout<<"Drivers nearby are\n1.Raj\n2.Vinay\n3.Aravind "<<endl;
 	     cout<<"Enter the drop location :"<<endl;
	     cin>>dp;
	     
		 }	
		 
   else
	{
		
		cout<<"Create a new account :"<<endl;
		int pass=1234;
		cout<<"Mail ID  : Raina@gmail.com"<<endl;
		cout<<"Password :";
		cin>>pass;
		if(pass==1234)
		{
			
		cout<<"Your account has been created and ready to use "<<endl;	
		}
		else
		{
               cout<<"Invalid Password ";
               exit(0);
		}
		
	} 
	}
	
	};
	
	
	
	
	
class select
{
	
	public :
		int dis,ga,tot,cb;

	void sel()
	{
		int cs1=8,cs2=10,cs3=7;
		int gst=20;
		dis=(rand()%30)+1;
	     cout<<"Distance in kilometer :"<<dis<<endl;
	     
	     
		 cout<<"Select the cab :\n1.CAB1\n2.CAB2\n3.CAB3\n";
         cin>>cb;
	if(cb==1)
	{
		cout<<"Driver name is Raj\nHe is on the way to pick you up"<<endl;
		cout<<"Cost per kilometer:"<<cs1<<endl;
		cout<<"GST PERCENTAGE :"<<gst<<endl;
		ga=(20*cs1)/100;
		cout<<"Gst amount of the travel:"<<ga<<endl;
		tot=(dis*cs1)+ga;
		cout<<"Total cost of travel :"<<tot<<endl; 
		
		
	}
	
		else if(cb==2)
	{
		cout<<"Driver name is Vinay\nHe is on the way to pick you up"<<endl;
		cout<<"Cost per kilomter :"<<cs2<<endl;
		cout<<"GST PERCENTAGE :"<<gst<<endl;
		ga=(20*cs2)/100;
		cout<<"Gst amount of the travel:"<<ga<<endl;
		tot=(dis*cs2)+ga;
		cout<<"Total cost of travel :"<<tot<<endl; 
		
	}
	else if(cb==3)
	{
		cout<<"Driver name is Aravind\nHe is on the way to pick you up"<<endl;
		cout<<"Cost per kilometer:"<<cs3<<endl;
		cout<<"GST PERCENTAGE :"<<gst<<endl;
		ga=(20*cs3)/100;
		cout<<"Gst amount of the travel:"<<ga<<endl;
		tot=(dis*cs3)+ga;
		cout<<"Total cost of travel :"<<tot<<endl; 
		
	}


	else 
	{
		cout<<"Sorry no drivers were found nearby ";
		exit(0);
	}
	
	
}
};


class pay :public cabbook,public user,public select
{
  public:
    	int mod;
    	
  void payment()
  {
  	
cout<<"Select the mode of payment :\n1.Cash\n2.Online payment"<<endl;
cin>>mod;
if(mod==1)
{
	cout<<"Total amount of Rs"<<tot<<" is paid"<<endl;
	
	}
	
	else if(mod==2)
	{
		 cout<<"Open the Gpay app"<<endl;
         cout<<"Scan the QR Code of driver"<<endl;
		 cout<<"Payment of Rs"<<tot<<" is done";    	
	}
	else
	{
		cout<<"Payment process is still pending.......";
	}
  }

};

int main()
{	
    pay obj;
    //obj.checkac();
    obj.us();
    obj.sel();
    obj.payment();

	return 0;
}





