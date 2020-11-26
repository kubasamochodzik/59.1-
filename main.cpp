#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;
//x-rozk³adanie
//l- liczenie
int main()
	{
	int x = 2;
	int l;
    	ifstream liczby;
    	liczby.open("liczby.txt");
	int kk=0;
	bool  a=false;
	int i;	
    while(liczby.good()){
    if (!liczby.eof()){
		liczby >> l;
		a=true;
	while(l>1){
    while(l%x==0){
    	cout << x << " ";
		l /= x;         		
	if(x%2==0 ){
    	a = false;
		}
	if(!(x%2==0) && i!=x){
		kk++;
		}
		i=x;
		}
		++x;
		}
	if(kk==3 && a==true){
		cout <<"Wystepuja";	
		}
	else cout<<"Nie Wystepuja";
		kk =0;
		cout<<endl;
		x = 2;
		}
        }
     
    
    
    
    return 0;
}
