#include <unistd.h>
#include "vector"
#include <iostream>

using namespace std;

int main(){

    int firstChild = fork();
    if (firstChild == 0)
    {
        cout << "process_id = " << getpid() << ";\n";
        cout << "parent_id = " << getppid() << ";\n";
    }
    else if (firstChild > 0)
    {
        int secondChild = fork();
        if (secondChild == 0)
        {
            cout << "process_id = " << getpid() << ";\n";
            cout << "parent_id = " << getppid() << ";\n";
        }
        else if (secondChild > 0)
        {
            int thirdChild = fork();
            if (thirdChild == 0)
            {
                cout << "process_id = " << getpid() << ";\n";
                cout << "parent_id = " << getppid() << ";\n";
            }
        }
    }

    return 0;
}
