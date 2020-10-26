#include <iostream>
#include <string>
using namespace std;

class HbdWish{
	private:
		string name;
	public:
		explicit HbdWish(string &name): name(name) {};
		void printWish(){
			cout<<"Happy birthday "<<name<<"!"<<endl;
		}
};

int main(){
	string s;
	cout<<"Enter your sweet name: ";
	cin>>s;
	HbdWish user(s);
	user.printWish();
	return 0;
}
