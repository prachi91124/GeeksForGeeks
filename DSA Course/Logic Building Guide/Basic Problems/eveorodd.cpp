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

int main(){
    int n;
    cin >> n;

   cout << ((fn(n)  == 1) ? "true": "false");
   cout << ((bitwiseand(n)  == 1) ? "true": "false");
}