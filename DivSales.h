#include <iostream>
#include <string>
using namespace std;

#ifndef DIVSALES_H
#define DIVSALES_H

class DivSales
{
   private:
   	string region;
    int quarter[4];
	float allregtotal[4];
    static float yearlytotal;
   public:
   	
   	DivSales();
   	~DivSales();
   	void setdata();
   	string setregion();
   	float setquatsale(int);
   	float setyearlytotal();
   	float settotsale();
};

#endif
