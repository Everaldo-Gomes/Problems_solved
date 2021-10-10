vector<int> rotLeft(vector<int> a, int d) {
    
    vector<int> rotated (a.size());
    
    //finding out where the last value must be
    int last_value_place = a.size() - 1 - d;
    
    if (last_value_place < 0) {
        last_value_place = abs(last_value_place) - 2;
    }
    
    //place the last value in the right place
    rotated[last_value_place] = a[a.size()-1]; //last value
    int j = 0;
    
    //copy the position from n to the last of array a to the new array
    for (int i = last_value_place+1; i < a.size(); i++, j++) {
        
        rotated[i] = a[j];
    }
    
    //copy the position from 0 to n of array a to the new array
    for (int i = 0; i < last_value_place; i++, j++) {
        
        rotated[i] = a[j];
    }
    
    //ok but, time limited exceeded
    //while (d--) {
    //int aux = a[a.size()-1];
    //swap(a[0], a[a.size()-1]);
    //
    //for (int i = a.size()-2; i >= 0; i--) {   
    //    swap(a[i], a[0]);
    //}
    //}
    
    return rotated;
}
