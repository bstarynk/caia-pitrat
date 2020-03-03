#include "dx.h"
void MODVRAI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V14=0,V16=0,LL=0,M=0,V18=0,V7=0,V9=0,V3=0,V4=0,V8=0,V2=0,V19=0;
int N,P,D;
int NT,NH;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; P=pile[v[22]+1]; D=pile[v[22]+2]; v[22]+=5; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+1; 
(*f[46])( );     /*TRI0(0,117,jvj+1)*/
pile[v[22]]=1474; pile[WZ1]=D; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1474,D,jvj+6)*/
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+6,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(510,jvj+6,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=763; pile[WZ1]=1396; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(763,1396,jvj+7)*/
l6:if((x[jvj+7]<=0)) goto l10;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+8,V4)*/
V4=pile[WZ2]; 
V8=V9%V4;
if((V8!=0)) goto l7;
V2=V3%V4;
pile[v[22]]=1481; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1481,jvj+8,jvj+9)*/
x[jvj+11]=x[jvj+9] ;z[jvj+11]=z[jvj+9];
l8:if((x[jvj+11]<=0)) goto l7;
x[jvj+2]=s[x[jvj+11]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+11];
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+2,V7)*/
V7=pile[WZ2]; 
if((V7>N)) goto l9;
pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+1,V12)*/
V12=pile[WZ2]; 
if((V7<V12)) goto l9;
l2:pile[v[22]]=159; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(159,jvj+2,jvj+3)*/
x[jvj+10]=x[jvj+3] ;z[jvj+10]=z[jvj+3];
l3:if((x[jvj+10]<=0)) goto l9;
x[jvj+4]=s[x[jvj+10]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+10];
pile[v[22]]=510; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(510,jvj+4,V14)*/
V14=pile[WZ2]; 
if((V14!=P)) goto l4;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(515,jvj+4,V16)*/
V16=pile[WZ2]; 
LL=V16;
pile[v[22]]=447; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(447,jvj+4,jvj+5)*/
M=x[jvj+5];
if((M==68)) goto l1;
if((M!=67)) goto l4;
if((V2!=LL)) goto l5;
l4:x[jvj+10]=t[x[jvj+10]];
goto l3;
l1:if((V2==LL)) goto l5;
goto l4;
l5:pile[v[22]]=609; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(609,jvj+4,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=117; pile[WZ2]=V7; 
(*f[43])( );     /*CHGC2(jvj+1,117,V7)*/
pile[WZ1]=609; pile[WZ2]=V18; 
(*f[43])( );     /*CHGC2(jvj+1,609,V18)*/
goto l4;
l7:x[jvj+7]=t[x[jvj+7]];
goto l6;
l9:x[jvj+11]=t[x[jvj+11]];
goto l8;
l10:pile[v[22]]=117; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+1,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=609; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(609,jvj+1,NH)*/
NH=pile[WZ2]; 
NT=V19;
v[0]=jvj; v[22]-=5; pile[v[22]+3]=NT; pile[v[22]+4]=NH; v[102]=0;return;
l11:NT=NH=incon;
v[0]=jvj; v[22]-=5; v[102]=1;return;
}
