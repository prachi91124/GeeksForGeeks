#include <iostream>
using namespace std;

bool fn(int n){
    if(n % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

bool bitwiseand(int n){
    if ((n & 1) == 0){
        return true;
    }
    else{
        return false;
    }
}

bool bitwiseshift(int n){
    if(((n >> 1)<<1) == n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin >> n;

   cout << "By finding the Remainder: " << ((fn(n)  == 1) ? "true": "false") << endl;
   cout << "By using Bitwise AND operation: " << ((bitwiseand(n)  == 1) ? "true": "false") << endl;
   cout << "By using Bitwise Shift operators: "<< ((bitwiseshift(n)  == 1) ? "true": "false") << endl;
}