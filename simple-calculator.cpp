#include <iostream>
using namespace std;

int main(){
    cout <<"Welcome :)" << endl;
    int selection, a , b, result;
    while (true){
    cout << "1.Sum" << "\n"
    << "2.Substraction" << "\n" << "3.Multiplication" << "\n" << "Division" << "\n" << "Please select project: ";
    cin>>selection;
    cout<< "Please, enter first number: ";
    cin>>a;
    cout<< "Please, enter second number: ";
    cin>>b;
    
    switch (selection)
    {
    case 1:
        result = a + b;
        break;
    case 2:
        result = a - b;
        break;
    case 3:
        result = a * b;
        break;
    case 4: 
        result = a / b;
        break;
    }
    cout << "The result of process is: " << result << endl;
    }
    
    return 0;
}