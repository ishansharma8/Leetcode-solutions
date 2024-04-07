class Solution {
public:         // //h is total time available that i have to eat banana
        // i have to find slow speed ->k st at that speed k ,we can eat all banan in h hours
    int minEatingSpeed(vector<int>& piles, int h) {
 //midsp is iss speed se kitne ghnte lgege
        int lowsp = 1;
        int highsp = *(max_element(piles.begin(), piles.end()));
        //1 se max ke bich ka no. hoga ,jiss speed se tume kha skte ho
        long long int totaltime;
        int ans;

        while (lowsp <= highsp) {
            long long int midsp = lowsp + (highsp - lowsp) / 2;
            totaltime=0; //setting to to 0 for each speed

            for (int i = 0; i < piles.size(); i++) {
                totaltime += ceil(piles[i] / double(midsp));
            }
            
            //matlab tumhe iss hisab se khane mai jaada time lagega
            if (totaltime > h) {//jaldi kro,time km hai,matlab speed precisely midspeed badhao
                lowsp = midsp + 1;

                //matlab tumhe h hours se hi jaldi kha liya,matlab sped km kro,taki time jada lge
            } else {//speed fast hai,aram se khao,speed kam kro,ya yeh sped bi thik hosakti hai
                ans = midsp;
                highsp= midsp - 1;
            }
        }
        return ans;
    }
};