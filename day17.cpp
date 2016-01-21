//Write your code here
class Calculator {
    public:
        int power(int n, int p) {
            int result = 1;
            if(n < 0 || p < 0) {
                throw runtime_error("n and p should be non-negative");
            }
            else {                
                for(int i = p; i > 0; i--) {
                    result *= n;
                }
            }
            return result;
        }
};

