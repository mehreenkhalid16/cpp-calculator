/*#include<iostream>
using namespace std;
int main(){
    int num1, num2, choice;
    while(true){
    cout<<"_________________________________"<<endl;
    cout<<" \nSimple Calculator\n";
    cout<<" 1.  Addition\n";
    cout<<" 2.  Subtraction\n";
    cout<<" 3.  Multiplication\n";
    cout<<" 4.  Division\n";
    cout<<" 5.  Modulus\n";
    cout<<"_________________________________"<<endl;
    cout<<" Enter Your Choice: ";
    cin>>choice;
    if(choice == 6){
        cout<<" Exit !"<<endl;
        break;
    }
    
     cout<<" Enter First Number: ";
    cin>>num1;
     cout<<" Enter Second Number: ";
    cin>>num2;
    switch(choice){
        case 1:
        cout<<" Result =\n"<<num1 + num2<<endl;
        break;
        case 2:
        cout<<" Result =\n"<<num1 - num2<<endl;
        break;
         case 3:
        cout<<" Result =\n"<<num1 * num2<<endl;
        break;
         case 4:
         if(num2 != 0)
        cout<<" Result =\n"<<num1 / num2<<endl;
        else 
        cout<<" Can not divide by zero!\n"<<endl;
        break;
         case 5:
        cout<<" Result =\n"<<num1 % num2<<endl;
        break;
        default:
        cout<<" Invalid choice\n"<<endl;
       
    }
}
return 0;
}*/
#include<iostream>
using namespace std;

int main(){
    int num1, num2, choice;

    while(true){
        cout<<"_________________________________"<<endl;
        cout<<"\nSimple Calculator\n";
        cout<<" 1. Addition\n";
        cout<<" 2. Subtraction\n";
        cout<<" 3. Multiplication\n";
        cout<<" 4. Division\n";
        cout<<" 5. Modulus\n";
        cout<<" 6. Exit\n";
        cout<<"_________________________________"<<endl;

        cout<<"Enter Your Choice: ";
        cin>>choice;

        if(choice == 6){
            cout<<"Exit!"<<endl;
            break;
        }

        cout<<"Enter First Number: ";
        cin>>num1;

        cout<<"Enter Second Number: ";
        cin>>num2;

        switch(choice){
            case 1:
                cout<<"Result = "<< num1 + num2 << endl;
                break;

            case 2:
                cout<<"Result = "<< num1 - num2 << endl;
                break;

            case 3:
                cout<<"Result = "<< num1 * num2 << endl;
                break;

            case 4:
                if(num2 != 0)
                    cout<<"Result = "<< num1 / num2 << endl;
                else
                    cout<<"Cannot divide by zero!\n";
                break;

            case 5:
                if(num2 != 0)
                    cout<<"Result = "<< num1 % num2 << endl;
                else
                    cout<<"Cannot mod by zero!\n";
                break;

            default:
                cout<<"Invalid choice\n";
        }
    }

    return 0;
}