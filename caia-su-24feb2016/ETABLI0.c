#include "dx.h"
void ETABLI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V20=0,V=0;
int A,B;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=15;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=incon;
if((x[A]!=630)) goto l1;
x[R]=135 ;z[R]=135;
l1:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,B,jvj+1)*/
if((x[jvj+1]!=484)) goto l2;
pile[v[22]]=B; pile[WZ1]=jvj+2; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(B,jvj+2)*/
l3:if(x[A]!=473&&x[A]!=472&&x[A]!=750&&x[A]!=688&&x[A]!=662&&x[A]!=663) goto l4;
pile[v[22]]=277; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(277,jvj+2,jvj+3)*/
if(x[jvj+3]!=480&&x[jvj+3]!=481) goto l4;
pile[v[22]]=498; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(498,jvj+2,jvj+4)*/
l9:if(x[R]==incon) goto l10;
l15:v[0]=jvj; v[22]-=3; return;
l2:x[jvj+2]=x[B] ;z[jvj+2]=z[B];
goto l3;
l4:x[jvj+4]=x[jvj+2] ;z[jvj+4]=z[jvj+2];
goto l9;
l5:x[jvj+15]=incon;
pile[v[22]]=489; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(489,jvj+4,jvj+5)*/
if((x[jvj+5]!=0)) goto l6;
x[jvj+15]=134 ;z[jvj+15]=134;
l11:x[R]=x[jvj+15] ;z[R]=z[jvj+15];
goto l15;
l6:x[jvj+15]=135 ;z[jvj+15]=135;
goto l11;
l8:x[jvj+7]=t[x[jvj+7]];
l7:if((x[jvj+7]<=0)) goto l14;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=448)) goto l8;
pile[v[22]]=436; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(436,jvj+8,jvj+10)*/
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+10,V15)*/
V15=pile[WZ2]; 
if((V!=V15)) goto l8;
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+8,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=128)) goto l8;
pile[v[22]]=294; pile[WZ1]=jvj+8; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(294,jvj+8,jvj+14)*/
if((x[jvj+14]==68)) goto l12;
l14:x[R]=134 ;z[R]=134;
goto l15;
l10:if((x[A]==489)) goto l5;
if(x[A]!=688&&x[A]!=750&&x[A]!=472&&x[A]!=473&&x[A]!=280&&x[A]!=164&&x[A]!=662&&x[A]!=663) goto l13;
pile[v[22]]=jvj+4; pile[WZ1]=A; pile[WZ3]=jvj+13; 
(*f[45])( );if(v[102]) goto l13;     /*FNDZ0(jvj+4,A,V20,jvj+13)*/
V20=pile[WZ2]; 
l12:x[R]=135 ;z[R]=135;
goto l15;
l13:if((x[A]!=294)) goto l14;
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+4,V)*/
V=pile[WZ2]; 
x[jvj+6]=vo[16];z[jvj+6]=vz[16];
pile[v[22]]=448; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(448,jvj+6,jvj+7)*/
goto l7;
}
