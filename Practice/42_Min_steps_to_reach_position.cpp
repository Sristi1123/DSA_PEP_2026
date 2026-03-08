// int raceCar(int tar) {
//     // add your code here
//     queue<pair<int,int>> q;
//     set<pair<int,int>> visited;

//     q.push({0,1});
//     visited.insert({0,1});

//     int steps=0;

//     while(!q.empty()){
//         int n=q.size();
//         while(n--){
//             auto[pos,speed]=q.front();
//             q.pop();

//             if(pos==tar) return steps;

//             int newPos=pos+speed;
//             int newSpeed=speed*2;
//             if(abs(newPos)<=2*tar && !visited.count({newPos,newSpeed})){
//                 visited.insert({newPos,newSpeed});
//                 q.push({newPos,newSpeed});
//             }
//             int rev=(speed>0)?-1:1;
//             if(!visited.count({pos,rev})){
//                 visited.insert({pos,rev});
//                 q.push({pos,rev});
//             }
//         }
//         steps++;
//     }
//     return -1;
// }