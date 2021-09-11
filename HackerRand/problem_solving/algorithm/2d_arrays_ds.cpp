int hourglassSum(vector<vector<int>> arr) {

	/*-64 because the minimum value that i can have is 63, 
	  9 9 9 
        9
      9 9 9 
	 then 64 just to be secure :) */
	
    int greatest_sum = -64, aux_sum = 0, line = 0, column = 6, pivot = 0;
    
    while (1) {
        for (int i = line, line_aux = 0; i < line + 3; i++, line_aux++) {
            for (int j = pivot, column_aux = 0; j < pivot + 3; j++, column_aux++) {
                
                if ((column_aux == 0 && line_aux == 1) || (column_aux == 2 && line_aux == 1)) {
                    continue;
                }
                else {
                    aux_sum += arr[i][j];    
                }
            }
        }
        
        greatest_sum = aux_sum > greatest_sum ? aux_sum : greatest_sum;
        aux_sum = 0;

        
        if (pivot + 2 < 5) {
            pivot++;    
        }
        else if (pivot + 2 == 5 && line + 2 < 5) {
            pivot = 0;
            line++;
        }
        else {
            break;
        }    
    }
    
    return greatest_sum;
}
