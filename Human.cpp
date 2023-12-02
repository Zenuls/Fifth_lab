#include <iostream>

using namespace std;

class Human {
    private:
    string f_name{"Иванов"};
    string s_name{"Вячеслав"};
    unsigned int age{19};
    bool gender{true};
    public:
    Human () {}
    Human (string f_name, string s_name, unsigned int age, bool gender) 
        : f_name(f_name), s_name(s_name), age(age), gender(gender) {}
    string Get_f_name() {
        return this->f_name;
    }
    void Set_f_name(const string f) {
        f_name = f;
    }
    string Get_s_name() {
        return this->s_name;
    }
    void Set_s_name(const string s) {
        s_name = s;
    }
    unsigned int Get_age() {
        return this->age;
    }
    void Set_age(const unsigned int a) {
        age = a;
    }
    bool Get_gender(){
        return this->gender;
    }
    void Set_gender(const bool g) {
        gender = g;
    }
};

class Human_with_city_of_birth : public Human {
    private:
    string city{"Александровск-Сахалинский"};
    public:
    Human_with_city_of_birth() {}
    Human_with_city_of_birth(string f_name, string s_name, unsigned int age, bool gender, string city) :  Human (f_name, s_name, age, gender), city(city) {}
    string Get_city() {
        return this->city;
    }
    void Set_city(const string c) {
        city = c;
    }
};

int main() {
    return 0;
}