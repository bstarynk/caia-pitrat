#include "dx.h"
void SUBSTITUTES0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RT=0;
int A,B,C;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; C=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
RT=incon;
pile[v[22]]=277; pile[WZ1]=B; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(277,B,jvj+1)*/
if((x[jvj+1]!=481)) goto l1;
pile[v[22]]=B; pile[WZ1]=jvj+2; 
(*f[1291])( );if(v[102]) goto l1;     /*CONVEXP0(B,jvj+2)*/
l2:pile[v[22]]=277; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(277,A,jvj+3)*/
if((x[jvj+3]!=480)) goto l3;
pile[v[22]]=A; pile[WZ1]=jvj+4; 
(*f[1290])( );if(v[102]) goto l3;     /*DEPEXP0(A,jvj+4)*/
l4:pile[v[22]]=C; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[760])( );     /*MEMEX0(C,jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l5;
pile[WZ1]=R; 
(*f[255])( );     /*COPEXP0(C,R)*/
l6:if(RT==incon) goto l7;
l14:v[0]=jvj; v[22]-=4; return;
l1:x[jvj+2]=x[B] ;z[jvj+2]=z[B];
goto l2;
l3:x[jvj+4]=x[A] ;z[jvj+4]=z[A];
goto l4;
l5:pile[v[22]]=jvj+2; pile[WZ1]=R; 
(*f[255])( );     /*COPEXP0(jvj+2,R)*/
RT=135;
goto l6;
l7:pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,R,jvj+6)*/
x[jvj+12]=w[x[jvj+6]][9];
l8:if((x[jvj+12]>0)) goto l9;
x[jvj+13]=w[x[jvj+6]][8];
l11:if((x[jvj+13]<=0)) goto l14;
x[jvj+9]=s[x[jvj+13]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+13];
pile[v[22]]=jvj+9; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(jvj+9,R,jvj+10)*/
x[jvj+14]=x[jvj+10] ;z[jvj+14]=z[jvj+10];
l12:if((x[jvj+14]>0)) goto l13;
x[jvj+13]=t[x[jvj+13]];
goto l11;
l9:x[jvj+7]=s[x[jvj+12]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+12];
pile[v[22]]=jvj+7; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+7,R,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ2]=jvj+7; pile[WZ3]=jvj+4; pile[WZ4]=jvj+2; 
(*f[1778])( );     /*SUBSTITUTION1(jvj+8,R,jvj+7,jvj+4,jvj+2)*/
l10:x[jvj+12]=t[x[jvj+12]];
goto l8;
l13:x[jvj+11]=s[x[jvj+14]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+14];
pile[v[22]]=jvj+11; pile[WZ1]=R; pile[WZ2]=jvj+9; pile[WZ3]=jvj+4; pile[WZ4]=jvj+2; 
(*f[1778])( );     /*SUBSTITUTION1(jvj+11,R,jvj+9,jvj+4,jvj+2)*/
x[jvj+14]=t[x[jvj+14]];
goto l12;
}
