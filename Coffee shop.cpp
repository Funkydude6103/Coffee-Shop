#include<iostream>
using namespace std;

const double SMALL_CUP_COST = 1.75;
const double MEDIUM_CUP_COST = 1.90;
const double LARGE_CUP_COST = 2.00;
const int SMALL_CUP_SIZE = 9;
const int MEDIUM_CUP_SIZE = 12;
const int LARGE_CUP_SIZE = 15;
int sale(int &counts,int &countm,int &countl);
int total_money(int &counts,int &countm,int &countl);
int total_coffe_sold(int &counts,int &countm,int &countl);
int amount_of_coffe(int &counts,int &countm,int &countl);

 int manual(int &counts,int &countm,int &countl)
 {
 	int a;
 	cout<<"***************Welcome to the Coffee Shop***************\n1: Enter 1 to order coffee.\n2: Enter 2 to check the total money made up to this time.\n3: Enter 3 to check the total count of coffee sold up to this time.\n4: Enter 4 to the total amount of coffee sold.\n5: Enter 5 to close the coffee shop."<<endl;
 	cin>>a;
	if(a==1)
	sale(counts,countm,countl);
	if(a==2)
	total_money(counts,countm,countl);
	if(a==3)
	total_coffe_sold(counts,countm,countl);
	if(a==4)
	amount_of_coffe(counts,countm,countl);
	if(a==5)
	{
	cout<<"Thankyou Please come again"<<endl;
	cout<<"Total sale : "<<counts+countm+countl<<" Cups"<<endl;
	return 0;
    }
 }

 sale(int &counts,int &countm,int &countl)
 {
 	double a, b;
 	double bill;
 	while(a!=4)
 	{
 	cout<<"1: Enter 1 to buy coffee in a small cup size (9 oz and 1.75 $)\n2: Enter 2 to buy coffee in a medium cup size (12 oz and 1.90 $)\n3: Enter 3 to buy coffee in a large cup size (15 oz and 2 $)\n4: Enter 4 to exit."<<endl;
 	cin>>a;
 	if(a!=4)
 	{
 	cout<<"Enter the number of cups : "<<endl;
 	cin>>b;
    }
 	if(a==1)
 	{
      bill=bill+(SMALL_CUP_COST*b);
     counts=counts+b;
    }
    	if(a==2)
 	{
      bill=bill+(MEDIUM_CUP_COST*b);
      countm=countm+b;
    }
    	if(a==3)
 	{
      bill=bill+(LARGE_CUP_COST*b);
      countl=countl+b;
    }
    	if(a==4)
 	{
      cout<<"Your Total Bill is : "<<bill<<" $"<<endl;;
      manual(counts,countm,countl);
    }
   }
 	
 }
 total_money(int &counts,int &countm,int &countl)
 {
 	double totalbill=0;
 	totalbill=(counts*SMALL_CUP_COST)+(countm*MEDIUM_CUP_COST)+(countl*LARGE_CUP_COST);
 	cout<<"Total money earned till now is : "<<totalbill<<" $"<<endl;
    manual(counts,countm,countl);
 	
 }
 total_coffe_sold(int &counts,int &countm,int &countl)
 {
 	int totalcoffe=0;
 	totalcoffe=counts+countm+countl;
 	cout<<"Total Coffee sold is : "<<totalcoffe<<" cups"<<endl;
     manual(counts,countm,countl);
 }
 amount_of_coffe(int &counts,int &countm,int &countl)
 {
 	int amount;
 	amount=(counts*SMALL_CUP_SIZE)+(countm*MEDIUM_CUP_SIZE)+(countl*LARGE_CUP_SIZE);
 	cout<<"Total amount of coffee sold till now is : "<<amount<<" ounces"<<endl;
 	 manual(counts,countm,countl);
 }
int main()
{
	int counts=0;
	int countm=0;
	int countl=0;
	manual(counts,countm,countl);
	 
}
