//A c++ program to find greatest-common-divisor(GCD) using Euclid Algorithm 
#include <iostream>
using namespace std;
int Euclid(int a,int b){
    if (b == 0)
        return a;
    else
        return Euclid(b, a%b);
}
int main() {
	int p,q;
	cout<<"Enter values to find GCD"<< endl;
	cout<<"Enter First value"<< endl;
	cin>>p;
	cout<<"Enter Second value"<< endl;
	cin>>q;
	
	if(p>q){
	    cout<<Euclid(p,q);
	}
    else if(q>p){
        cout<<Euclid(q,p);
    }
}
