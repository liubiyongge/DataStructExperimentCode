/*************************************************************************
    > File Name: main.cpp
    > Author: liubiyongge
    > Mail: liubiyongge@163.com
    > Created Time: 2018年11月02日 星期五 11时52分30秒
 ************************************************************************/
#include "../header.h"

int main()
{

	Sqlist<int> S;
	int choose; //存放操作代码
	char continueYesNo = 'N';//判断是否继续
	while(1)
	{

		cout << "*************test sequence table operate*********" << endl;
		cout<< "********** 测试顺序表的操作 **********"<<endl<< endl;
        cout<< "\t 1.在第i个元素之前插入一个元素"<< endl;
        cout<< "\t 2.判断顺序表是否为空"<< endl;
        cout<< "\t 3.求顺序表中元素的个数"<< endl;
        cout<< "\t 4.取第i个元素"<< endl;
        cout<< "\t 5.查找第1个与某元素满足相等关系元素的序号"<< endl;
        cout<< "\t 6.返回某元素的前驱"<< endl;
        cout<< "\t 7.返回某元素的后继"<< endl;
        cout<< "\t 8.删除第i个元素"<< endl;
        cout<< "\t 9.把一个顺序表赋值给另一个顺序表"<< endl;
        cout<< "\t10.把顺序表置空"<< endl;
        cout<< "\t11.随机生成顺序表（元素值为0到99之间的整数）"<< endl;
        cout<< "\t12.用已有的顺序表初始化另一个顺序表"<< endl;
        cout<< "\t13.输入顺序表"<< endl;
        cout<< "\t14.两个顺序表的并交差运算"<< endl;
        cout<< "\t15.学生信息管理"<< endl;
        cout<< "  其他.结束"<< endl;

		cout<<"Please enter your operate code(1-15):";
		cin >> choose;
		swicth(choose)
		{case 1: ex3_1_1(rec, continueYesNo);
			break;
			case 2: ex3_1_2(rec, continueYesNo);
			break;
			case 3: ex2_1_3(rec, continueYesNo);
			break;
			default: cout<<"\n you choice have ended"<<endl<<endl;
				return 0;

		} 

	}


}