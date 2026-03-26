#include <iostream>

using namespace std;

int main(){
    
    // variables
    double population = 2000;
    double target_population = 2000000;
    double growth_rate = 0.15;
    int six_months = 0;

        while (population <= target_population)// the loop to keep cheacking till the popluation surpasses 2 Million
        {
            population = population + (population * growth_rate);
        
                six_months++;
    }

    double years = six_months / 2;

    cout << "Final Population: " << (int)population << endl;
    cout << "It will take " << years << " years to become a city." << endl;

    return 0;
        
}








