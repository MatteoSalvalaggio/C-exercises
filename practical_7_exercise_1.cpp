#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Date {
public:
int day;
int month;
int year;
public:
Date () {day=month=year=0;}
Date (int d, int m, int y) {
  day = d;
  month = m;
  year = y;
}
int getday () {return day;}
int getmonth () {return month;}
int getyear () {return year;}
};

class Blood {
private:
int systolic;
int diastolic;
Date date;
public:
Blood (int sp, int dp, Date dt) {
  systolic = sp;
  diastolic = dp;
  date = dt;
}
Date getdate () {return date;}
int getsystolic () {return systolic;}
int getdiastolic () {return diastolic;}
void print() {
  cout << "Systolic Pressure: " << systolic << ";" << "Diastolic Pressure: " << diastolic << ";" << "Date: " << date.getday() << "/" << date.getmonth() << "/" << date.getyear()<<endl;
}
};

class Patient {
  private:
  string name;
  vector <Blood> data;
  public:
  Patient (string n) {
    name = n;
  }
  void addRecord (Blood b) {
    data.push_back(b);
  }
  void printReport() {
vector <Blood> highestabnormal = vector <Blood> ();
int max_value = 140;
double average_diastolic = 0.0;
for (int i=0;i<data.size(); i++) {
  average_diastolic = average_diastolic + data[i].getdiastolic();
  if (data[i].getsystolic()>max_value) {
    highestabnormal.clear();
    highestabnormal.push_back(data[i]);
    max_value = data[i].getsystolic();
  }
else if (data[i].getsystolic() == max_value) {
  highestabnormal.push_back(data[i]);
}
}
cout << "Patient: " << name << endl;
if (highestabnormal.size()==0){
  cout << "No measurement was too high!"<< endl;
  }
else {
  cout << "The abnormal systolic pressure/s is/are: " << endl;
  for (int i = 0; i < highestabnormal.size(); i++) {
  highestabnormal[i].print();
  }
}
cout << "The average diastolic pressure is: " << average_diastolic/data.size() << endl;
}
};

int main() {
Patient mary("Mary");
mary.addRecord(Blood(94,61, Date(2,5,2013)));
mary.addRecord(Blood(97,65, Date(3,5,2013)));
mary.addRecord(Blood(144,99, Date(4,5,2013)));
mary.addRecord(Blood(123,88, Date(5,5,2013)));
mary.addRecord(Blood(177,110, Date(6,5,2013)));
mary.addRecord(Blood(145,89, Date(7,5,2013)));
Patient john("John");
john.addRecord(Blood(88,57, Date(15,5,2013)));
john.addRecord(Blood(95,61, Date(16,5,2013)));
john.addRecord(Blood(114,80, Date(17,5,2013)));
john.addRecord(Blood(151,96, Date(18,5,2013)));
john.addRecord(Blood(176,104, Date(19,5,2013)));
john.addRecord(Blood(176,110, Date(20,5,2013)));
mary.printReport();
cout<<endl;
john.printReport();
	return 0;
}