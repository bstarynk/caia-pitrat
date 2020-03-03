#include "dx.h"
void PROCEDURALISZ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V23=0,V19=0,V25=0;
int X,AT,N,P;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=10228;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1240&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; AT=pile[v[22]+1]; N=pile[v[22]+2]; P=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,X,jvj+2)*/
if((x[jvj+2]!=22)) goto l1;
pile[v[22]]=102; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,X,jvj+3)*/
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,jvj+3,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,X,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=20)) goto l1;
pile[v[22]]=1687; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1687,jvj+3,jvj+6)*/
if((x[jvj+6]==0)) goto l1;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,X,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1424; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,1424,jvj+21)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+21; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+21,jvj+9)*/
x[jvj+8]=0 ;z[jvj+8]=0;
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V8; pile[WZ4]=jvj+10; 
(*f[270])( );     /*QUADRI7(100,21,140,V8,jvj+10)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+8; pile[WZ2]=N; pile[WZ3]=102; pile[WZ4]=jvj+9; pile[WZ5]=jvj+10; 
(*f[1508])( );     /*PROCEDURALISB0(jvj+6,jvj+8,N,102,jvj+9,jvj+10)*/
pile[v[22]]=X; pile[WZ1]=102; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(X,102,jvj+9)*/
l1:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,X,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=1698)) goto l2;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,X,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+13,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,X,jvj+14)*/
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+14,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=1687; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1687,jvj+13,jvj+15)*/
if((x[jvj+15]==0)) goto l2;
x[jvj+16]=0 ;z[jvj+16]=0;
V25=x[X];
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V23; pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(100,21,140,V23,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=N; pile[WZ3]=jvj+17; pile[WZ4]=AT; pile[WZ5]=P; pile[v[22]+6]=V19; pile[v[22]+7]=jvj+18; 
(*f[1509])( );     /*PROCEDURALISA0(jvj+15,jvj+16,N,jvj+17,AT,P,V19,jvj+18)*/
pile[v[22]]=AT; pile[WZ1]=P; pile[WZ2]=V25; 
(*f[134])( );     /*OTA0(AT,P,V25)*/
l2:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,X,jvj+19)*/
l3:if((x[jvj+19]>0)) goto l4;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l4:x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=jvj+20; pile[WZ1]=107; pile[WZ2]=N; pile[WZ3]=jvj+20; 
(*f[1240])( );     /*PROCEDURALISZ0(jvj+20,107,N,jvj+20)*/
x[jvj+19]=t[x[jvj+19]];
goto l3;
}
