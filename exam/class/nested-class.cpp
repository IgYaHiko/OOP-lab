#include<iostream>
using namespace std;

class University {
public:
    string uniName;
    void setUniversityName(string name) {
        this->uniName = name;
    }
    class Department {
        public:
        string departmentName;
        string hodName;

        void setDeparmentName(string departmentName, string hodName) {
            this->departmentName = departmentName;
            this->hodName = hodName;
        }

        void display(University u) {
            cout << "University Name: " << u.uniName << endl;
            cout << "Department Name: " << departmentName << endl;
            cout << "Hod Name: " << hodName << endl;
        }
    };
};
int main() {
    University u;
    University::Department d;

    u.setUniversityName("Thapar University");
    d.setDeparmentName("CSE", "Mr X");
    d.display(u);
    return 0;
    
}