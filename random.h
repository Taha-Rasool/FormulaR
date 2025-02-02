#include <random>

using namespace std;

//Funtion to set random speed cuz it was issuing fsr (now fixed cux im using different lib)
int randomnum(int low, int high) {
    random_device rd;
    uniform_int_distribution<int> dist(low,high);
    return dist(rd);
}