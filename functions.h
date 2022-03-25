#include <iostream>
#include <string>
using namespace std;

void newtonFunct(){
  cout << "newton" << endl;
}
void weightFunct(){
  cout << "weight" << endl;
}
void momentumFunct(){
  cout << "momentum" << endl;
}

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

void accelerationFunct(){
  double dv;
  double adt;
  string dvUnits;
  string adtUnits;
  cout << "please enter the change in velocity: " << endl;
  dv = validateDouble(dv);
  cout << "enter the units used to measue velocity (ex:miles): ";
  dvUnits = validateString(dvUnits);
  cout << "Please enter the change in time: " << endl;
  adt = validateDouble(adt);
  cout << "enter the units used to measue time (ex:seconds): ";
  adtUnits = validateString(adtUnits);
  double acceleration = dv / adt;
  
  cout <<"the acceleration is " << acceleration << " " << dvUnits << "/" << adtUnits << endl;
}

void motionFunct(){
  while (1) {
    char input;
    cout << endl;
    cout << "1. Ma = solve for v" << endl;
    cout << "2. Ms = solve for s" << endl;
    cout << "3. Mv2 = solve for v^2" << endl;
    cout << "4. Mv = solve for v_bar" << endl;
    cout << "enter 'E' or 'e' to exit." << endl;
    input = validateChar(input);
    if (input == '1'){
      double vSub;
      double at;
      double Ma;
      cout << "please enter v sub 0: ";
        vSub = validateDouble(vSub);
      cout << "\nplease enter a value for variable 'at': ";
        at = validateDouble(at);
      Ma = vSub + at;
      cout << "v = " << Ma;
      
    }
    else if (input == '2' ){
      double sSub;
      double vSubT;
      double atSq; 
      double Ms = sSub + vSubT + (.5 * atSq);
      cout << "please enter s sub 0: ";
      sSub = validateDouble(sSub);
      cout << "\nplease enter v sub 0 t: ";
      vSubT = validateDouble(vSubT);
      cout << "\nplease enter at: ";
      atSq = validateDouble(atSq);
      atSq = atSq *atSq;
      cout << "\n s = " << Ms;
    }
    else if (input == '3'){
      double vSubSq;
      double a;
      double s;
      double sSub;
      cout << "please enter a value for v sub 0^2: ";
      vSubSq = validateDouble(vSubSq);
      cout << "\nplease enter a value for a: ";
      a = validateDouble(a);
      cout << "\nplease enter a value for s: ";
      s = validateDouble(s);
      cout << "\nplease enter a value for s sub 0: ";
      sSub = validateDouble(sSub);
      double Mv2 = vSubSq + (2*a(s-sSub));
      cout << "\n v^2 = " << Mv2;
      
    }
    else if (input == '4'){
       double v;
      double vSub;
      cout << "please enter a value for v: ";
      v = validateDouble(v);
      cout << "\nplease enter a value for v sub 0";
      vSub = validateDouble(vSub);
      double Mv = .5*(v +vSub);
      cout << "\nv_bar = " << Mv;
    }
    else if (input == 'E' || input == 'e'){
      break;
    }    
    else {
      cerr << "invalid input" << endl;
    }
  }
}


