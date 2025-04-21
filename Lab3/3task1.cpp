#include <iostream> //Include the necessary libraries
#include <string>
using namespace std;

//Task 1 to create a "Book" 
class Book {
    private:
        string title;
        int pages;
        string author = "Peter";
    
    protected:
        float price;
    
    public:
        string publisher;
    
        void displayAuthorInfo() {
            cout << "Author: " << author << endl;
        }
    
        void setTitle(string t) {
            title = t;
        }
    
        string getTitle() {
            return title;
        }
    };
    

//Let's add main function with requirements from part "A" of the task
int main() {

    Book myBook;
    myBook.setTitle("C++ classes and inheritance");
    cout << "Title: " << myBook.getTitle() << endl;

    return 0;
}
