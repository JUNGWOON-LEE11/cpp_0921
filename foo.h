// foo.h

#ifndef FOO_H_
#define FOO_H_

// 선언부
int add(int a = 10, int b = 20);
int sub(int, int);

// 1. 헤더 파일안에는 internal linkage를 갖는 심볼만 작성하는 것이다.
// 2. 중복 포함을 방지해야 합니다.
//    => include guard

struct node {

};

#endif