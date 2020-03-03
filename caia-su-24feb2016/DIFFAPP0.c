#include "dx.h"
void DIFFAPP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V5=0,V4=0;
int A,B;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=x[jvj+3]=incon;
for(a=x[B];a>0;a=t[a]) if(s[a]==x[A]) goto l2;
l1:pile[v[22]]=277; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(277,A,jvj+1)*/
if((x[jvj+1]==480)) goto l4;
l3:x[jvj+3]=x[A] ;z[jvj+3]=z[A];
l4:if(x[R]==incon) goto l5;
l17:v[0]=jvj; v[22]-=3; return;
l2:pile[v[22]]=277; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(277,A,jvj+2)*/
if((x[jvj+2]!=480)) goto l1;
x[R]=134 ;z[R]=134;
goto l1;
l5:if(x[jvj+3]!=incon) goto l6;
l16:x[R]=135 ;z[R]=135;
goto l17;
l6:pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+3,jvj+4)*/
x[jvj+9]=x[B] ;z[jvj+9]=z[B];
l7:if((x[jvj+9]<=0)) goto l10;
x[jvj+5]=s[x[jvj+9]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+9];
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==x[jvj+4])) goto l9;
l8:x[jvj+9]=t[x[jvj+9]];
goto l7;
l9:x[R]=134 ;z[R]=134;
goto l17;
l10:pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+3,V2)*/
V2=pile[WZ2]; 
x[jvj+10]=x[B] ;z[jvj+10]=z[B];
l11:if((x[jvj+10]<=0)) goto l13;
x[jvj+7]=s[x[jvj+10]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+10];
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+7,V1)*/
V1=pile[WZ2]; 
if((V1==V2)) goto l9;
l12:x[jvj+10]=t[x[jvj+10]];
goto l11;
l13:pile[v[22]]=162; pile[WZ1]=jvj+3; 
(*f[219])( );if(v[102]) goto l16;     /*FNDC2(162,jvj+3,V5)*/
V5=pile[WZ2]; 
x[jvj+11]=x[B] ;z[jvj+11]=z[B];
l14:if((x[jvj+11]<=0)) goto l16;
x[jvj+8]=s[x[jvj+11]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+11];
pile[v[22]]=162; pile[WZ1]=jvj+8; 
(*f[219])( );if(v[102]) goto l15;     /*FNDC2(162,jvj+8,V4)*/
V4=pile[WZ2]; 
if((V4==V5)) goto l9;
l15:x[jvj+11]=t[x[jvj+11]];
goto l14;
}
