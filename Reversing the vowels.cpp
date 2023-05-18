   string vowel="";
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i')
                {
                    vowel+=s[i];
                }
            }
            int j=vowel.size()-1;
            for(int i=0;i<s.size();i++)
            {
                 if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i')
                 {
                     s[i]=vowel[j];
                     j--;
                     
                 }
            }
            return s;
