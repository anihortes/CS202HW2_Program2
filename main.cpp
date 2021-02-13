#include <iostream>
using std::cout;
using std::endl;
static int stats = 0;

void printPointer(int stackPtrOne){
    int stackPtrTwo = 0;
    int* iptr = &stackPtrOne;
    //the unary * operator dereferecnes the pointer
    cout << "&stackPtrOne =" << &iptr << endl;
    cout << "&stackPtrTwo =" << &stackPtrTwo << endl;

}
int* staticPtrOne;
int* staticPtrTwo;
int main() {
    cout << "Demonstrates that the stack growing towards address 0x00000000." << endl;
    int stackPtrOne =0;
    printPointer(stackPtrOne);
    cout << "stackPtrTwo is allocated space on the stack after stackPtrOne" << endl;

    staticPtrOne = &stats;
    cout << "Demonstrates where static data is stored." << endl;
    cout << "&staticPtrOne =" << &staticPtrOne << endl;
    cout << "&staticPtrTwo =" << &staticPtrTwo << endl;

    int *freePtrOne = new int;
    int *freePtrTwo = new int;
    cout << "Demonstrates where free data is stored." << endl;
    cout << "&freePtrOne =" << &freePtrOne << endl;
    cout << "&freePtrTwo =" << &freePtrTwo << endl;
    delete freePtrOne;
    delete freePtrTwo;
    return 0;
}