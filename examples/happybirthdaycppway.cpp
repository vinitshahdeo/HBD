#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Please Enter your Age!\n";
	cin>>n;
	cout<<"We wish you Happy Birthday "<<n<<" times!\n";
	for(int i=1;i<=n;i++){
		if(i%10==1&&i!=11)
		cout<<"Here's your "<<i<<"st Birthday Wish! HAPPY BIRTHDAY\n";
		
		else if(i%10==2&&i!=12)
		cout<<"Here's your "<<i<<"nd Birthday Wish! HAPPY BIRTHDAY\n";
		
		else if(i%10==3&&i!=13)
		cout<<"Here's your "<<i<<"rd Birthday Wish! HAPPY BIRTHDAY\n";
		
		else
		cout<<"Here's your "<<i<<"th Birthday Wish! HAPPY BIRTHDAY\n";
	}
	
	return 0;
}