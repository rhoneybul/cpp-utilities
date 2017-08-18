#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

void hello() {
	cout << "Successfully loaded RTH Utilities" << endl;
}

template<typename T>
void printVector(vector<T> vec) {
	cout << "[";
	for(auto val : vec) {
		cout << val << ", ";
	}
	cout << "]" << endl;
}

bool inVector(string find, vector<string> vec) {
    bool is_in = false;
    int jj = 0;
    for(auto word : vec) {
        jj++;
        if(word == find) {
            return true;
        }
    }
    return false;
}

double cosineSimilarity(vector<double> a, vector<double> b) {

	if(a.size() != b.size()) {
		cout << "Size of vector a: " << a.size() << endl;
		cout << "Size of vector b: " << b.size() << endl;
		throw invalid_argument("vectors are not the same size");
	} else {
		double dotProduct = 0.0;
		for(int i=0; i<b.size(); i++) {
			dotProduct += a[i] * b[i];
		}

		double sumPowA = 0.0;
		double sumPowB = 0.0;
		for(auto val : a) {
			sumPowA += (val * val);
		}
		for(auto val : b) {
			sumPowB += (val * val);
		}
		return (dotProduct) / (sqrt(sumPowA) * sqrt(sumPowB));
	}

}

vector<string> stringSplit(string text, string delim) {
	vector<string> splitted;
	if(text.find(delim) == std::string::npos) {
		splitted.push_back(text);
	} else {
		while(text.find(delim) != std::string::npos) {
			splitted.push_back(text.substr(0, text.find(delim)));
			text = text.replace(0, text.find(delim) + delim.length(), "");
		}
		splitted.push_back(text);
	}
	return splitted;
}

vector<double> stringSplitToDouble(string text, string delim) {
	vector<double> splitted;
	if(text.find(delim) == std::string::npos) {
		splitted.push_back(stod(text));
	} else {
		while(text.find(delim) != std::string::npos) {
			try 
			{
				splitted.push_back(stod(text.substr(0, text.find(delim))));
			}
			catch(int e) 
			{
				cout << text.substr(0, text.find(delim)) << endl;
				exit(11);
			}
			text = text.replace(0, text.find(delim) + delim.length(), "");
		}
		splitted.push_back(stod(text));
	}
	return splitted;
}


