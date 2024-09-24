#include<iostream>
#include<vector>
#include<string>
using namespace std;
string LCP(vector<string>vec)
{
    string prifix=vec[0];
    for (int i = 1; i < vec.size(); ++i)
    {
        int j=0;
        while(j<prifix.length() && j<vec[i].length() && prifix[j]==vec[i][j])
        {
            j++;
        }
        prifix=prifix.substr(0,j);
    }

    if (prifix.empty())
    {
        return "";
    }
    
    else
    {
        return prifix;
    }
}
int main()
{
    string str1,str2,lpcRes;

    vector<string> vec;

    cout<<"enter first string: ";
    getline(cin,str1);

    cout<<"enter second string: ";
    getline(cin,str2);

    vec.push_back(str1);
    vec.push_back(str2);

    lpcRes=LCP(vec);

    if(lpcRes=="")
    {
        cout<<"there is no similar prifics";
    }

    else
    {
        cout<<lpcRes<<"\n";
    }

return 0;
}