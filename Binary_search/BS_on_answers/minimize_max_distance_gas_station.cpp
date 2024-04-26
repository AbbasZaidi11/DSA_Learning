    int numberOfGasStationsRequired( long double dist,vector<int>arr,int k){
        int numberInBetween=0;
        for(int i{1};i<arr.size();i++){
            numberInBetween+=floor((arr[i]-arr[i-1])/dist);
            // int numberInBetween=((arr[i]-arr[i-1])/dist);
            // if((arr[i]-arr[i-1])==(numberInBetween*dist)){ 
            // if there is a gap of one between 1 and 2 
            // and we are trying to input gas stations at a distance of 0.4 then we take 1/0.4 but if we are
            //trying to insert gas stations at a distance of 0.5 between 1 and 2 then we cannot take it 1/0.5 we 
            //need to subtract 1 
            }
        
        return numberInBetween<=k;
    }
    long double findSmallestMaxDist(vector<int> &stations, int k){
      // Code here
      int n=stations.size();
       long double low=0;
        long double high=stations[n-1]-stations[0];
      
       long double diff=1e-6;
       long double ans=-1;
      while(high-low>diff){
          long double mid=low+(high-low)/(2.0);
          if(numberOfGasStationsRequired(mid,stations,k)==true){
            ans=mid;
            high=mid;
          }
          else{
              low=mid;
          }
      }
      return ans+0.000001;
    }
