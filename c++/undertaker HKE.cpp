#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		int ans,temp;
		cin>>ans;
		cout<<ans%100<<endl;
		cout<<ans/1000<<endl;
		if(ans%21==0)
		cout<<"The streak is broken!";
		else
	   cout << "The streak lives still in our heart!"<< endl;
	}

    return 0;
}
