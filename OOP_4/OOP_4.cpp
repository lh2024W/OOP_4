// OOP_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Elektric_Kettle {
    string brand;//бренд
    string model;//модель
    string color;//цвет
    int price;//цена

public:
    Elektric_Kettle() {
        SetBrand("Philips");
        SetModel("10W");
        SetColor("White");
        SetPrice(2000);
    }

    Elektric_Kettle(string model, int price) {
        SetBrand("Philips");
        SetModel(model);
        SetColor("White");
        SetPrice(price);
    }

    void PrintElektric_Kettle() const {
        cout << "Brand: " << brand << "\n";
        cout << "Model: " << model << "\n";
        cout << "Color: " << color << "\n";
        cout << "Price: " << price << "\n";
    }

    void SetBrand(string brand) {
        if (brand == "Tefal" || brand == "Philips" || brand == "Delongi" || brand == "Smeg")
            this->brand = brand;
        else
            cout << "Brand must be \"Tefal\" or \"Philips\" or \"Delongi\" or \"Smeg\"";
    }

    void SetModel(string model) {
        if (model != " " || model != "0")
            this->model = model;
        else
            cout << "There is no such model!";
    }

    void SetColor(string color) {
        if (color == "White" || color == "Red" || color == "Black")
        this->color = color;
        else
            cout << "Color must be \"White\" or \"Red\" or \"Black\"";
    }

    void SetPrice(int price) {
        if (price != 0)
            this->price = price;
        else
            cout << "You didn't enter a price!";
    }

    string GetBrand() const {
        return brand;
    }

    string GetModel() const {
        return model;
    }

    string GetColor() const {
        return color;
    }

    int GetPrice() const {
        return price;
    }

    void PrintPriceColor(int price, string color) const {
        cout << "Price: " << price << "\nColor: " << color << "\n\n";
    }

    void PrintBrandModel(string brand, string model) const {
        cout << "Brand: " << brand << "\nModel: " << model << "\n\n";
    }

    void Price(int price) const {
        if (price < 3000) {
            cout << "Cheap kettle!" << price << "\n\n";
        }
        else
            cout << "Expensive kettle!" << price << "\n\n";
    }
};

class Book {
    string author;//автор
    string name;//название книги
    string genre;//жанр
    int year;//год выпуска
    int count_page;//количество страниц

public:

    Book() {
        SetAuthor("Theodore Dreiser");
        SetName("Financier");
        SetGenre("novel");
        SetYear(1912);
        SetCount_page(456);
    }
    
    Book(string name, int year, int count_page) {
        SetAuthor("Theodore Dreiser");
        SetName(name);
        SetGenre("novel");
        SetYear(year);
        SetCount_page(count_page);
    }
    Book(string author, string name, int year, int count_page) {
        SetAuthor(author);
        SetName(name);
        SetGenre("novel");
        SetYear(year);
        SetCount_page(count_page);
    }

    void PrintBook() const {
        cout << "Author: " << author << "\n";
        cout << "Name: " << name << "\n";
        cout << "Genre: " << genre << "\n";
        cout << "Year: " << year << "\n";
        cout << "Count pages: " << count_page << "\n";
    }

    void SetAuthor(string author) {
        if (author != "Pushkin" || author != "Gogol" || author != "Dostoevsky")
            this->author = author;
        else
            cout << "The author should not be \"Pushkin\" or  \"Gogol\" or \"Dostoevsky\"";
    }

    void SetName(string name) {
        if (name != "Ruslan and Ludmila" || name != "Dead Souls" || name != "Demons")
        this->name = name;
        else
            cout << "The name book should not be \"Ruslan and Ludmila\" or  \"Dead Souls\" or \"Demons\"";
    }

    void SetGenre(string genre) {
        if (genre != "fairy tales" || genre != "fables")
        this->genre = genre;
        else
            cout << "The genre of book should not be \"fairy tales\" or  \"fables\"";
    }

