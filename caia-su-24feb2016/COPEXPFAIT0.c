#include "dx.h"
void COPEXPFAIT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V14=0,V15=0,V17=0,V12=0,V19=0;
int A;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+13]=incon;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,A,jvj+1)*/
x[jvj+13]=x[jvj+1] ;z[jvj+13]=z[jvj+1];
l2:x[jvj+12]=x[jvj+13] ;z[jvj+12]=z[jvj+13];
pile[v[22]]=jvj+12; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(jvj+12,100,R)*/
if((x[jvj+12]!=250)) goto l3;
V16=x[A];
pile[v[22]]=20; pile[WZ1]=1694; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,1694,0,V14)*/
V14=pile[WZ3]; 
pile[WZ1]=V16; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(20,V16,V14,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; 
(*f[40])( );     /*SLG0(V15)*/
l3:pile[v[22]]=191; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(191,A,jvj+2)*/
pile[v[22]]=R; pile[WZ1]=191; 
(*f[35])( );     /*CHGC1(R,191,jvj+2)*/
l4:if((x[jvj+3]=w[x[jvj+12]][3])==incon) goto l5;
pile[v[22]]=A; pile[WZ1]=jvj+3; pile[WZ3]=jvj+4; 
(*f[45])( );if(v[102]) goto l5;     /*FNDZ0(A,jvj+3,V17,jvj+4)*/
V17=pile[WZ2]; 
V12=V17;
V19=V12;
pile[v[22]]=R; pile[WZ2]=V19; 
(*f[43])( );     /*CHGC2(R,jvj+3,V19)*/
l5:x[jvj+14]=w[x[jvj+12]][9];
l6:if((x[jvj+14]>0)) goto l7;
x[jvj+15]=w[x[jvj+12]][8];
l9:if((x[jvj+15]>0)) goto l10;
v[0]=jvj; v[22]-=2; return;
l1:x[jvj+13]=250 ;z[jvj+13]=250;
goto l2;
l7:x[jvj+5]=s[x[jvj+14]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+14];
pile[v[22]]=jvj+5; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+5,A,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+6,jvj+7)*/
pile[v[22]]=R; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(R,jvj+5,jvj+7)*/
l8:x[jvj+14]=t[x[jvj+14]];
goto l6;
l10:x[jvj+8]=s[x[jvj+15]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+15];
pile[v[22]]=jvj+8; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(jvj+8,A,jvj+9)*/
x[jvj+16]=x[jvj+9] ;z[jvj+16]=z[jvj+9];
l11:if((x[jvj+16]>0)) goto l12;
x[jvj+15]=t[x[jvj+15]];
goto l9;
l12:x[jvj+10]=s[x[jvj+16]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+16];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+10,jvj+11)*/
pile[v[22]]=R; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(R,jvj+8,jvj+11)*/
x[jvj+16]=t[x[jvj+16]];
goto l11;
}
