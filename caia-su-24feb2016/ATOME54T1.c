#include "dx.h"
void ATOME54T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V22=0,V14=0,L=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=20054;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3328&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,R,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l7;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+8,V22)*/
V22=pile[WZ2]; 
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
x[jvj+9]=d[20];z[jvj+9]=0;
l3:if((x[jvj+9]<=0)) goto l7;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+10,R,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=484)) goto l4;
pile[v[22]]=268; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(268,jvj+10,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+13,R,jvj+14)*/
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+14,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+11,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+15,jvj+16)*/
if(x[jvj+16]!=96&&x[jvj+16]!=89&&x[jvj+16]!=41&&x[jvj+16]!=20&&x[jvj+16]!=128&&x[jvj+16]!=570&&x[jvj+16]!=1317) goto l4;
L=V14;
x[jvj+25]=x[jvj+4] ;z[jvj+25]=z[jvj+4];
l5:if((x[jvj+25]<=0)) goto l4;
x[jvj+17]=s[x[jvj+25]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+25];
pile[v[22]]=L; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[3105])( );if(v[102]) goto l6;     /*TROUVE0(L,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+23)*/
pile[WZ1]=jvj+17; pile[WZ3]=(-656); pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(101,jvj+17,110,(-656),jvj+24)*/
pile[v[22]]=V22; pile[WZ1]=858; pile[WZ2]=jvj+20; 
(*f[46])( );     /*TRI0(V22,858,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,v[13],642,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=3328; pile[WZ2]=246; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,3328,246,jvj+22)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20054; pile[WZ4]=jvj+22; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(158,1,218,20054,jvj+22,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=159; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+19,159,jvj+23)*/
pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+19,159,jvj+24)*/
pile[WZ1]=489; pile[WZ2]=jvj+17; pile[WZ3]=jvj+18; 
(*f[1753])( );     /*LIER1(jvj+19,489,jvj+17,jvj+18)*/
l6:x[jvj+25]=t[x[jvj+25]];
goto l5;
l2:x[jvj+5]=s[x[jvj+3]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+9]=t[x[jvj+9]];
goto l3;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
