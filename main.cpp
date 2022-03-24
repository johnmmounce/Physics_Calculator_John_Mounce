#include <iostream>
#include <string>
using namespace std;

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
    cout << "V. Velocity"<< endl;
    cout << "M. Motion"<< endl;
    cout << "A. Acceleration"<< endl;
    cout << "W. Weight"<< endl;
    cout << "F. Momentum"<< endl;
    cout << "enter 'E' or 'e' to exit." << endl;
    cin >> input;
    if (input == 'V' || input == 'v'){
      velocityFunct();
    }
    else if (input == 'A' || input == 'a'){
      accelerationFunct();
    }
    else if (input == 'M' || input == 'm'){
      motionFunct();
    }
    else if (input == 'N' || input == 'n'){
      newtonFunct();
    }
    else if (input == 'W' || input == 'w'){
      weightFunct();
    }
    else if (input == 'F' || input == 'f'){
      momentumFunct();
    }
    else if (input == 'E' || input == 'e'){
      break;
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