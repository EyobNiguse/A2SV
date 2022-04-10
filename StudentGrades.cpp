vector<int> gradingStudents(vector<int> grades) {
    vector<int> finalGrade; 
    for(int  k = 0 ; k  < grades.size();k++ ){
    
    for(int i=1; i < 3;i++){
    
    if(grades.at(k) >= 38){
    
         if((grades.at(k) + i) % 5 == 0){
    
            grades.at(k) += i; 
    
            } 
    }
      
        
    }
    finalGrade.push_back(grades.at(k)); 
    }
    return  finalGrade;
}