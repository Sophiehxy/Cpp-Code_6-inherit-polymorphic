#include<iostream>
using namespace std;
#include<string>
////class Person
////{
////public:
////	Person(const char* name,int age)
////		:_name(name)
////		, _age(age)
////	{
////		cout << "Person(const char* name,int age)" << endl;
////	}
////	Person(const Person& p)
////		:_name(p._name)
////		, _age(p._age)
////	{
////		cout << "Person(const Person& p)" << endl;
////	}
////	Person& operator=(const Person& p)
////	{
////		cout << "Person& operator=(const Person& p)" << endl;
////		
////		if (this != &p)
////		{
////			_name = p._name;
////			_age = p._age;
////		}
////		return *this;
////	}
////	~Person()
////	{
////		cout << "~Person()" << endl;
////	}
////	void Display()
////	{
////		cout << "Name:" << _name << endl;
////		//cout << "Age:" << _age << endl;
////	}
////protected:
////	string _name;
////private:
////	int  _age;
////};
////
//////class Student :protected Person
////class Student:public Person
////{
////public:
////	Student(const char* name, int age,int sno)
////	:Person(name,age)
////	, _sno(sno)
////	{
////		cout << "Student(const char* name, int age,int sno)" << endl;
////	}
////	Student(const Student& s)
////		:Person(s)
////		, _sno(s._sno)
////	{
////		cout << "Student(const Student& s)" << endl;
////	}
////	Student& operator=(const Student& s)
////	{
////		cout << "Student& operator=(const Student& s)" << endl;
////		if (this != &s)
////		{
////			Person::operator=(s);
////			_sno = s._sno;
////		}
////		return *this;
////	}
////	~Student()
////	{
////		cout << "~Student()" << endl;
////	}
////	/*
////	void Display()
////	{
////		cout << "Name:" << _name << endl;
////		//cout << "Age:" << _age << endl;
////		cout << "sno:" << _sno << endl;
////	}*/
////private:
////	int _sno;
////};
////
////
////void Test1()
////{
////	Person p1("zhang",20);
////	Student s1("wang",25,2013);
////	p1.Display();
////	s1.Display();
////	//子类对象可以赋值给父类对象
////	//p1 = s1;
////	//父类对象不可以赋值给子类对象
////	//s1 = p1;
////	//父类的指针、引用可以指向子类对象
////	//Person* p=&s1;
////	//子类的指针、引用不可以指向父类对象
////	//Student& s = p;
////	//子类的指针、引用不可以指向父类对象（但可以通过强制类型转换完成）
////	Student& s = (Student&)p1;
////	Student* ss = (Student*)& p1;
////	Student& sss = (Student&) p1;
////	//尝试，结果怎样--》崩溃
////	/*ss->_sno = 10;
////	sss._sno = 20;*/
////}
////
////void Test2()
////{
////	Student s1("Jack", 18, 2016);
////	Student s2(s1);
////	Student s3("Rose", 17,2016);
////	s3 = s1;
////	s1.Display();
////	s2.Display();
////	s3.Display();
////}
////
////int main()
////{
////	//Test1();
////	Test2();
////	return 0;
////}
//
//
//
//
//
//
//
////
////
//////单继承&多继承
////#include<iostream>
////using namespace std;
////#include<string>
////
////
////
////class Student
////{
////public:
////	/*Student(const char* name, int sno)
////			:_name(name)
////			, _sno(sno)
////		{
////			cout << "Student(const char* name,int sno)" << endl;
////		}
////	Student(const Student& s)
////			:_name(s._name)
////			, _sno(s._sno)
////		{
////			cout << "Student(const Student& s)" << endl;
////		}
////	Student& operator=(const Student& s)
////		{
////			cout << "Student& operator=(const Student& s)" << endl;
////			
////			if (this != &s)
////			{
////				_name = s._name;
////				_sno = s._sno;
////			}
////			return *this;
////		}
////	~Student()
////		{
////			cout << "~Student()" << endl;
////		}
////		void Display()
////		{
////			cout << "Name:" << _name << endl;
////			cout << "Sno:" << _sno << endl;
////		}*/
////protected:
////	string _name;
////	int _sno;
////};
////class Teacher
////{
////	/*public:
////		Teacher(const char* name, int tno)
////			:_name(name)
////			, _tno(tno)
////		{
////			cout << "Teacher(const char* name,int sno)" << endl;
////		}
////		Teacher(const Teacher& t)
////			:_name(t._name)
////			, _tno(t._tno)
////		{
////			cout << "Teacher(const Teacher& t)" << endl;
////		}
////		Teacher& operator=(const Teacher& t)
////		{
////			cout << "Teacher& operator=(const Teacher& t)" << endl;
////
////			if (this != &t)
////			{
////				_name = t._name;
////				_tno = t._tno;
////			}
////			return *this;
////		}
////		~Teacher()
////		{
////			cout << "~Teacher()" << endl;
////		}
////		void Display()
////		{
////			cout << "Name:" << _name << endl;
////			cout << "Sno:" << _tno << endl;
////		}*/
////protected:
////	string _name;
////	int _tno;
////};
////class Assistant:public Student,public Teacher
////{
////public:
////
////protected:
////	string Course;
////};
////
////void Test()
////{
////	Assistant a;
////	a.Student::_name = "abc";
////	a.Teacher::_name = "xyz";
////
////}
//
//
//
////友元与继承
////友元关系不能继承，也就是说基类友元不能访问子类私有和保护成员。
////#include<iostream>
////using namespace std;
////#include<string>
////class Person
////{
////	friend void Display(Person& p, Student& s);
////public:
////	string _name; // 姓名
////};
////class Student : public Person
////{
////protected :
////	int _stuNum; // 学号
////};
////void Display(Person& p, Student& s)
////{
////	/*cout << p._name << endl;
////	cout << s._name << endl;
////	cout << s._stuNum << endl;*/
////	cout << p._name << endl;
////} 
////void TestPerson1()
////{
////	Person p;
////	Student s;
////	Display(p, s);
////}
////
////int main()
////{
////	TestPerson1();
////	return 0;
////}
//////继承与静态成员
//////基类定义了static成员，则整个继承体系里面只有一个这样的成员。无论派生出多少个子类，都只有一个static成员实例。
//
//#include<iostream>
//using namespace std;
//#include<string>
////class Person
////{
////	public :
////	Person()
////	{
////		++_count;
////	}
////protected:
////	string _name; // 姓名
////public:
////	static int _count; // 统计人的个数。
////};
////int Person::_count = 0;
////class Student : public Person
////{
////	protected :
////	int _stuNum; // 学号
////};
////class Graduate : public Student
////{
////	protected :
////	string _seminarCourse; // 研究科目
////};
////void TestPerson1()
////{
////	Student s1;
////	Student s2;
////	Student s3;
////	Graduate s4;
////	cout << " 人数 :" << Person::_count << endl;
////	Student::_count = 0;
////	cout << " 人数 :" << Person::_count << endl;
////}
////int main()
////{
////	TestPerson1();
////	return 0;
////}
//
//////虚表
////class Base
////{
////	public :
////	virtual void func1()
////	{}
////	virtual void func2()
////	{}
////private:
////	int a;
////};
////void Test1()
////{
////	Base b1;
////	b1.func1();
////	b1.func2();
////}
////int main()
////{
////	Test1();
////	return 0;
////}
//
//
////虚表、虚继承
////
////单继承
//class Base
//{
//	public :
//		virtual void func1()
//		{
//			cout << "Base::func1()" << endl;
//		}
//		virtual void func2()
//		{
//			cout << "Base::func2()" << endl;
//		}
//	/*private:*/
//		int a;
//};
//
//class Derive:public Base
//{
//public:
//	virtual void func1()
//	{
//		cout << "Base::func1()" << endl;
//	}
//	virtual void func3()
//	{
//		cout << "Derive::func3()" << endl;
//	}
//	virtual void func4()
//	{
//		cout << "Derive::func4()" << endl;
//	}
//private:
//	int b;
//};
//

