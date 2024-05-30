#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<168;i++)
	{
		cout<<"*";
	}
	cout<<"\n\t\t\t\t\t\t\t\t\t\t CAR RENTAL SYSTEM\n"<<endl;
	for(int i=0;i<168;i++)
	{
		cout<<"*";
	}
	int num,d,z=0,t;
	for(int i=1;i<=20;i++)
	{
		cout<<"\n\n\nWe have following cars for rent."<<endl;
		cout<<"1=  AUDI "<<endl;
		cout<<"2=  FERARI"<<endl;
		cout<<"3=  PRADO"<<endl;
		cout<<"4=  TOYOTA FORTUNER"<<endl;
		cout<<"5=  LAMBORGHINI"<<endl;
		 while(true)
		 {
		 cout<<"Enter number of the following to select car for rent:	";
		 cin>>num;
		    if (num==1)
		    {
				cout<<"\nMODEL: 	AUDI A23 CABRIOLET  \nCOLOR: 	CRIMSON RED \nMAX SPEED: 	209km\nFUEL CAPACITY: 	12(gal)";
				cout<<"\nENGINE POWER: 	164kw \nRENT PER DAY:	RS.20000"<<endl;
				z++;
			    if(z==4)
			    {
					cout<<"The AUDI is out of stock."<<endl;
				}
				else
				{
					cout<<"Enter no of days for rent:	";
					cin>>d;
					t=d*20000;
					cout<<"\nRent =RS. "<<t;
				}
				break;
		 	}
		     else if (num==2)
			 {
				cout<<"\nMODEL: 	FERRARI F430  \nCOLOR: 	RED \nMAX SPEED: 	340km\nFUEL CAPACITY: 	22(gal)";
				cout<<"\nENGINE POWER: 	360kw \nRENT PER DAY: 	RS.18000"<<endl;
				z++;
			    if(z<=4)
			    {
					cout<<"Enter no of days for rent:	";
					cin>>d;
					t=d*18000;
					cout<<"\nRent =RS. "<<t;
				}
				else
					cout<<"The FERRARI is out of stock."<<endl;
				break;
			}
			else if (num==3)
			{
				cout<<"\nMODEL: 	LAND CRUISER PARADO \n COLOR:	 CRYSTAL BLACK \nMAX SPEED: 	180km\nFUEL CAPACITY: 	87 LITER";
				cout<<"\nENGINE POWER: 	271kw \nRENT PER DAY: 	RS.8000"<<endl;
				z++;
			    if(z<=5)
			    {
					cout<<"Enter no of days for rent:	";
					cin>>d;
					t=d*8000;
					cout<<"\nRent =RS. "<<t;
				}
				else
					cout<<"The PRADO is out of stock."<<endl;
				break;
			}
			else if (num==4)
			{
				cout<<"\nMODEL: 	TOYOTA FORTUNER\n COLOR: 	DARK TEAL MICA \nMAX SPEED: 	195km\nFUEL CAPACITY: 	80(LTR)";
				cout<<"\nENGINE POWER: 	169kw \nRENT PER DAY: 	RS.10000"<<endl;
				z++;
			    if(z<=5)
			    {
					cout<<"Enter no of days for rent:	";
					cin>>d;
					t=d*10000;
					cout<<"\nRent =RS. "<<t<<endl;
				}
				else
					cout<<"The TOYOTA is out of stock."<<endl;
				break;
			}
			else if (num==5)
			{
				cout<<"\nMODEL: 	LAMBORGHINI URUS \nCOLOR: 	WHITE PEARL \nMAX SPEED: 	305km\nFUEL CAPACITY: 	22.5(gal)";
				cout<<"\nENGINE POWER: 	657hp \nRENT PER DAY: 	RS.26000"<<endl;
				z++;
			    if(z<=4)
			    {
					cout<<"Enter no of days for rent:	";
					cin>>d;
					t=d*26000;
					cout<<"Rent =RS. "<<t;
				}
				else
				cout<<"The LAMBORGHINI is out of stock."<<endl;
				break;
			}
			else
			{
				cout<<"\nYou enter INVALID number"<<endl;
			}
		}
		char a[0];
		cin.getline(a,0);
	    cout<<"\nPlease!!! enter "<<i<<" customer details."<<endl;
	    cout<<"Enter customer name:"<<endl;
	    cin.getline(a,15);
	    cout<<a[15];
	    cout<<"Enter customer phone number:"<<endl;
	    cin.getline(a,17);
	    cout<<a[17];  
		cout<<"Enter customer CNIC number:"<<endl;
	    cin.getline(a,20);
	    cout<<a[20];
		cout<<"Enter customer address:"<<endl;
	    cin.getline(a,30);
	    cout<<a[30];
	    cout<<"Your total RENT of car is RS."<<t<<endl;
		cout<<"		THANKS FOR USING"<<endl;
	}
}
