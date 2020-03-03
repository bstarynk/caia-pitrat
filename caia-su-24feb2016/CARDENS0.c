#include "dx.h"
void CARDENS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V22=0,V20=0,V10=0,V3=0,V4=0,V9=0,V8=0,V2=0,V15=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=10800;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==457&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=667; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(667,A,R)*/
R=pile[WZ2]; 
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l2:x[jvj+3]=s[x[jvj+21]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+21];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=44)) goto l3;
pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+3,jvj+6)*/
pile[v[22]]=jvj+6; 
(*f[457])( );if(v[102]) goto l3;     /*CARDENS0(jvj+6,V22)*/
V22=pile[WZ1]; 
pile[v[22]]=jvj+7; pile[WZ1]=117; pile[WZ2]=V22; 
(*f[818])( );     /*MTC0(jvj+7,117,V22)*/
l3:x[jvj+21]=t[x[jvj+21]];
l1:if((x[jvj+21]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+7,V20)*/
V20=pile[WZ2]; 
R=V20;
goto l12;
l4:pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,A,V10)*/
V10=pile[WZ2]; 
if((V10==(-1278))) goto l5;
pile[v[22]]=V10; 
(*f[817])( );if(v[102]) goto l6;     /*CARDENS1(V10,R)*/
R=pile[WZ1]; 
goto l12;
l5:R=0;
goto l12;
l6:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,A,jvj+8)*/
if((x[jvj+8]==61)) goto l7;
if((x[jvj+8]==128)) goto l8;
if((x[jvj+8]!=448)) goto l9;
pile[v[22]]=111; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,A,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=128)) goto l9;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,A,jvj+15)*/
pile[v[22]]=jvj+15; 
(*f[457])( );if(v[102]) goto l9;     /*CARDENS0(jvj+15,R)*/
R=pile[WZ1]; 
goto l12;
l7:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,A,jvj+9)*/
pile[v[22]]=103; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,A,jvj+10)*/
x[jvj+11]=vo[16];z[jvj+11]=vz[16];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+10; 
(*f[816])( );if(v[102]) goto l9;     /*VALEXP0(jvj+11,jvj+10,V3)*/
V3=pile[WZ2]; 
pile[WZ1]=jvj+9; 
(*f[816])( );if(v[102]) goto l9;     /*VALEXP0(jvj+11,jvj+9,V4)*/
V4=pile[WZ2]; 
V9=V3-V4;
V8=V9+1;
R=V8;
goto l12;
l8:pile[v[22]]=128; pile[WZ1]=A; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(128,A,jvj+12)*/
for(i=x[jvj+12],V2=0;i>0;i=t[i],V2++)  ;
R=V2;
goto l12;
l9:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,A,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=172)) goto l10;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,A,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+18,V15)*/
V15=pile[WZ2]; 
if((V15!=0)) goto l10;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,A,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]==23)) goto l5;
l10:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,A,jvj+21)*/
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(1,117,jvj+7)*/
goto l1;
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
}
