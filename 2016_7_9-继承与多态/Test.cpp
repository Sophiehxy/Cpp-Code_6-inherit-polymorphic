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
////	//���������Ը�ֵ���������
////	//p1 = s1;
////	//������󲻿��Ը�ֵ���������
////	//s1 = p1;
////	//�����ָ�롢���ÿ���ָ���������
////	//Person* p=&s1;
////	//�����ָ�롢���ò�����ָ�������
////	//Student& s = p;
////	//�����ָ�롢���ò�����ָ������󣨵�����ͨ��ǿ������ת����ɣ�
////	Student& s = (Student&)p1;
////	Student* ss = (Student*)& p1;
////	Student& sss = (Student&) p1;
////	//���ԣ��������--������
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
//////���̳�&��̳�
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
////��Ԫ��̳�
////��Ԫ��ϵ���ܼ̳У�Ҳ����˵������Ԫ���ܷ�������˽�кͱ�����Ա��
////#include<iostream>
////using namespace std;
////#include<string>
////class Person
////{
////	friend void Display(Person& p, Student& s);
////public:
////	string _name; // ����
////};
////class Student : public Person
////{
////protected :
////	int _stuNum; // ѧ��
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
//////�̳��뾲̬��Ա
//////���ඨ����static��Ա���������̳���ϵ����ֻ��һ�������ĳ�Ա���������������ٸ����࣬��ֻ��һ��static��Աʵ����
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
////	string _name; // ����
////public:
////	static int _count; // ͳ���˵ĸ�����
////};
////int Person::_count = 0;
////class Student : public Person
////{
////	protected :
////	int _stuNum; // ѧ��
////};
////class Graduate : public Student
////{
////	protected :
////	string _seminarCourse; // �о���Ŀ
////};
////void TestPerson1()
////{
////	Student s1;
////	Student s2;
////	Student s3;
////	Graduate s4;
////	cout << " ���� :" << Person::_count << endl;
////	Student::_count = 0;
////	cout << " ���� :" << Person::_count << endl;
////}
////int main()
////{
////	TestPerson1();
////	return 0;
////}
//
//////���
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
////�����̳�
////
////���̳�
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
//	cout << sizeof(b) << endl;//8,������virtualʱ�����Ϊ4
////Ϊʲôb�Ĵ�СΪ8��--��������йأ���Ϊ��������b����������һ��__vfptr���ָ�룬ָ��������Դ�СΪ4+4=8
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
////�����ڼ��Ӵ����ϵ����ָ���ָ�򲢲��ܿ����������func3��func4������������������ȷʵ�ͷ���func2�����ĺ��棬
////���Ǽ��Ӵ��ڵ�bug���������Ǳ�д��������ӡ�麯����֤ʵfunc3��func4�����ͷ���func2�����ĺ���

//typedef void(*FUNC) ();   //����ָ��
//void PrintVTable(int* VTable)
//{
//	cout << "���ָ��VTable��" << VTable << endl;
//
//	for (int i = 0; VTable[i]!=0; ++i)       //windows�£����Ľ�β����0��������VTable[i]!=0���жϸ�����Ƿ��˽�β
//	{
//		printf("��%d���麯���ĵ�ַΪ0x%d\n", i, VTable[i]);
//		FUNC f = (FUNC)VTable[i];            //VTable[i]��������int�ͣ���Ҫǿת�ɺ���ָ�����ͣ�FUNC��
//		f();                                 //����f,���ܵ�֪����������е���һ������
//	}
//	cout << endl;
//}
//void Test1()
//{
//	Base b1;
//	Derive d1;
//	int* VTable1 = (int*)(*(int*)&b1);
//	//1��VTable1Ҫȡ�������ĵ�ַ����--&b1--����
//	//2��Ȼ����ǿת��int*���ͣ�--��(int*)&b1--���Ϳ��Կ���ǰ�ĸ��ֽڣ�
//  //3���ٶ������м����ã�--��(*(int*)&b1)--��,�����Ľ����һ��int�ͣ�
//	//4��int���ܸ�ֵ��int*����ָ�룬����Ҫ��ǿת��int*���͸�ֵ��VTable,��--��(int*)(*(int*)&b1)--��
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


