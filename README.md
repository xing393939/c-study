### C 语言学习

#### 参考资料
1. [Linux C 编程一站式学习](http://akaedu.github.io/book/index.html)

#### PHPer学C语言的博客
1. [周梦康](https://mengkang.net/notebook.html)
1. [PHPer面试-2020](https://www.kancloud.cn/martist/be_new_friends/)，作者是[Martist](https://learnku.com/users/6600)

#### 预编译文件、汇编文件、目标文件、可执行文件
|\目标<br/>源\ |预编译文件 |汇编文件|目标文件 |可执行文件 |
|:---|---|---|---|----|
|C文件|gcc -E s.c -o d.i|gcc -S s.c|gcc -c s.c|gcc s.c -o d|
|汇编文件|* | * | gcc -c s.s|gcc s.s -o d|
|目标文件|* | objdump -d d  | * | * |