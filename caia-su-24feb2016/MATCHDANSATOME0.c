#include "dx.h"
void MATCHDANSATOME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V11=0,V12=0,V15=0,V2=0,V17=0,F=0,V19=0,V16=0,V18=0;
int S;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=11476;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==531&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(1484,854,V13)*/
V13=pile[WZ2]; 
V11=sepfacts+1;
V12=sepfacts+V13;
l1:if((V11>V12)) goto l8;
V15=r[V11];
if((V15!=1)) goto l2;
x[jvj+2]=V11 ;z[jvj+2]=(V11<=sepcte) ? V11 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(905,jvj+2,V2)*/
V2=pile[WZ2]; 
if((V2==(-9113))) goto l3;
if((V2==S)) goto l3;
l2:V11++;
goto l1;
l3:pile[v[22]]=184; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(184,jvj+2,jvj+3)*/
V17=x[jvj+2];
x[jvj+10]=x[jvj+3] ;z[jvj+10]=z[jvj+3];
l4:if((x[jvj+10]<=0)) goto l2;
x[jvj+4]=s[x[jvj+10]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+10];
pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+5)*/
x[jvj+11]=x[jvj+5] ;z[jvj+11]=z[jvj+5];
l5:if((x[jvj+11]>0)) goto l6;
x[jvj+10]=t[x[jvj+10]];
goto l4;
l6:x[jvj+6]=s[x[jvj+11]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+11];
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=22)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+6,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+8,jvj+9)*/
F=x[jvj+9];
if(F!=278&&F!=910) goto l7;
V19=x[jvj+6];
pile[v[22]]=20; pile[WZ1]=V17; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V17,0,V16)*/
V16=pile[WZ3]; 
pile[WZ1]=V19; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(20,V19,V16,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; 
(*f[40])( );     /*SLG0(V18)*/
l7:x[jvj+11]=t[x[jvj+11]];
goto l5;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