//��̳�---��
//1������Ĵ�С���̳м������Զ������࣬���м������ָ�롣��СӦΪ�����������еĳ�Ա����*���ͣ�+���̳���ĸ���*4 ->//���ָ���ܴ�С��
//2�����������ж������ô��������д���ຯ��ʱ�����������඼�и����ƺ������򶼱���д
//3�����ж�����ຯ��ʱ����ô������еĺ���Ӧ�����Ǹ����ĺ��滹����ÿ�������У�-��ֻ���ڵ�һ���̳й�ϵ֮��
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
		cout << "Derive::func1()" << endl;//�����е�func1��Base1,Base2�е�func1ȫ����д
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

//1������Ĵ�С���̳м������Զ������࣬���м������ָ�롣��СӦΪ�����������еĳ�Ա����*���ͣ�+���̳���ĸ���*4 ->//���ָ���ܴ�С��
//2�����������ж������ô��������д���ຯ��ʱ�����������඼�и����ƺ������򶼱���д
void Test1()
{
	Derive d;
	cout << sizeof(d) << endl;
	//20,Ϊʲô��20�أ�-��Base::func1��Base2::func1�����������Զ��������ܹ��ã�
	//����d�ֱ�̳�Base1��Base2���__vfptr,��������������ָ�룬���Դ�СΪ3��int��С12������ָ��8,12+8=20��
}



typedef void(*FUNC) ();
void PrintVTable(int* VTable)
{
	printf("�麯����ַ��0x%x\n", VTable);                                                                                                                                                   0;
	for (int i = 0; VTable[i] != 0; ++i)
	{
		printf("��%d���麯���ĵ�ַΪ��0x%x-��", i, VTable[i]);
		FUNC f = (FUNC)VTable[i];
		f();
	}
	cout << endl;
}

//3�����ж�����ຯ��ʱ����ô������еĺ���Ӧ�����Ǹ����ĺ��滹����ÿ�������У�
//->������еĺ���ֻ��һ���������������������д�̳й�ϵ�ǵĵ�һ��
//eg:class Derive:public Base1 ,public Base2������func3��Base1������
//class Derive:public Base2 ,public Base1������func3��Base2������  PS:��ʱd�����ṹ�ͷ����˸ı䣬��Base2��Base1,��Ӧ��PrintVTableҲҪ��Ӧ�ı�
void Test2()
{
	Derive d;
	int* vTable1 = (int*)(*(int*)&d);
	PrintVTable(vTable1);
	int* vTable2 = (int*)(*((int*)&d + sizeof(Base1)));
	//1��&d ȡ��ַ
	//2��(int*)&d  ǿת
	//3��((int*)&d+2) --->��d����׵�ַ��ʼ����Base1����λ(��������a+2�������������λһ��),������ȡ������һ���̳и��������׵�ַ
	//4��(*((int*)&d+2))  �����ã���ʱ����Ϊint��
	//5��(int*)(*((int*)&d+sizeof(Base1))) ǿת��int*
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
//	printf("�麯����ַ��0x%x\n", VTable)                                                                                                                                                   0                   ;
//	for (int i = 0; VTable[i] != 0; ++i)
//	{
//		printf("��%d���麯���ĵ�ַΪ��0x%x-��", i, VTable[i]);
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
//	// Base2�麯�����ڶ���Base1����
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
////��̬
////��̬���Ƕ�����̬��C++�Ķ�̬��Ϊ��̬��̬�Ͷ�̬��̬���ֳƾ�̬�󶨡���̬��
////1. ��̬��̬�������أ���Ϊ���ڱ����ھ���ȷ�������Գ�Ϊ��̬��̬����̬�󶨣���
////2. ��̬��̬����ͨ���̳���д������麯��ʵ�ֵĶ�̬����Ϊ��������ʱ����ȷ�������Գ�Ϊ��̬��̬����̬�󶨣���
//
////��̬��̬
//class Base
//{
//	public :
//
//		virtual void func1()//��̬��̬��ʵ����ͨ���̳���д������麯��
//	{
//		cout << "Base::func1" << endl;
//	}
//	virtual void func2()
//	{
//		cout << "Base::func2" << endl;
//	}
//
//	//��̬��̬��ʵ��������
//	void display()
//	{
//		cout << "display()" << endl;
//	}
//	//��̬��̬��ʵ��������
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
//	//��̬��̬��ʵ����ͨ���̳���д������麯��
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