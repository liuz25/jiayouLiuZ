#include<iostream>
#include<string>
#include<windows.h>

using namespace std;
int main(void){
	string name,pwd;
	int count=0;
	int n=0;
	for(int time=0;time<24;time++){
		for(int j=1;j<60;j++){
			for(int k=1;k<60;k++){
			count++;
			cout<<time<<"时"<<j<<"分"<<k<<"秒"<<count<<"次想你！"<<endl;
			Sleep(100);
			}
		}
	
	}
	do{
	cout<<"嘀咕嘀咕！"<<endl;
	goto happy;
	cout<<"不服就干！"<<endl;
	count++;
	}while(count<3);
	do{
		count+=n;
		n++;
	}while(n<=100);
	cout<<"ss"<<count<<endl;
	for(int n=0;n<100;n++){
	count++;
	count+=n;
	}
	cout<<"数字"<<count<<endl;
	while(1){
	//system("cls");//清楚缓存
	
	cout<<"账号： ";
	cin>>name;
	cout<<"密码： ";
	cin>>pwd;
	if(pwd=="123456"&&name=="liuz"){
	cout<<"1.好好学习吧！"<<endl;
	break;
	}else{  
	cout<<"你输入的密码错误！！"<<endl;
	system("pause");
	}
	
	
	}





	system("pause");
	return 0;
happy:
	cout<<"我们一起开心开心！！"<<endl;
	system("pause");

}
