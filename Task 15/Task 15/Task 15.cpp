#include <iostream>
#include <vector>

using namespace std;

class Book {
public:
    Book(string title, string author, int year, int pages)
        : title_(title), author_(author), year_(year), pages_(pages) {}

    void setTitle(string title) {
        title_ = title;
    }

    void setAuthor(string author) {
        author_ = author;
    }

    void setYear(int year) {
        year_ = year;
    }

    void setPages(int pages) {
        pages_ = pages;
    }

    string getTitle() const {
        return title_;
    }

    string getAuthor() const {
        return author_;
    }

    int getYear() const {
        return year_;
    }

    int getPages() const {
        return pages_;
    }

    void printInfo() const {
        cout << "Название: " << title_ << endl;
        cout << "Автор: " << author_ << endl;
        cout << "Год издания: " << year_ << endl;
        cout << "Количество страниц: " << pages_ << endl;
    }

private:
    string title_;
    string author_;
    int year_;
    int pages_;
};

int main() {
    setlocale(LC_ALL, "");
    vector<Book> books;

    books.push_back(Book("Гарри Поттер и философский камень", "Дж. К. Роулинг", 1997, 223));
    books.push_back(Book("Гарри Поттер и тайная комната", "Дж. К. Роулинг", 1998, 317));
    books.push_back(Book("Гарри Поттер и узник Азкабана", "Дж. К. Роулинг", 1999, 352));

    cout << "Все книги: " << endl;
    for (const auto& book : books) {
        book.printInfo();
        cout << endl;
    }

    cout << "Добавление новой книги: " << endl;
    Book newBook("Гарри Поттер и Принц-полукровка", "Дж. К. Роулинг", 2005, 377);
    books.push_back(newBook);

    cout << "Все книги после добавления новой: " << endl;
    for (const auto& book : books) {
        book.printInfo();
        cout << endl;
    }

    return 0;
}