#include <iostream>
#include <windows.h>

class Figure {
protected:
    int sides_count;
    std::string name;

public:
    Figure()
    {
        sides_count = 0;
        name = "Фигура";
    }

    Figure(int sides_count, std::string name)
    {
        this->sides_count = sides_count;
        this->name = name;
    }

    std::string get_name() {
        return name;
    };

    int get_sides_count() {
        return sides_count;
    };

    void virtual print_info() {
        std::cout << get_name() << std::endl;
        std::cout << "Стороны: " << get_sides_count() << std::endl << std::endl;
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
        sides_count = 3;
        name = "Треугольник";
    }
    
    Triangle(int length_side_a, int length_side_b, int length_side_c,
        int value_angle_A, int value_angle_B, int value_angle_C)
    {
        this->length_side_a = length_side_a;
        this->length_side_b = length_side_b;
        this->length_side_c = length_side_c;
        this->value_angle_A = value_angle_A;
        this->value_angle_B = value_angle_B;
        this->value_angle_C = value_angle_C;
        sides_count = 3;
        name = "Треугольник";
    }

    int get_lenght_side_a()
    {
        return length_side_a;
    };

    int get_lenght_side_b()
    {
        return length_side_b;
    };

    int get_lenght_side_c()
    {
        return length_side_c;
    };

    int get_value_angle_A()
    {
        return value_angle_A;
    };

    int get_value_angle_B()
    {
        return value_angle_B;
    };

    int get_value_angle_C()
    {
        return value_angle_C;
    };

    void print_info() override
    {
        std::cout << get_name() << std::endl;
        std::cout << "Стороны: " << " a = " << get_lenght_side_a() << " b = " << get_lenght_side_b() << " c = " << get_lenght_side_c() << std::endl;
        std::cout << "Углы: " << " А = " << get_value_angle_A() << " B = " << get_value_angle_B() << " C = " << get_value_angle_C() << std::endl << std::endl;
    }
};

class Right_triangle : public Triangle
{
public:
    Right_triangle()
    {  
        value_angle_C = 90;
        name = "Прямоугольный треугольник";
    }

    Right_triangle(int length_side_a, int length_side_b, int length_side_c,
        int value_angle_A, int value_angle_B)
    {
        this->length_side_a = length_side_a;
        this->length_side_b = length_side_b;
        this->length_side_c = length_side_c;
        this->value_angle_A = value_angle_A;
        this->value_angle_B = value_angle_B;
        value_angle_C = 90;
        name = "Прямоугольный треугольник";
    }
};

class Isosceles_triangle : public Triangle {
public:
    Isosceles_triangle()
    {
        length_side_a = 10;
        length_side_c = 10;
        value_angle_A = 40;
        value_angle_C = 40;
        name = "Равнобедренный треугольник";
    }

    Isosceles_triangle(int length_side_a, int length_side_b,
        int value_angle_A, int value_angle_B)
    {
        this->length_side_a = length_side_a;
        this->length_side_b = length_side_b;
        length_side_c = length_side_c;
        this->value_angle_A = value_angle_A;
        this->value_angle_B = value_angle_B;
        value_angle_C = value_angle_A;
        name = "Равнобедренный треугольник";
    }
};

class Equilateral_triangle : public Triangle {
public:
    Equilateral_triangle()
    {
        name = "Равносторонний треугольник";
        length_side_a = 30;
        length_side_b = 30;
        length_side_c = 30;
        value_angle_A = 60;
        value_angle_B = 60;
        value_angle_C = 60;
    }

    Equilateral_triangle(int length_side_a)
    {
        this->length_side_a = length_side_a;
        length_side_b = length_side_a;
        length_side_c = length_side_b;
        value_angle_A = 60;
        value_angle_B = value_angle_A;
        value_angle_C = value_angle_B;
        name = "Равносторонний треугольник";
    }
};

class Quadrangle : public Triangle
{
public:
    int length_side_d;
    int value_angle_D;

    Quadrangle()
    {
        name = "Четырёхугольник";
        length_side_a = 10;
        length_side_b = 20;
        length_side_c = 30;
        length_side_d = 50;
        value_angle_A = 50;
        value_angle_B = 60;
        value_angle_C = 60;
        value_angle_D = 80;
    }

