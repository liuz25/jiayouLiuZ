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
			cout<<time<<"ʱ"<<j<<"��"<<k<<"��"<<count<<"�����㣡"<<endl;
			Sleep(100);
			}
		}
	
	}
	do{
	cout<<"�ֹ��ֹ���"<<endl;
	goto happy;
	cout<<"�����͸ɣ�"<<endl;
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
	cout<<"����"<<count<<endl;
	while(1){
	//system("cls");//�������
	
	cout<<"�˺ţ� ";
	cin>>name;
	cout<<"���룺 ";
	cin>>pwd;
	if(pwd=="123456"&&name=="liuz"){
	cout<<"1.�ú�ѧϰ�ɣ�"<<endl;
	break;
	}else{  
	cout<<"�������������󣡣�"<<endl;
	system("pause");
	}
	
	
	}





	system("pause");
	return 0;
happy:
	cout<<"����һ���Ŀ��ģ���"<<endl;
	system("pause");

}
