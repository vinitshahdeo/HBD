# include <iostream>
using namespace std;

class HBD {
  private:

  string name;
  string msg;   //the wish
  int n;  // Number of iterations
  string stickers[5] = {":)", ";)", "UwU", "OuO", "O^O"};
  
  public:

  //default constructor
  HBD(){
    this->msg = "Happy Birthday";
    this->n = 0;
  }

  void setData(){  
    cout << "Enter name:";
    cin >> name;
    cout << "Enter number of iterations of msg:";
    cin >> this->n;
  }

  void wish();  //wish the birthday-person
};

void HBD :: wish(){
    for(int i=0; i<n; i++){
        cout << msg << " " << name << "! "
             << stickers[i%5] << endl;
    }
}

int main(){
    HBD bday;
    bday.setData();
    bday.wish();
    return 0;
}
