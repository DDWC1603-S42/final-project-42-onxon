//Nor Alisya Sofiea Bt Muhammad Syafiq Krishnan, Aida Humaira Bt Halim,Emilia Fazika Bt Md Nasir

#include <iostream>
using namespace std;

int total(int,int);

int main()

{
	int amount,m,a;
	float tax=2.3,GST=0.23,totalprice;
	char month,order,hotel,room,price;
	
	cout<<"                            *************************         "<<endl;
	cout<<"                            WELCOME TO EMAIDALISYA GO         "<<endl;
	cout<<"                            *************************         "<<endl;
	cout<<" J-January\n F-February\n M-March\n"<<endl;
	cout<<"Please enter your month"<<endl;
	cin>>month;
	
	if ((month =='J')||(month=='j'))
	{
	
		cout<<"------------------------------------"<<endl;
		cout<<"This is the hotel that are available"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"A-Renaissance Kuala Lumpur"<<endl;
		cout<<"B-Shangri-La "<<endl;
		cout<<"C-Parkroyal "<<endl;
		cin>>hotel;
		
		if ((hotel=='A')||(hotel=='a'))
		{
			cout<<"-----------------------------"<<endl;
			cout<<"Please state the type of room"<<endl;
			cout<<"-----------------------------"<<endl;    
			cout<<"A-Deluxe Double (RM200)"<<endl;
			cout<<"B-Double Lifestyle (RM500)"<<endl;
    		cout<<"C-Suite Junior (RM800)"<<endl;
			cin>>price;
	
			if ((price=='A')||(price=='a'))
    		{m=200;}	
    
    		else if ((price=='B')||(price=='b'))
    		{m=500;}
    
			else if ((price=='C')||(price=='c'))
    		{m=800;}
	
	
			cout<<"Please select the amount of room"<<endl;
			cin>>amount;
		}
		else if ((hotel=='B')||(hotel=='b'))
		{
		cout<<"-----------------------------"<<endl;
		cout<<"Please state the type of room"<<endl;
		cout<<"-----------------------------"<<endl;
		cout<<"A-Deluxe Double (RM400)"<<endl;
		cout<<"B-Double Lifestyle (RM550)"<<endl;
    	cout<<"C-Suite Junior (RM900)"<<endl;
		cin>>price;
		
		
	
		cout<<"Please select the amount of room "<<endl;
		cin>>amount;
		
		}
    	else if ((hotel=='C')||(hotel=='c'))
		{
		cout<<"Please state the type of room"<<endl;
		cout<<"A-Deluxe Double Room(RM400)"<<endl;
		cout<<"B-Double Lifestyle Room(RM600)"<<endl;
	    cout<<"C-Suite Junior Room(RM900)"<<endl;
		cin>>price;
	
		cout<<"Please select the amount of room "<<endl;
		cin>>amount;
		}
	}
    else if ((month=='F')||(month=='f'))
	{
		cout<<"------------------------------------"<<endl;
		cout<<"This is the hotel that are available"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"D-Flamingo By The Lake"<<endl;
		cout<<"E-JW Mariott Kuala Lumpur "<<endl;
		cout<<"F-Parkroyal Kuala Lumpur "<<endl;
		cin>>hotel;
	
		if ((hotel=='D')||(hotel=='d'))
		{
			cout<<"-----------------------------"<<endl;
			cout<<"Please state the type of room"<<endl;
			cout<<"-----------------------------"<<endl;
			cout<<"A-Deluxe Double (RM200)"<<endl;
			cout<<"B-Double Lifestyle (RM500)"<<endl;
    		cout<<"C-Suite Junior (RM800)"<<endl;
			cin>>price;
			if ((price=='A')||(price=='a'))
    		{m=200;}	
    
    		else if ((price=='B')||(price=='b'))
    		{m=500;}
    
			else if ((price=='C')||(price=='c'))
    		{m=800;}
	
			cout<<"Please select the amount of room"<<endl;
			cin>>amount;
		}
    
   		 if ((hotel=='E')||(hotel=='e'))
		{
			cout<<"-----------------------------"<<endl;
			cout<<"Please state the type of room"<<endl;
			cout<<"-----------------------------"<<endl;
			cout<<"A-Deluxe Double (RM200)"<<endl;
			cout<<"B-Double Lifestyle (RM500)"<<endl;
    		cout<<"C-Suite Junior (RM800)"<<endl;
			cin>>price;
	
			cout<<"Please select the amount of room"<<endl;
			cin>>amount;
		}
    	if ((hotel=='F')||(hotel=='f'))
		{
			cout<<"-----------------------------"<<endl;
			cout<<"Please state the type of room"<<endl;
			cout<<"-----------------------------"<<endl;
			cout<<"A-Deluxe Double (RM200)"<<endl;
			cout<<"B-Double Lifestyle (RM500)"<<endl;
    		cout<<"C-Suite Junior (RM800)"<<endl;
			cin>>price;
		
			cout<<"Please select the amount of room"<<endl;
			cin>>amount;
		}
	}
    else if ((month =='M')||(month=='m'))
	{
		cout<<"------------------------------------"<<endl;
		cout<<"This is the hotel that are available"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"G-Corus Kuala Lumpur"<<endl;
		cout<<"H-Melia Royal"<<endl;
		cout<<"I-The Federal "<<endl;
		cin>>hotel;
		
		if ((hotel=='G')||(hotel=='g'))
		{	 
			cout<<"-----------------------------"<<endl;
			cout<<"Please state the type of room"<<endl;
			cout<<"-----------------------------"<<endl;
			cout<<"A-Deluxe Double (RM200)"<<endl;
			cout<<"B-Double Lifestyle (RM500)"<<endl;
    		cout<<"C-Suite Junior (RM800)"<<endl;
			cin>>price;
			if ((price=='A')||(price=='a'))
    		{m=200;}	
    
    		else if ((price=='B')||(price=='b'))
    		{m=500;}
    
			else if ((price=='C')||(price=='c'))
    		{m=800;}
			
			cout<<"Please select the amount of room"<<endl;
			cin>>amount;
		}	
		else if ((hotel=='H')||(hotel=='h'))
		{ 
			cout<<"-----------------------------"<<endl;
			cout<<"Please state the type of room"<<endl;
			cout<<"-----------------------------"<<endl;
			cout<<"A-Deluxe Double (RM200)"<<endl;
			cout<<"B-Double Lifestyle (RM500)"<<endl;
    		cout<<"C-Suite Junior (RM800)"<<endl;
			cin>>price;
		
			cout<<"Please select the amount of room"<<endl;
			cin>>amount;
		}
    	else if ((hotel=='I')||(hotel=='i'))
		{ 
			cout<<"-----------------------------"<<endl;
			cout<<"Please state the type of room"<<endl;
			cout<<"-----------------------------"<<endl;
			cout<<"A-Deluxe Double (RM200)"<<endl;
			cout<<"B-Double Lifestyle (RM500)"<<endl;
    		cout<<"C-Suite Junior (RM800)"<<endl;
			cin>>price;
	
			cout<<"Please select the amount of room"<<endl;
			cin>>amount;
		}
	}
	
	a=total(m,amount);
    totalprice=a+GST+tax;
	cout<<"_________________"<<endl;
	cout<<"-Payment Details-"<<endl;
	cout<<"_________________"<<endl;
    cout<<"Total of GST(6%)"<<endl;
    cout<<"Total of tax service = RM2.30"<<endl;
    cout<<"Total payment is RM "<<totalprice<<endl;
    
    cout<<"               ************************************************************          "<<endl;
	cout<<"               THANK YOU FOR USING EMAIDALISYA GO & PLEASE COME BACK SOON !          "<<endl;
	cout<<"               ************************************************************          "<<endl;
    
    return 0;
}

int total(int a,int b)
{
	int sum;
	sum=a*b;
	return sum;
}
    


