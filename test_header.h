

#include <iostream>
#include <vector>


class terrain
{
private:
    int m_;
    int n_;

    std::vector<std::vector<char> > M_;

public:

terrain(int m, int n);
~terrain();

std::ostream& write(std::ostream& os, M_, int i, int j);

};