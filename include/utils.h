#ifndef rthutils_utils_h
#define rthutils_utils_h

#include <vector>

using namespace std;

bool inVector(string find, vector<string> vec);

vector<string> stringSplit(string text, string delim);

vector<double> stringSplitToDouble(string text, string delim);

double cosineSimilarity(vector<double> a, vector<double> b);

#endif //rthutils_utils_h
