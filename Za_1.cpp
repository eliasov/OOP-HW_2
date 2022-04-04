#ifndef Za_1
#define Za_1

#include <iostream>

enum Gender
{
    GENDER_MAN,
    GENDER_WOM
};

class Person
{
private:
    std::string m_name;
    int m_age;
    Gender m_gender;
    float m_weight;
public:
    Person(std::string name, int age, Gender gender, float weight) :
        m_name(name), m_age(age), m_gender(gender), m_weight(weight) {}

    void setName(std::string name = "")
    {
        if (name == "")
        {
            std::cout << "Enter new name: ";
            std::cin >> m_name;
        }
        else
            m_name = name;
    }

    void setAge(int age = 0)
    {
        if (age == 0)
        {
            std::cout << "Enter is age: ";
            std::cin >> m_age;
        }
        else
            m_age = age;
    }

    void setWeight(float weight = 0.0)
    {
        if (weight == 0)
        {
            std::cout << "Enter is weight: ";
            std::cin >> m_weight;
        }
        else
            m_weight = weight;
    }

    void printInfo() const
    {
        std::cout << "Name: " << m_name << std::endl
            << "Age: " << m_age << std::endl
            << "Ggender: " << (m_gender == GENDER_MAN ? "Man" : "Wom") << std::endl
            << "Weight: " << m_weight << std::endl;
    }
};

class Student : public Person
{
private:
    static int count;
    int m_yos; // year of study
public:
    Student(std::string name, int age, Gender gender, float weight, int yos) :
        Person(name, age, gender, weight), m_yos(yos)
    {
        count++;
    }

    Student(const Student& s) : Person(s)
    {
    count++;

    m_yos = s.m_yos;
    }

    static void printCount()
    {
        std::cout << "Number of students: " << count << std::endl;
    }

    void setYearStudy(int yos = 0)
    {
        if (yos == 0)
        {
            std::cout << "Enter year of study: ";
            std::cin >> m_yos;
        }
        else
            m_yos = yos;
    }

    void incYear()
    {
        m_yos++;
    }

    void printInfo() const
    {
        Person::printInfo();
        std::cout << "Enter is year: " << m_yos << std::endl;
    }

    ~Student()
    {
        count--;
    }
};

#endif