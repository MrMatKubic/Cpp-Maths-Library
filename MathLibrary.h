#ifndef MATHLIBRARY_H_INCLUDED
#define MATHLIBRARY_H_INCLUDED

#define E 2.718

float multiply(float a, float b);
float divide(float c, float d);
float add(float a, float b);
float sub(float a, float b);
float sq(float a);
float cube(float a);
float exp(float x);
float ln(float x);
float pow(float a, float b);
float sqrt(int a);
float factorial(float a);
int findGCD(float a, float b);
bool isPrime(int a);

// fdjsqklfdjsqklfjsdqklfjdsklfjdklf //
// BASIC OPERATIONS
float multiply(float a, float b) { return a * b; }
float divide(float c, float d) { return c / d; }
float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }

float sq(float a) { return a * a; }
float cube(float a) { return a * a * a; }

float exp(float x) { return pow(E, x); }
float ln(float x) { return pow(E, x); } // TODO : MAKE THAT FUNCTION WORK

float pow(float a, float b)
{
    float x = a;
    for(float it = 1; it < b; it++) {
        x *= a;
    }
    return x;
}

float sqrt(int a)
{
    if(a > 0)
    {
        for(float it = 1; it < 100; it += 0.1)
        {
            if(sq(it) == a)
                return it;
            else if(sq(it) > a) return it - 0.1;
        }
    }
}

float factorial(float a) {
    if(a == 0) return 1;
    else return a * factorial(a - 1);
}

int findGCD(float a, float b)
{
    int x = 0;
    for(int it = 0; it < 40; it++)
    {
        if(abs(a / it) == a / it
        && abs(b / it) == b / it)
        {
            x = it;
        }
    }
    return x;
}

bool isPrime(int a)
{
    int it = 0;
    for(int i = 2; i <= a; i++)
    {
        int x = findGCD(a, i);
        if(x == 1) it++;
    }
    if(it == a - 2) return true;
    return false;
}

#endif // MATHLIBRARY_H_INCLUDED
