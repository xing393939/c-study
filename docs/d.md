### CPU内部组成

#### 参考资料
1. [CPU内部组成及原理](https://www.cnblogs.com/yilang/p/10993051.html)
1. [CPU的功能和组成](https://software.intel.com/content/www/cn/zh/develop/articles/book-processor-architecture_cpu_function_and_composition.html)

#### 逻辑上分为3个模块，由CPU内部总线连接
1. 控制单元：是整个CPU的指挥控制中心
  * 程序计数器PC：又称指令计数器
  * 指令寄存器IR：用来保存当前正在执行的指令
  * 指令译码器ID：分析和执行当前指令的部件
  * 操作控制器OC：主要包括节拍脉冲发生器、控制矩阵、时钟脉冲发生器、复位电路和启停电路等控制逻辑
  * 时序发生器：类似“作息时间”的东西，使计算机可以准确、迅速、有条不紊地工作
1. 运算单元：执行算术运算和逻辑运算，受控制单元指挥
  * 算术运算逻辑单元(ALU)：进行整数的二位元的算术运算
  * 累加器(AC)：为ALU提供一个工作区，暂时存放运算结果信息，一般有16个、32个
  * 数据缓冲寄存器(DR)：暂存由内存读出的指令或数据，反之，当向内存存入指令或数据时先放这里
  * 状态寄存器(PSW)：如运算结果进位标志、溢出标志，为零标志、为负标志等
  * 通用寄存器组：AX、BX、CX、DX、SP等，通用寄存器用途广泛并可由程序员规定其用途。
1. 存储单元：包括CPU片内缓存和寄存器组，是CPU中暂时存放数据的地方，里面保存着那些等待处理的数据，或已经处理过的数据
  * 内存管理单元(MMU)：虚拟地址到物理地址的转换、内存保护、中央处理器高速缓存的控制





















