#include "dx.h"
void ATOME84T6(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V24=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=20084;z[jvj+1]=(-100);
x[jvj+2]=6;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3441&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=498; pile[WZ1]=D; pile[WZ2]=jvj+9; 
(*f[1948])( );if(v[102]) goto l8;     /*FNDOND0(498,D,jvj+9)*/
pile[v[22]]=688; pile[WZ1]=jvj+9; 
(*f[1975])( );if(v[102]) goto l8;     /*FNDCND0(688,jvj+9,V7)*/
V7=pile[WZ2]; 
if((V7!=2)) goto l8;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+5,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=489; pile[WZ1]=D; pile[WZ2]=jvj+10; 
(*f[1969])( );     /*FNDEND0(489,D,jvj+10)*/
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=509; pile[WZ2]=jvj+7; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+7)*/
l1:if((x[jvj+7]<=0)) goto l4;
x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==252) goto l3;
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==252) goto l3;
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l3:pile[v[22]]=jvj+8; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+3)*/
goto l2;
l7:x[jvj+38]=x[jvj+10] ;z[jvj+38]=z[jvj+10];
l6:if((x[jvj+38]<=0)) goto l5;
x[jvj+26]=s[x[jvj+38]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+38];
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(101,jvj+11,110,(-601),jvj+31)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+32)*/
pile[v[22]]=V24; pile[WZ1]=858; pile[WZ2]=jvj+28; 
(*f[46])( );     /*TRI0(V24,858,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,v[13],642,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=3441; pile[WZ2]=246; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,3441,246,jvj+30)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20084; pile[WZ4]=jvj+30; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(158,1,218,20084,jvj+30,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=159; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+25,159,jvj+31)*/
pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+25,159,jvj+32)*/
pile[v[22]]=365; pile[WZ1]=jvj+19; pile[WZ2]=jvj+26; pile[WZ3]=jvj+25; 
(*f[1569])( );     /*DELIER0(365,jvj+19,jvj+26,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(101,jvj+11,110,(-601),jvj+36)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+37)*/
pile[v[22]]=V24; pile[WZ1]=858; pile[WZ2]=jvj+33; 
(*f[46])( );     /*TRI0(V24,858,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,v[13],642,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=3441; pile[WZ2]=246; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,3441,246,jvj+35)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20084; pile[WZ4]=jvj+35; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(158,1,218,20084,jvj+35,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=159; pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+27,159,jvj+36)*/
pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+27,159,jvj+37)*/
pile[v[22]]=365; pile[WZ1]=jvj+22; pile[WZ2]=jvj+26; pile[WZ3]=jvj+27; 
(*f[1569])( );     /*DELIER0(365,jvj+22,jvj+26,jvj+27)*/
x[jvj+38]=t[x[jvj+38]];
goto l6;
l8:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l4:if((x[jvj+8]<=0)) goto l8;
x[jvj+11]=s[x[jvj+8]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+8];
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=25)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+11,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=484)) goto l5;
pile[v[22]]=103; pile[WZ1]=jvj+11; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+11,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=484)) goto l5;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+18; 
(*f[200])( );if(v[102]) goto l5;     /*NDD0(jvj+14,jvj+18)*/
x[jvj+19]=x[jvj+18] ;z[jvj+19]=z[jvj+18];
if((x[D]==x[jvj+19])) goto l5;
pile[v[22]]=498; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[1948])( );if(v[102]) goto l5;     /*FNDOND0(498,jvj+19,jvj+20)*/
if((x[jvj+9]!=x[jvj+20])) goto l5;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+21; 
(*f[200])( );if(v[102]) goto l5;     /*NDD0(jvj+16,jvj+21)*/
x[jvj+22]=x[jvj+21] ;z[jvj+22]=z[jvj+21];
if((x[D]==x[jvj+22])) goto l5;
pile[v[22]]=498; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[1948])( );if(v[102]) goto l5;     /*FNDOND0(498,jvj+22,jvj+23)*/
if((x[jvj+9]!=x[jvj+23])) goto l5;
pile[v[22]]=971; pile[WZ1]=jvj+11; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(971,jvj+11,jvj+24)*/
for(a=x[jvj+24];a>0;a=t[a]) if(s[a]==25) goto l7;
l5:x[jvj+8]=t[x[jvj+8]];
goto l4;
}
