// Question: https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem?isFullScreen=true

// Solution: 


void sort_by_area(triangle* tr, int n) {
	
    double area[n];
    double s;
    int i;
    
    for( i = 0; i < n ; i++ )
    {
        s = ( tr[i].a + tr[i].b  + tr[i].c )/ 2.0 ;
        
        area[i] = sqrt(s * (s - tr[i].a) * (s - tr[i].b) * (s - tr[i].c));
    }
    
    int j,k ;
    double tempArea;
    struct triangle temp;
    for(k=0;k<n;k++)
    {
        for(j=0;j<n-k-1;j++)
        {
            if(area[j]>area[j+1])
            {
                temp = tr[j];
                tr[j]=tr[j+1];
                tr[j+1] = temp;
                
                tempArea = area[j];
                area[j] = area[j+1];
                area[j+1]=tempArea;
                
            }
        }
    }
    
}

