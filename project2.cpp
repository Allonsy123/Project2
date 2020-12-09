#include <iostream>
using namespace std;
double flow(double Reynum)
{
    if (Reynum < 2000)
    {
        cout << "It will have a laminar flow.";
        return 0;
    }
    if (2000 <= Reynum && Reynum <= 3000)
    {
        cout << "It will have a transition flow.";
        return 0;
    }
    if (3000 < Reynum)
    {
        cout << "It will have a turbulent flow.";
        return 0;
    }
}

int main() 
{
    int type;
    float diameter;
    
    cout << "Choose your fluid type:" << endl;
    cout << "1 - gasoline\n";
    cout << "2 - fuel oil\n";
    cout << "3 - lubricating oil\n";
    cout << "4 - water\n";
    
    cin >> type;
    cout << "Enter the pipe diameter:" << endl;
    cin >> diameter;
    
    if (type == 1)
    {
        double Reynum = (0.09 * diameter) / 0.000000622;
        double gasoline = flow(Reynum);
        return 0;
    }
    if (type == 2)
    {
        double Reynum = (0.09 * diameter) / 0.000003523;
        double fueloil = flow(Reynum);
        return 0;
    }
    if (type == 3)
    {
        double Reynum = (0.09 * diameter) / 0.000095966;
        double lubeoil = flow(Reynum);
        return 0;
    }
    if (type == 4)
    {
        double Reynum = (0.09 * diameter) / 0.000008999;
        double water = flow(Reynum);
        return 0;
    }
    else
    {
        cout << "Invalid fluid type";
    }
}
