# 一维数组
##  数组的特点：// int a[10];
> 相同数据类型 int sizeof(int)=4
> 物理地址连续 &a[i] &a[i+1]相差 sizeof(int)
> 随机访问 读写a[x]  常数时间O(1)

``` 

&a[x]=a+x； //x是整数表示从地址a处偏移x个单位(sizeof(a[0]))

```


##  数组的输入输出：结合循环 //a[0]~a[n-1]
### 初始化：
> 使用初始化器{}
> 使用循环
> memset可以按字节清0

### 输出：
```
void print(int a[],int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
```

##  数组的计算:
> 递推

``` stylus
#include <stdio.h>
int main() {
  int f[10];  // f[0]-f[9]
  f[0] = 1;

  int i;
  for (i = 1; i < 10; i++) f[i] = f[i - 1] * i;//递推

  for (i = 0; i < 10; i++) printf("%d ", f[i]);
  printf("\n");
}

```


> 求和（求积）、统计
> 反序
> 查找
> 排序


## 数组作为函数的参数
>  值传递

>  地址传递
    