    void SetYear(int year) {
        if (year != 0 && year < 2025)
            this->year = year;
        else
            cout << "The year must be from 0 to 2025";
    }

    void SetCount_page(int count_page) {
        if (count_page != 0)
            this->count_page = count_page;
        else
            cout << "You did not enter the number of pages \n";
    }

    string GetAuthor() const {
        return author;
    }

    string GetName() const {
        return name;
    }

    string GetGenre() const {
        return genre;
    }

    int GetYear() const {
        return year;
    }

    int GetCount_page() const {
        return count_page;
    }
    void PrintBook(string author, string name, string genre) const {
        cout << "Author: " << author << "\nName: " << name << "\nGenre: " << genre << "\n\n";
    }

    void PrintCountPageYear(string name, int count_page, int year) const {
        cout << "Name: " << name << "\nCount page: " << count_page << "\nYear: " << year << "\n\n";
    }

    void Year(int year) const {
        if (year > 2000) {
            cout << "New book!" << year << "\n\n";
        }
        else
            cout << "Old book!" << year << "\n\n";
    }
};

class Pen {
    string color;//цвет
    string brand;//бренд
    bool write;//пишет? да\нет

public:

    Pen() {
        SetColor("Black");
        SetBrand("Bic");
        SetWrite(true);
    }

    Pen(string color) {
        SetColor(color);
        SetBrand("Bic");
        SetWrite(true);
    }
    
    void PrintPen() const {
        cout << "Color: " << color << "\n";
        cout << "Brand: " << brand << "\n";
        cout << "Write: " << write << "\n";
    }

    void SetColor(string color) {
        if (color != "White" || color != "Yellow")
            this->color = color;
        else
            cout << "The color shouldn't be \"White\" or \"Yellow\" \n";
    }

    void SetBrand(string brand) {
        if (brand == "Bic" || brand == "Parker" || brand == "Fama" || brand == "Radius" || brand == "Senator")
        this->brand = brand;
        else
            cout << "The brand should be \"Bic\" or \"Parker\" or \"Fama\" or \"Radius\" or \"Senator\" \n";
    }

    void SetWrite(bool write) {
        if (write == true || write == false)
            this->write = write;
        else
            cout << "The answer must be true or false! \n";
    }

    string GetColor() const {
        return color;
    }

    string GetBrand() const {
        return brand;
    }

    bool GetWrite() const {
        return write;
    }
    void LeaveOrThrowAway(bool write) const {
        if (write = true) {
            cout << "Leave this pen!" << "\n\n";
        }
        else
            cout << "Throw away this pen!" << "\n\n";
    }

    void Print() const {
        cout << brand << " " << color << "\n\n";
    }
};

class Banknote {
    int denomination;//номинал купюры
    string year;//год выпуска
    bool old_new;//потрепанная да\нет

public:

    Banknote() {
        SetDenomination(50);
        SetYear("2003");
        SetOld_new(true);
    }

    Banknote(int denomination, bool old_new) {
        SetDenomination(denomination);
        SetYear("2003");
        SetOld_new(old_new);
    }

    void PrintBanknote() const {
        cout << "Denomination: " << denomination << "\n";
        cout << "Year: " << year << "\n";
        cout << "Old_new: " << old_new << "\n";
    }

    void SetDenomination(int denomination) {
        if (denomination == 10 || denomination != 20 || denomination != 50 || denomination != 100 || denomination != 200 || denomination != 500 || denomination != 1000)
            this->denomination = denomination;
        else
            cout << "The denomination should be 10, 20, 50, 100, 200, 500, 1000 \n";
    }

    void SetYear(string year) {
        if (year != "1997" || year != "1998" || year != "1999")
            this->year = year;
        else
            cout << "There shouldn't be a year \"1997\" or \"1998\" or \"1999\" \n";
    }

    void SetOld_new(bool old_new) {
        if (old_new == true || old_new == false)
            this->old_new = old_new;
        else
            cout << "The answer should be true or false! \n";
    }

    int GetDenomination() const {
        return denomination;
    }

