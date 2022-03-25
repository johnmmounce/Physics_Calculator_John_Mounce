#include <iostream>
#include <string>
using namespace std;


void velocityFunct(){
  double ds;
  double dt;
  string dsUnits;
  string dtUnits;
  cout << "please enter the change in speed: " << endl;
  ds = validateDouble(ds);
  cout << "enter the units used to measue speed (ex:miles): ";
  dsUnits = validateString(dsUnits);
  cout << "Please enter the change in time: " << endl;
  dt = validateDouble(dt);
  cout << "enter the units used to measue time (ex:seconds): ";
  dtUnits = validateString(dtUnits);
  double velocity = ds / dt;
  
  cout <<"the velocity is " << velocity << " " << dsUnits << "/" << dtUnits << endl;
  
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

