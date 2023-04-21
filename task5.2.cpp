#include <iostream>
#include <windows.h>

class Figure {
public:
    int sides_count;
    std::string name;

public:

    Figure()
    {
        sides_count;
        name;
    }

    Figure(int sides_count, std::string name)
    {
        this->sides_count = sides_count;
        this->name = name;
    }

    void get_sides_count()
    {
        this->sides_count = sides_count;
    };

    void print_sides() {
        std::cout << name << ": " << sides_count << std::endl;
    }

    void get_name() {
        std::cout << name << std::endl;
    }
};

class Triangle : public Figure
{
public:
    int length_side_a;
    int length_side_b;
    int length_side_c;
    int value_angle_A;
    int value_angle_B;
    int value_angle_C;

    Triangle()
    {
        length_side_a = 10;
        length_side_b = 20;
        length_side_c = 30;
        value_angle_A = 50;
        value_angle_B = 60;
        value_angle_C = 70;
    }

    Triangle(int sides_count, std::string name, int length_side_a, int length_side_b, int length_side_c,
        int value_angle_A, int value_angle_B, int value_angle_C)
    {
        this->length_side_a = length_side_a;
        this->length_side_b = length_side_b;
        this->length_side_c = length_side_c;
        this->value_angle_A = value_angle_A;
        this->value_angle_B = value_angle_B;
        this->value_angle_C = value_angle_C;
    }

    void get_name() {
        std::cout << "Треугольник" << std::endl;
    }

    void get_lenght_side_a()
    {
        this->length_side_a;
    };

    void get_lenght_side_b()
    {
        length_side_b;
    };

    void get_lenght_side_c()
    {
        length_side_c = 30;
    };

    void get_value_angle_A()
    {
        value_angle_A;
    };

    void get_value_angle_B()
    {
        value_angle_B;
    };

    void get_value_angle_C()
    {
        value_angle_C;
    };

    void print_sides_length()
    {
        std::cout << "Стороны: " << "a = " << length_side_a << " b = " << length_side_b << " c = " << length_side_c << std::endl;
    };

    void print_angles_value()
    {
        std::cout << "Углы: " << "A = " << value_angle_A << " B = " << value_angle_B << " C = " << value_angle_C << std::endl;
    };
};

class Right_triangle : public Triangle
{
public:

    Right_triangle()
    {
        value_angle_C = 90;
    }

    void get_name() {
        std::cout << "Прямоугольный треугольник" << std::endl;
    }
};

class Isosceles_triangle : public Triangle {
public:

    Isosceles_triangle()
    {
        length_side_c = 10;
        value_angle_C = 50;
    }

    void get_name() {
        std::cout << "Равнобедренный треугольник" << std::endl;
    }
};

class Equilateral_triangle : public Triangle {
public:

    Equilateral_triangle()
    {
        length_side_a = length_side_b = length_side_c = 30;
        value_angle_A = value_angle_B = value_angle_C = 60;
    }

    void get_name() {
        std::cout << "Равносторонний треугольник" << std::endl;
    }
};

class Quadrangle : public Triangle
{
public:
    int length_side_d;
    int value_angle_D;

    Quadrangle()
    {
        length_side_a = 10;
        length_side_d = 20;
        length_side_c = 30;
        length_side_d = 40;
        value_angle_A = 50;
        value_angle_B = 60;
        value_angle_C = 70;
        value_angle_D = 80;
    }

    Quadrangle(int length_side_d, int value_angle_D)
    {
        this->length_side_d = length_side_d;
        this->value_angle_D = value_angle_D;
    }

    void get_name() {
        std::cout << "Четырёхугольник" << std::endl;
    }

    void print_sides_length()
    {
        std::cout << "Стороны: " << "a = " << length_side_a << " b = " << length_side_b << 
            " c = " << length_side_c << " d = " << length_side_d << std::endl;
    };

    void print_angles_value()
    {
        std::cout << "Углы: " << "A = " << value_angle_A << " B = " << value_angle_B << 
            " C = " << value_angle_C << " D = " << value_angle_D << std::endl;
    };
};

class Parallelogram : public Quadrangle 
{
public:

    void get_name() {
        std::cout << "Параллелограмм" << std::endl;
    }

    Parallelogram()
    {
        length_side_a = length_side_c = 20;
        length_side_b = length_side_d = 30;
        value_angle_A = value_angle_C = 30;
        value_angle_B = value_angle_D = 40;
    }
};

class Rectangle1 : public Parallelogram 
{
public:

    void get_name() {
        std::cout << "Прямоугольник" << std::endl;
    }

    Rectangle1()
    {
        length_side_a = length_side_c = 10;
        length_side_b = length_side_d = 20;
        value_angle_A = value_angle_C = value_angle_B = value_angle_D = 90;
    }
};

class Rhombus: public Parallelogram 
{
public:

    void get_name() {
        std::cout << "Ромб" << std::endl;
    }

    Rhombus()
    {
        length_side_a = length_side_b = length_side_c = length_side_d = 30;
        value_angle_A = value_angle_C = 30;
        value_angle_B = value_angle_D = 40;
    }
};

 class Square : public Quadrangle 
 {
 public:

     void get_name() {
         std::cout << "Квадрат" << std::endl;
     }

     Square()
     {
        length_side_a = length_side_b = length_side_c = length_side_d = 20;
        value_angle_A = value_angle_B = value_angle_C = value_angle_D = 90;
     }
 };

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::system("chcp 1251");

    Triangle tr;
    tr.get_name();
    tr.print_sides_length();
    tr.print_angles_value();

    Right_triangle rt;
    rt.get_name();
    rt.print_sides_length();
    rt.print_angles_value();

    Isosceles_triangle itr;
    itr.get_name();
    itr.print_sides_length();
    itr.print_angles_value();

    Equilateral_triangle etr;
    etr.get_name();
    etr.print_sides_length();
    etr.print_angles_value();

    Quadrangle qv;
    qv.get_name();
    qv.print_sides_length();
    qv.print_angles_value();
    
    Rectangle1 rct;
    rct.get_name();
    rct.print_sides_length();
    rct.print_angles_value();

    Square sq;
    sq.get_name();
    sq.print_sides_length();
    sq.print_angles_value();

    Parallelogram prl;
    prl.get_name();
    prl.print_sides_length();
    prl.print_angles_value();

    Rhombus rh;
    rh.get_name();
    rh.print_sides_length();
    rh.print_angles_value();
}
