apSack(int w, int wt[], int val[], int n){
        vector<vector<int> > t(n+1, vector<int>(w+1, -1));
        return fun(w, wt, val, n, t);
    }
    int fun(int w, int wt[], int val[], int n, vector<vector<int>>& t) 
    { 
      //Base Case
      if(n<=0 || w<=0) return 0;
       
      //Check if result exists already
      if(t[n][w] != -1) return t[n][w];
       
        //If result doesn't exist
        //Choice Diagram Code 
        //1. Choice to include item or not
        if(wt[n-1] <= w){
            t[n][w] = max(val[n-1] + fun(w-wt[n-1], wt, val, n-1, t), 0+fun(w,wt,val,n-1, t));
            return t[n][w];
        }
        
        //2. No choice
        else if(wt[n-1] > w){
            t[n][w] = 0 + fun(w,wt,val,n-1, t);
            return t[n][w];
        }
        
    }
