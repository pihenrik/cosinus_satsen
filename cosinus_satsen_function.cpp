#include <iostream>
#include <cmath>

#include <fstream>

using namespace std;

    // void fct_abc(float, float, float);
    float calc_cosin_satsen(float, float, float);

int main() 
{
float alpha1, alpha2, alpha3;
float cosalpha;
float pi= 2*asin(1.00);
float p, q, r;
float sides[9];
int snr;


cout << "\nCalculate all angels in a triangle with known sides a, b and c" << endl;
cout << "\nGive the triangle sides a, b and c. ENTER: ";
cin >> p >> q >> r;
// Check if triangle is defined:

if(p < q+r and q < r+p and r < p+q)
    {
    cout << "\na= " << p << " b= " << q << " c= " << r << endl;

    alpha1 = calc_cosin_satsen(p, q, r);
    alpha2 = calc_cosin_satsen(q, r, p);
    alpha3 = pi - alpha1 - alpha2;

    cout.precision(3);

    cout << "\nalpha1 = " << alpha1 << " rad" << " = " << 180*alpha1/pi << " deg" << endl;
    cout << "\nalpha2 = " << alpha2 << " rad" << " = " << 180*alpha2/pi << " deg" << endl;
    cout << "\nalpha3 = " << alpha3 << " rad" << " = " << 180*alpha3/pi << " deg\n" << endl;

    return alpha1, alpha2,alpha3;
    }
    else
    {
        cout << "All sides must be less than the sum of the others\nTry running this rouitine again\n" << endl;
    }
}
// determine all angles in a triangle with sides a, b and c
float calc_cosin_satsen(float a, float b , float c)
{
        double cosalpha;
        double alpha= 0.0f;
        double pi= 2*asin(1.00);
        // Cosinus_satsen a*a=b*b+c*c-2*b*c*cos(alpha)
        cosalpha= (a*a-b*b-c*c) /( -2*b*c);
        alpha=acos(cosalpha);
        return alpha;
}

