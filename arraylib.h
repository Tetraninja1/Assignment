#ifndef ARRAYLIB_H
#define ARRAYLIB_H
int findMaxIndex(int arr[], int size){
    if (size <= 0) {
        return -1;
    }
    int maxIndex = 0;
    int maxValue = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }return maxIndex;
}
int findMinIndex(int arr[], int size){
    int minIndex = 0;
    int minValue = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
    }return minIndex;
}
void displayArray(int arr[], int size){
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}
void reverseArray(int arr[], int size){
    if (size <= 1) {
        return;
    }
    int left = 0;
    int right = size - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left--;
        right++;
    }return right;
}

#endif /* ARRAYLIB_H */