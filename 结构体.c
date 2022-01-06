#include<stdio.h>
#include<string.h>
struct BOOK{
	char name[20];
	char price;
};
int main(){
	struct BOOK b1={
		"C语言程序设计",55 
	};
	//可以直接修改价格 
	b1.price=15;
	//字符串拷贝（在此用于书名的修改）
	//strcpy-string copy-库函数（所以使用的时候必须引用) 
	strcpy(b1.name ,"C++");
	printf("书名是：《%s》\n",b1.name);
	printf("书的价格是%d元\n",b1.price);
	struct BOOK*pb=&b1;
	printf("书的价格是%d元\n",(*pb).price);
	printf("书的名字是《%s》\n",(*pb).name); 
	printf("书的价格是%d\n",pb->price);
	printf("书的名字是%s\n",pb->name); 
	return 0; 
}
