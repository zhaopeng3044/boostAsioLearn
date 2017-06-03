/*************************************************************************
	> File Name: testBoost.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年06月03日 星期六 13时56分23秒
 ************************************************************************/

#include <iostream>
#include <boost/timer.hpp>

using namespace std;

int main()
{
    boost::timer t;
    cout<<"max timespan:"<<t.elapsed_max()/3600<<"h"<<endl;
    return 0;
}

