#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> array = {10, 8, 1, 7, 5};
    int n = array.size();

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1  ; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    //array convertido
    for(int i = 0; i < n; i++){
        cout << array[i] << endl;
    }
    return 0;
}