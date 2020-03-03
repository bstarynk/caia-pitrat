#include "dx.h"
void ATOME54T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,V14=0,L=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=20054;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3257&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=25)) goto l6;
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+4,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(R,jvj+5)*/
x[jvj+6]=d[20];z[jvj+6]=0;
l1:if((x[jvj+6]<=0)) goto l6;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+7,R,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=484)) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+7,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+10,R,jvj+11)*/
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+11,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+8,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+12,jvj+13)*/
if(x[jvj+13]!=96&&x[jvj+13]!=89&&x[jvj+13]!=41&&x[jvj+13]!=20&&x[jvj+13]!=128&&x[jvj+13]!=570&&x[jvj+13]!=1317) goto l2;
L=V14;
x[jvj+23]=x[jvj+5] ;z[jvj+23]=z[jvj+5];
l3:if((x[jvj+23]<=0)) goto l2;
x[jvj+14]=s[x[jvj+23]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+23];
pile[v[22]]=509; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[1969])( );     /*FNDEND0(509,jvj+14,jvj+15)*/
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==x[R]) goto l5;
l4:x[jvj+23]=t[x[jvj+23]];
goto l3;
l2:x[jvj+6]=t[x[jvj+6]];
goto l1;
l5:pile[v[22]]=L; pile[WZ1]=jvj+14; pile[WZ2]=jvj+16; 
(*f[3105])( );if(v[102]) goto l4;     /*TROUVE0(L,jvj+14,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+21)*/
pile[WZ1]=jvj+14; pile[WZ3]=(-656); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,jvj+14,110,(-656),jvj+22)*/
pile[v[22]]=V21; pile[WZ1]=858; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(V21,858,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,v[13],642,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=3257; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,3257,246,jvj+20)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20054; pile[WZ4]=jvj+20; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(158,1,218,20054,jvj+20,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=159; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+21)*/
pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+22)*/
pile[WZ1]=489; pile[WZ2]=jvj+14; pile[WZ3]=jvj+16; 
(*f[1753])( );     /*LIER1(jvj+17,489,jvj+14,jvj+16)*/
goto l4;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
