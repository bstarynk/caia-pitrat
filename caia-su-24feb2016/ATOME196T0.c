#include "dx.h"
void ATOME196T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V14=0,V6=0,V18=0,V9=0,V7=0,V50=0,V26=0,I=0,V40=0,J=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=48;
x[jvj+1]=20196;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3339&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,R,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=55)) goto l13;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(870,R,V6)*/
V6=pile[WZ2]; 
if((V6!=1)) goto l13;
pile[v[22]]=107; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,R,jvj+7)*/
for(i=x[jvj+7],V18=0;i>0;i=t[i],V18++)  ;
if((V18!=2)) goto l13;
pile[v[22]]=R; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(R,jvj+2)*/
if((x[jvj+2]<=0)) goto l13;
x[jvj+8]=s[x[jvj+2]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+2];
pile[v[22]]=365; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(365,jvj+8,jvj+9)*/
for(i=x[jvj+9],V9=0;i>0;i=t[i],V9++)  ;
if((V9!=2)) goto l13;
pile[v[22]]=498; pile[WZ2]=jvj+10; 
(*f[1948])( );if(v[102]) goto l13;     /*FNDOND0(498,jvj+8,jvj+10)*/
pile[v[22]]=844; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(844,jvj+10,jvj+11)*/
if((x[jvj+11]!=68)) goto l13;
pile[v[22]]=472; 
(*f[1975])( );if(v[102]) goto l13;     /*FNDCND0(472,jvj+10,V7)*/
V7=pile[WZ2]; 
if((V7!=2)) goto l13;
x[jvj+12]=vo[14];z[jvj+12]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(642,jvj+12,V50)*/
V50=pile[WZ2]; 
x[jvj+13]=d[20];z[jvj+13]=0;
l5:if((x[jvj+13]<=0)) goto l13;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=268; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+14,jvj+15)*/
x[jvj+16]=d[20];z[jvj+16]=0;
l7:if((x[jvj+16]<=0)) goto l6;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=268; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+17,jvj+18)*/
x[jvj+47]=x[jvj+7] ;z[jvj+47]=z[jvj+7];
l9:if((x[jvj+47]<=0)) goto l8;
x[jvj+19]=s[x[jvj+47]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+47];
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=25)) goto l10;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+15,jvj+19,jvj+22)*/
pile[v[22]]=130; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+22,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=jvj+19; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+14,jvj+19,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=484)) goto l10;
I=V26;
x[jvj+45]=x[jvj+9] ;z[jvj+45]=z[jvj+9];
l1:if((x[jvj+45]<=0)) goto l10;
x[jvj+3]=s[x[jvj+45]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+45];
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+3,V12)*/
V12=pile[WZ2]; 
if((V12!=I)) goto l2;
x[jvj+48]=x[jvj+7] ;z[jvj+48]=z[jvj+7];
l11:if((x[jvj+48]<=0)) goto l10;
x[jvj+25]=s[x[jvj+48]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+48];
if((x[jvj+19]==x[jvj+25])) goto l12;
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+25,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=25)) goto l12;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+18,jvj+25,jvj+28)*/
pile[v[22]]=130; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+28,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=jvj+25; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+17,jvj+25,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+29,jvj+30)*/
if((x[jvj+30]!=484)) goto l12;
J=V40;
x[jvj+46]=x[jvj+9] ;z[jvj+46]=z[jvj+9];
l3:if((x[jvj+46]<=0)) goto l12;
x[jvj+4]=s[x[jvj+46]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+46];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+4,V14)*/
V14=pile[WZ2]; 
if((V14!=J)) goto l4;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+37)*/
pile[v[22]]=V50; pile[WZ1]=858; pile[WZ2]=jvj+33; 
(*f[46])( );     /*TRI0(V50,858,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,v[13],642,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=3339; pile[WZ2]=246; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,3339,246,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=20196; pile[WZ2]=218; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+35,20196,218,jvj+36)*/
pile[v[22]]=jvj+37; pile[WZ1]=(-20); pile[WZ2]=jvj+36; pile[WZ3]=159; pile[WZ4]=jvj+38; 
(*f[298])( );     /*TRIENS1(jvj+37,(-20),jvj+36,159,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+38,1,158,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=489; pile[WZ2]=jvj+8; pile[WZ3]=jvj+3; 
(*f[1753])( );     /*LIER1(jvj+31,489,jvj+8,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+43)*/
pile[v[22]]=V50; pile[WZ1]=858; pile[WZ2]=jvj+39; 
(*f[46])( );     /*TRI0(V50,858,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+40; 
(*f[189])( );     /*TRI4(jvj+39,v[13],642,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=3339; pile[WZ2]=246; pile[WZ3]=jvj+41; 
(*f[189])( );     /*TRI4(jvj+40,3339,246,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=20196; pile[WZ2]=218; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+41,20196,218,jvj+42)*/
pile[v[22]]=jvj+43; pile[WZ1]=(-20); pile[WZ2]=jvj+42; pile[WZ3]=159; pile[WZ4]=jvj+44; 
(*f[298])( );     /*TRIENS1(jvj+43,(-20),jvj+42,159,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+44,1,158,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=489; pile[WZ2]=jvj+8; pile[WZ3]=jvj+4; 
(*f[1753])( );     /*LIER1(jvj+32,489,jvj+8,jvj+4)*/
l12:x[jvj+48]=t[x[jvj+48]];
goto l11;
l2:x[jvj+45]=t[x[jvj+45]];
goto l1;
l4:x[jvj+46]=t[x[jvj+46]];
goto l3;
l6:x[jvj+13]=t[x[jvj+13]];
goto l5;
l8:x[jvj+16]=t[x[jvj+16]];
goto l7;
l10:x[jvj+47]=t[x[jvj+47]];
goto l9;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
