class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
   vector<int> minutes;
   for(int i =0;i<timePoints.size();i++){
      string curr = timePoints[i];
      int hours = stoi(curr.substr(0,2));
      int mins = stoi (curr.substr(3,2));
      int totalMinutes = hours * 60 + mins;
      minutes.push_back(totalMinutes);
   }
   //step -2 sorting
    sort(minutes.begin(), minutes.end());
    
    //step-3
     int n = minutes.size();
     int mini = INT_MAX;
     for(int i= 0;i<n-1;i++){
        int diff = minutes[i+1]-minutes[i];
        mini = min(mini,diff);
     }
     //step-4
     int lastDiff1 = (minutes[0]+1440) - minutes[n-1];
     int lastDiff2 = minutes[n-1]-minutes[0];
     int minimum = min(lastDiff1,lastDiff2);
     mini = min(minimum,mini);
     return mini;
    }
};