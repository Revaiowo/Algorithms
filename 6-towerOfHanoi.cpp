#include <iostream>
using namespace std;

void towerOfHanoi(int num, char source, char auxiliary, char destination){
    
    if (num == 1){
        cout <<"Move dick" <<num <<" from " <<source <<" to " <<destination <<endl;
        return;
    }

    towerOfHanoi(num-1, source, destination, auxiliary);
    cout <<"Move dick" <<num <<" from " <<source <<" to " <<destination <<endl;
    towerOfHanoi(num-1, auxiliary, source, destination);
}

int main(){
    
    int disk = 3;
    int source = 'A';
    int auxiliary = 'B';
    int destination = 'C';

    towerOfHanoi(3, source, auxiliary, destination);

    return 0;

}