//void Test2()
//{
//	Base b;
//	cout << sizeof(b) << endl;//8,当不加virtual时，结果为4
////为什么b的大小为8？--》与虚表有关：因为它除了有b变量，还有一个__vfptr虚表指针，指向虚表，所以大小为4+4=8
//	Derive d;
//	cout << sizeof(d) << endl;//12
//
//}
//
//int main()
//{
//	Test2();
//	return 0;
//
//}
//
//
////由于在监视窗口上的虚表指针的指向并不能看到派生类的func3、func4函数，但这两个函数确实就放在func2函数的后面，
////这是监视窗口的bug，所以我们编写方法来打印虚函数表，证实func3、func4函数就放在func2函数的后面

//typedef void(*FUNC) ();   //函数指针
//void PrintVTable(int* VTable)
//{
//	cout << "虚表指针VTable：" << VTable << endl;
//
//	for (int i = 0; VTable[i]!=0; ++i)       //windows下，虚表的结尾都是0，所以用VTable[i]!=0来判断该虚表是否到了结尾
//	{
//		printf("第%d个虚函数的地址为0x%d\n", i, VTable[i]);
//		FUNC f = (FUNC)VTable[i];            //VTable[i]的类型是int型，需要强转成函数指针类型（FUNC）
//		f();                                 //调用f,才能得知到底是虚表中的哪一个函数
//	}
//	cout << endl;
//}
//void Test1()
//{
//	Base b1;
//	Derive d1;
//	int* VTable1 = (int*)(*(int*)&b1);
//	//1、VTable1要取的是虚表的地址，（--&b1--），
//	//2、然后将其强转成int*类型（--即(int*)&b1--）就可以看到前四个字节，
//  //3、再对它进行简引用（--即(*(int*)&b1)--）,出来的结果是一个int型，
//	//4、int不能赋值给int*类型指针，所以要再强转成int*类型赋值给VTable,（--即(int*)(*(int*)&b1)--）
//	PrintVTable(VTable1);
//
//	int* VTable2 = (int*)(*(int*)&d1);
//	PrintVTable(VTable2);
//}
//
//int main()
//{
//	Test1();
//	return 0;
//
//}


