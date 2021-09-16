### 二维数组传参的格式

#### 参考资料
1. [二维数组传参的格式 - CSDN](https://blog.csdn.net/qq_43868654/article/details/84641383)

#### 三种传参形式
1. 形参为二维数组：function(int a\[row]\[col])
  * 取第i行第j列：\*((int *)a + i * col + j)
  * a\[i]\[j]也行
1. 形参为数组指针：function(int (*a)\[col])
  * 取第i行第j列：\*((int *)a + i * col + j)
  * a\[i]\[j]也行
1. 形参为二级指针：function(int **a, int col)
  * 取第i行第j列：\*((int *)a + i * col + j)
  * a\[i]\[j]不行
  
#### 数组指针和指针数组
1. 数组指针也称为行指针，int (*p)\[3]表示p是指向二维数组(列数是3)的指针，p指向第0行，p+1指向第1行。
1. 指针数组int \*p\[3]表示p是一个数组，数组元素类型是int \*。
  
```c
void testArgs(int arr1[][2], int (*arr2)[2], int **arr3) {
    printf("%d\n", *((int *) arr1 + 2 + 0));
    printf("%d\n", *((int *) arr2 + 2 + 0));
    printf("%d\n", *((int *) arr3 + 2 + 0));
    printf("%d\n", arr1[1][0]);
    printf("%d\n", arr2[1][0]);
}
int main(int argc, char *argv[]) {
    int arr1[][2] = { {1, 2}, {3, 4} };
    int (*arr2)[2] = arr1;
    int **arr3 = (int **) arr1;
    testArgs(arr1, arr2, arr3);

    // 数组指针（行指针）
    printf("%d\n", *((int *) arr2 + 2 + 1));
    // 指针数组
    int *arr4[] = {(int *) arr2, (int *) (arr2 + 1)};
    printf("%d %d\n", *(arr4[0]), *(arr4[1]));
    return 0;
}
```





















