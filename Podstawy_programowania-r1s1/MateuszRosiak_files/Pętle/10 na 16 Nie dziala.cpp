#include<iostream>
#include<cmath>

using namespace std;

int dlugosc(int);


int main()
{
	int n;
	cout<<"Podaj n: ";
	cin>>n;
	
	cout<<endl;
	
	int szesnastkowy;
	int i=0;
	int r;
	while(n != 0)
	{
		r=n%16;
		if(r<=9)
		{
			szesnastkowy+=r*pow(10,i);
			n=n/16;
			i++;
		}
		else if (r>=10)
		{
			int r1=n%16;
			char znak;
			
			switch(znak)
			{
				case 10:
				 	znak ='A';
				case 11:
					znak ='B';
				case 12:
					znak ='C';
				case 13:
					znak ='D';
				case 14:
					znak ='E';
				case 15:
					znak ='F';		
			}
			szesnastkowy+=znak;
			n=n/16;
		}
		
	}
	
	cout<<"16: "<<szesnastkowy;
}
