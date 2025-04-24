#include <iostream>
#include <string>

using namespace std;

class Module
{
public:
    Module();
    Module(string n, string c, string l, int nr);
    void setModName(string n);
    void setModCode(string c);
    void setLecturer(string l);
    void setNrStdts(int n);
    string getModName() const;
    string getModCode() const;
    string getLecturer() const;
    int getNrStds() const;

private:
    string moduleName;
    string moduleCode;
    string lecture;
    int nrStudents;
};

Module::Module()
{
    moduleName = " ";
    moduleCode = "0000000";
    lecture = " ";
    nrStudents = 0;
}

Module::Module(string n, string c, string l, int nr)
{
    moduleName = n;
    moduleCode = c;
    lecture = l;
    nrStudents = nr;
}

void Module::setModName(string n)
{
    moduleName = n;
}

void Module::setModCode(string c)
{
    moduleCode = c;
}

void Module::setLecturer(string l)
{
    lecture = l;
}

void Module::setNrStdts(int n)
{
    nrStudents = n;
}

string Module::getModName() const
{
    return moduleName;
}

string Module::getModCode() const
{
    return moduleCode;
}

string Module::getLecturer() const
{
    return lecture;
}

int Module::getNrStds() const
{
    return nrStudents;
}


int main()
{
    string mName;
    string mCode;
    string lect;
    int nrStds;

    cout << "Please enter the module information: " << endl;
    cout << "\nModule name: ";
    getline(cin, mName, '\n');
    cout << "\nModule code: ";
    cin >> mCode;
    cout << "\nLecture: ";
    cin.get();
    getline(cin, lect, '\n');
    cout << "\nNumber of students for this module: ";
    cin >> nrStds;

    Module myModule(mName, mCode, lect, nrStds);
    cout << "\nModule information: " << endl;
    cout << myModule.getModCode() << endl;
    cout << myModule.getModName() << endl;
    cout << myModule.getLecturer() << endl;
    cout << myModule.getNrStds() << endl;

    return 0;
}
