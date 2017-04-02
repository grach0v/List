# if !defined CONTAINERMODULE
# define CONTAINERMODULE

#include <cstddef>

template <class T, size_t Length>
class Container
{
    T array [Length] = {};

    T& operator [] (int i) {return array [i];}
};


# endif
