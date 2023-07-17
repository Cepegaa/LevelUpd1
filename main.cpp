#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
	cout<<"skoro zadownloaditsya"<<endl<<"loading";
	for(int count=0; count<5;++ count)
	{
		cout<<"<";
		fflush(stdout);
		sleep(1);
		cout<<">";
		fflush(stdout);
		sleep(1);
}
cout<<endl<<"vse ok"<<endl;
return 0;
}