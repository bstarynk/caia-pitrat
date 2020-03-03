#include "dx.h"
void ATOME84T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V18=0;
int R,D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=20084;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3094&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; D=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=25)) goto l2;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,R,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=484)) goto l2;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,R,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=484)) goto l2;
pile[v[22]]=498; pile[WZ1]=D; pile[WZ2]=jvj+8; 
(*f[1948])( );if(v[102]) goto l2;     /*FNDOND0(498,D,jvj+8)*/
pile[v[22]]=688; pile[WZ1]=jvj+8; 
(*f[1975])( );if(v[102]) goto l2;     /*FNDCND0(688,jvj+8,V6)*/
V6=pile[WZ2]; 
if((V6!=2)) goto l2;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(642,jvj+9,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=jvj+10; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(jvj+4,jvj+10)*/
if((x[D]==x[jvj+10])) goto l2;
pile[v[22]]=498; pile[WZ2]=jvj+11; 
(*f[1948])( );if(v[102]) goto l2;     /*FNDOND0(498,jvj+10,jvj+11)*/
if((x[jvj+8]!=x[jvj+11])) goto l2;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+12; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(jvj+6,jvj+12)*/
if((x[D]==x[jvj+12])) goto l2;
pile[v[22]]=498; pile[WZ2]=jvj+13; 
(*f[1948])( );if(v[102]) goto l2;     /*FNDOND0(498,jvj+12,jvj+13)*/
if((x[jvj+8]!=x[jvj+13])) goto l2;
pile[v[22]]=489; pile[WZ1]=D; pile[WZ2]=jvj+14; 
(*f[1969])( );     /*FNDEND0(489,D,jvj+14)*/
pile[v[22]]=971; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(971,R,jvj+15)*/
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==25) goto l1;
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:if((x[jvj+14]<=0)) goto l2;
x[jvj+17]=s[x[jvj+14]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+14];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+22)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+23)*/
pile[v[22]]=V18; pile[WZ1]=858; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(V18,858,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3094; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3094,246,jvj+21)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20084; pile[WZ4]=jvj+21; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(158,1,218,20084,jvj+21,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=159; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+23)*/
pile[v[22]]=365; pile[WZ1]=jvj+10; pile[WZ2]=jvj+17; pile[WZ3]=jvj+16; 
(*f[1569])( );     /*DELIER0(365,jvj+10,jvj+17,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+27)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+28)*/
pile[v[22]]=V18; pile[WZ1]=858; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0(V18,858,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,v[13],642,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=3094; pile[WZ2]=246; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,3094,246,jvj+26)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20084; pile[WZ4]=jvj+26; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(158,1,218,20084,jvj+26,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=159; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+27)*/
pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+28)*/
pile[v[22]]=365; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; pile[WZ3]=jvj+18; 
(*f[1569])( );     /*DELIER0(365,jvj+12,jvj+17,jvj+18)*/
x[jvj+14]=t[x[jvj+14]];
goto l1;
}
