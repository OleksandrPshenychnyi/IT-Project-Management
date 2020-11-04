

#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;
 float F(float x) {
    return 80 * x - 30 * pow(x, 2) - 0.25 * pow(x, 4);
}
int main()
{
    float a, b, x, x1, x2, f1, f2, eps, fm;
    int n = 0;
    cout<<("Epsilon:");
    cin>>eps;
    cout<<("Vvedit' a & b:");
    cin>>a >> b;
    while (fabs(b - a) > eps) {
        cout << "a=" << a << "\t"<<"b="<<b<<"\t";
        x = (a + b) / 2;
        x1 = x - eps;
        x2 = x + eps;
        cout << "x1=" << x1 << "\t"<< "x2="<<x2<<"\t";
        f1 = F(x1);
        f2 = F(x2);
        cout << "f1=" << f1 << "\t" << "f2=" << f2 << "\n";
        if (1 * f1 > 1 * f2) {
            b = x;
        }
        else { a = x; }
        n++;
    }
    x = (b + a) / 2;
    fm = F(x);
    cout<<"Tsilyova funkciya="<<x<< "\t Fmax="<<fm<< "\t Kilkist iteraciy="<<n;
    _getch();
}
