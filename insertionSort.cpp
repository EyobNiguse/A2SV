void insertionSort1(int n, vector<int> arr) {
        int temp;
        int position;
        for(int i=arr.size() - 1; i > 0;i--){
            temp  = arr[i];
            position = i-1;
        if(arr[position] > temp){
            while(arr[position] > temp && position >= 0 ){
                    arr[position + 1] = arr[position];
                    position--;
                    print(arr);
                    cout<<endl;
                }

                  
                    arr[position + 1] = temp;
                    print(arr);
                  
        }
            
           
        }
}
void print(vector<int > a){
    for(int i = 0; i < a.size();i++){
        
        cout << a[i]<<" ";
    } 
}