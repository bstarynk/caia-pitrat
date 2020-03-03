#include "dx.h"
void COPEXP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V16=0,V17=0,V19=0,V14=0,V21=0;
int A;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=18;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=277; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(277,A,jvj+1)*/
if(x[jvj+1]!=480&&x[jvj+1]!=481) goto l1;
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=674; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(674,jvj+2,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==1453) goto l1;
x[R]=x[A] ;z[R]=z[A];
l12:v[0]=jvj; v[22]-=2; return;
l1:x[jvj+15]=incon;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,A,jvj+4)*/
x[jvj+15]=x[jvj+4] ;z[jvj+15]=z[jvj+4];
l3:x[jvj+14]=x[jvj+15] ;z[jvj+14]=z[jvj+15];
pile[v[22]]=jvj+14; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(jvj+14,100,R)*/
if((x[jvj+14]!=250)) goto l4;
V18=x[A];
pile[v[22]]=20; pile[WZ1]=10032; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10032,0,V16)*/
V16=pile[WZ3]; 
pile[WZ1]=V18; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(20,V18,V16,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=V17; 
(*f[40])( );     /*SLG0(V17)*/
pile[v[22]]=961; 
(*f[611])( );     /*ERRINCIDENT0(961)*/
l4:if((x[jvj+5]=w[x[jvj+14]][3])==incon) goto l5;
pile[v[22]]=A; pile[WZ1]=jvj+5; pile[WZ3]=jvj+6; 
(*f[45])( );if(v[102]) goto l5;     /*FNDZ0(A,jvj+5,V19,jvj+6)*/
V19=pile[WZ2]; 
V14=V19;
V21=V14;
pile[v[22]]=R; pile[WZ2]=V21; 
(*f[43])( );     /*CHGC2(R,jvj+5,V21)*/
l5:x[jvj+16]=w[x[jvj+14]][9];
l6:if((x[jvj+16]>0)) goto l7;
x[jvj+17]=w[x[jvj+14]][8];
l9:if((x[jvj+17]<=0)) goto l12;
x[jvj+10]=s[x[jvj+17]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+17];
pile[v[22]]=jvj+10; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(jvj+10,A,jvj+11)*/
x[jvj+18]=x[jvj+11] ;z[jvj+18]=z[jvj+11];
l10:if((x[jvj+18]>0)) goto l11;
x[jvj+17]=t[x[jvj+17]];
goto l9;
l2:x[jvj+15]=250 ;z[jvj+15]=250;
goto l3;
l7:x[jvj+7]=s[x[jvj+16]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+16];
pile[v[22]]=jvj+7; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+7,A,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=R; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(R,jvj+7,jvj+9)*/
l8:x[jvj+16]=t[x[jvj+16]];
goto l6;
l11:x[jvj+12]=s[x[jvj+18]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+18];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=R; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(R,jvj+10,jvj+13)*/
x[jvj+18]=t[x[jvj+18]];
goto l10;
}
