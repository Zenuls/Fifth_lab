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

class University {
    private:
    string name_of_university{"ДВФУ"};
    public:
    University() {}
    University(string name_of_university): name_of_university(name_of_university) {}
    string Get_name_of_university() {
        return this->name_of_university;
    }
    void Set_name_of_university(const string u) {
        name_of_university = u;
    }
};

class Specialization {
    private:
    string number{"09.03.04 Программная инженерия"};
    public:
    Specialization() {}
    Specialization(string number): number(number) {}
    string Get_number() {
        return this->number;
    }
    void Set_number(const string nu) {
        number = nu;
    }
};

class Student : public Human_with_city_of_birth, virtual public University, Specialization {
    private:
    unsigned short int course{2};
    public:
    Student() {}
    Student(string f_name, string s_name, unsigned int age, bool gender, string city, string name_of_university, string number, unsigned short int course): Human_with_city_of_birth (f_name, s_name, age, gender, city), University(name_of_university), Specialization(number), course(course) {}
    unsigned short int Get_course() {
        return this->course;
    }
    void Set_course(const unsigned short int c) {
        course = c;
    }
    void Presentation() {
        cout <<"Привет! Меня зовут "<<this->Get_f_name()<<" "<<this->Get_s_name()<<endl;
        cout <<"Мне "<<this->Get_age()<<" лет"<<endl;
        cout <<"Я родился/родилась в городе: "<<this->Get_city()<<endl;
        cout <<"И учусь в "<<this->Get_name_of_university()<<" по професии "<<this->Get_number()<<" на "<<this->Get_course()<<" курсе"<<endl;
        cout <<endl;
    }

};

int main() {
    setlocale(LC_ALL,"Russia");
    Student I;
    I.Presentation();
    cout<<"А через год я скажу: "<<endl;
    I.Set_age(20);
    I.Set_course(3);
    I.Presentation();
    Student My_friend("Калашников", "Виктор", 19, true, "Александровск-Сахалинский","ДВФУ","38.03.01вшэ Экономика",2);
    My_friend.Presentation();
    return 0;
}