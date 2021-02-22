#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

class Angle
{
    public:
     double alpha;
     double a;
     double b;
     double c;
       
     double calc_angle(double a, double b, double c)
        {
        // Cosinus_satsen a*a=b*b+c*c-2*b*c*cos(alpha)
        return alpha=acos((a*a-b*b-c*c) /( -2*b*c));
        }

};

int main()
{
Angle angle1;
    double pi= 2*asin(1.00);
     
    cout << "Give triangle sides a, b, and c.  ENTER --> ";

    cin >> angle1.a >> angle1.b >> angle1.c;
    //if(a < b+c and b < c+a and c < a+b)
    if(angle1.a < angle1.b+angle1.c and angle1.b < angle1.c+angle1.a and angle1.c < angle1.a+angle1.b)
    {
    cout << "\na= " << angle1.a << " b= " << angle1.b << " c= " << angle1.c << endl;

    //cout << "Angle oposite a= " << angle1.calc_angle(angle1.a, angle1.b, angle1.c) << endl;
    cout << "Angle oposite a = " << 180*angle1.calc_angle(angle1.a, angle1.b, angle1.c)/pi << " deg "<< endl;

    //cout << "Angle oposite b= " << angle1.calc_angle(angle1.b, angle1.c, angle1.a) << endl;
    cout << "Angle oposite b = " << 180*angle1.calc_angle(angle1.b, angle1.c, angle1.a)/pi << " deg "<< endl;

    //cout << "Angle oposite a= " << angle1.calc_angle(angle1.c, angle1.a, angle1.b) << endl;
    cout << "Angle oposite a = " << 180*angle1.calc_angle(angle1.c, angle1.a, angle1.b)/pi << " deg "<< endl;

    return 0; 
    }
    else
    {
        cout << "All sides must be less than the sum of the others\nTry running this rouitine again\n" << endl;
    }
  

}





  


