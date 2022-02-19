
#include <iostream>

struct Alumno
{
    int id; // nota: no ha sido inicializado
    int edad;
    double tutorId;
};

int main()
{
    Alumno juan; // no se ha inicializado aquí tampoco
    std::cout << juan.id;

    return 0;
}









struct Alumno
{
    int id{};
    int edad{};
    double tutorId{};
};

int main()
{
    

    Alumno juan = { 1, 17, 1.5 }; // inicialización por copia-lista con símbolo de asignación y llaves
    Alumno francisco (3, 19, 2.5);  // inicialización directa usando una lista entre paréntesis (C++20)
    Alumno roberto{ 2, 18, 2.5 };     // inicialización de lista o uniforme usando llaves (preferida)

    return 0;
}






struct Alumno
{
    int id{};
    int edad{};
    double tutorId{};
};

int main()
{
    Alumno juan{ 2, 17 }; // juan.tutorId será inicialido-por-valor a 0.0
    Alumno francisco{ }; // inicializa todos los miembros por valor

    return 0;
}


#if 0
#endif


struct Rectangulo
{
    double largo{};
    double ancho{};
};

int main()
{
    const Rectangulo unit{ 1.0, 1.0 };
    const Rectangulo cero{ }; // inicializa-por-valor todos los miembros

    return 0;
}


struct Foo
{
    int a{};
    int c{};
};

int main()
{
    Foo f{ 1, 3 }; // f.a = 1, f.c = 3
}


struct Foo
{
    int a{};
    int b{}; // nuevo miembro
    int c{};
};

int main()
{
    Foo f{ 1, 3 }; // ahora, f.a = 1, f.b = 3, f.c = 0
}



struct Foo
{
    int a{ };
    int b{ };
    int c{ };
};

int main()
{
    Foo f1{ .a{ 1 }, .c{ 3 } }; // ok: f.a = 1, f.b = 0 (inicializado por valor), f.c = 3
    Foo f2{ .b{ 2 }, .a{ 1 } }; // error: inicialización no coincide con el orden declarado en la struct

    return 0;
}




