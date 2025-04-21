// This program uses programming concepts to manipulate strings
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void changes(ifstream& inStream, ofstream& outStream) {
    // change 5 to s
    char next;
    inStream.get(next);
    while (!inStream.eof()) {
        if(next=='5')
            outStream<<"s";
        else
            outStream<<next;
        inStream.get(next);
    }

    // capitalize

}

int main()
{
    cout << "Enter file name containing the essay: " << endl;
    char infile[16];
    cin>>infile;

    // open the input file
    ifstream inStream;
    inStream.open(infile);
    if (inStream.fail()) {
        cout << infile << " failed to open!\n";
        exit(1);
    }

    // create the output file
    cout << "Enter the output file name: \n";
    char outfile[16];
    cin>>outfile;

    ofstream outStream;
    outStream.open(outfile);
    if (outStream.fail()) {
        cout<<outfile<< " failed to open!\n";
        exit(1);
    }

    changes(inStream, outStream);
    cout << "\nLebo's essay has been corrected and stored in " << outfile << " file.\n";
    inStream.close();
    outStream.close();

    return 0;
}
