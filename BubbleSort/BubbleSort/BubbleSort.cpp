// BubbleSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctime>

int _tmain(int argc, _TCHAR* argv[])
{
	/*//time
    clock_t start = clock();
	cout<< "\n Timer" <<( ( clock() - start ) / (double)CLOCKS_PER_SEC ) <<"\n";
	*/

	//array
	const int arraySize = 10;
	int n[ arraySize ] = { 10, 5, 4, 2, 6, 1, 8, 9, 3, 7 };
	int x,		//storage variable
		pass;	//count # of passes

	cout<<"Array before sort"<<endl;
	for ( int i = 0; i < arraySize; i++ )
		cout << setw(3) << n[i];

	//sort
	for( pass = 0; pass < arraySize - 1; pass++){ //count passes
		for( int i = 0; i < arraySize - (1 + pass); i++){ //loop, check one less element every pass
			if( n[i] > n[i + 1])	//compare
			{
				x = n[i];			//store
				n[i] = n[i + 1];	//swap current with next
				n[i + 1] = x;		//swap next with current
			}
			//During sort, post elements checked
			cout<<"\n\nArray during sort, checked element #: "<< i + 1 <<endl;
			for ( int i = 0; i < arraySize; i++ )
				cout << setw(3) << n[i];
			
		}//end loop
		//During sort, post which pass
		cout<<"\n\nArray during sort, pass #: "<< pass + 1 <<endl;
			for ( int i = 0; i < arraySize; i++ )
				cout << setw(3) << n[i];
	}//end count passes

	//output
	cout<<"\n\nArray after sort"<<endl;
	for ( int i = 0; i < arraySize; i++ )
		cout << setw(3) << n[i];

	//pause
	cout<<"\n\nHit enter to end program...";
	cin.get();

	return 0;
}

