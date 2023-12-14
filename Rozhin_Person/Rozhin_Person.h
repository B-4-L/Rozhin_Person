#include <iostream>
#include <string>

using namespace std;

/**
    @file       Rozhin_Class_Person.h
    @brief      ������������ ���� ������ �������
    @copyright      ����
    @author     ����� �.�.
    @date       01-12-2023
    @version    1.0.0
    \par ���������� ������:
            @ref Rozhin Class_Person
    \par �������� �����:
            @ref Rozhin_Class_Person
*/



/// ����� �������� ��������
/** �������� ������ ������� � ������ ��� ������ � ����
*/

/**
 * @brief �����, �������������� �����.
 */
class Book {

private:
    string Author; /**< ����� �����. */
    string Title; /**< �������� �����. */
    string Publisher; /**< ������������ �����. */
    int Year; /**< ��� ������� �����. */
    int PageCount; /**< ���������� ������� �����. */

public:
    /// ����������� �� ���������
    /** ������� ������� ��� ������������� �����
    */
    /**
     * @brief ����������� ������ Book.
     * @param author ����� �����.
     * @param title �������� �����.
     * @param publisher ������������ �����.
     * @param year ��� ������� �����.
     * @param pageCount ���������� ������� �����.
     */
    Book(string author, string title, string publisher, int year, int pageCount)
        : Author(author), Title(title), Publisher(publisher), Year(year), PageCount(pageCount) {}

    /**
     * @brief �������� ������� "�����".
     * @return ������� "�����".
     */
    string getRozhinSurname() const {
        return "�����";
    }

    /**
     * @brief �������� ������ �����.
     * @return ����� �����.
     */
    string getAuthor() const {
        return Author;
    }

    /**
     * @brief �������� �������� �����.
     * @return �������� �����.
     */
    string getTitle() const {
        return Title;
    }

    /**
     * @brief �������� ������������ �����.
     * @return ������������ �����.
     */
    string getPublisher() const {
        return Publisher;
    }
};

    /**
    * @brief ����� ��� ��������� ���� �������.
    * @return ��� ������� �����.
    */
    int getYear() const {
        return Year;
    }

    /**
     * @brief ����� ��� ��������� ���������� �������.
     * @return ���������� ������� �����.
     */
    int getPageCount() const {
        return PageCount;
    }

    /**
     * @brief ����� ��� ������ ������ ���� ������� ������.
     * @param books ������ ����.
     * @param size ������ ������� ����.
     * @param author ��� ������.
     */
    void showBooksByAuthor(const Book* books, int size, const string& author) const {
        cout << "����� ������ " << getRozhinSurname() << " " << author << ":\n";
        for (int i = 0; i < size; i++) {
            if (books[i].getAuthor() == author) {
                cout << books[i].getTitle() << " (" << books[i].getYear() << ")\n";
            }
        }
    }

        /**
     * @brief ����� ��� ������ ������ ���� ������� ������������.
     * @param books ������ ����.
     * @param size ������ ������� ����.
     * @param publisher �������� ������������.
     */
    void showBooksByPublisher(const Book* books, int size, const std::string& publisher) const {
        cout << "����� ������������ " << publisher << ":\n";
        for (int i = 0; i < size; i++) {
            if (books[i].getPublisher() == publisher) {
                cout << books[i].getTitle() << " (" << books[i].getYear() << ")\n";
            }
        }
    }

        /**
     * @brief ����� ��� ������ ������ ���� ���������� ����� ������� ����.
     * @param books ������ ����.
     * @param size ������ ������� ����.
     * @param year ���.
     */
    void showBooksPublishedAfterYear(const Book* books, int size, int year) const {
        cout << "�����, ���������� ����� " << year << " ����:\n";
        for (int i = 0; i < size; i++) {
            if (books[i].getYear() > year) {
                cout << books[i].getTitle() << " (" << books[i].getYear() << ")\n";
            }
        }
    }
};

    /**
     * @brief ����� ����� � ���������.
     * @return ��� ������ (0 - �������� ����������).
     */
int main() {
    // ������ ������������� ������ Book
    const int librarySize = 3;
    Book library[librarySize] = {
        Book("������", "����� 1", "������������ A", 2000, 300),
        Book("������", "����� 2", "������������ B", 2010, 250),
        Book("�������", "����� 3", "������������ A", 2020, 400),
    };

    Book rozhinBook("�����", "����� ������", "������������ C", 2022, 350);

    // ������ ������������� �������
    rozhinBook.showBooksByAuthor(library, librarySize, "�����");
    rozhinBook.showBooksByPublisher(library, librarySize, "������������ A");
    rozhinBook.showBooksPublishedAfterYear(library, librarySize, 2015);

    return 0;
}