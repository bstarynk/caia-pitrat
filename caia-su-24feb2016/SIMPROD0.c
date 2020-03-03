#include "dx.h"
void SIMPROD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V18=0,V3=0,V16=0,V7=0,V6=0,Q=0;
int R,QQ;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=11658;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1152&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; QQ=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=447; pile[WZ1]=QQ; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(447,QQ,jvj+4)*/
if((x[jvj+4]!=68)) goto l7;
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,R,jvj+5)*/
if((x[jvj+5]!=22)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,R,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+6,jvj+7)*/
if(x[jvj+7]!=25&&x[jvj+7]!=26&&x[jvj+7]!=27&&x[jvj+7]!=28&&x[jvj+7]!=29&&x[jvj+7]!=30) goto l7;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,R,jvj+8)*/
pile[v[22]]=103; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,R,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+10; 
(*f[1455])( );if(v[102]) goto l7;     /*SIMPRODA0(jvj+8,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+11; 
(*f[1455])( );if(v[102]) goto l7;     /*SIMPRODA0(jvj+9,jvj+11)*/
l2:if((x[jvj+11]<=0)) goto l7;
x[jvj+3]=s[x[jvj+11]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+11];
pile[v[22]]=510; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(510,jvj+3,V7)*/
V7=pile[WZ2]; 
x[jvj+21]=x[jvj+10] ;z[jvj+21]=z[jvj+10];
l4:if((x[jvj+21]<=0)) goto l3;
x[jvj+2]=s[x[jvj+21]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+21];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(510,jvj+2,V6)*/
V6=pile[WZ2]; 
if((V6!=V7)) goto l5;
V3=incon;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(515,jvj+2,V17)*/
V17=pile[WZ2]; 
pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(515,jvj+3,V18)*/
V18=pile[WZ2]; 
if((V17>V18)) goto l1;
V3=V17;
l6:Q=V3;
if((Q<=0)) goto l5;
pile[v[22]]=V6; pile[WZ1]=Q; pile[WZ2]=jvj+8; pile[WZ3]=jvj+12; 
(*f[1456])( );if(v[102]) goto l5;     /*SIMPRODEL0(V6,Q,jvj+8,jvj+12)*/
pile[WZ2]=jvj+9; pile[WZ3]=jvj+13; 
(*f[1456])( );if(v[102]) goto l5;     /*SIMPRODEL0(V6,Q,jvj+9,jvj+13)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+14)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+15)*/
x[RES]=x[R] ;z[RES]=z[R];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+7; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+7,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+15; pile[WZ2]=103; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+19,jvj+15,103,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+20; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+20,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=QQ; pile[WZ2]=jvj+17; 
(*f[1152])( );     /*SIMPROD0(jvj+16,QQ,jvj+17)*/
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:pile[v[22]]=515; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(515,jvj+3,V16)*/
V16=pile[WZ2]; 
V3=V16;
goto l6;
l3:x[jvj+11]=t[x[jvj+11]];
goto l2;
l5:x[jvj+21]=t[x[jvj+21]];
goto l4;
l7:x[RES]=x[R] ;z[RES]=z[R];
goto l8;
}
