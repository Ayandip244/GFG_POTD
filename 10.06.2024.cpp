class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        // code here
        int k=0,cons;
	  char temp[n];
	  for(int i=0;i<n;i++)
	  {
	      for(int j=0;j<n;j++)
	      {
	          if(nuts[i]==bolts[j])
	              temp[k]=bolts[j];
	      }
	      k++;
	  }
	  for(int i=0;i<n;i++)
	  {
	      for(int j=i+1;j<n;j++)
	      {
	        if(temp[i]>temp[j])
	        {
	            cons=temp[i];
	            temp[i]=temp[j];
	            temp[j]=cons;
	        }
	      }
	  }
	  for(int i=0;i<n;i++)
	  {
	      nuts[i]=temp[i];
	      bolts[i]=temp[i];
	      
	  }
    }
};
