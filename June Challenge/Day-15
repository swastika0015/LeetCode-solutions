import re
class Solution:
    def validIPAddress(self, IP: str) -> str:
    
        if re.search('^((25[0-5]|2[0-4]\d|1\d\d|[1-9]\d|\d)\.){3}(25[0-5]|2[0-4]\d|1\d\d|[1-9]\d|\d)$', IP):
            return 'IPv4'
        elif re.search('^([\da-f]{1,4}:){7}[\da-f]{1,4}$',IP,re.I):
            return 'IPv6'
        return 'Neither'
        
