#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("tanmay.txt");
    fout<<"hello ";
    fout.close();

    const int n=80;
    char s[n];
    ifstream fin;
    fin.open("tanmay.txt");
    while(fin)
    {
        fin.getline(s,n);
    }
    fin.close();
    //fin.open("tanmay1.txt");

}