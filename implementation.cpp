#include <iostream>
#include <string>
#include "DivSales.h"
using namespace std;

float DivSales::yearlytotal = 0;

DivSales::DivSales()
{
	region = "";
	for(int i = 0; i < 4; i++)
	{
		quarter[i] = 0;
	}
}

DivSales::~DivSales()
{
	
}

void DivSales::setdata()
{
	cout<<"Enter Region: ";
	cin>>region;
	
	for(int i = 0; i < 4; i++)
	{
		cout<<"\tQuarter "<<i+1<<": ";
		cin>>quarter[i];
		yearlytotal+=quarter[i];
	}
	
}

string DivSales::setregion()
{
	return region;
}

float DivSales::setquatsale(int i)
{
	return quarter[i];
}

float DivSales::setyearlytotal()
{
	return yearlytotal;
}

float DivSales::settotsale()
{
	for(int i = 0; i < 4; i++)
	{
		allregtotal[i]= quarter[0]+quarter[1]+quarter[2]+quarter[3];
		
	}
	return allregtotal[0];
}
