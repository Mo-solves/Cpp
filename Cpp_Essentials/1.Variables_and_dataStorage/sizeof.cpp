#include <iostream>
using namespace std;

int main()
{
    cout << "int " << sizeof(int) << endl;
    cout << "float " << sizeof(float) << endl;
    cout << "double " << sizeof(double) << endl;
    cout << "char " << sizeof(char) << endl;
    cout << "bool " << sizeof(bool) << endl;

    short int age;
    cout << "short int " << sizeof(age) << endl;
    cout << "long int " << sizeof(long int) << endl;
    cout << "long long int " << sizeof(long long int) << endl;

    unsigned int unsigned_int;
    signed int signed_int;
    cout << "unsigned int " << sizeof(unsigned_int) << endl;
    cout << "signed int " << sizeof(signed_int) << endl;

    char bucket = 'A';
    int bucket_int = bucket;

    cout << "char bucket " << bucket << endl;
    cout << "bucket int " << bucket_int << endl;

    bool someVal = 5;
    cout << someVal << endl;
    return 0;
}