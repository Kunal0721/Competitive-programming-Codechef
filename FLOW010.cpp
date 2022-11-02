#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    char a;
	    cin>>a;
	    if (a=='b' or a=='B')
	        cout<<"BattleShip"<<endl;
	    else if (a=='c' or a=='C')
	        cout<<"Cruiser"<<endl;
	    else if (a=='d' or a=='D')
	        cout<<"Destroyer"<<endl;
	    else if(a=='F' or a=='f')
	       cout<<"Frigate"<<endl;
	   else{
	       
	   }
	}
	return 0;
}
