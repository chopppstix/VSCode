#include <fstream>
#include <string>
#include <sstream>
#include <vector>
struct Line 
    {
    std::string last_name;
    int id;
    int score;
    };

int main() {
    std::ifstream _("input_1");
    std::vector<Line> __;

    while (true)
    {
        if(_.eof()) break;  
        Line ___;
        _ >> ___.last_name >> ___.id >> ___.score;
__      .push_back(___);
    }
    _.close();
    std::ofstream output("output_1");
    Line ___ = __[0];
    __[0] = __[1];
    __[1] = ___;
    for(int i = 0; i < __.size(); i++)
            output << __[i].last_name << " " << __[i].id << " " << __[i].score << "\n";
    return 0;
}