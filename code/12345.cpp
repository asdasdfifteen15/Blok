#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
void sc(int textColor, int bgColor = 0) {//改变输出颜色 
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, textColor | bgColor);
}
void cl(string a){//做出逐字输出 
	for(int i=0;a[i]!='\0';i++){
		cout<<a[i];
		Sleep(5);
	}
	cout<<endl;
	Sleep(500);
} 
void w(string e,string a){//对应的笔画和字
	system("cls"); 
	string cinc=e,cins=""; //游戏初始化 
	sc(15);
	cout<<a<<"  ";
	sc(11);
	for(int i=0;i<cinc.size();i++){
		cout<<cinc[i]<<"    ";
	} 
	cout<<"\r";
	
	
	while(1){//游戏主循环 
		int ch;
		ch = _getch(); 
		sc(15);
		cins=cins+char(ch);//侦测输入 
		cout<<a<<"  ";
		for(int i=0;i<cins.size();i++){
			cout<<cins[i]<<"    ";
			if(cins[i]!=cinc[i]){//侦测失败 
				cins="";
				sc(15);
				cout<<'\r'<<a<<"  ";
				sc(11);
				for(int i=0;i<e.size();i++){
					cout<<cinc[i]<<"    ";
				} 
			}
		}
		cout<<"\r"; 
		if(cins==cinc){
			break; 	
		}
	}
	system("cls");
} 
 
void p(string e,string a){//对应的笔画和字
	string cinc=e,cins=""; //游戏初始化 
	sc(12);
	cout<<a; 
	
	while(1){//游戏主循环 
		int ch,i=-1;
		ch = _getch(); 
		cins=cins+char(ch);//侦测输入 
		for(int i=0;i<cins.size();i++){
			if(cins[i]!=cinc[i]){//侦测失败 
				cins="";
				sc(11);
				cout<<"\b\b"<<a;
				Sleep(1000);
				sc(12);
				cout<<"\b\b"<<a;	
			}
		}
		if(cins==cinc){
			sc(15);
			cout<<"\b\b"<<a;
			break; 	
		}
	}
} 
 
int main(){
	system("chcp 65001");
	cl("你好");
	cl("欢迎来到这款游戏！");
	cl("事实上，这只是一个demo，用于奠定游戏的玩法");
	cl("如果你想看，可以看一看这个游戏的玩法");
	cl("这是一个打字游戏，但与之不同的是，"); 
	cl("它是通过手机的笔画输入法来进行打字的");
	cl("我也不知道有什么意义，也许只是为了纠正一些笔画书写误区？？");
	cl("那么，开始吧...");
	system("cls");
	
	cl("首先，我们先了解输入机制");
	cl("键盘上的1对应横画，试一试吧！");
	w("1","一");
	w("11","二");
	
	cl("不错，接下来是第二个笔画：竖画，对应2，试一试吧！");
	w("12","十");
	w("112","干");
	w("1121","王");
	
	cl("第三个笔画：撇，对应3，");
	w("322","川");
	
	cl("第四个：点，对应4");
	w("4144","六");
	
	cl("最后的：折，对应5");
	w("251","口");
	
	cl("恭喜！你完成了新手教程的40%！");
	cl("接下来我要讲的，是较难的一部分：包含");
	cl("标准的手机笔画输入法中，一个按键常常包含多个笔画");
	cout<<"1: 包括横，提"<<endl;
	cout<<"2: 包括竖，竖弯钩"<<endl;
	cout<<"3: 包括所有向左下方去的笔画，如丿"<<endl;
	cout<<"4: 包括点和捺"<<endl;
	cout<<"5: 包括所有有折的笔画"<<endl; 
	Sleep(3000);
	
	cl("为了保证你充分理解，我将展开练习");
	w("3112","手");
	w("35112","用");
	w("31213545","选"); 
	w("212514444","点"); 
	
	cl("看起来你已经充分理解了，那么，接下来就是无提示输入了！");
	cl("当你没有输入完整时，文字会保持红色"); 
	cl("当你输入出错时，文字会闪青色，随后重置，试试看吧！");
	p("3235234","你"); 
	p("531521","好");
	cout<<",";
	p("1312515344544","感");
	p("453251113124","谢"); 
	p("441415331521","游");
	p("11211135","玩");
	p("12341","本");
	p("441415331521","游");
	p("541534","戏");
	cout<<"Demo!";
	p("13325112344544","愿");
	p("3121534","我");
	p("32425","们");
	p("132121","在");
	p("12121","正");
	p("112154","式");
	p("53544","发");
	p("32411121251","售");
	p("2511124","时");
	p("123425111","相");
	p("25112521445","遇");
	cout<<"!"<<endl;
	cl("游戏到此结束！感谢游玩");
	cl("如果在游玩时出现问题或改进的方法，请尽快提出，在BiliBili私信介绍！");
	system("cls"); 
	return 0;
}
