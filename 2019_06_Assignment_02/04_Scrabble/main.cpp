#include <iostream>
#include <string>

using namespace std;

class Scrabble {
public:
    void GetLetters(string &let1, string &let2, string &let3);

private:
    string letters1, letters2, letters3;
};



int main()
{
    string word;
    string let1, let2, let3;
    int rest;

    Scrabble Scrabble1;

    cout << "\nLets' play a bit of scrabble...You get 3 tries...." << endl;
    cout << "Make the longest word possible using the following letters: \n" << let1 << endl;
    cout << "You will be penalised for letters not used. \n";
    cin >> word;

    rest = 10 - word.size();

    cout << Scrabble1 << endl;

    return 0;
}

void Scrabble::GetLetters(string &let1, string &let2, string &let3) {
    letters1 = let1;
    letters2 = let2;
    letters3 = let3;
}
