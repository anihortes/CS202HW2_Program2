#include <iostream>
using std::cout;
using std::endl;
static int stats = 0;
struct Data{
    int temp = 0;
    int temp2 = 0;
    int temp3 = 0;
};
void printPointer(int i){
    int newint = 0;
    int* iptr = &i;
    //the unary * operator dereferecnes the pointer
    cout << "i =" << *iptr << endl;
    cout << "&i =" << iptr << endl;
    cout << "j =" << newint << endl;
    cout << "&j =" << &newint << endl;

}
int* outsidePtr;
int* otherPtr;
int main() {
    cout << "Demonstrates stack growing towards address 0x00000000" << endl;
    int i =0;
    printPointer(i);
    cout << "j is allocated space on the stack after i and &j < &i" << endl;
    int d;
    Data temp;
    int *ptr;
    int *ptr2;
    ptr = &temp.temp;
    ptr2 = &temp.temp2;
    outsidePtr = &stats;
    cout << "ptr =" << *ptr << endl;
    cout << "&ptr =" << &ptr << endl;
    cout << "ptr2 =" << *ptr2 << endl;
    cout << "&ptr2 =" << &ptr2 << endl;
    cout << "outsidePtr =" << *outsidePtr << endl;
    cout << "&outsidePtr =" << &outsidePtr << endl;
    cout << "&otherPtr =" << &otherPtr << endl;
    return 0;
}