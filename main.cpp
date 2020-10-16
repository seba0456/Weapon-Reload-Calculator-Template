#include <iostream>

using namespace std;

int main()

{
    int x;
    int y;
    int z;
    y = 20;
    cout << "Weapon Reload calculator" << endl;
    cout << "Ammo: " << endl;
    cin >> x;
    cout << "Ammo in clip: " << endl;
    cin >> z;
    if ( z != 20 )
    {
    if ( (y - z) >= x )
    {
        z = z + x;
        x = 0;
        cout << "Ammo is: " << x << endl;
        cout << "Ammo in clip is: " << z << endl;
    }
    else
        {
        x = x - ( y - z );
        z = z + ( y - z );
        cout << "Ammo is: " << x << endl;
        cout << "Ammo in clip is: " << z << endl;
        }
    }
    else
    {
        cout << "No reload need." << endl;
    }
}