    string GetYear() const {
        return year;
    }

    bool GetOld_new() const {
        return old_new;
    }
    void Print() const {
        cout << "Banknote: " << denomination << " grn." << "\n" << year << "Year of release" << "\n\n";
    }

    void TakeOrChange(bool old_new) const {
        if (old_new = true) {
            cout << "Take this banknote!" << "\n\n";
        }
        else
            cout << "Change this banknote!" << "\n\n";
    }
};

class Wallet {
    string brand;//бренд
    string price;//цена
    string color;//цвет
    bool coin_box;//отдел для монет да\нет
    int count_section;//количество отделений
    int count_card_sections;// количество денег

public:
    Wallet() {
        SetBrand("Megan");
        SetPrice("560");
        SetColor("Black");
        SetCoin_box(true);
        SetCount_section(true);
        SetCount_card_sections(5);
    }

    Wallet(string color, bool coin_box) {
        SetBrand("Megan");
        SetPrice("560");
        SetColor(color);
        SetCoin_box(coin_box);
        SetCount_section(true);
        SetCount_card_sections(5);
    }

    Wallet(string color, int count_section, int count_card_sections) {
        SetBrand("Megan");
        SetPrice("560");
        SetColor(color);
        SetCoin_box(true);
        SetCount_section(count_section);
        SetCount_card_sections(count_card_sections);
    }

    Wallet(string color, int count_section, int count_card_sections, string price) {
        SetBrand("Megan");
        SetPrice(price);
        SetColor(color);
        SetCoin_box(true);
        SetCount_section(count_section);
        SetCount_card_sections(count_card_sections);
    }

    Wallet(string color, int count_section, int count_card_sections, string price, string brand) {
        SetBrand(brand);
        SetPrice(price);
        SetColor(color);
        SetCoin_box(true);
        SetCount_section(count_section);
        SetCount_card_sections(count_card_sections);
    }

    void PrintWallet() const {
        cout << "Brand: " << brand << "\n";
        cout << "Price: " << price << "\n";
        cout << "Color: " << color << "\n";
        cout << "Coin box: " << coin_box << "\n";
        cout << "Count section: " << count_section << "\n";
        cout << "Count_card_sections: " << count_card_sections << "\n";
    }

    void SetBrand(string brand) {
        if (brand != "Dior" || brand != "Gucci" || brand != "Armani")
            this->brand = brand;
        else
            cout << "The brand shouldn`t be \"Dior\" or \"Gucci\" or \"Armani\" \n";
    }

    void SetPrice(string price) {
        if (price != "0" && price != "00" && price != "000" && price != "0000")
            this->price = price;
        else
            cout << "You haven't entered a price! \n";
    }

    void SetColor(string color) {
        if (color == "Red" || color == "Black" || color == "White" || color == "Beige" || color == "Brown")
            this->color = color;
        else
            cout << "The color should be \"Red\" or \"Black\" or \"White\" or \"Beige\" or \"Brown\" \n";
    }

    void SetCoin_box(bool coin_box) {
        if (coin_box == true || coin_box == false)
        this->coin_box = coin_box;
        else
            cout << "The answer should be true or false! \n";
    }

    void SetCount_section(bool count_section) {
        if (count_section == true || count_section == false)
        this->count_section = count_section;
        else
            cout << "The answer should be true or false! \n";
    }

    void SetCount_card_sections(int count_card_sections) {
        if (count_card_sections != 0 && count_card_sections < 10)
            this->count_card_sections = count_card_sections;
        else
            cout << "The count card sections should be from 0 to 10! \n";
    }

    string GetBrand() const {
        return brand;
    }

    string GetPrice() const {
        return price;
    }

    string GetColor() const {
        return color;
    }

    bool GetCoin_box() const {
        return coin_box;
    }

    bool GetCount_section() const {
        return count_section;
    }

    int GetCount_card_sections() const {
        return count_card_sections;
    }

