#include <iostream>

using namespace std;

int main()
{
    int sen;
    int sal;
    cout<<"Insert your age"<< "\n";
    cin >> sen;
    cout<<"Insert year"<< "\n";
    cin >> sal;
    cout << "day = " <<sen*365 << "\t" ;
     cout << "month = " <<sen*12 << "\t";
     cout << "birth year = " <<sal-sen << "    " << "+ / - 1" << endl;
    return 0;
}
