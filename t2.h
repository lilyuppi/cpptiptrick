#ifndef T2_H
#define T2_H
typedef enum test_t {
    y = 1
} test_et;

typedef enum {
    zz = 1
} test_z;

typedef enum {
    xx = 1
} test_x;

#define xx (test_z)xx;

test_z getz() {
    return xx;
}

#endif // T2_H
