1) ans=(wl+wr+1)*heights[i];
finalans=max(ans,finalans);
passed 92 test cases
​
2)fnalans=max((wl+wr+1)*heights[i],finalans);
passed 94 test cases
3) at end removed the tle by removing the line
cout<<wl<<" "<<wr<<endl;
maybe this printing line was consuming some time and increasing complexity
and well this cout line was the trouble,after removing that
even the code in 1) worked
so suprising that even cout lines can cause tle,so dont  print them unnecessarily as they     also take time to execute