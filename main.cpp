#include <iostream>

// Super awesome greatest common driver program
int main(){
    int a,b;
    std::cin >> a >> b; // Reading the two numbers from the standard input
    int lko =1;
    int& min = (a<b)?a:b;
    for(int i = 1; i < min; i++){
        if(a%i==0 && b%i==0){
            lko = i;
        }
    }
    std::cout << lko << std::endl; // Printing the gcd to STOUT
    return 0;
}