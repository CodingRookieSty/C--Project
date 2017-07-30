#include <iostream>
#include <malloc.h>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;

#define MAX_NAME_LEN 10
#define MAX_ADDRESS_LEN 50

int main()
{
    char* name;
    char* address;

    name = (char*)malloc(sizeof(MAX_NAME_LEN));
    address = (char*)malloc(sizeof(MAX_ADDRESS_LEN));

    if (NULL == name)
    {
        cout << "allocate name memory fail！" << endl;
        return -1;
    }

    if (NULL == address)
    {
        cout << "allcoate address memory fail!" << endl;
        free(name);
        return -1;
    }

    cout << "please enter your name:" << endl;
    cin >> name;

    cout << "please enter your address:" << endl;
    cin >> address;

    if (strlen(name) > MAX_NAME_LEN)
    {
        cout << "name is too long" << endl;
        free(name);
        free(address);
        return -1;
    }

    if (strlen(address) > MAX_NAME_LEN)
    {
        cout << "address is too long" << endl;
        free(name);
        free(address);
        return -1;
    }

    cout << name << endl;
    cout << address << endl;

    free(name);
    free(address);

    return 0;
}

