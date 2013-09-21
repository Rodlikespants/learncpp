#include <string>
#include <iostream>

using namespace std;

class Person {
  public:
    string m_strName;
    int m_nAge;
    bool m_bIsMale;

    string GetName() { return m_strName; }
    int GetAge() { return m_nAge; }
    bool IsMale() { return m_bIsMale; }

    Person(string strName = "", int nAge = 0, bool bIsMale = false) : m_strName(strName), m_nAge(nAge), m_bIsMale(bIsMale) {
    }
};

class BaseballPlayer : public Person {
  public:
    double m_dBattingAverage;
    int m_nHomeRuns;

    BaseballPlayer(double dBattingAverage = 0.0, int nHomeRuns = 0) : m_dBattingAverage(dBattingAverage), m_nHomeRuns(nHomeRuns) {
    }
};

class Employee: public Person {
  public:
    string m_strEmployerName;
    double m_dHourlySalary;
    long m_lEmployeeID;

    Employee(string strEmployerName, double dHourlySalary, long lEmployeeID) : m_strEmployerName(strEmployerName), m_dHourlySalary(dHourlySalary), m_lEmployeeID(lEmployeeID) {
      m_strName = strEmployerName;
    }

    double GetHourlySalary() { return m_dHourlySalary; }
    void PrintNameAndSalary() {
      cout << m_strName << ": " << m_dHourlySalary << endl;
    }
};

class Supervisor : public Employee {
  public:
    int m_nOverseesIDs[5];
};

int main() {
  BaseballPlayer cJoe;
  cJoe.m_strName = "Joe";
  cout << cJoe.GetName() << endl;

  Employee emp("rod",-6.0,13);
  emp.PrintNameAndSalary();
  return 0;
}