    Quadrangle(int length_side_a, int length_side_b, int length_side_c, int length_side_d,
        int value_angle_A, int value_angle_B, int value_angle_C, int value_angle_D)
    {
        this->length_side_a = length_side_a;
        this->length_side_b = length_side_b;
        this->length_side_c = length_side_c;
        this->length_side_d = length_side_d;
        this->value_angle_A = value_angle_A;
        this->value_angle_B = value_angle_B;
        this->value_angle_C = value_angle_C;
        this->value_angle_D = value_angle_D;
        sides_count = 4;
        name = "Четырёхугольник";
    }

    int get_lenght_side_d()
    {
        return length_side_d;
    };

    int get_value_angle_D()
    {
        return value_angle_D;
    };

    void print_info() override
    {
        std::cout << get_name() << std::endl;
        std::cout << "Стороны: " << " a = " << get_lenght_side_a() << " b = " << get_lenght_side_b() << " c = " << get_lenght_side_c() <<
            " d = " << get_lenght_side_d() << std::endl;
        std::cout << "Углы: " << " А = " << get_value_angle_A() << " B = " << get_value_angle_B() << " C = " << get_value_angle_C() <<
            " D = " << get_value_angle_D() << std::endl << std::endl;
    }
};

class Parallelogram : public Quadrangle 
{
public:
    Parallelogram()
    {
        sides_count = 4;
        name = "Параллелограмм";
        length_side_a = 10;
        length_side_b = 20;
        length_side_c = 10;
        length_side_d = 20;
        value_angle_A = 40;
        value_angle_B = 30;
        value_angle_C = 40;
        value_angle_D = 30;
    }

    Parallelogram(int length_side_a, int length_side_b,
        int value_angle_A, int value_angle_B)
    {
        this->length_side_a = length_side_a;
        this->length_side_b = length_side_b;
        length_side_c = length_side_a;
        length_side_d = length_side_b;
        this->value_angle_A = value_angle_A;
        this->value_angle_B = value_angle_B;
        value_angle_C = value_angle_A;
        value_angle_D = value_angle_B;
        sides_count = 4;
        name = "Параллелограмм";
    }
};

class Rectangle1 : public Parallelogram 
{
public:
    Rectangle1()
    {
        name = "Прямоугольник";
        length_side_a = 10;
        length_side_b = 20;
        length_side_c = 10;
        length_side_d = 20;
        value_angle_A = 90;
        value_angle_B = 90;
        value_angle_C = 90;
        value_angle_D = 90;
    }

    Rectangle1(int length_side_a, int length_side_b)
    {
        this->length_side_a = length_side_a;
        length_side_b = length_side_b;
        length_side_c = length_side_a;
        length_side_d = length_side_b;
        this->value_angle_A = 90;
        value_angle_B = value_angle_A;
        value_angle_C = value_angle_B;
        value_angle_D = value_angle_C;
        sides_count = 4;
        name = "Прямоугольник";
    }
};

class Rhombus: public Parallelogram 
{
public:
    Rhombus()
    {
        name = "Ромб";
        length_side_a = 30;
        length_side_b = 30;
        length_side_c = 30;
        length_side_d = 30;
        value_angle_A = 30;
        value_angle_B = 40;
        value_angle_C = 30;
        value_angle_D = 40;
    }

