#pragma once
#include "dayOfYear.h"
#include <string>

namespace JungHyewon2693292
{
    class holiday
    {
        std::string name;
        dayOfYear d;
        bool parkingEnforcement{};

    public:
    holiday(const std::string& n= "no name yet", dayOfYear d=dayOfYear{1,1}, bool p=false)
    :name{n}, d{d}, parkingEnforcement{p}
    {}
    holiday(int m, int d, bool p)
    :date{m,d}, parkingEnforcement{p}
    {}
    void print() const //holiday::print()
    {
        std::cout << name << ":"
        date.print();
        if (parkingEnforcement)
            std::cout << "Parking laws will be enforced\n";
        else
            std::cout << "Parking laws will not be enforced\n";
    }

    friend::ostream& operator<<(std::ostream&os, const holiday&h)
    {
        os<< name <<":"
        os<< h.date;
        if (h.parkingEnforcement)
            os << "parking laws will be enforced";

        else
            os << "parking laws will be enforced";

        return os;
    }
    friend::ostream& operator>>(std::istream&is, const holiday&h)
    {
        std::cout << "Enter holiday name:";
        std::getline( is>> std::ws, h.name);
        is>>h.date;
        std::cout << "Enter parking law enforcement:";
        is >> h.parkingEnforcement;
        return is;
    }
    void input()
    {
        std::cout << "Enter holiday name:";
        std::getline(std::cin>> std::ws, name);
        date.input();
        std::cout << "Enter parking law emforcement: (1 or 0/t,f)";
        std::cin >>parkingEnforcement;
    }
    const std::string&getName() const{return name;}
    const std::dayOfYear&getDate() const{return date;}
    void setName(const std::string&n){name=n;}
    void setDate(const dayOfYear d) {date=d;}
    const dayOfYear &getDate() const {return date;}
    void setParkingEnforement(const dayOfYear d) {date=d;}
    };
}

//private 멤버변수 선언: dayOfYear형 객체, bool형 멤버변수

//public 멤버함수 인라인으로 정의

//-생성자: 모든 멤버변수 초기화, 기본값 설정

//-print: 표준스트림출력으로 멤버변수들 출력

//dayOfYear형 객체의 접근함수를 참조형식으로 구현