#include <iostream>
using namespace std;

/* Task 1 
void copyArr(int* ptr1, int* ptr2, int size){
    for (int i = 0; i < size; ++i){
        *(ptr2 + i) = *(ptr1 + i);
    }
}

void printArr(int* ptr, int size){
    for (int i = 0; i < size; ++i){
        cout << *(ptr + i) << " ";
    }
    cout << "\n";
}
*/

/* Task 2 */

void changeArr(int* ptr, int size) {
    for (int i = 0; i < size / 2; ++i) {
        int temp = *(ptr + i);
        *(ptr + i) = *(ptr + size - 1 - i);
        *(ptr + size - 1 - i) = temp;
    }
}



void printArr(int* ptr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << *(ptr + i) << " ";
    }
    cout << "\n";
}

int main()
{
    /* Task 1 
    int arr1[] = { 3, 9 , -2, 0, 1 };
    int arr2[] = { 7, 12 , 0,88, -32 };

    int* arrPtr1 = &arr1[0];
    int* arrPtr2 = &arr2[0];

    copyArr(arrPtr1, arrPtr2, 5);

    printArr(arrPtr1, 5);
    printArr(arrPtr2, 5);

    return 0;
    */

    /* Task 2 */

    int arr[] = { 3, 9 , -2, 0, 1 };
    int* arrPtr = arr;

    printArr(arrPtr, 5);
    changeArr(arrPtr, 5);
    printArr(arrPtr, 5);

    return 0;

}
