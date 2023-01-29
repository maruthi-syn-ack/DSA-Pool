
// Date: 29/01/2023 | Day 2
// author: @maruthi-syn-ack
/*Given an array points where points[i] = [xi, yi] represents a point on the X-Y plane, return true if these points are a boomerang.

A boomerang is a set of three points that are all distinct and not in a straight line.

---------------------------------------------------------------------------------------
Example 1:

Input: points = [[1,1],[2,3],[3,2]]
Output: true

*/

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        // logic : calculate area of triangle and check if it is zero
        int x1,x2,x3,y1,y2,y3;
        // x coordinates
        x1=points[0][0];
        x2 =points[1][0];
        x3=points[2][0];
        // y coordinates
        y1=points[0][1];
        y2=points[1][1];
        y3=points[2][1];

        int area = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

        if (area != 0 )
        return true;
        else 
        return false;


        
    }
};