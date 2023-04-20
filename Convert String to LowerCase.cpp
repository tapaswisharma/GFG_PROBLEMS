class Solution {
  public:
    string toLower(string S) {
      for ( char& c : S ) c = tolower( c );
return S;
    }
};
