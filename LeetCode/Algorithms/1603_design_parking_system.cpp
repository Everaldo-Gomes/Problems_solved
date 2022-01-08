class ParkingSystem {
private: 
    int big_car = 0, medium_car = 0, small_car = 0;
    
public:
    
    ParkingSystem(int big, int medium, int small) {
        
        this->big_car = big;
        this->medium_car = medium;
        this->small_car = small;
    }
    
    bool addCar(int carType) {
        
        bool available_space = false;
        
        switch(carType) {
            case 1:
                if (this->big_car > 0) {
                    this->big_car--;
                    available_space = true;
                }
                break;
            case 2:
                if (this->medium_car > 0) {
                    this->medium_car--;
                    available_space = true;
                }
                break;
            case 3:
                if (this->small_car > 0) {
                    this->small_car--;
                    available_space = true;
                }
                break;
        }
        
        return available_space;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
