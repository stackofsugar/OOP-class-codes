#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    string m_student_id;
protected:
    string m_name;
    int m_age;
public:
    Mahasiswa(string, int);
    string getName() { return m_name; };
    void setName(string);
};

Mahasiswa::Mahasiswa(string name, int age) {
    m_name = name;
    m_age = age;
}

void Mahasiswa::setName(string name) {
    m_name = name;
}

class Halo : public Mahasiswa {
public:
    Halo();
    void setAge(int);
};

void Halo::setAge(int age) {
    m_age = age;
}

int main() {
    Mahasiswa miko("Michael Raditya Krisnadhi", 18);
    cout << miko.getName() << '\n';
    miko.setName("Miko");
    cout << miko.getName() << '\n';

    Halo miko2;
}