#include <bits/stdc++.h>

using namespace std;
char s[11],voc,cons;
int nr_voc,poz_voc,poz_cons;
bool ok=true;
int main()
{


    cin>>s;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]=='a'||s[i]=='A'||s[i]=='E'||s[i]=='e'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U') nr_voc++;
    }
    if(nr_voc==0||nr_voc==strlen(s))
    {
        cout<<"IMPOSIBIL";
    }
    else
    {
        for(int i=0; i<strlen(s); i++)
        {
            if((s[i]=='a'||s[i]=='A'||s[i]=='E'||s[i]=='e'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')&&ok==true)
            {
                voc=s[i];
                poz_voc=i;
                ok=false;
            }
            if(s[i]!='a'&&s[i]!='A'&&s[i]!='E'&&s[i]!='e'&&s[i]!='i'&&s[i]!='I'&&s[i]!='o'&&s[i]!='O'&&s[i]!='u'&&s[i]!='U')
            {
                cons=s[i];
                poz_cons=i;
            }
        }
        s[poz_voc]=cons;
        s[poz_cons]=voc;

        cout<<s;
    }

    return 0;
}
