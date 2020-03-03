#include "dx.h"
void COEFFDEG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0;
int B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=incon;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(250,158,jvj+1)*/
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,A,jvj+4)*/
if((x[jvj+4]!=22)) goto l5;
pile[v[22]]=111; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,A,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+5,jvj+6)*/
pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1564,145,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l4;
l5:x[jvj+10]=x[A] ;z[jvj+10]=z[A];
l6:pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[1964])( );     /*SETERM0(jvj+10,jvj+11)*/
l7:if((x[jvj+11]>0)) goto l8;
if(x[jvj+9]!=incon) goto l9;
l1:pile[v[22]]=763; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(763,jvj+1,jvj+2)*/
l2:if((x[jvj+2]<=0)) goto l11;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+3,V11)*/
V11=pile[WZ2]; 
if((V11!=B)) goto l3;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(510,jvj+3,R)*/
R=pile[WZ2]; 
l12:v[0]=jvj; v[22]-=3; pile[v[22]+2]=R; return;
l3:x[jvj+2]=t[x[jvj+2]];
goto l2;
l4:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,A,jvj+8)*/
pile[v[22]]=103; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,A,jvj+9)*/
x[jvj+10]=x[jvj+8] ;z[jvj+10]=z[jvj+8];
goto l6;
l8:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+1; pile[WZ2]=36; 
(*f[2075])( );     /*COEFFDEGA0(jvj+12,jvj+1,36)*/
x[jvj+11]=t[x[jvj+11]];
goto l7;
l9:pile[v[22]]=jvj+9; pile[WZ1]=jvj+13; 
(*f[1964])( );     /*SETERM0(jvj+9,jvj+13)*/
l10:if((x[jvj+13]<=0)) goto l1;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+1; pile[WZ2]=52; 
(*f[2075])( );     /*COEFFDEGA0(jvj+14,jvj+1,52)*/
x[jvj+13]=t[x[jvj+13]];
goto l10;
l11:R=0;
goto l12;
}
