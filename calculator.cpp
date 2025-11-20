#include <iostream>
using namespace std;
   
int main() {

    char op;
    int num1; 
    int num2;
    float result;


    cout << "Enter First number : ";
    cin >> num1;
    
    cout << "Enter Second number : ";
    cin >> num2;
    
    cout << "Enter the operator : ";
    cin >> op;
    

if (op == '+'){
    result = num1 + num2;
}
else if (op == '-'){
    result = num1 - num2;
}
else if (op == '*'){
    result = num1 * num2;
}
else if (op == '/'){
    result = num1 / num2;
}
else{
    cout << "Error"<<endl;
}

cout << "The Result will be :"<<result;
    
    return 0;
}