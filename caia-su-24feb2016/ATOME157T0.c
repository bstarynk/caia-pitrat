#include "dx.h"
void ATOME157T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V31=0,V11=0,V24=0,V18=0,I=0,V6=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=44;
x[jvj+1]=20157;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3550&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,R,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=25)) goto l8;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+6,V31)*/
V31=pile[WZ2]; 
x[jvj+7]=d[20];z[jvj+7]=0;
l1:if((x[jvj+7]<=0)) goto l8;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+8,R,jvj+9)*/
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=485)) goto l2;
pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+12)*/
for(i=x[jvj+12],V11=0;i>0;i=t[i],V11++)  ;
if((V11!=2)) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+8,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+13,R,jvj+14)*/
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+14,V24)*/
V24=pile[WZ2]; 
if((V24!=0)) goto l2;
x[jvj+43]=x[jvj+12] ;z[jvj+43]=z[jvj+12];
l3:if((x[jvj+43]<=0)) goto l2;
x[jvj+15]=s[x[jvj+43]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+43];
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=484)) goto l4;
x[jvj+17]=x[jvj+15] ;z[jvj+17]=z[jvj+15];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[200])( );if(v[102]) goto l4;     /*NDD0(jvj+17,jvj+18)*/
x[jvj+2]=x[jvj+18] ;z[jvj+2]=z[jvj+18];
pile[v[22]]=202; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l5;     /*FNDOND0(202,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l4;
l5:pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+19; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(498,jvj+2,jvj+19)*/
x[jvj+44]=x[jvj+12] ;z[jvj+44]=z[jvj+12];
l6:if((x[jvj+44]<=0)) goto l4;
x[jvj+20]=s[x[jvj+44]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+44];
if((x[jvj+15]==x[jvj+20])) goto l7;
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+20,V18)*/
V18=pile[WZ2]; 
I=V18;
V6=(-I);
pile[v[22]]=jvj+19; pile[WZ1]=V6; pile[WZ2]=jvj+21; 
(*f[1765])( );     /*AJARR0(jvj+19,V6,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+29)*/
pile[v[22]]=V31; pile[WZ1]=858; pile[WZ2]=jvj+25; 
(*f[46])( );     /*TRI0(V31,858,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,v[13],642,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=3550; pile[WZ2]=246; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,3550,246,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=20157; pile[WZ2]=218; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+27,20157,218,jvj+28)*/
pile[v[22]]=jvj+29; pile[WZ1]=(-20); pile[WZ2]=jvj+28; pile[WZ3]=159; pile[WZ4]=jvj+30; 
(*f[298])( );     /*TRIENS1(jvj+29,(-20),jvj+28,159,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+30,1,158,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=365; pile[WZ2]=jvj+2; pile[WZ3]=jvj+21; 
(*f[1753])( );     /*LIER1(jvj+22,365,jvj+2,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+35)*/
pile[v[22]]=V31; pile[WZ1]=858; pile[WZ2]=jvj+31; 
(*f[46])( );     /*TRI0(V31,858,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,v[13],642,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=3550; pile[WZ2]=246; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,3550,246,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=20157; pile[WZ2]=218; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+33,20157,218,jvj+34)*/
pile[v[22]]=jvj+35; pile[WZ1]=(-20); pile[WZ2]=jvj+34; pile[WZ3]=159; pile[WZ4]=jvj+36; 
(*f[298])( );     /*TRIENS1(jvj+35,(-20),jvj+34,159,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+36,1,158,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=489; pile[WZ2]=jvj+2; pile[WZ3]=jvj+21; 
(*f[1753])( );     /*LIER1(jvj+23,489,jvj+2,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+41)*/
pile[v[22]]=V31; pile[WZ1]=858; pile[WZ2]=jvj+37; 
(*f[46])( );     /*TRI0(V31,858,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,v[13],642,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=3550; pile[WZ2]=246; pile[WZ3]=jvj+39; 
(*f[189])( );     /*TRI4(jvj+38,3550,246,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=20157; pile[WZ2]=218; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+39,20157,218,jvj+40)*/
pile[v[22]]=jvj+41; pile[WZ1]=(-20); pile[WZ2]=jvj+40; pile[WZ3]=159; pile[WZ4]=jvj+42; 
(*f[298])( );     /*TRIENS1(jvj+41,(-20),jvj+40,159,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+42,1,158,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=202; pile[WZ2]=jvj+2; pile[WZ3]=68; 
(*f[3040])( );     /*VOBJ0(jvj+24,202,jvj+2,68)*/
l7:x[jvj+44]=t[x[jvj+44]];
goto l6;
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l4:x[jvj+43]=t[x[jvj+43]];
goto l3;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
