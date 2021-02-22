#include <iostream>
using namespace std;
#include <cmath>

double f(double x, double y, double z)
{
    return x + y-z;
}
double g(double x, double y, double z)
{
    return sin(x)+2*y;
}

int main()
{
    int n;
    double x0, y0, z0, xn;

   cout<<"Enter x0,y0,z0";
   cin>>x0>>y0>>z0;
    cout << "Enter the calculation point(xn): ";
    cin >> xn;
    cout << "Enter the number of steps: ";
    cin >> n;
    double h = (xn - x0) / n;
    for (int i = 0; i < n; i++)
    {
        double k1 = h * f(x0, y0, z0);
        double l1 = h * g(x0, y0, z0);
        double k2 = h * f(x0 + h / 2, y0 + k1 / 2, z0 + l1 / 2);
        double l2 = h * g(x0 + h / 2, y0 + k1 / 2, z0 + l1 / 2);
        double k3 = h * f(x0 + h / 2, y0 + k2 / 2, z0 + l2 / 2);
        double l3 = h * g(x0 + h / 2, y0 + k2 / 2, z0 + l2 / 2);
        double k4 = h * f(x0 + h, y0 + k3, z0 + l3);
        double l4 = h * g(x0 + h, y0 + k3, z0 + l3);
        double k = (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        double l = (l1 + 2 * l2 + 2 * l3 + l4) / 6;
        y0 = y0 + k;
        z0 = z0 + l;
        x0 = x0 + h;
    }
    std::cout << "The value of yo at " << xn << " is: " << y0 << "\n";
    std::cout << "The value of zo at " << xn << " is: " << z0;
    return 0;
}
