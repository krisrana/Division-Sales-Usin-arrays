#include <iostream>
#include <string>
#include <iomanip>
#include "DivSales.h"
using namespace std;

int main()
{
	DivSales D[4];
	int allregquat[4];
	int tot = 0;
	
	for(int i = 0; i<4; i++)
	{
		D[i].setdata();
	}
	
	for(int i = 0; i<4; i++)
	{
		cout<<"\n"<<D[i].setregion();
		
		for(int j = 0; j <4; j++)
		{
			cout<<"\n\tQuarter "<<j+1<<": "<<D[i].quarter[j];
		}
		cout<<"\nRegion total: "<<D[i].yearlytotal;
	}
	
	for(int i = 0; i <4; i++)
	{
		tot = tot + D[i].settotsale();
	}
	cout<<"\nAll Regions total: "<< tot;
	
	for(int i = 0; i<4; i++)
	{
		allregquat[i] = 0;
	}
	
	for (int i = 0;i<4; i++)
	{
		for(int j = 0; j <4; j++)
		{
			allregquat[i] = allregquat[i]+D[j].quarter[i];
		}
	}
	
	cout<<"\nExtra work: ";
	for(int i =0;i<4; i++)
	{
		cout<<"\nAll Regions Quarter "<<i+1<<":"<<allregquat[i];
	}
	cout<<endl;
   system("pause");
   return 0;
}
