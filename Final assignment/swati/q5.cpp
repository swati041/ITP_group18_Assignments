#include <iostream>
using namespace std;

int main() {
    int a[] = {1,2,2,3,1}, n = 5;
    for(int i = 0; i < n; i++) {
        bool found = false;
        for(int j = 0; j < i; j++)
            if(a[i] == a[j]) found = true;
        if(!found) cout << a[i] << " ";
    }
}