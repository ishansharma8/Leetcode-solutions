if we dont use the for loop,then it would return the sorted index
eg-if 3,2,4 and require sum=6 ;then it should return 1,2
but after sorting array becomes 2,3,4 nd it returns indices 0.2
​
​
another good solution
for(int i = 0 ; i < v.size() ; i++){
if(v[i] == n1 || v[i] == n2){
ans.push_back(i);
}
if(ans.size() == 2) break;
}
used the or ondition but also put the size constraint so that we get our required 2 indices