    void Print() const {
        cout << "Wallet \n";
        cout << "Brand: " << brand << "\nColor: " << color << "\nPrice : " << price << "\n\n";
    }

    void BayWallet(int count_card_sections, bool coin_box, string price) const {
        if ((count_card_sections == 3) && (coin_box = true)) {
            cout << "Price: " << price << "\n";
        }
        else
            cout << "This wallet is not available!" << "\n";
    }

};

int main()
{
    Elektric_Kettle k;
    k.PrintElektric_Kettle();
    cout << "\n\n";

    Elektric_Kettle k1("Philips", 3600);
    k1.PrintElektric_Kettle();
    cout << "\n\n";

    /*
    k.SetBrand("Philips");
    k.SetModel("4569tt");
    k.SetColor("White");
    k.SetPrice(3600);

    cout << k.GetBrand() << "\n";
    cout << k.GetModel() << "\n";
    cout << k.GetColor() << "\n";
    cout << k.GetPrice() << "\n";

    k.PrintPriceColor(2500, "blue");
    k.PrintBrandModel("Tefal", "1025R");
    k.Price(3000);
    */

    Book b;
    b.PrintBook();
    Book b1("Three people in the boat, not counting the dog", 1889, 250);
    cout << "\n\n";

    b1.PrintBook();
    Book b2("Ken Follett","Pillars of the Earth", 1989, 230);
    b2.PrintBook();
    cout << "\n\n";

    /*
    b.SetAuthor("Theodore Dreiser");
    b.SetCount_page(456);
    b.SetGenre("novel");
    b.SetName("Financier");
    b.SetYear(1912);

    cout << b.GetAuthor() << "\n";
    cout << b.GetCount_page() << "\n";
    cout << b.GetGenre() << "\n";
    cout << b.GetName() << "\n";
    cout << b.GetYear() << "\n";

    b.PrintBook("Stephen Prata", "C++", "Science fiction");
    b.PrintCountPageYear("Three people in the boat, not counting the dog", 250, 1889);
    b.Year(1997);
    */

    Pen p;
    p.PrintPen();
    cout << "\n\n";

    Pen p1("red");
    p1.PrintPen();
    cout << "\n\n";

    /*
    p.SetBrand("Bic");
    p.SetColor("black");
    p.SetWrite(false);

    cout << p.GetBrand() << "\n";
    cout << p.GetColor() << "\n";
    cout << p.GetWrite() << "\n";

    p.LeaveOrThrowAway(true);
    p.Print();
    */

    Banknote B;
    B.PrintBanknote();
    cout << "\n\n";

    Banknote B1(100, true);
    B1.PrintBanknote();
    cout << "\n\n";
    
    /*
    B.SetDenomination(50);
    B.SetOld_new(true);
    B.SetYear("2003");

    cout << B.GetDenomination() << "\n";
    cout << B.GetOld_new() << "\n";
    cout << B.GetYear() << "\n";

    B.Print();
    B.TakeOrChange(true);
    */

    Wallet w;
    w.PrintWallet();
    cout << "\n\n";

    Wallet w1("Red", false);
    w1.PrintWallet();
    cout << "\n\n";

    Wallet w2("Black", 3, 2);
    w2.PrintWallet();
    cout << "\n\n";

    Wallet w3("White", false, 4, "600");
    w3.PrintWallet();
    cout << "\n\n";

    Wallet w4("Beige", 3, 5, "450", "Malva");
    w4.PrintWallet();
    cout << "\n\n";

    /*
    w.SetBrand("Wiola");
    w.SetPrice("500");
    w.SetCoin_box(true);
    w.SetColor("red");
    w.SetCount_card_sections(3);
    w.SetCount_section(2);

    cout << w.GetBrand() << "\n";
    cout << w.GetPrice() << "\n";
    cout << w.GetCoin_box() << "\n";
    cout << w.GetColor() << "\n";
    cout << w.GetCount_card_sections() << "\n";
    cout << w.GetCount_section() << "\n";

    w.Print();
    w.BayWallet(3, false, "300");
    */
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
