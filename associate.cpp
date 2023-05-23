# include <stdio.h>
# include <iostream>
# include <string>
# include <map>

int main(void) {
    std::map<std::string, int> seqLen;

    seqLen["CGAGT"] = 5;
    seqLen["TT"] = 2;
    seqLen["CGATCGTGTC"] = 10;

    std::cout << seqLen["TT"] << std::endl;

    return 0;
}