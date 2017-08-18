#ifndef rthutils_utils_h
#define rthutils_utils_h

using namespace std;

void hello();

template<typename T>

void printVector(vector<T> vec);

bool inVector(string find, vector<string> vec);

vector<string> stringSplit(string text, string delim);

vector<double> stringSplitToDouble(string text, string delim);

double cosineSimilarity(vector<double> a, vector<double> b);

#endif //rthutils_utils_h
