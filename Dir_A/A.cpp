#include <iostream>
using namespace std;

void Array(int arr[],int size){
    cout << "请输入数组大小：";
    cin >> size;
    for(int i=0; i<size;i++)
    {
        cout << "请输入第" << i+1 << "个元素：";
        cin >> arr[i];
    }
}

int main() {
    int A;
    int arr[A];
    cout << "------第一个数组函数------" << endl;
    Array(arr, A);
}