#include <iostream>
#include "AutomaticCar.h"
#include <windows.h>
#include "SetColor.h"
#include <stdlib.h>
#include "random.h"

using namespace std;

int main()
{

    // Execution

    // Welcome Screen
    SetColor(253);
    cout << "............:::::::WELCOME TO THE FAIR FORMULA:::::::............";
    Sleep(2500);
    SetColor(0);
    system("CLS");
    Sleep(1000);

    // Team Selection
    int team;
    SetColor(15);
    cout << "Please Select your Team:\n1.RedBull\n2.Ferrari\n3.Mclaren\n4.Mercedes\n5.AstonMartin\n6.Haas\n7.VCarb\n8.Williams\n9.Alpine\n10.KickSauber" << endl;
    cin >> team;

    // Building Cars
    FormulaCar car[10];
    for (int i = 0; i < 10; i++)
    {
        car[i].TeamSet(i + 1);
    }

    // Actual Race Execution
    int speed, winner = 0, win = 0;
    cout << "This race has 70 laps" << endl;
    Sleep(1000);
    //
    for (int lap = 1; lap < 211; lap++) 
    {
        for (int cars = 0; cars < 10; cars++)
        {
            cout << cars + 1 << "||";
            speed = randomnum(0, 380);
            car[cars].UpdateSpeed(speed);
            for (int i = 0; i < floor(car[cars].GetDistance() / 200); i++)
            {
                cout << "-";
            }
            SetColor(car[cars].Code());
            cout << car[cars].PrintCar() << endl;
            if (car[cars].GetDistance() > winner)
            {
                winner = car[cars].GetDistance();
                win = car[cars].GetT();
            }
            SetColor(15);
        }
        Sleep(70);
        if (lap == 70)
        {
            break;
        }
        system("CLS");
    }
    cout << "Winner is Team:" << win << endl;
    if (win == team)
    {
        cout << "YOU WON!!!!";
    }
    else
    {
        cout << "YOU LOST!!";
    }

    return 0;
}