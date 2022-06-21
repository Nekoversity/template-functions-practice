#include <iostream>
#include <array>
#include <algorithm>
#define ARR_SIZE 5

using std::cout;
using std::endl;
using std::array;
using std::sort;

enum SortType {
    Asc,
    Dsc,
};

template<typename T>
T max(T x, T y) {
    return (x > y) ? x : y;
}

template<typename T>
T min(T x, T y) {
    return (x < y) ? x : y;
}

template<typename T>
void sortArray(array<T, ARR_SIZE> &arr, SortType sortType) {
    if (sortType == SortType::Asc) sort(arr.begin(), arr.end());
    if (sortType == SortType::Dsc) sort(arr.rbegin(), arr.rend());
}

template<typename T>
void printArray(array<T, ARR_SIZE> arr, char delim = ' ') {
    for (const T &el : arr) std::cout << el << delim;
}


int main() {
    cout << "max<int>(2, 7) >> " << max<int>(2, 7) << endl;
    cout << "max<double>(1.5, 1.7) >> " << max<double>(1.5, 1.7) << endl << endl;

    cout << "max<>(2, 7) >> " << max<>(2, 7) << endl;
    cout << "max<>(1.5, 1.7) >> " << max<>(1.5, 1.7) << endl << endl;


    cout << "min<int>(2, 7) >> " << min<int>(2, 7) << endl;
    cout << "min<double>(1.5, 1.7) >> " << min<double>(1.5, 1.7) << endl << endl;

    cout << "min<>(2, 7) >> " << min<>(2, 7) << endl;
    cout << "min<>(1.5, 1.7) >> " << min<>(1.5, 1.7) << endl << endl;

    array<int, ARR_SIZE> arr1 = {1, 3, 2, 7, 5};

    cout << "Original array >> ";
    printArray<int>(arr1);
    cout << endl;

    cout << "After sortArray<int>(arr1, SortType::Asc) >> ";
    sortArray<int>(arr1, SortType::Asc);
    printArray<int>(arr1);
    cout << endl;

    cout << "After sortArray<int>(arr1, SortType::Dsc) >> ";
    sortArray<int>(arr1, SortType::Dsc);
    printArray<int>(arr1);
    cout << endl;

    return 0;
}
