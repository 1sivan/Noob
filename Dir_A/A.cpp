#include "A.h"
#include <iostream>
using namespace std;

void Array(int arr[],int size){
    for(int i=0; i<size;i++)
    {
        cout << "请输入第" << i+1 << "个元素：";
        cin >> arr[i];
    }
}

void outPutArray(int arr[], int size) {
    cout << "数组元素为：";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
