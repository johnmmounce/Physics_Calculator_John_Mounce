#include <iostream>
#include <string>
using namespace std;

#include "Input_Validation_Extended.h"
#include "functions.h"

int main() {
  cout << "MENU" << endl;
  char input;
  
  while (1) {
    cout << endl;
    cout << "1. Velocity"<< endl;
    cout << "2. Acceleration"<< endl;
    cout << "3. Motion"<< endl;
    cout << "4. Newton"<< endl;
    cout << "5. Weight"<< endl;
    cout << "6. Momentum"<< endl;
    cout << "enter 'E' or 'e' to exit." << endl;
    input = validateChar(input);
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

