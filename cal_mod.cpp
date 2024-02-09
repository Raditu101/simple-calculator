// name: roufir raditu

#include<iostream>
#include<cstdlib>
#include<math.h>
#include<string>

int main(){
double num1, num2, result;
char op;
bool again = true;


std::cout<< "*********** CALCULATOR ***********\n ";
std::cout<< "This is a basic Calculator\n ";

while(again){
 
 std::cout<< "Basic function: Please enter either (+ - / * $):\n ";
 std::cin>> op;
    while( !(op=='+') && !(op=='-') && !(op=='/') && !(op=='*') && !(op=='$') ){
    std::cout<< "Please enter a valid response: ";
    std::cin>> op;
 }
    
 std::cout<< "Enter number 1: ";
 std::cin>> num1;

 std::cout<< "Enter number 2: ";
 std::cin>> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout<< "Result: " << result << std::endl;
            break;

        case '-':
            result = num1 - num2;
            std::cout<< "Result: " << result << std::endl;
            break;

        case '/':
            result = num1/num2;
            if(num2 == 0){
                std::cout<< "You are trying to divide by zero, it will come as infinity " << std::endl;
            }
            else if(num2 != 0){
                std::cout<< "Result: " << result << std::endl; 
            }
            break;

        case '*':
            result = num1 * num2;
            std::cout<< "Result: " << result << std::endl;
            break;

        case '$' :
            result = 0;
            for(int i = (num1 < num2 ? num1 : num2); i <= (num1 > num2 ? num1 : num2); i++){
                result += i;
            }   
            std::cout<< "Sum between and including the numbers: " << result << std::endl;
            break;


    default:
        std::cout<< " Not a valid response. Please enter a valid response. ";
    }
 std::cout<<"Do you want to rerun the program?\nIf you want to run please enter 1 or else enter 0 to exit: ";
 std::cin>> again;
 
}

 return 0;
}