//多继承---》
//1、子类的大小，继承几个各自独立的类，就有几个虚表指针。大小应为（几个类所有的成员变量*类型）+（继承类的个数*4 ->//虚表指针总大小）
//2、子类的虚表有多个，那么当子类重写父类函数时，若几个父类都有该名称函数，则都被重写
//3、当有多个父类函数时，那么子类独有的函数应该在那个虚表的后面还是在每个虚表后都有？-》只跟在第一个继承关系之后
class Base1
{
	public :
		virtual void func1()
		{
			cout << "Base1::func1()" << endl;
		}
		virtual void func2()
		{
			cout << "Base1::func2()" << endl;
		}
	/*private:*/
		int a;
};

class Base2
{
public:
	virtual void func1()
	{
		cout << "Base2::func1()" << endl;
	}
	virtual void func2()
	{
		cout << "Base2::func2()" << endl;
	}
	/*private:*/
	int b;
};



class Derive:public Base1 ,public Base2
{
public:
	virtual void func1()
	{
		cout << "Derive::func1()" << endl;//子类中的func1将Base1,Base2中的func1全部重写
	}
	virtual void func3()
	{
		cout << "Derive::func3()" << endl;
	}
	virtual void func4()
	{
		cout << "Derive::func4()" << endl;
	}
private:
	int d;
};

//1、子类的大小，继承几个各自独立的类，就有几个虚表指针。大小应为（几个类所有的成员变量*类型）+（继承类的个数*4 ->//虚表指针总大小）
//2、子类的虚表有多个，那么当子类重写父类函数时，若几个父类都有该名称函数，则都被重写
void Test1()
{
	Derive d;
	cout << sizeof(d) << endl;
	//20,为什么是20呢？-》Base::func1和Base2::func1两个函数各自独立，不能共用，
	//所以d分别继承Base1和Base2里的__vfptr,因此他有两个虚表指针，所以大小为3个int大小12，两个指针8,12+8=20；
}



