#include <iostream>
#include<string.h>
using namespace std;

class elec_bill 
{
	public:
	int cust_id;
    char cust_name[100];
    int units_cons;
    float bill;
    public:
    void get()
        {
        cout<<"enter customer No. : ";
        cin>>cust_id;
        cout<<"\nenter customer name : ";
        cin>>cust_name;
        cout<<"\nenter No. of unit consumed =";
        cin>>units_cons;
         }
           void calculate_bill()
        {
        if(units_cons<=100)
		bill=units_cons*1.20;
        else if(units_cons<=300)
        bill=100*1.20+(units_cons-100)*2;
        else
        bill=100*1.20+200*2+(units_cons-300)*3;

 }
  void display()
         {
          cout<<"\n\nNo. of Units Consumed : "<<units_cons;
                cout<<"\n\ntotal bill of customer : "<<bill;
            }
 };

int main()
{
    elec_bill a;
    a.get();
    a.calculate_bill();
    a.display();
    return 0;
}


        
         	
