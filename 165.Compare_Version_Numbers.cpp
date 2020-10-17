class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream v1(version1), v2(version2);
        string tv1, tv2;
        vector<int> sv1,sv2;
        while(getline(v1, tv1, '.')) {
            sv1.push_back(stoi(tv1));
        }
        while(getline(v2, tv2, '.')) {
            sv2.push_back(stoi(tv2));
        }
        int i =0;
        while(i<sv1.size() && i<sv2.size()){
            if(sv1[i] <sv2[i])
                return -1;
            else if(sv1[i]>sv2[i])
                return 1;
            i++;
        }
        while(i<sv2.size()){
            if(sv2[i]!=0)
                return -1;
            i++;
        }
        while(i<sv1.size()){
            if(sv1[i]!=0)
                return 1;
            i++;
        }
        return 0;
    }
};
