// Add your code here
    Difference(vector<int> e) {
        elements = e;        
    }

    void computeDifference() {
        int N = elements.size();
        int dif, maxDif = 0;
        for(int i = 0; i < N - 1; i++) {
            for(int j = i; j < N; j++) {
                dif = elements[i] - elements[j];
                if(dif < 0) dif = dif * -1;
                if(dif > maxDif) maxDif = dif;
            }
        }
        maximumDifference = maxDif;
    }

