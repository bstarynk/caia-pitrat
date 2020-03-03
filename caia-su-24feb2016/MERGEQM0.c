#include "dx.h"
void MERGEQM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,Q=0,V9=0,V35=0,I=0,V24=0,V37=0,J=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=11902;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1032&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,A,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=625)) goto l6;
pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,B,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=625)) goto l6;
pile[v[22]]=160; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(160,A,jvj+6)*/
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+6,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=B; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(160,B,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+7,Q)*/
Q=pile[WZ2]; 
x[jvj+8]=d[20];z[jvj+8]=0;
l1:if((x[jvj+8]<=0)) goto l6;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=268; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+9,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+10,A,jvj+11)*/
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+11,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=jvj+9; pile[WZ3]=jvj+12; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(A,jvj+9,V35,jvj+12)*/
V35=pile[WZ2]; 
x[jvj+18]=V35 ;z[jvj+18]=(x[jvj+12]==20&&V35<=sepcte) ? V35 : (x[jvj+12]==41) ? (-1000) : 0;
I=V9;
x[jvj+21]=x[jvj+18] ;z[jvj+21]=z[jvj+18];
x[jvj+13]=d[20];z[jvj+13]=0;
l3:if((x[jvj+13]<=0)) goto l2;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=268; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(268,jvj+14,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=B; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+15,B,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+16,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=B; pile[WZ1]=jvj+14; pile[WZ3]=jvj+17; 
(*f[45])( );if(v[102]) goto l4;     /*FNDZ0(B,jvj+14,V37,jvj+17)*/
V37=pile[WZ2]; 
x[jvj+19]=V37 ;z[jvj+19]=(x[jvj+17]==20&&V37<=sepcte) ? V37 : (x[jvj+17]==41) ? (-1000) : 0;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[760])( );     /*MEMEX0(jvj+18,jvj+19,jvj+20)*/
if((x[jvj+20]==135)) goto l5;
l4:x[jvj+13]=t[x[jvj+13]];
goto l3;
l2:x[jvj+8]=t[x[jvj+8]];
goto l1;
l5:J=V24;
pile[v[22]]=I; pile[WZ1]=V18; pile[WZ2]=J; pile[WZ3]=Q; pile[WZ4]=jvj+21; pile[WZ5]=jvj+22; 
(*f[1362])( );if(v[102]) goto l4;     /*FUSEQM0(I,V18,J,Q,jvj+21,jvj+22)*/
x[R]=x[jvj+22] ;z[R]=z[jvj+22];
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
