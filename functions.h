#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


void velocityFunct(){
  double ds;
  double dt;
  string dsUnits;
  string dtUnits;
  cout << "please enter the change in speed: " << endl;
  ds = validateDouble(ds);
  cout << "enter the units used to measure speed (ex:miles): ";
  dsUnits = validateString(dsUnits);
  cout << "Please enter the change in time: " << endl;
  dt = validateDouble(dt);
  cout << "enter the units used to measure time (ex:seconds): ";
  dtUnits = validateString(dtUnits);
  double velocity = ds / dt;
  
  cout <<"the velocity is "
    << fixed << setprecision(4)<< velocity << " " 
    << dsUnits << "/" << dtUnits << endl;
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
  
  cout <<"the acceleration is " << fixed << setprecision(4)<< acceleration << " " << dvUnits << "/" << adtUnits << endl;
}

void motionFunct(){
  while (1) {
    char input;
    cout << endl;
    cout << "A. Ma = solve for v" << endl;
    cout << "B. Ms = solve for s" << endl;
    cout << "C. Mv2 = solve for v^2" << endl;
    cout << "D. Mv = solve for v_bar" << endl;
    cout << "enter 'E' or 'e' to exit." << endl;
    input = validateChar(input);
    if (input == 'A' && input== 'a'){
      double vSub;
      double at;
      double Ma;
      cout << "please enter v sub 0: ";
        vSub = validateDouble(vSub);
      cout << "\nplease enter a value for variable 'at': ";
        at = validateDouble(at);
      Ma = vSub + at;
      cout << "v = " << fixed << setprecision(4)<< Ma;
      
    }
    else if (input == 'B' && input== 'b'){
      double sSub;
      double vSubT;
      double atSq; 
      double Ms = sSub + vSubT + (.5 * atSq);
      cout << "please enter s sub 0: ";
      sSub = validateDouble(sSub);
      cout << "\nplease enter v sub 0 t: ";
      vSubT = validateDouble(vSubT);
      cout << "\nplease enter value for variable 'at': ";
      atSq = validateDouble(atSq);
      atSq = atSq *atSq;
      cout << "\n s = " << fixed << setprecision(4)<< Ms;
    }
    else if (input == 'C' && input== 'c'){
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
      double Mv2 = vSubSq + (2*a*(s-sSub));
      cout << "\n v^2 = " << fixed << setprecision(4)<< Mv2;
      
    }
    else if (input == 'D' && input== 'd'){
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

void newtonFunct(){
  double m;
  double a;
  double force = m * a;
  cout << "please enter the mass of the object (in kg): ";
  m = validateDouble(m);
  cout << "\nplease enter the acceleration (in m/s^2): ";
  a = validateDouble(a);
  cout << "\nAccording to newtons 2nd law, the force of the moving object is = " << force;
}
void weightFunct(){
  double mass;
  double const gravity = 9.81;
  string massUnits;
  string const gravityUnits = "m/s^2";
  double weight = mass * gravity;
  cout << "please enter the mass of the object: ";
  mass = validateDouble(mass);
  cout << "\nplease enter the units used for mass: " ;
  massUnits = validateString(massUnits);
  cout << "\ngravity on earth is " << gravity << gravityUnits;
  cout << "\nwith weight= m * g. This would make weight = " << weight << " " << massUnits << "*" << gravityUnits;
  
}
void momentumFunct(){
  double m;
  double v;
  double p = m*v;
  cout << "please enter a value for mass (in kg): ";
  m = validateDouble(m);
  cout << "\nplease enter a value for velocity (in m/s): ";
  v = validateDouble(v);
  cout << "\nthe momentum, with m = " << m << "kg and v = " << v << "m/s, is =" << p << "kg*m/s";
}
