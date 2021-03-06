/* { dg-options "-fcilkplus" } */
/* { dg-do run { target i?86-*-* x86_64-*-* arm*-*-* } } */
/* { dg-options "-fcilkplus -lcilkrts" { target { i?86-*-* x86_64-*-* arm*-*-* } } } */

class Rectangle
{
  int area_val, h, w;
  public:
    Rectangle (int, int);
    Rectangle (int, int, int);
    ~Rectangle ();
    int area ();
};
Rectangle::~Rectangle ()
{
  h = 0;
  w = 0;
  area_val = 0;
}
Rectangle::Rectangle (int height, int width)
{
  h = height;
  w = width;
  area_val = 0;
}

int some_func(int &x)
{
  x++;
  return x;
}

Rectangle::Rectangle (int height, int width, int area_orig)
{
  h = height;
  w = width;
  area_val = area_orig;
}

int Rectangle::area()
{
  return (area_val += (h*w));
}


int some_func (int &);

/* Spawning constructor.  */
int main1 (void)
{
  int x = 3;
  Rectangle r = _Cilk_spawn Rectangle (some_func(x), 3);
  return r.area();
}
 
/* Spawning constructor 2.  */
int main2 (void)
{
  Rectangle r (_Cilk_spawn Rectangle (4, 3));
  return r.area();
}

/* Spawning copy constructor.  */
int main3 (void)
{
  int x = 3;
  Rectangle r = _Cilk_spawn Rectangle (some_func(x), 3, 2);
  return r.area ();
}

/* Spawning copy constructor 2.  */
int main4 (void)
{
  Rectangle r ( _Cilk_spawn Rectangle (4, 3, 2));
  return r.area();
}

int main (void)
{
  if (main1 () != 12)
    __builtin_abort ();
  if (main2 () != 12)
    __builtin_abort ();
  if (main3 () != 14)
    __builtin_abort ();
  if (main4() != 14)
    __builtin_abort ();
  return 0;
}
