//
//  main.cpp
//  Oct9
//
//  Created by Khalid  on 10/9/17.
//  Copyright © 2017 Khalid Alghamdi. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class EmployeeInfo
{
private:
    char *Name;
    char *Phone;
    char *gender;
    char *EducationLevel;
    
public:
    EmployeeInfo(char *n, char *p, char *g, char *e) {
        
        Name = new char[strlen(n) + 1];
        Phone = new char[strlen(p) + 1];
        gender = new char[strlen(g) + 1];
        EducationLevel = new char[strlen(e) + 1];
        
        strcpy(Name, n);
        strcpy(Phone, p);
        strcpy(gender, g);
        strcpy(EducationLevel, e);
        
    }
    ~EmployeeInfo()
    {
        delete[]Name;
        delete[]Phone;
        delete[]gender;
        delete[]EducationLevel;
    }
    
    
    const char *getname() const {
        
        return Name;
    }
    
    const char *getphone() const {
        
        return Phone;
    }
    
    const char *getGender() const {
        
        return gender;
    }
    
    const char *geteducationLevel() const {
        
        return EducationLevel;
    }
};

int main()

{
    EmployeeInfo staff1("Jane Doe", "555-1111", "F", "Ph.D");
    EmployeeInfo staff2("George Guy", "555-5555", "M", "Ed.D");
    EmployeeInfo staff3("Jack Smith", "555-0909", "M", "Masters");
    EmployeeInfo staff4("Sue Jones", "555-3456", "F", "Bachelors");
    EmployeeInfo staff5("Alex Adams", "555-4001", "M", "Associates");
    
    cout<< " Name for Employee #1: " << staff1.getname() << endl;
    cout<< " Phone Number of Employee #1: " << staff1.getphone() << endl;
    cout<< " Gender of Employee #1: " << staff1.getGender() << endl;
    cout<< " Education Level of Employee #1: " << staff1.geteducationLevel() << endl;
    cout << endl;
    
    cout << " Name for Employee #2: " << staff2.getname() << endl;
    cout << " Phone Number of Employee #2: " << staff2.getphone() << endl;
    cout << " Gender of Employee #2: " << staff2.getGender() << endl;
    cout << " Education Level of Employee #2: " << staff2.geteducationLevel() << endl;
    cout << endl;
    
    cout << " Name for Employee #3: " << staff3.getname() << endl;
    cout << " Phone Number of Employee #3: " << staff3.getphone() << endl;
    cout << " Gender of Employee #3: " << staff3.getGender() << endl;
    cout << " Education Level of Employee #3: " << staff3.geteducationLevel() << endl;
    cout << endl;
    
    cout << " Name for Employee #4: " << staff4.getname() << endl;
    cout << " Phone Number of Employee #4: " << staff4.getphone() << endl;
    cout << " Gender of Employee #4: " << staff4.getGender() << endl;
    cout << " Education Level of Employee #4: " << staff4.geteducationLevel() << endl;
    cout << endl;
    
    cout << " Name for Employee #5: " << staff5.getname() << endl;
    cout << " Phone Number of Employee #5: " << staff5.getphone() << endl;
    cout << " Gender of Employee #5: " << staff5.getGender() << endl;
    cout << " Education Level of Employee #5: " << staff5.geteducationLevel() << endl;
    cout << endl;
    
    return 0;
    
}
