#include <iostream>
using namespace std;

class Reynold
    {
        public:
            double velocity;
            double viscosity;
            double reynold;
    };

double reynoldnum(int type)
{
    float diameter;
    
    cout << "Please enter your fluid selection: ";
    cin >> type;
    
    cout << "Please enter the pipe diamater: ";
    cin >> diameter;
    
    //object of gasoline
    Reynold gasoline;
    gasoline.velocity = 0.09;
    gasoline.viscosity = 311 / 500000000;
    gasoline.reynold = (gasoline.velocity * diameter) / gasoline.viscosity;
     
    //object of fuel oil
    Reynold fueloil;
    fueloil.velocity = 0.09;
    fueloil.viscosity = 3523 / 1000000000;
    fueloil.reynold = (fueloil.velocity * diameter) / fueloil.viscosity;
    
    //object of lubricating oil
    Reynold lubricatingoil;
    lubricatingoil.velocity = 0.09;
    lubricatingoil.viscosity = 95966 / 1000000000;
    lubricatingoil.reynold = (lubricatingoil.velocity * diameter) / lubricatingoil.viscosity;
    
    //object of water
    Reynold water;
    water.velocity = 0.09;
    water.viscosity = 8999 / 1000000000;
    water.reynold = (water.velocity * diameter) / water.viscosity;
    
    //Reynold's Number = (average velocity * internal pipe diameter) / kinematic viscosity
    
    switch(type)
    {
        case '1': 
        {
            return gasoline.reynold;
        }
        break;
        case '2': 
        {
            return fueloil.reynold;
        }
        break;
        case '3': 
        {
            return lubricatingoil.reynold;
        }
        break;
        case '4': 
        {
            return water.reynold;
        }
        break;
        default : cout << "We currently don't have that fluid type";
        // no break for default
    }
}

int main() 
{
    int type; 
    
    cout << "\nMenu of Fluids\n";
    cout << "==========\n";
    cout << "1 - gasoline\n";
    cout << "2 - fuel oil\n";
    cout << "3 - lubricating oil\n";
    cout << "4 - water\n";
    
    double rey = reynoldnum(type);
    
    cout << "\nYour fluid's Reynold's Number is " << rey;
    cout << "\n";
    
    if (rey < 2000)
    {
        cout << "You have a laminar flow";
    }
    else if (2000 <= rey <= 3000)
    {
        cout << "You have a transition flow";
    }
    else if (3000 < rey)
    {
        cout << "You have a turbulent flow";
    }
    
    return 0;
}
