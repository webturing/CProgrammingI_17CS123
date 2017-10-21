# 分支程序设计
## 表达式 Expression (Type,Value)
###  常变量 Operand
- Constant
- Literal 字面量 0 0.0 0.0f 0LL '0' "0"
- 符号常量  const / #define
- 变量  int x=3,y;

### 运算符 operator

#### 一元运算符 
- -a +a;
- a++,a--,++a,--a 

#### 二元运算符:
- 算术运算符 + - * / % 
- 比较运算符 > < == !=
- 逻辑运算符 && || !
- 赋值运算符 =  v <- exp;

#### 三元运算符

### 表达式的定义
- 常变量都是表达式 //(1)原子性
- op1 Expression, 
- Exp1 op2 Exp2 ;
- （Expression） 
- foo(e1,e2...) //(2)都是表达式
- 使用步骤1，2**有限**步生成出来

### 计算规则 exp1 op2 exp2 eg 3+3.0
- T1 T2类型转化T: 精确->不精确 短->长
- 计算结果是T类型
- 运算符的优先级


