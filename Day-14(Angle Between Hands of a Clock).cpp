/*
Time complexity : O(1)
Space complexity : O(1)
My approach : the hour hand makes an angle of 30⁰ in an hour where as the minute hand makes an angle of 6⁰ per minute, rest of it is maths actually.
Question :Given two numbers, hour and minutes. Return the smaller angle (in degrees) formed between the hour and the minute hand.
*/

class Solution {
public:
    double angleClock(int hour, int minutes)
    {
        double ha = (hour +(double) minutes/60) * 30;
        double ma =  minutes * 6;
       // cout<<ha<<" "<<ma<<endl;
        double t= abs(ma - ha);
         return min(t,360-t);
    }
};
