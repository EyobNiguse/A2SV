vector<int> countingSort(vector<int> arr) {
    vector<int>  counter(100);
for(int i=0;i < arr.size();i++){
    counter.at(arr[i]) += 1;
    }
return counter;
 }