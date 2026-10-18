#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifdef _WIN32
		system("chcp 65001");
	#endif
    news:
	vector<int> counts = {2,4,8,16};
    int tell=counts[0]+counts[1]+counts[2]+counts[3];
    // 1. 按数量填充
    vector<int> nums;
    nums.reserve(tell);
    for (int v = 1; v <= 4; ++v) {
        nums.insert(nums.end(), counts[v - 1], v);
    }
    
    // 2. 洗牌（线程局部随机引擎，比每次构造更快）
    thread_local mt19937 rng{random_device{}()};
    shuffle(nums.begin(), nums.end(), rng);
    cout<<"抽奖开始！"<<endl;
    cout<<"注：0:重新清洗，-1：关闭"<<endl;
    int c;
    do{
        two:
        cout<<"输入编号：";
        cin>>c;
        switch(c){
            case -1:
                return 0;
                break;
            case 0:
                goto news;
                break;
            case 114514:
                for(int num:nums){
                    cout<<num<<" ";
                }
                cout<<endl;
                break;
                    
            default:
                if(c<=tell&&c>0){
                    switch (nums[c-1])
                    {
                    case 1:
                        cout<<"一等奖。"<<endl;
                        break;
                    case 2:
                        cout<<"二等奖。"<<endl;
                        break;
                    case 3:
                        cout<<"三等奖。"<<endl;
                        break;
                    case 4:
                        cout<<"没中奖"<<endl;
                        break;
                    default:
                        cout<<"不存在这个编号，重新输入！"<<endl;
                        goto two;
                    }
                }
                
        }
    }while(true);
	return 0;
} 