typedef void(*FUNC) ();
void PrintVTable(int* VTable)
{
	printf("虚函数地址：0x%x\n", VTable);                                                                                                                                                   0;
	for (int i = 0; VTable[i] != 0; ++i)
	{
		printf("第%d个虚函数的地址为：0x%x-》", i, VTable[i]);
		FUNC f = (FUNC)VTable[i];
		f();
	}
	cout << endl;
}

//3、当有多个父类函数时，那么子类独有的函数应该在那个虚表的后面还是在每个虚表后都有？
//->子类独有的函数只跟一个父类的虚表后，这个父类就是写继承关系是的第一个
//eg:class Derive:public Base1 ,public Base2，子类func3在Base1虚表后面
//class Derive:public Base2 ,public Base1，子类func3在Base2虚表后面  PS:此时d的虚表结构就发生了改变，先Base2，Base1,相应的PrintVTable也要相应改变
void Test2()
{
	Derive d;
	int* vTable1 = (int*)(*(int*)&d);
	PrintVTable(vTable1);
	int* vTable2 = (int*)(*((int*)&d + sizeof(Base1)));
	//1、&d 取地址
	//2、(int*)&d  强转
	//3、((int*)&d+2) --->从d虚表首地址开始向下Base1个单位(就像数组a+2是向后移两个单位一样),这样就取到了下一个继承父类的虚表首地址
	//4、(*((int*)&d+2))  简引用（此时类型为int）
	//5、(int*)(*((int*)&d+sizeof(Base1))) 强转成int*
	PrintVTable(vTable2);
}
int main()
{
	Test2();
	//Test1();
	return 0;
}
//
//typedef void(*FUNC) ();
//void PrintVTable(int* VTable)
//{
//	printf("虚函数地址：0x%x\n", VTable)                                                                                                                                                   0                   ;
//	for (int i = 0; VTable[i] != 0; ++i)
//	{
//		printf("第%d个虚函数的地址为：0x%x-》", i, VTable[i]);
//		FUNC f = (FUNC)VTable[i];
//		f();
//	}
//	cout << endl;
//}
//
//void Test3()
//{
//	Base1 b1;
//	Base2 b2;
//	Derive d;
//	int* VTable = ((int*)(*(int*)&b1));
//	PrintVTable(VTable);
//	// Base2虚函数表在对象Base1后面
//	VTable = (int *)(*((int*)&b1 + sizeof (Base1) / 4));
//	PrintVTable(VTable);
//}
//int main()
//{
//	Test3();
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
////多态
////多态就是多种形态，C++的多态分为静态多态和动态多态，又称静态绑定、动态绑定
////1. 静态多态就是重载，因为是在编译期决议确定，所以称为静态多态（静态绑定）。
////2. 动态多态就是通过继承重写基类的虚函数实现的多态，因为是在运行时决议确定，所以称为动态多态（动态绑定）。
//
////静态多态
//class Base
//{
//	public :
//
//		virtual void func1()//动态多态的实现是通过继承重写基类的虚函数
//	{
//		cout << "Base::func1" << endl;
//	}
//	virtual void func2()
//	{
//		cout << "Base::func2" << endl;
//	}
//
//	//静态多态的实现是重载
//	void display()
//	{
//		cout << "display()" << endl;
//	}
//	//静态多态的实现是重载
//	void display(int i)
//	{
//		cout << "display(int i)->" << i << endl;
//	}
//private:
//	int a;
//};
//
//class Derive :public Base
//{
//	public :
//
//	//动态多态的实现是通过继承重写基类的虚函数
//	virtual void func1()
//	{
//		cout << "Derive::func1" << endl;
//	}
//private:
//	int b;
//};
//void func(Base& b)
//{
//	b.func1();
//	//b.func2();
//	b.display();
//	b.display(10);
//} 
//void Test1()
//{
//	Base b1;
//	Derive d1;
//	func(b1);
//	func(d1);
//}
//
//int main()
//{
//	Test1();
//	return 0;
//}