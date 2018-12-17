#include <iostream>
#include <vector>
#include <string>

class CPerson{

public:
    CPerson(std::string xname, int xage, std::string xstreet);
    void add_person();
    void show_person();

private:
    std::string name;
    int age;
    std::string street;
};

CPerson::CPerson(std::string xname, int xage, std::string xstreet): name(xname), age(xage), street(xstreet){
    std::cout<< "person added to phone book\n";
}

void CPerson::show_person(){
    std::cout << "Name: " << this->name << " Age: " << this->age << " street: " << this->street << " \n";
}

int main (int argc, char *argv[]){

    std::vector<CPerson> phone_book;

    phone_book.push_back(CPerson("Vick", 33, "avenue1"));
    phone_book.push_back(CPerson("Ian", 12, "avenue2"));
    phone_book.push_back(CPerson("Jack", 54, "avenue3"));

    for (int i=0; i < phone_book.size(); i++){
        phone_book[i].show_person();
    }

    return 0;
}
