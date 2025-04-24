//This program reads data from file assignments.dat file, calculates year marks
//and write results onto the file yearmark.dat.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inStream;
    ofstream outStream;

    inStream.open("assignments.dat");
    if (inStream.fail()) {
        cout << "assignments.dat file failed to open correctly!!!\n";
        exit(1);
    }
    outStream.open("yearmark.dat");
    if (outStream.fail()) {
        cout << "yearmark.dat failed to open correctly!!!\n";
        exit(1);
    }

    // Reading entries from file assignments.dat
    string a, b, c, d, e, f;
    double amark1, ap1, amark2, ap2;
    double bmark1, bp1, bmark2, bp2;
    double cmark1, cp1, cmark2, cp2;
    double dmark1, dp1, dmark2, dp2;
    double emark1, ep1, emark2, ep2;
    double fmark1, fp1, fmark2, fp2;

    inStream>>
    a>>amark1>>ap1>>amark2>>ap2>>
    b>>bmark1>>bp1>>bmark2>>bp2>>
    c>>cmark1>>cp1>>cmark2>>cp2>>
    d>>dmark1>>dp1>>dmark2>>dp2>>
    e>>emark1>>ep1>>emark2>>ep2>>
    f>>fmark1>>fp1>>fmark2>>fp2;

    // Writing results to yearmark.dat
    outStream.setf(ios::fixed);
    outStream.setf(ios::showpoint);
    outStream.precision(2);

    outStream<<"These are the year marks for the student: \n\n"
            <<a<<" " << ((amark1/100.0)*66) + ((amark2)/100.0)*49<<"%\n"
            <<b<<" " << ((bmark1)/100.0)*76 + ((bmark2)/100.0)*67<<"%\n"
            <<c<<" " << ((cmark1)/100.0)*58 + ((cmark2)/100.0)*62<<"%\n"
            <<d<<" " << ((dmark1)/100.0)*62 + ((dmark2)/100.0)*57<<"%\n"
            <<e<<" " << ((emark1)/100.0)*82 + ((emark2)/100.0)*78<<"%\n"
            <<f<<" " << ((fmark1)/100.0)*24 + ((fmark2)/100.0)*55<<"%\n";
    cout << "This program calculated percentage year marks for a student\n"
         << "and the results are written in yearmark.dat file.\n";
    outStream.close();

    return 0;
}
