#include "dx.h"
void ATOME106T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V11=0,I=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=20106;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3539&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,R,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=25)) goto l4;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+6,V18)*/
V18=pile[WZ2]; 
x[jvj+7]=d[20];z[jvj+7]=0;
l1:if((x[jvj+7]<=0)) goto l4;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+8,R,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=484)) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+8,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+11,R,jvj+12)*/
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+12,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=jvj+13; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(jvj+9,jvj+13)*/
x[jvj+2]=x[jvj+13] ;z[jvj+2]=z[jvj+13];
pile[v[22]]=202; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l3;     /*FNDOND0(202,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l2;
l3:pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+14; 
(*f[1948])( );if(v[102]) goto l2;     /*FNDOND0(498,jvj+2,jvj+14)*/
I=V11;
pile[v[22]]=jvj+14; pile[WZ1]=I; pile[WZ2]=jvj+15; 
(*f[1765])( );     /*AJARR0(jvj+14,I,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+23)*/
pile[v[22]]=V18; pile[WZ1]=858; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(V18,858,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3539; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3539,246,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=20106; pile[WZ2]=218; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,20106,218,jvj+22)*/
pile[v[22]]=jvj+23; pile[WZ1]=(-20); pile[WZ2]=jvj+22; pile[WZ3]=159; pile[WZ4]=jvj+24; 
(*f[298])( );     /*TRIENS1(jvj+23,(-20),jvj+22,159,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+24,1,158,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=365; pile[WZ2]=jvj+2; pile[WZ3]=jvj+15; 
(*f[1753])( );     /*LIER1(jvj+16,365,jvj+2,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+29)*/
pile[v[22]]=V18; pile[WZ1]=858; pile[WZ2]=jvj+25; 
(*f[46])( );     /*TRI0(V18,858,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,v[13],642,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=3539; pile[WZ2]=246; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,3539,246,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=20106; pile[WZ2]=218; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+27,20106,218,jvj+28)*/
pile[v[22]]=jvj+29; pile[WZ1]=(-20); pile[WZ2]=jvj+28; pile[WZ3]=159; pile[WZ4]=jvj+30; 
(*f[298])( );     /*TRIENS1(jvj+29,(-20),jvj+28,159,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+30,1,158,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=489; pile[WZ2]=jvj+2; pile[WZ3]=jvj+15; 
(*f[1753])( );     /*LIER1(jvj+17,489,jvj+2,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+35)*/
pile[v[22]]=V18; pile[WZ1]=858; pile[WZ2]=jvj+31; 
(*f[46])( );     /*TRI0(V18,858,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,v[13],642,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=3539; pile[WZ2]=246; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,3539,246,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=20106; pile[WZ2]=218; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+33,20106,218,jvj+34)*/
pile[v[22]]=jvj+35; pile[WZ1]=(-20); pile[WZ2]=jvj+34; pile[WZ3]=159; pile[WZ4]=jvj+36; 
(*f[298])( );     /*TRIENS1(jvj+35,(-20),jvj+34,159,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+36,1,158,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=202; pile[WZ2]=jvj+2; pile[WZ3]=68; 
(*f[3040])( );     /*VOBJ0(jvj+18,202,jvj+2,68)*/
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
