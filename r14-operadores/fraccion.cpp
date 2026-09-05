#include "fraccion.h"


// reducir() divide num_ y den_ entre su gcd (max. común divisor)
void Fraccion::reducir() {
    if (den_ < 0) {          
        num_ = -num_;
        den_ = -den_;
    }
    int g = std::gcd(num_, den_);
    if (g != 0) {
        num_ /= g;
        den_ /= g;
    }
}

Fraccion::Fraccion(int n, int d) : num_(n), den_(d) {
    reducir();  //se reduce la fracción siempre
}

Fraccion Fraccion::operator+(const Fraccion& o) const {
    return Fraccion(num_ * o.den_ + o.num_ * den_,
                    den_ * o.den_);        
}

Fraccion Fraccion::operator*(const Fraccion& o) const {
    return Fraccion(num_ * o.num_, den_ * o.den_);   
}

bool Fraccion::operator==(const Fraccion& o) const {
    return num_ * o.den_ == o.num_ * den_;
}

bool Fraccion::operator<(const Fraccion& o) const {
    return num_ * o.den_ < o.num_ * den_;  // den_ > 0 siempre
}

std::ostream& operator<<(std::ostream& os, const Fraccion& f) {
    return os << f.num_ << '/' << f.den_;
}
