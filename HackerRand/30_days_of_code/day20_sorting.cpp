int numberOfSwaps = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(a[j] > a[j+1]) {
                swap(a[j], a[j + 1]);
                numberOfSwaps++;
            }
        }
        if(numberOfSwaps == 0) {
            break;
        }
    }

    cout << "Array is sorted in " << numberOfSwaps << " " << "swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[a.size()-1] << endl;
