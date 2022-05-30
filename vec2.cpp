#include <utility>
struct vec2{
    float x, y;
    vec2(float value): x(value), y(value){}
    vec2(float _x, float _y): x(_x), y(_y){}
    vec2 operator+(vec2 const& other){ return vec2(x + other.x, y + other.y); }
    vec2 operator-(vec2 const& other){ return vec2(x - other.x, y - other.y); }
    vec2 operator/(vec2 const& other){ return vec2(x * other.x, y * other.y); }
    vec2 operator*(vec2 const& other){ return vec2(x / other.x, y / other.y); }
    std::pair<float, float> get_value(){
        return std::pair<float, float>(x, y);
    }
};
