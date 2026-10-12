#pragma once
#include "dayOfYear.h"

namespace JungHyewon2693292
{
    class holiday
    {
        dayofYear d;
        bool parkingEnforcement{};

    public:
    holiday(dayOfYear d=dayOfYear{1,1}, bool p=false)
    :d{d0}, parkingEnforcement{p0}
    {}
    holiday(int m, int d, bool p)
    :date{m,d}, parkingEnforcement{p}
    {}
    void print() const //holiday::print()
    {
        date.print();
        if (parkingEnforcement)
            std::cout << "Parking laws will be enforced\n";
        else
            std::cout << "Parking laws will not be enforced\n";
    }
    dayOfYear getDate() const {return date;}
    void setDate(const dayofYear d) {date=d;}
    };
}

//private 멤버변수 선언: dayOfYear형 객체, bool형 멤버변수

//public 멤버함수 인라인으로 정의

//-생성자: 모든 멤버변수 초기화, 기본값 설정

//-print: 표준스트림출력으로 멤버변수들 출력

//dayOfYear형 객체의 접근함수를 참조형식으로 구현