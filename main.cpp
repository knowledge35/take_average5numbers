#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int i=0;
	int gir=0;
	cout<<"5 sayi giriniz"<<endl;
	int toplam=0;
for(; i<5; i++){
	cin>>gir;

	toplam+=gir;
				}            
float j=float(toplam/i);
cout<<j<<endl;
cout<<toplam<<endl;
cout<<i<<endl;


   getch();
   return 0;
}
