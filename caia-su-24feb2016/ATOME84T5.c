#include "dx.h"
void ATOME84T5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,V8=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=20084;z[jvj+1]=(-100);
x[jvj+2]=5;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3335&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l6;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,R,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=484)) goto l6;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,R,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=484)) goto l6;
x[jvj+12]=vo[14];z[jvj+12]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+12,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=jvj+13; 
(*f[200])( );if(v[102]) goto l6;     /*NDD0(jvj+8,jvj+13)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+14; 
(*f[200])( );if(v[102]) goto l6;     /*NDD0(jvj+10,jvj+14)*/
pile[v[22]]=498; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(498,jvj+13,jvj+15)*/
pile[WZ1]=jvj+14; pile[WZ2]=jvj+16; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(498,jvj+14,jvj+16)*/
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=971; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(971,R,jvj+17)*/
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==25) goto l3;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+5]=s[x[jvj+3]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+4]=t[x[jvj+4]];
l3:if((x[jvj+4]<=0)) goto l6;
x[jvj+18]=s[x[jvj+4]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+4];
if((x[jvj+18]==x[jvj+13])) goto l4;
if((x[jvj+18]==x[jvj+14])) goto l4;
pile[v[22]]=498; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(498,jvj+18,jvj+19)*/
if((x[jvj+19]!=x[jvj+15])) goto l4;
if((x[jvj+19]!=x[jvj+16])) goto l4;
pile[v[22]]=688; pile[WZ1]=jvj+19; 
(*f[1975])( );if(v[102]) goto l4;     /*FNDCND0(688,jvj+19,V8)*/
V8=pile[WZ2]; 
if((V8!=2)) goto l4;
pile[v[22]]=489; pile[WZ1]=jvj+18; pile[WZ2]=jvj+20; 
(*f[1969])( );     /*FNDEND0(489,jvj+18,jvj+20)*/
x[jvj+34]=x[jvj+20] ;z[jvj+34]=z[jvj+20];
l5:if((x[jvj+34]<=0)) goto l4;
x[jvj+22]=s[x[jvj+34]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+34];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+27)*/
pile[WZ1]=jvj+18; pile[WZ3]=(-656); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(101,jvj+18,110,(-656),jvj+28)*/
pile[v[22]]=V21; pile[WZ1]=858; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0(V21,858,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,v[13],642,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=3335; pile[WZ2]=246; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,3335,246,jvj+26)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20084; pile[WZ4]=jvj+26; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(158,1,218,20084,jvj+26,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=159; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+21,159,jvj+27)*/
pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+21,159,jvj+28)*/
pile[v[22]]=365; pile[WZ1]=jvj+13; pile[WZ2]=jvj+22; pile[WZ3]=jvj+21; 
(*f[1569])( );     /*DELIER0(365,jvj+13,jvj+22,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+32)*/
pile[WZ1]=jvj+18; pile[WZ3]=(-656); pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(101,jvj+18,110,(-656),jvj+33)*/
pile[v[22]]=V21; pile[WZ1]=858; pile[WZ2]=jvj+29; 
(*f[46])( );     /*TRI0(V21,858,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,v[13],642,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=3335; pile[WZ2]=246; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,3335,246,jvj+31)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20084; pile[WZ4]=jvj+31; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(158,1,218,20084,jvj+31,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=159; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+23,159,jvj+32)*/
pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+23,159,jvj+33)*/
pile[v[22]]=365; pile[WZ1]=jvj+14; pile[WZ2]=jvj+22; pile[WZ3]=jvj+23; 
(*f[1569])( );     /*DELIER0(365,jvj+14,jvj+22,jvj+23)*/
x[jvj+34]=t[x[jvj+34]];
goto l5;
}
