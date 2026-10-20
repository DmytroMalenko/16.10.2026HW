#include <iostream>
#include <cstdlib>
using namespace std;

/* Task 1 
// Функція виділення динамічної пам'яті.
int* allocationArr(int size) {
    return (int*)malloc(size * sizeof(int));
}


// Функція ініціалізації динамічного масиву.
void initArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}


// Функція виводу динамічного масиву.
void printArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}





// Функція видалення динамічного масиву.
void deleteArr(int*& arr) {
    free(arr);       
    arr = nullptr;
}






// Функція додавання елемента в кінець масиву.
void pushArr(int*& arr, int& size, int value) {
    int* newArr = allocationArr(size + 1);   
    for (int i = 0; i < size; i++) {       
        newArr[i] = arr[i];
    }

    newArr[size] = value;  

    deleteArr(arr);                         
    arr = newArr;                            
    size++;                                 
}




// Функція вставки елемента за вказаним індексом.
void insertElem(int*& arr, int& size, int index, int elem) {
    int* tempPtr = new int[size + 1];  

    for (int i = 0; i < size; i++) {
        if (i < index) {
            tempPtr[i] = arr[i];       
        }
        else {
            tempPtr[i + 1] = arr[i];    
        }
    }

    tempPtr[index] = elem;              
    delete[] arr;
    arr = tempPtr;
    size++;
}


// Функція видалення елемента за вказаним індексом.
void removeElem(int*& arr, int& size, int index) {
    int* tempPtr = new int[size - 1];
    int x = 0;

    for (int i = 0; i < size; i++) {
        if (i != index) {     
            tempPtr[x] = arr[i];
            x++;
        }
    }

    delete[] arr;
    arr = tempPtr;
    size--;
}
*/


/* Task 2 
bool primeNum(int num) {
    if (num < 2) return false;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void printArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* removeNum(int* arr, int& size) {
    int* newArr = new int[size];   
    int x = 0;

    for (int i = 0; i < size; i++) {
        if (!primeNum(arr[i])) {
            newArr[x] = arr[i];
            x++;
        }
    }

    delete[] arr;
    size = x;
    return newArr;
}
*/



/* Task 3 */
void splitArr(int* arr, int size, int*& positive, int& positiveSize, int*& negative, int& negativeSize, int*& zero, int& zeroSize) {

    positive = new int[size];
    negative = new int[size];
    zero = new int[size];

    positiveSize = 0;
    negativeSize = 0;
    zeroSize = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive[positiveSize] = arr[i];
            positiveSize++;
        }
        else if (arr[i] < 0) {
            negative[negativeSize] = arr[i];
            negativeSize++;
        }
        else {
            zero[zeroSize] = arr[i];
            zeroSize++;
        }
    }
}


void printArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main(){
    /* Task 1 
   

    srand(time(0));

    // Функція виділення динамічної пам'яті.
    int size = 5;
    int* arr = allocationArr(size);
    cout << "Dynamic memory allocation: " << arr << endl;




    // Функція ініціалізації динамічного масиву.
    initArr(arr, size);
    cout << "Initialization of a dynamic array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Функція виводу динамічного масиву.
    cout << "Dynamic array: ";
    printArr(arr, size);



    // Функція додавання елемента в кінець масиву.
    pushArr(arr, size, 99);
    cout << "After adding an element to the end of the array: ";
    printArr(arr, size);



    // Функція вставки елемента за вказаним індексом.
    insertElem(arr, size, 2, 99);
    cout << "Insertion of an element at the specified index: ";
    printArr(arr, size);




    // Функція видалення елемента за вказаним індексом.
    removeElem(arr, size, 2);
    cout << "Removing an element at the specified index: ";
    printArr(arr, size);



    // Функція видалення динамічного масиву.
    deleteArr(arr);

    */






    /* Task 2 
    srand(time(0));

    int size = 10;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 30;
    }

    cout << endl;
    printArr(arr, size);
    arr = removeNum(arr, size);

    cout << endl;
    printArr(arr, size);
    delete[] arr;

    */




    /* Task 3 */
    srand(time(0));
    const int SIZE = 10;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 21 - 10;
    }

    cout << "Array: "; printArr(arr, SIZE);
    int* positive;
    int* negative;
    int* zero;
    int positiveSize;
    int negativeSize;
    int zeroSize;

    splitArr(arr, SIZE, positive, positiveSize, negative, negativeSize, zero, zeroSize);
    cout << "Positive numbers: "; printArr(positive, positiveSize);
    cout << "Negative number: "; printArr(negative, negativeSize);
    cout << "Zero numbers: "; printArr(zero, zeroSize);

    delete[] positive;
    delete[] negative;
    delete[] zero;
}















