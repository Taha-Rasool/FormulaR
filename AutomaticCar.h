#include <iostream>
#include <windows.h>

using namespace std;

class FormulaCar {
private:
    // All required variables
    string Team;
    int speed, gear, code, distance=0,team;


    // Bellow are all setters and getters



    //Below is a setter for the team
    void SetTeam(int team){
        switch(team)
        {
        case 1:
            Team = "RedBull";
            code = 20;
            break;
        case 2:
            Team = "Ferrai";
            code = 79;
            break;
        case 3:
            Team = "Mclaren";
            code = 110;
            break;
        case 4:
            Team = "Mercedes";
            code = 139;
            break;
        case 5:
            Team = "AstonMartin";
            code = 39;
            break;
        case 6:
            Team = "Haas";
            code = 116;
            break;
        case 7:
            Team = "VCarb";
            code = 23;
            break;
        case 8:
            Team = "Williams";
            code = 159;
            break;
        case 9:
            Team = "Alpine";
            code = 219;
            break;
        case 10:
            Team = "KickSauber";
            code = 160;
            break;
        default:
            break;
        }
    }


    // Bellow is the gear setting mechanism
    void Gears(int currentspeed){
        switch (currentspeed)
        {
        case 1 ... 20:
            gear = 1;
            break;
        case 21 ... 60:
            gear = 2;
            break;
        case 61 ... 120:
            gear = 3;
            break;
        case 121 ... 160:
            gear = 4;
            break;
        case 161 ... 200:
            gear = 5;
            break;
        case 201 ... 250:
            gear = 6;
            break;
        case 251 ... 300:
            gear = 7;
            break;
        case 301 ... 390:
            gear = 8;
            break;
        default:
            gear = 0;
            break;
        }
    }


public:
    FormulaCar(){
    }

    //Public getters and setters
    string GetTeam(){
        return Team;
    }

    int GetT(){
        return team;
    }

    void TeamSet(int t){
        SetTeam(t);
        team =t;
    }

    string PrintCar(){
        return "|>)-|>";
    }

    int Code(){
        return code;
    }

    void UpdateSpeed(int newspeed){
        speed = newspeed;
        Gears(newspeed);
        distance += speed;
    }

    int GetDistance(){
        return distance;
    }

};