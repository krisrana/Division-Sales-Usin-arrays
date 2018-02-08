#include<iostream>
#include<string>

using namespace std;
const int SIZE = 4;

class DivSales
{
	private:
		string Regname[SIZE];
		float Quarter[SIZE];
		static float TotForyear;
		float Totreg[SIZE], Qt1tot[SIZE],Qt2tot[SIZE],Qt3tot[SIZE],Qt4tot[SIZE];
	public:
		DivSales();
		float getdata();
		string name();
		float subscript();
		float TotForReg();
		float TotForallReg();
		void print();
		
		~DivSales();
};
DivSales::DivSales()
{
	
	for(int i = 0; i < 4; i++)
	{
		Regname[i]= "";
		Quarter[i] = 0;
	}
}
DivSales::~DivSales()
{
}

float DivSales::TotForyear = 0;




int main()
{
	DivSales D;
	D.getdata();
	D.name();
	D.print();
	
	
	return 0;
}


float DivSales::getdata()
{
	for(int i = 0; i < SIZE; i++)
	{
	cout<<"Enter Region: ";
	cin>>Regname[i];

	for(int j = 0; j < SIZE; j++)
	{
		cout<<"\tQuarter "<< j+1 <<":";
		cin>>Quarter[j];
		TotForyear += Quarter[j];
		Qt1tot[j] += Quarter[0];
		Qt2tot[j] += Quarter[1];
		Qt3tot[j] += Quarter[2];
		Qt4tot[j] += Quarter[3];
		
	}
	Totreg[i] += Quarter[0]+Quarter[1]+Quarter[2]+Quarter[3];
	
	}
	return TotForyear;

}
void DivSales::print()
{
	DivSales D[SIZE];
	for(int i = 0; i < SIZE; i++)
	{
		cout<<Quarter[i]<<endl;
		
	
/*	for(int i = 0; i<SIZE; i++)
	{*/
	cout<<"region:" <<Totreg[i]<<endl;
		

}

	cout<<"All Regions Total: "<<TotForyear<<endl;
	
for(int i = 3; i < SIZE; i++)
{
	cout<<"Quarter 1 tot: "<<Qt1tot[i]<<endl;
	cout<<"Quarter 2 tot: "<<Qt2tot[i]<<endl;
	cout<<"Quarter 3 tot: "<<Qt3tot[i]<<endl;
	cout<<"Quarter 4 tot: "<<Qt4tot[i]<<endl;
}


}

string DivSales::name()
{
	return Regname[SIZE];
}


