#include <set>

std::set<int> operator+(const std::set<int>& s1,const std::set<int>& s2)
{
    std::set<int> s3;
    for (auto s : s1)
    {
        s3.insert(s);
    }
    for (auto s : s2)
    {
        s3.insert(s);
    }
    return s3;
}

std::set<int> operator-(const std::set<int>& s1,const std::set<int>& s2)
{
    std::set<int> s3;
    for (auto s : s1)
    {
        s3.insert(s);
    }
    for (auto s : s2)
    {
        s3.erase(s);
    }
    return s3;
}

std::set<int> operator^(const std::set<int>& s1,const std::set<int>& s2)
{
    std::set<int> s3;
    for (auto s : s1)
    {
        s3.insert(s);
    }
    for (auto s : s2)
    {
    	if (s3.count(s) == 0)
            s3.insert(s);
        else
            s3.erase(s);
    }
    return s3;
}

std::set<int> operator*(const std::set<int>& s1,const std::set<int>& s2)
{
    std::set<int> s3;
    for (auto s : s1)
    {
        for (auto sd : s2)
        {
    	    s3.insert(s+sd);
        }
    }
    
    return s3;
}

std::set<int> operator^(const std::set<int>& s1,const int n)
{
    std::set<int> s3 = s1;
    for(int i = 1; i < n; i++)
        s3 = s3 * s1;
    
    return s3;
}

std::set<std::string> operator*(const std::set<std::string>& s1,const std::set<std::string>& s2)
{
    std::set<std::string> s3;
    for (auto s : s1)
    {
        for (auto sd : s2)
        {
    	    s3.insert(s+sd);
        }
    }
    
    return s3;
}

std::set<std::string> operator^(const std::set<std::string>& s1,const int n)
{
    if(n == 0)
        return std::set<std::string>{""};
    std::set<std::string> s3 = s1;
    for(int i = 1; i < n; i++)
        s3 = s3 * s1;
    
    return s3;
}