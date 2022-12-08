#include <bits/stdc++.h>
using namespace std;

class CP{
    vector<pair<int, int> > pairs = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}};

public:

    void shortestDistance(){
        double minDis = INT_MAX;
        int ii = 0, jj=0;

        for(int i=0; i < pairs.size(); i++){
            auto x = pairs[i];
            for(int j=i+1; j<pairs.size(); j++){
                auto y = pairs[j];
                double xp = pow(x.first - y.first, 2);
                double yp = pow(x.second - y.second, 2);
                double d = sqrt(xp + yp);

                if(d < minDis){
                    minDis = d;
                    ii = i;
                    jj = j;
                }

            }
        }

        cout << ii << " " << jj << endl;
        cout << minDis << endl;
    }
};

int main() {
   CP c;
   c.shortestDistance();
}
