#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cout << "input your triangle's bahy: ";
    cin >> a >> b >> c;
    float C = acos((a*a+b*b-c*c)/2*a*b), B = acos((c*c+a*a-b*b)/2*c*a), A = acos((b*b+c*c-a*a)/2*b*c);
    cout << "kon A = " << A << endl;
    cout << "kon B = " << B << endl;
    cout << "kon C = " << C << endl;

    return EXIT_SUCCESS;
}