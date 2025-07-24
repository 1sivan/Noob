#include <iostream>
#include "A.h"
using namespace std;

int main() {
    int size;
    cout << "请输入数组大小：";
    cin >> size;
    int *arr = new int[size];
    cout << "------第一个数组函数------" << endl;
    Array(arr, size);
    outPutArray(arr, size);
    delete[] arr; // 释放动态分配的内存
}