    Rhombus(int length_side_a, int value_angle_A, int value_angle_B)
    {
        this->length_side_a = length_side_a;
        length_side_b = length_side_a;
        length_side_c = length_side_b;
        length_side_d = length_side_c;
        this->value_angle_A = value_angle_A;
        this->value_angle_B = value_angle_B;
        value_angle_C = value_angle_A;
        value_angle_D = value_angle_B;
        sides_count = 4;
        name = "Ромб";
    }
};

 class Square : public Quadrangle 
 {
 public:
     Square()
     {
        name = "Квадрат";
        length_side_a = 10;
        length_side_b = 10;
        length_side_c = 10;
        length_side_d = 10;
        value_angle_A = 90;
        value_angle_B = 90;
        value_angle_C = 90;
        value_angle_D = 90;
     }

     Square(int length_side_a)
     {
         this->length_side_a = length_side_a;
         length_side_b = length_side_a;
         length_side_c = length_side_b;
         length_side_d = length_side_c;
         value_angle_A = 90;
         value_angle_B = value_angle_A;
         value_angle_C = value_angle_B;
         value_angle_D = value_angle_C;
         sides_count = 4;
         name = "Квадрат";
     }
 };

 int main()
 {
     setlocale(LC_ALL, "Russian");
     SetConsoleOutputCP(1251);
     SetConsoleCP(1251);
     std::system("chcp 1251");

     Figure f;
     f.print_info();


     
     //Я создаю несколько треугольников, первый, второй и третий, при создании первого 
     // аргументы не передаются, поскольку используется базовый конструктор
     // при создании двух слудующих используется конструктор с параметрами,
     // которому я передаю углы и длины сторон. Углы при необходимости, длины сторон по разному.
     Triangle tr1;
     Triangle tr2(1,2,3,4,5,6);
     Triangle tr3(1, 2, 3, 4, 7, 8);
     Figure* par_tr1 = &tr1;
     par_tr1->print_info();
     Figure* par_tr2 = &tr2;
     par_tr2->print_info();
     Figure* par_tr3 = &tr3;
     par_tr3->print_info();

     // создаём прямоугольный треугольник, у него угол С равен 90 градусов, 
     // поэтому этот угол не передаётся при использовании базового конструктора.

     Right_triangle rt1;
     Figure* par_rt1 = &rt1;
     par_rt1->print_info();
     Right_triangle rt2(1,2,3,4,5);
     Figure* par_rt2 = &rt2;
     par_rt2->print_info();
     Right_triangle rt3(12, 23, 34, 45, 55);
     Figure* par_rt3 = &rt3;
     par_rt3->print_info();

// создаём равнобедренный треугольник, то есть а = с, А = С
// поэтому можно назначить только a,b,A,B
     Isosceles_triangle itr1;
     Figure* par_itr1 = &itr1;
     par_itr1->print_info();
     Isosceles_triangle itr2(10,20,40,60);
     Figure* par_itr2 = &itr2;
     par_itr2->print_info();
     Isosceles_triangle itr3(1,2,3,4);
     Figure* par_itr3 = &itr3;
     par_itr3->print_info();

     // создаю равносторонний треугольник, можно задать длину стороны, а все углы 60 градусов
     // поэтому можно назначить только a

     Equilateral_triangle etr1;
     Figure* par_etr1 = &etr1;
     par_etr1->print_info();
     Equilateral_triangle etr2(11);
     Figure* par_etr2 = &etr2;
     par_etr2->print_info();
     Equilateral_triangle etr3 (56);
     Figure* par_etr3 = &etr3;
     par_etr3->print_info();

     // создаю четырёхугольник, произвольные стороны и углы

     Quadrangle qv1;
     Quadrangle* par_qv1 = &qv1;
     par_qv1->print_info();
     Quadrangle qv2(1,2,3,4,5,6,7,8);
     Quadrangle* par_qv2 = &qv2;
     par_qv2->print_info();
     Quadrangle qv3(9,19,11,12,13,14,15,16);
     Quadrangle* par_qv3 = &qv3;
     par_qv3->print_info();

     // создаю прямоугольник, стороны a,c и b,d попарно равны, все углы равны 90
     // задавать можно только стороны a и b 
     Rectangle1 rct;
     Figure* par_rct = &rct;
     par_rct->print_info();
     Rectangle1 rct_two(1,2);
     Figure* par_rct2 = &rct_two;
     par_rct2->print_info();
     Rectangle1 rct_three(2,3);
     Figure* par_rct3 = &rct_three;
     par_rct3->print_info();
     

     // создаю квадрат, все стороны равны, все углы равны 90
     Square sq1;
     Figure* par_sq1 = &sq1;
     par_sq1->print_info();
     Square sq2(1);
     Figure* par_sq2 = &sq2;
     par_sq2->print_info();
     Square sq3(2);
     Figure* par_sq3 = &sq3;
     par_sq3->print_info();

     //стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны

     Parallelogram prl1;
     Figure* par_prl1 = &prl1;
     par_prl1->print_info();
     Parallelogram prl2(1,2,3,4);
     Figure* par_prl2 = &prl2;
     par_prl2->print_info();
     Parallelogram prl3 (20,32,46,54);
     Figure* par_prl3 = &prl3;
     par_prl3->print_info();

     //создаю ромб, все стороны равны, углы A,C и B,D попарно равны

     Rhombus rh1;
     Figure* par_rh1 = &rh1;
     par_rh1->print_info();
     Rhombus rh2(3,50,40);
     Figure* par_rh2 = &rh2;
     par_rh2->print_info();
     Rhombus rh3(4,67,56);
     Rhombus* par_rh3 = &rh3;
     par_rh3->print_info();
 }