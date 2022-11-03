//    BINARY SEARCH

int binary_search(int arr[], int n , int key) {
    int low = 0;
    int high = n;
    while (low <= high) {
        int mid = (low + high) / 2;


        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            high = mid - 1;


        } else {
            low = mid + 1;

        }
        return -1;
    }
}
 int main()
 {
     int n;
     cout<<"Enter n:";
     cin>>n;
     int arr[n];
     cout<<"Enter array:";
     for (int i =0;i<n;i++) // Elements in array should be sorted.
     {
         cin>>arr[i];
     }
     int key;
     cout<<"Enter the key:";
     cin>>key;
     cin>>key;
     cout<<binary_search(arr,n,key);
     return 0;
 }

