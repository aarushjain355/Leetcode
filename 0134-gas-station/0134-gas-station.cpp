class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {        
        int gas_index = 0;
        int current_index = 0;
        bool valid = true;
        int sum = 0;
        if (gas.size() == 1 && gas[0] == cost[0]) {
            return 0;
        }
        while (gas_index < gas.size()) {
            sum = 0;
            valid = true;
            if (gas[gas_index] > cost[gas_index]) {
                for (int i = gas_index; i < gas_index + cost.size(); ++i) {
                    current_index = i % cost.size();
                    sum += gas[current_index];
                    sum -= cost[current_index];
                    if (sum < 0) {
                        valid = false;
                        break;
                    }
                }
                if (valid) {
                    return gas_index;
                }
            } 
            gas_index += 1;
        }
        return -1;
    }
};