

#include <iostream>
#include <vector>


class terrain
{
private:
    int m_;
    int n_;

    std::vector<std::vector<char> > M_;

public:

    terrain();
    ~terrain();

    void create(int m, int n);
    void w();
    
    char get_pos(int i, int j);
    void set_pos(int i, int j, char a);

    std::ostream& write_char(std::ostream& os, char a, int i, int j);

    std::ostream& write_all(std::ostream& os);

};