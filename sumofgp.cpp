#include <iostream>
#include <cmath>

using namespace std;
double fn(int gp[], int n){
    double a = gp[0];
    double r = (double)gp[1] / a;

    if(r == 1){
        return a*n;
    }
    double nr = 1 - pow(r,n);
    double d = 1 - r;

    double f  = nr/d;

    double sum = a* f;

    return sum;
}

bool checkGP(int gp[], int n){
    if(n < 2){
        return true;
    }
    double r = (double)gp[1]/gp[0];

    for(int i = 1; i < n-1; i++){
        double ri = (double)gp[i+1]/gp[i];
        if(fabs(ri-r) > 1e-6){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;

    int gp[n];
    for(int i = 0; i < n; i++){
        cin >> gp[i];
    }

    if(checkGP(gp,n)){
    cout<<fn(gp,n);
    }else{
        cout<<"Given array is not a GP";
    }
    return 0;
}