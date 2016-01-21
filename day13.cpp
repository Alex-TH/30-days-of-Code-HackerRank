//Write MyBook class
class MyBook :  Book {
  private:
    int price;
  public:
    MyBook(string t, string a, int p) : Book(t, a) {
        price = p;
    }
    
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

