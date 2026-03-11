#include<iostream>
using namespace std;
int main(){
    int num1, num2, choice;
    cout<<" Simple Calculator\n";
    cout<<" 1.  Addition\n";
    cout<<" 2.  Subtraction\n";
    cout<<" 3.  Multiplication\n";
    cout<<" 4.  Division\n";
    cout<<" 5.  Modulus\n";
    cout<<" Enter Your Choice: ";
    cin>>choice;
     cout<<" Enter First Number: ";
    cin>>num1;
     cout<<" Enter Second Number: ";
    cin>>num2;
    switch(choice){
        case 1:
        cout<<" Result ="<<num1 + num2;
        break;
        case 2:
        cout<<" Result ="<<num1 - num2;
        break;
         case 3:
        cout<<" Result ="<<num1 * num2;
        break;
         case 4:
         if(num2 != 0)
        cout<<" Result ="<<num1 / num2;
        else 
        cout<<" Can not divide by zero!";
        break;
         case 5:
        cout<<" Result ="<<num1 % num2;
        break;
        default:
        cout<<" Invalid choice";
    }
return 0;
}