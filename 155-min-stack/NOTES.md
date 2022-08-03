void push(int val) {
s1.push(val);
if(s2.size()==0){
s2.push(val);
}
s2.push(min(s2.top(),val));
}