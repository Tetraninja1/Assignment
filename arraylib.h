#ifndef ARRAYLIB_H
#define ARRAYLIB_H
int findMaxIndex(int arr[], int size){
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
    printf("The array is displayed as: ");
    for(int i=0; i<size; i++){
        printf("%d, ", arr[i]);
    }
    return;
}
float findAverage(int arr[], int size){
    float sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    float avg = sum/size;
    return avg;
}
void reverseArray(int arr[], int size){
    printf("Reverse array is displayed : ");
    for(int i=size-1; i>=0; i--){
        printf("%d, ", arr[i]);
    }
    return;
}
int linearSearch(int arr[], int size, int value){
    int index;
    for(int i=0; i<size; i++){
        if(value == arr[i]){
            index = i;
        }
    }
    return index;
}
void SortArray(int arr[], int size){
	int i ,j;
	
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}
}
#endif /* ARRAYLIB_H */