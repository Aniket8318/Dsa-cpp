class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        int largest = INT_MIN;
        int smallest = INT_MAX;
        int total = 0;

        for (int i = 0; i < n; i++) {
            total += salary[i];
            if (salary[i] > largest)
                largest = salary[i];
            if (salary[i] < smallest)
                smallest = salary[i];
        }

        double ans = (double)(total - largest - smallest) / (n - 2);
        return ans;
    }
};
