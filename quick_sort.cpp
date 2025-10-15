#include <iostream>
using namespace std;    
 
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);
    for(int j=low; j<=high-1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
}
int main(){

    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = n-1;
    int pi = partition(arr, low, high);
    cout << "Pivot index: " << pi << endl;
    cout << "Array after partitioning: \n";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;

}