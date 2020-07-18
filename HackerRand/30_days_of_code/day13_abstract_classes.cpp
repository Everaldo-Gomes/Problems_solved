class MyBook : Book {    
private:
public:
    int price;
    MyBook(string title, string author, int price) : Book(title, author) {
        this->price = price;
    }
    void display() {
        cout  << "Title: " << title << "\n"
              << "Author: " << author << "\n"
              << "Price: " << price << endl;
    }
};
