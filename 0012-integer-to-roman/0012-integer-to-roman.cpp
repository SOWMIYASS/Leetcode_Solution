class Solution {
public:
    string intToRoman(int num) {
        string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hun[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
        string thou[]={"","M","MM","MMM"};
        return thou[num/1000]+hun[(num/100)%10]+tens[(num/10)%10]+ones[num%10];
    }
};