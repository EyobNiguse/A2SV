 int select(int arr[], int i)
{

 


return arr[i];
      
    
}


void selectionSort(int arr[], int n)
{
    int min;
    int index=0; 
  
    for(int i=0; i < n;i++){
         index = i;
         min = arr[i]; 
         for(int j=i; j < n;j++){
            if(arr[j]<min){
                min = arr[j];
                index = j;
                // swap(arr[i]);
            } 
         }
         select(arr ,index);
         swap(arr[i], arr[index]);
          
    }
        
        
    }
 
