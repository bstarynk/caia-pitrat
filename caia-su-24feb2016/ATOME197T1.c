#include "dx.h"
void ATOME197T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V16=0,V8=0,V18=0,V51=0,V11=0,V9=0,V26=0,I=0,V40=0,J=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=49;
x[jvj+1]=20197;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3340&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,R,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=55)) goto l16;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(870,R,V8)*/
V8=pile[WZ2]; 
if((V8!=1)) goto l16;
pile[v[22]]=107; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,R,jvj+11)*/
for(i=x[jvj+11],V18=0;i>0;i=t[i],V18++)  ;
if((V18!=2)) goto l16;
x[jvj+12]=vo[14];z[jvj+12]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(642,jvj+12,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
if((x[jvj+3]<=0)) goto l16;
x[jvj+13]=s[x[jvj+3]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+3];
pile[v[22]]=365; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[1969])( );     /*FNDEND0(365,jvj+13,jvj+14)*/
for(i=x[jvj+14],V11=0;i>0;i=t[i],V11++)  ;
if((V11!=2)) goto l16;
pile[v[22]]=498; pile[WZ2]=jvj+15; 
(*f[1948])( );if(v[102]) goto l16;     /*FNDOND0(498,jvj+13,jvj+15)*/
pile[v[22]]=472; pile[WZ1]=jvj+15; 
(*f[1975])( );if(v[102]) goto l16;     /*FNDCND0(472,jvj+15,V9)*/
V9=pile[WZ2]; 
if((V9!=2)) goto l16;
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=R; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(R,jvj+6)*/
l5:if((x[jvj+6]>0)) goto l6;
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[jvj+13]) goto l8;
l16:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+46]=t[x[jvj+46]];
l1:if((x[jvj+46]<=0)) goto l13;
x[jvj+4]=s[x[jvj+46]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+46];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+4,V14)*/
V14=pile[WZ2]; 
if((V14!=I)) goto l2;
x[jvj+49]=x[jvj+11] ;z[jvj+49]=z[jvj+11];
l14:if((x[jvj+49]<=0)) goto l13;
x[jvj+28]=s[x[jvj+49]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+49];
if((x[jvj+22]==x[jvj+28])) goto l15;
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=26)) goto l15;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+21,jvj+28,jvj+31)*/
pile[v[22]]=130; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+31,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=jvj+20; pile[WZ1]=jvj+28; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+20,jvj+28,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+32,jvj+33)*/
if((x[jvj+33]!=484)) goto l15;
J=V40;
x[jvj+47]=x[jvj+14] ;z[jvj+47]=z[jvj+14];
l3:if((x[jvj+47]<=0)) goto l15;
x[jvj+5]=s[x[jvj+47]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+47];
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+5,V16)*/
V16=pile[WZ2]; 
if((V16!=J)) goto l4;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+39)*/
pile[WZ1]=jvj+13; pile[WZ3]=(-656); pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(101,jvj+13,110,(-656),jvj+40)*/
pile[v[22]]=V51; pile[WZ1]=858; pile[WZ2]=jvj+36; 
(*f[46])( );     /*TRI0(V51,858,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,v[13],642,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=3340; pile[WZ2]=246; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,3340,246,jvj+38)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20197; pile[WZ4]=jvj+38; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(158,1,218,20197,jvj+38,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=159; pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+34,159,jvj+39)*/
pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+34,159,jvj+40)*/
pile[v[22]]=365; pile[WZ1]=jvj+13; pile[WZ2]=jvj+4; pile[WZ3]=jvj+34; 
(*f[1569])( );     /*DELIER0(365,jvj+13,jvj+4,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+44)*/
pile[WZ1]=jvj+13; pile[WZ3]=(-656); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(101,jvj+13,110,(-656),jvj+45)*/
pile[v[22]]=V51; pile[WZ1]=858; pile[WZ2]=jvj+41; 
(*f[46])( );     /*TRI0(V51,858,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+42; 
(*f[189])( );     /*TRI4(jvj+41,v[13],642,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=3340; pile[WZ2]=246; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,3340,246,jvj+43)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20197; pile[WZ4]=jvj+43; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(158,1,218,20197,jvj+43,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=159; pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+35,159,jvj+44)*/
pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+35,159,jvj+45)*/
pile[v[22]]=365; pile[WZ1]=jvj+13; pile[WZ2]=jvj+5; pile[WZ3]=jvj+35; 
(*f[1569])( );     /*DELIER0(365,jvj+13,jvj+5,jvj+35)*/
l15:x[jvj+49]=t[x[jvj+49]];
goto l14;
l4:x[jvj+47]=t[x[jvj+47]];
goto l3;
l6:x[jvj+8]=s[x[jvj+6]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+8)*/
x[jvj+6]=t[x[jvj+6]];
goto l5;
l8:x[jvj+16]=d[20];z[jvj+16]=0;
l7:if((x[jvj+16]<=0)) goto l16;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=268; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(268,jvj+17,jvj+18)*/
x[jvj+19]=d[20];z[jvj+19]=0;
l10:if((x[jvj+19]<=0)) goto l9;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=268; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(268,jvj+20,jvj+21)*/
x[jvj+48]=x[jvj+11] ;z[jvj+48]=z[jvj+11];
l12:if((x[jvj+48]<=0)) goto l11;
x[jvj+22]=s[x[jvj+48]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+48];
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=26)) goto l13;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+18,jvj+22,jvj+25)*/
pile[v[22]]=130; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+25,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=jvj+22; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+17,jvj+22,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=484)) goto l13;
I=V26;
x[jvj+46]=x[jvj+14] ;z[jvj+46]=z[jvj+14];
goto l1;
l9:x[jvj+16]=t[x[jvj+16]];
goto l7;
l11:x[jvj+19]=t[x[jvj+19]];
goto l10;
l13:x[jvj+48]=t[x[jvj+48]];
goto l12;
}
