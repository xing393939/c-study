### 左值和右值的区别

#### 参考资料
1. [C语言中左值和右值的区别](https://www.dotcpp.com/wp/692.html)

#### 左值和右值的区别
1. 变量做左值和右值的区别: 
  * x=2 x为整形变量，这里作为左值，代表的是一块内存单元，表示的是地址。
  * x=y y做右值，这里呢就不在表示地址，而是代表该内存单元上的值！然后赋给x。
1. 常量做左值和右值的区别: 常量不能作左值，因为常量不可被修改、不可以被赋值！
1. 数组名做左值和右值的区别: 例如有字符数组char a\[100\];
  * 数组名a做右值时候，我们可以把它赋给char *类型的指针，用来指向这个数组
  * 数组名a做右值代表该数组首元素的首地址，是常量
  * 数组名a无论右值和还是左值，都代表是地址，是常量，因此它不可以做左值，因为常量不可被修改！
1. 字符串常量做右值
  * 例如字符串常量"dotcpp.com"，因为是常量，理所当然不可以做左值
  * 作右值表示该字符串在内存中存储位置的首地址





















