#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	int withdrawAmt;
	float bankBalance;
	cin>>withdrawAmt>>bankBalance;
	if( (withdrawAmt + 0.50) <= bankBalance && withdrawAmt % 5 == 0 )
	{
	    bankBalance = bankBalance - withdrawAmt;
	    cout<< fixed << setprecision(2) << bankBalance - 0.50;
	}
	else
	    cout<< fixed << setprecision(2) << bankBalance;
	return 0;
}
