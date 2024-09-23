#inclode <ostream>
#inclode <iomanip>
#inclode <stdio.h>
using namespace std;

void deoth_first_tree_search(node v)
{
    node u;

    visit v;
    for(each child u of v)
        deoth_first_tree_search(u);
}

void checknode(node v)
{
    node u;
    if(promising(v))
        if(there is a solution at v)
            write the solution;
        else
            for(each child u of v)
                checknode(u);
}

void expand (node v)
{
    node u;
    for(each child u of v)
        if(promising(u))
            if(there is solution at u)
                write the solution;
            else
                expand(u);
}

void queens(index i)
{
    index j;
    if(promising(i))
        if(i==n)
            cout<<col[1] through col[n]:
        else
            for(j=1; j<=n; j++){
                col[i+1] = j;
                queens(i+1);
            } 
}
bool promising(index i)
{
    index k;
    bool switch;
    k=1;
    switch = true;
    while (k<i && switch){
        if (col[i] == col[k] || abs(col[i] - col[j]) == i-k)
            switch = false;
        k++;
    }
return switch;
}

int estimate ()
{
    node v;
    int m, mprod, t, numnodes;
    v = roop of state space tree;
    numnodes = 1;
    m=2;
    mprod = 1;
    while (m!=0){
        t = number of children of v;
        mprod = mprod * m;
        numnodes = numnodes+mprod*t;
        m = number of promising children of v;
        if(m!=0)
            v = randomly selected promising child of v;
    }
    return numnodes;
}

int estimate_n_queens(int n)
{
    index i, j col[1..n];
    int m, mprob, numnodes;
    set_of_index prom_children;
    i=0;
    numnodes = 1;
    m =1;
    mprob = 1;
    while (m!= 0 && i != n){
        mprob = mprob * m;
        numnodes = numnodes + mprob * n;
        i++;
        m = 0;
        prom_children = null;
        for(j=1;j<=n;j++){
            col[i] = j;
            if(promising(i)){
                m++;
                prom_children = prom_children + {i};
            }
        }
        if(m!=0){
            j = random selection from prom_children;
            col[j] = j;
        }
    }
    return numnodes;
}

void sum_of_subsets(index i,
                    int weight, int total)
{
    if(promising(i))
        if(weight == W)
            cout << include[1] through inclode[i];
        else{
            inclode[i+1] = "yes";
            sum_of_subsets(i + 1, weight + w[i+1],total - w[i+1]);
            inclode[i+1] = "no";
            sum_of_subsets(i+1,weight, toatl-w[i+1]);
        }
}
bool promising(index i):
{
    return(weight + toatl >= W) && (weight == W || weight + w[i+1] <= W);
}

void m_coloring(index i)
{
    int color;
    if(promising(i)
        if(i == n)
            cout << vcolor[1] through vcolor[n];
        else
            for (color = 1; color <= m ;color++){
                vcolor[i+1] = color;
                m_coloring(i+1):
            }
}

bool promising (index i)
{
    index j;
    bool switch;
    switch = true;
    j=1;
    while (j<i&& switch){
        if(W[i][j] && vcolor[i] == vcolor[j])
            switch = false;
        j++;
    }
    return switch;
}

void hamilitonian(index i)
{
    index j;

    if(promising(i))
        if(i==n-1)
            cout << vindex[0] through vindex[n-1];
        else
            for(j=2;j<=n;j++){
                vindex[i+1] = j;
                hamilitonian(i+1);
            }
} 
bool promising(index i)
{
    index j;
    bool switch;
    if(i==n-1 &&! W[vindex[n-1]] [vindex[0]])
        switch = false;
    else if (i>0 &&! W[vindex[i-1]] [vindex[i]])
        switch = false;
    else{
        switch = true;
        j = 1;
while(j<i && switch){
        if(vindex[i] == vindex[j])
            switch = false;
        j++;
        }
    }
    return switch;
}

void checknode (node v){
    node u;
    if(value(v) is better than best)
        best = value(v);
    if(promising(v))
        for(each child u of v)
            checknode(u);
}

void knapsack (index i, int profit, int weight){
    if(weight <= W && profit > maxprofit){
        maxprofit = profit;
        numbest = i;
        bestset = inclode;
    }
    if(promising(i)){
        inclode[i+1] = "yes";
        knapsack(i + 1, profit + p[i+1], weight + w[i+1]);
        inclode[i+1] = "no";
        knapsack(i+1, profit,weight);
    }
}
bool promising (index i){
    index j,k;
    int totweight;
    float bound;
    if(weight >= W)
        return false;
    else{
        j = i+ 1;
        bound = profit;
        totweight = weight;
        while(j<=n && totweight + w[j] <= W){
            totweight = totweight + W[j];
            bound = bound + p[j];
            j++;
        }
        k = j;
        if(k<=n)
            bound = bound + (W - totweight) * p[k]/w[k];
        return bound > maxprofit;
    }
}

/*numbest = 0;
maxprofit = 0;
knapsack(0,0,0);
cout << maxprofit;
for(j= 1; j<=numbest;j++)
    cout << bestset[i];
*/