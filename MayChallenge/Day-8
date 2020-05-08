class Solution(object):
    def checkStraightLine(self, coordinates):         #using mx=x2-x1 and my=y2-y1
        mx=coordinates[0][0]-coordinates[1][0]
        my=coordinates[0][1]-coordinates[1][1]
        for i in range(len(coordinates)-1):
            if (coordinates[i][1]-coordinates[i+1][1]) * mx != my * (coordinates[i][0]-coordinates[i+1][0]):
                return False
        return True
                
                    
        
