#include <iostream>
using namespace std;

void fn(int n){
    for(int i = 1; i <= 10; i++){
        cout << n << "*" << i << "=" << n*i<<endl;
    }
}
int main(){
    int n;
    cin >> n;

    fn(n);
}