#include "dx.h"
void INIDCLA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F=0,V19=0,V=0,V2=0,V44=0,V25=0,V27=0;
int EB,XV,EV;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=31;
x[jvj+1]=11511;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1086&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
EB=pile[v[22]]; XV=pile[v[22]+1]; EV=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=763; pile[WZ1]=XV; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(763,XV,jvj+2)*/
x[jvj+31]=x[EB] ;z[jvj+31]=z[EB];
l1:if((x[jvj+31]>0)) goto l2;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+3]=s[x[jvj+31]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+31];
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l3;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=22)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+3,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
F=x[jvj+6];
if(F!=25&&F!=26&&F!=29&&F!=30&&F!=27&&F!=28&&F!=625) goto l3;
pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+3,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=43)) goto l5;
pile[v[22]]=103; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+7,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+9,V19)*/
V19=pile[WZ2]; 
V=V19;
for(a=x[EV];a>0;a=t[a]) if(s[a]==V) goto l4;
l5:pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+3,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=43)) goto l3;
pile[v[22]]=103; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+13,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+15,V44)*/
V44=pile[WZ2]; 
V25=V44;
for(a=x[EV];a>0;a=t[a]) if(s[a]==V25) goto l6;
l3:x[jvj+31]=t[x[jvj+31]];
goto l1;
l4:pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+7,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+10,jvj+11)*/
x[jvj+24]=x[jvj+11] ;z[jvj+24]=z[jvj+11];
if((V2=w[x[jvj+24]][1])==incon) goto l5;
if((V2==23)) goto l5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=8; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,8,jvj+19)*/
pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+24,jvj+23)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+21)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+20,jvj+21,103,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+23,jvj+22,jvj+12)*/
pile[v[22]]=XV; pile[WZ1]=763; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(XV,763,jvj+12)*/
goto l5;
l6:pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+13,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+16,jvj+17)*/
x[jvj+30]=x[jvj+17] ;z[jvj+30]=z[jvj+17];
if((V27=w[x[jvj+30]][1])==incon) goto l3;
if((V27==23)) goto l3;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=8; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,8,jvj+25)*/
pile[WZ3]=jvj+30; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+30,jvj+29)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V25; pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(100,21,140,V25,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; pile[WZ2]=103; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+26,jvj+27,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+29,jvj+28,jvj+18)*/
pile[v[22]]=XV; pile[WZ1]=763; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(XV,763,jvj+18)*/
goto l3;
}
