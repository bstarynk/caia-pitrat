#include "dx.h"
void COPREW0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V12=0,V13=0,V15=0,V10=0,V17=0;
int A;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=15;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+12]=incon;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,A,jvj+1)*/
x[jvj+12]=x[jvj+1] ;z[jvj+12]=z[jvj+1];
l2:x[jvj+11]=x[jvj+12] ;z[jvj+11]=z[jvj+12];
pile[v[22]]=jvj+11; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(jvj+11,100,R)*/
if((x[jvj+11]!=250)) goto l3;
V14=x[A];
pile[v[22]]=20; pile[WZ1]=11813; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11813,0,V12)*/
V12=pile[WZ3]; 
pile[WZ1]=V14; pile[WZ2]=V12; 
(*f[39])( );     /*SDX0(20,V14,V12,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=V13; 
(*f[40])( );     /*SLG0(V13)*/
l3:if((x[jvj+2]=w[x[jvj+11]][3])==incon) goto l4;
pile[v[22]]=A; pile[WZ1]=jvj+2; pile[WZ3]=jvj+3; 
(*f[45])( );if(v[102]) goto l4;     /*FNDZ0(A,jvj+2,V15,jvj+3)*/
V15=pile[WZ2]; 
V10=V15;
V17=V10;
pile[v[22]]=R; pile[WZ2]=V17; 
(*f[43])( );     /*CHGC2(R,jvj+2,V17)*/
l4:x[jvj+13]=w[x[jvj+11]][9];
l5:if((x[jvj+13]>0)) goto l6;
x[jvj+14]=w[x[jvj+11]][8];
l8:if((x[jvj+14]>0)) goto l9;
v[0]=jvj; v[22]-=2; return;
l1:x[jvj+12]=250 ;z[jvj+12]=250;
goto l2;
l6:x[jvj+4]=s[x[jvj+13]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+13];
pile[v[22]]=jvj+4; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+4,A,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[935])( );     /*COPREW0(jvj+5,jvj+6)*/
pile[v[22]]=R; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(R,jvj+4,jvj+6)*/
l7:x[jvj+13]=t[x[jvj+13]];
goto l5;
l9:x[jvj+7]=s[x[jvj+14]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+14];
pile[v[22]]=jvj+7; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,A,jvj+8)*/
x[jvj+15]=x[jvj+8] ;z[jvj+15]=z[jvj+8];
l10:if((x[jvj+15]>0)) goto l11;
x[jvj+14]=t[x[jvj+14]];
goto l8;
l11:x[jvj+9]=s[x[jvj+15]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+15];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[935])( );     /*COPREW0(jvj+9,jvj+10)*/
pile[v[22]]=R; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(R,jvj+7,jvj+10)*/
x[jvj+15]=t[x[jvj+15]];
goto l10;
}
