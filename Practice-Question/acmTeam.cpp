#include <bits/stdc++.h>
using namespace std;

vector<int> acmTeam(vector<string> topic) {
    int n = topic.size();
    int m = topic[0].length();

    int max_topics = 0, count = 0;

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            int topics = 0;

            for(int k=0; k<m; k++) {
                if(topic[i][k] == '1' || topic[j][k] == '1') {
                    topics++;
                }
            }

            if(topics > max_topics) {
                max_topics = topics;
                count = 1;
            }
            else if(topics == max_topics) {
                count++;
            }
        }
    }

    return {max_topics, count};
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> topic(n);
    for(int i=0; i<n; i++) {
        cin >> topic[i];
    }

    vector<int> result = acmTeam(topic);
    cout << result[0] << "\n" << result[1] << endl;

    return 0;
}
