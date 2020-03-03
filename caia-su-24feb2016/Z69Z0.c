#include "dx.h"
void Z69Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V28=0,V29=0,V13=0,K=0,V5=0,V23=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=15570;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1875&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,NNNY,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=326)) goto l5;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,NNNY,jvj+4)*/
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+4,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,NNNY,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=484)) goto l1;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+7; 
(*f[200])( );if(v[102]) goto l1;     /*NDD0(jvj+5,jvj+7)*/
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(164,jvj+7,V28)*/
V28=pile[WZ2]; 
if((V28>=V24)) goto l1;
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(280,jvj+7,V29)*/
V29=pile[WZ2]; 
if((V29<0)) goto l1;
NNNT=27;
pile[v[22]]=NNNY; pile[WZ1]=jvj+5; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+5,NNNX)*/
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l1:if((V24<=0)) goto l5;
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+5,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=486)) goto l5;
pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+10)*/
x[jvj+26]=x[jvj+10] ;z[jvj+26]=z[jvj+10];
l2:if((x[jvj+26]<=0)) goto l5;
x[jvj+11]=s[x[jvj+26]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+26];
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+11,V13)*/
V13=pile[WZ2]; 
K=V13;
V5=abs(K);
if((V5<V24)) goto l3;
x[jvj+27]=x[jvj+10] ;z[jvj+27]=z[jvj+10];
l7:if((x[jvj+27]>0)) goto l8;
l3:x[jvj+26]=t[x[jvj+26]];
goto l2;
l5:x[NNNX]=NNNT=incon;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l8:x[jvj+22]=s[x[jvj+27]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+27];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+11; pile[WZ2]=jvj+23; 
(*f[760])( );     /*MEMEX0(jvj+22,jvj+11,jvj+23)*/
if((x[jvj+23]==135)) goto l9;
x[jvj+27]=t[x[jvj+27]];
goto l7;
l9:x[jvj+24]=0 ;z[jvj+24]=0;
x[jvj+28]=x[jvj+10] ;z[jvj+28]=z[jvj+10];
l10:if((x[jvj+28]>0)) goto l11;
x[jvj+12]=x[jvj+24] ;z[jvj+12]=z[jvj+24];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[299])( );     /*COPEL0(jvj+12,jvj+13)*/
V23=K%V24;
NNNT=20;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=326; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+15)*/
pile[WZ3]=486; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+20)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V23; pile[WZ4]=jvj+21; 
(*f[192])( );     /*QUADRI4(100,41,130,V23,jvj+21)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+20,jvj+19)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+19; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+13,jvj+19,107)*/
pile[v[22]]=jvj+19; pile[WZ1]=107; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+19,107,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V24; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,V24,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; pile[WZ2]=103; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+16,jvj+17,103,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+18; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+18,jvj+14)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+14; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+14,NNNX)*/
goto l6;
l11:x[jvj+25]=s[x[jvj+28]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+28];
if((x[jvj+25]==x[jvj+22])) goto l12;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[68])( );     /*PLUE0(jvj+24,jvj+25)*/
l12:x[jvj+28]=t[x[jvj+28]];
goto l10;
}
