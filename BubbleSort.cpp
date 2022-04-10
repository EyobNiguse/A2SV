
void countSwaps(vector<int> a) {
    int count=0;
for(int i = 0 ; i <  a.size();i++){
    for(int j= 0 ; j < a.size()-1;j++){
        if(a[j] > a[j+1]){
            count++;
            swap(a[j],a[j+1]);
        }
    }
}
  cout<<"Array is sorted in "<< count <<" swaps.\n";
  cout<<"First Element: "<<a[0]<<"\n";
  cout<<"Last Element: "<<a[a.size()-1];
}