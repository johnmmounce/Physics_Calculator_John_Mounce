#include <iostream>
#include <string>
using namespace std;

#include "Input_Validation_Extended.h"

void velocityFunct(){
  cout << "velocity" << endl;
}
void motionFunct(){
  cout << "motion" << endl;
}
void accelerationFunct(){
  cout << "acceleration" << endl;
}
void newtonFunct(){
  cout << "newton" << endl;
}
void weightFunct(){
  cout << "weight" << endl;
}
void momentumFunct(){
  cout << "momentum" << endl;
}

int main() {
  cout << "MENU" << endl;
  char input;
  
  while (1) {
    cout << "1. Velocity"<< endl;
    cout << "2. Motion"<< endl;
    cout << "3. Acceleration"<< endl;
    cout << "4. Newton"<< endl;
    cout << "5. Weight"<< endl;
    cout << "6. Momentum"<< endl;
    cout << "enter 'E' or 'e' to exit." << endl;
    validateChar(input);
    if (input == '1'){
      velocityFunct();
    }
    else if (input == '2' ){
      accelerationFunct();
    }
    else if (input == '3'){
      motionFunct();
    }
    else if (input == '4'){
      newtonFunct();
    }
    else if (input == '5'){
      weightFunct();
    }
    else if (input == '6'){
      momentumFunct();
    }
    else if (input == 'E' || input == 'e'){
      break;
    }    
    else {
      cerr << "invalid input" << endl;
    }
  }
  }

void velocityFunct2(){
  double ds;
  double dt;
  string dsUnits;
  string dtUnits;
  cout << "please enter the change in speed: " << endl;
  cin >> ds;
  cout << "enter the units used to measue speed (ex:miles): ";
  cin >> dsUnits;
  cout << "Please enter the change in time: " << endl;
  cin >> dt;
  cout << "enter the units used to measue time (ex:seconds): ";
  cin >> dtUnits;
  double velocity = ds / dt;
  
  cout <<"the velocity is " << velocity << dsUnits << "/" << dtUnits;
  
}