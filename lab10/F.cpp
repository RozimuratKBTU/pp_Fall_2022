#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double n;
    cin >> n;
    double result = 0;
    double total = 0;
    double sum;
    double qx = 3;
    for(int i = 0; i< n; ++i){
        double ats1, ats2, finall, credit;
        cin >> ats1 >> ats2 >> finall >> credit;
        total+=credit;
        if(ats1 + ats2 > 29 && finall > 19){
            if(ats1 + ats2 + finall >= 95) result = 4;
            if(ats1 + ats2+ finall >= 90 && ats1 + ats2 + finall < 95) result = 11/qx;
            if(ats1 + ats2+ finall >= 85 && ats1 + ats2 + finall < 90) result = 10/qx;
            if(ats1 + ats2+ finall >= 80 && ats1 + ats2 + finall < 85) result = 3;
            if(ats1 + ats2+ finall >= 75 && ats1 + ats2 + finall < 80) result = 8/qx;
            if(ats1 + ats2+ finall >= 70 && ats1 + ats2 + finall < 75) result = 7/qx;
            if(ats1 + ats2+ finall >= 65 && ats1 + ats2 + finall < 70) result = 2;
            if(ats1 + ats2+ finall >= 60 && ats1 + ats2 + finall < 65) result = 5/qx;
            if(ats1 + ats2+ finall >= 55 && ats1 + ats2 + finall < 60) result = 4/qx;
            if(ats1 + ats2+ finall >= 50 && ats1 + ats2 + finall < 55) result = 1;
            if(ats1+ats2+finall < 50) result = 0;
            sum += result * credit;
        }
    }
    cout << sum / total;
}