// You are using GCC
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int size, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    
    if(left < size && arr[left] > arr[largest])
    largest = left;
    
    if(right < size && arr[right] > arr[largest])
    largest = right;
    
    if(i!=largest)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, size, largest);
    }
}

void buildHeap(int arr[], int size)
{
    for(int i=size/2 -1; i>=0; i--)
    {
        heapify(arr, size, i);
    }
}

void heapSort(int arr[], int size) 
{
    buildHeap(arr, size);
    
    for(int i=size-1; i>=1; i--)
    {
        swap(&arr[i], &arr[0]);
        heapify(arr, i, 0);
    }
}

int countGreaterThan(int arr[], int size, int number) 
{
    int cnt = 0;
    
    for(int i=0;i<size; i++)
    {
        if(arr[i]>number)
        cnt++;
    }
    
    return cnt;
}


int main() {
    int size;
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    heapSort(arr, size);
    int number;
    cin >> number;
    int greaterCount = countGreaterThan(arr, size, number);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << greaterCount;
    delete[] arr; 
    return 0;
}