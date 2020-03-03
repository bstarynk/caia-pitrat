#include "dx.h"
void NONUL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,I=0,V37=0,V4=0,V7=0,V29=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,A,I)*/
I=pile[WZ2]; 
if((I!=0)) goto l6;
V37=0;
if((V37==I)) goto l7;
l8:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,A,jvj+6)*/
if((x[jvj+6]!=484)) goto l11;
pile[v[22]]=A; pile[WZ1]=jvj+7; 
(*f[200])( );if(v[102]) goto l11;     /*NDD0(A,jvj+7)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(280,jvj+7,V4)*/
V4=pile[WZ2]; 
if((V4>0)) goto l6;
l9:pile[v[22]]=164; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(164,jvj+7,V7)*/
V7=pile[WZ2]; 
if((V7<0)) goto l6;
l10:pile[v[22]]=365; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(365,jvj+7,jvj+8)*/
if((x[jvj+8]!=0)) goto l1;
l11:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,A,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]==596)) goto l12;
if((x[jvj+10]==485)) goto l3;
if((x[jvj+10]==52)) goto l13;
if((x[jvj+10]!=486)) goto l7;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,A,jvj+14)*/
l4:if((x[jvj+14]<=0)) goto l6;
x[jvj+4]=s[x[jvj+14]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+14];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[1446])( );     /*NONUL0(jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l5;
l7:x[R]=134 ;z[R]=134;
l14:v[0]=jvj; v[22]-=2; return;
l3:pile[v[22]]=A; pile[WZ1]=jvj+2; 
(*f[1352])( );     /*POSITIF0(A,jvj+2)*/
if((x[jvj+2]==135)) goto l6;
pile[WZ1]=jvj+3; 
(*f[1585])( );     /*NEGATIF0(A,jvj+3)*/
if((x[jvj+3]==135)) goto l6;
goto l7;
l5:x[jvj+14]=t[x[jvj+14]];
goto l4;
l6:x[R]=135 ;z[R]=135;
goto l14;
l12:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,A,jvj+11)*/
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+11,V29)*/
V29=pile[WZ2]; 
if((V29!=0)) goto l6;
goto l7;
l13:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,A,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[1446])( );     /*NONUL0(jvj+12,jvj+13)*/
if((x[jvj+13]==135)) goto l6;
goto l7;
l1:if((x[jvj+8]<=0)) goto l6;
x[jvj+1]=s[x[jvj+8]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+8];
pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+1,V11)*/
V11=pile[WZ2]; 
if((V11==0)) goto l11;
l2:x[jvj+8]=t[x[jvj+8]];
goto l1;
}
