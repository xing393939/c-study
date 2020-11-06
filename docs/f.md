### 个人理解的C语言

#### 参考资料
1. [4. 指针与const限定符](http://akaedu.github.io/book/ch23s04.html)
1. [6. 指向指针的指针与指针数组](http://akaedu.github.io/book/ch23s06.html)

#### 个人理解的C语言
1. 可以当左值的变量a，前面加&就是取内存地址，然后可以赋值给指针p
1. 指针本身也是一个变量，const int a和const int *p，a不可改写，p指向的内存不能改写，但是p可以
1. int *pi = &i; int **ppi = &pi; 
  * pi是指针变量
  * ppi就是指向这个变量的指针，*ppi==pi，**pi==i





















