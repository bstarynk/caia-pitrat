#include "dx.h"
void CMSSENS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,N=0,I=0,T=0,V3=0,V17=0,V7=0,V9=0,K=0,V6=0,V5=0;
int P,S,M;
int EZ;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=11440;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3635&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; S=pile[v[22]+1]; M=pile[v[22]+2]; EZ=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=x[jvj+15]=x[EZ]=incon;
x[jvj+27]=0 ;z[jvj+27]=0;
x[EZ]=x[jvj+27] ;z[EZ]=z[jvj+27];
for(i=x[S],V2=0;i>0;i=t[i],V2++)  ;
N=V2;
I=1;
T=0;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(250,158,jvj+17)*/
x[jvj+15]=x[jvj+17] ;z[jvj+15]=z[jvj+17];
if((T!=M)) goto l2;
if((I<=N)) goto l2;
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+4]=d[119];z[jvj+4]=0;
x[jvj+5]=x[jvj+17] ;z[jvj+5]=z[jvj+17];
l4:pile[v[22]]=120; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,jvj+5,jvj+6)*/
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+6,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(218,jvj+6,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1280; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,1280,jvj+20)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=P; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+22)*/
pile[WZ3]=V17; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,V17,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=160; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,160,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=111; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+19,jvj+20,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=103; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+21,jvj+22,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+23; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+23,jvj+9)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[196])( );     /*PLUF0(jvj+4,jvj+9,jvj+10)*/
l5:x[jvj+5]=x[jvj+6] ;z[jvj+5]=z[jvj+6];
goto l4;
l2:x[jvj+28]=x[S] ;z[jvj+28]=z[S];
l1:if((x[jvj+28]<=0)) goto l12;
x[jvj+3]=s[x[jvj+28]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+28];
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+3,V3)*/
V3=pile[WZ2]; 
if((V3!=I)) goto l3;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+3,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=195; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(195,jvj+3,jvj+13)*/
pile[v[22]]=218; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(218,jvj+3,jvj+14)*/
V9=I+1;
l9:if((x[jvj+13]<=0)) goto l12;
K=s[x[jvj+13]];
V6=V7*K;
V5=T+V6;
if((V5>M)) goto l10;
pile[v[22]]=117; pile[WZ1]=K; pile[WZ2]=218; pile[WZ3]=jvj+14; pile[WZ4]=jvj+16; 
(*f[567])( );     /*QUADRI11(117,K,218,jvj+14,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=120; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(jvj+15,120,jvj+16)*/
pile[v[22]]=N; pile[WZ1]=EZ; pile[WZ2]=V5; pile[WZ3]=V9; pile[WZ4]=jvj+17; pile[WZ5]=P; pile[v[22]+6]=S; pile[v[22]+7]=M; pile[v[22]+8]=jvj+16; 
(*f[4008])( );     /*CMSSENS1(N,EZ,V5,V9,jvj+17,P,S,M,jvj+16)*/
l10:x[jvj+13]=t[x[jvj+13]];
goto l9;
l3:x[jvj+28]=t[x[jvj+28]];
goto l1;
l6:if(x[jvj+10]!=incon) goto l7;
l8:if(x[jvj+15]!=incon) goto l2;
l12:if(x[EZ]!=incon) goto l13;
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l7:pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[299])( );     /*COPEL0(jvj+10,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+11; pile[WZ2]=107; pile[WZ3]=jvj+26; 
(*f[301])( );     /*TRI11(jvj+25,jvj+11,107,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+26,22,100,jvj+12)*/
pile[v[22]]=EZ; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(EZ,jvj+12)*/
goto l8;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
}
