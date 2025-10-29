#define F (1 << 14)  //  1 << 14 = 16384

// 정수 n을 fixed-point로 변환
#define INT_TO_FIXED_POINT(n) ((n) * F)

// fixed-point를 정수 n으로(0 방향으로 반올림)
#define FIXED_POINT_TO_INT(x) ((x) / F)

// fixed-point를 정수 n으로(가까운 정수로 반올림)
#define FIXED_POINT_TO_INT_NEAREST(x) \
    (x >= 0 ? (x + (F / 2)) / F : (x - (F / 2)) / F)

// x + y
#define ADD_FIXED_POINT(x, y) ((x) + (y))

// x - y
#define SUB_FIXED_POINT(x, y) ((x) - (y))

// x + n
#define ADD_FIXED_POINT_INT(x, n) ((x) + ((n) * F))

// x - n
#define SUB_FIXED_POINT_INT(x, n) ((x) - ((n) * F))

// x * y
#define MUL_FIXED_POINT(x, y) (((int64_t) (x) * (y)) / F)

// x * n
#define MUL_FIXED_POINT_INT(x, n) (((x) * (n)))

// x / y
#define DIV_FIXED_POINT(x, y) (((int64_t) (x) * F) / (y))

// x / n
#define DIV_FIXED_POINT_INT(x, n) ((x) / (n))
