// URL: https://atcoder.jp/contests/abc184/submissions/18432567
// Date: Fri, 27 Nov 2020 09:48:36 +0000
// Language: C (GCC 9.2.1)
h,w,i,j,c,f[26],l,r,b[26],e;main(){scanf("%d%d ",&h,&w);int p=h*w,m[p],s[p+1],v[p+1],q[p];char g[p+1];for(;i<h&&gets(g+i*w);++i)for(j=i*w;j<i*w+w;m[j]=-(g[j]!=83?g[j]==71?e=j,1:1:(q[r++]=j,0)),++j)g[j]>96?v[++c]=j,s[c]=f[g[j]-97],f[g[j]-97]=c:0;while(r-l)if(i=q[l++],i%w&&m[i-1]<0&&g[i-1]-35?m[q[r++]=i-1]=m[i]+1:0,(i+1)%w&&m[i+1]<0&&g[i+1]-35?m[q[r++]=i+1]=m[i]+1:0,i>=w&&m[i-w]<0&&g[i-w]-35?m[q[r++]=i-w]=m[i]+1:0,i+w<p&&m[i+w]<0&&g[i+w]-35?m[q[r++]=i+w]=m[i]+1:0,g[i]>96&&!b[g[i]-97])for(b[g[i]-97]=1,j=f[g[i]-97];j;j=s[j])m[v[j]]<0?m[q[r++]=v[j]]=m[i]+1:0;printf("%d",m[e]);}
