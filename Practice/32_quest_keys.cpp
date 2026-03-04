// void dfs(int room, vector<vector<int>> &rooms, vector<bool> &visited){
//     visited[room]=true;
//     for(int key:rooms[room]){
//         if(!visited[key]){
//             dfs(key,rooms,visited);
//         }
//     }
// }
// bool canVisitAllRooms(vector<vector<int>>& rooms) {
//     // add your code here
//     int n=rooms.size();
//     vector<bool> visited(n,false);
//     dfs(0,rooms,visited);

//     for(bool a:visited){
//         if(!a) return false;
//     }
//     return true;
// }