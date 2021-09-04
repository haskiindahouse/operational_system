#include <unistd.h>
#include "vector"
#include <iostream>

using namespace std;

int main(){
    vector<int> childs = {fork(), fork()};
    cout << "process_id = " << getpid() << ";\n";
    cout << "parent_id = " << getppid() << ";\n";
    return 0;
}
