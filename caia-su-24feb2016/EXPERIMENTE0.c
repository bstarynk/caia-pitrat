#include "dx.h"
void EXPERIMENTE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,KR=0,V8=0,V7=0,V3=0,V5=0,V=0,V9=0,V14=0,V40=0,V6=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=11498;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==169&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=37; 
(*f[346])( );     /*LK1(37)*/
V1=bh[v[1]][0];
V2=bh[v[1]][1];
KR=V1;
if((KR!=78)) goto l9;
pile[v[22]]=2; 
(*f[107])( );     /*CRC0(2,V3)*/
V3=pile[WZ1]; 
pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+2; 
(*f[78])( );if(v[102]) goto l9;     /*SMA0(1,64,67,jvj+2)*/
V5=incon;
V8=V3+1;
V7=bh[v[1]][V8];
V40=V7;
if((V40>=97)) goto l12;
if((V40<65)) goto l10;
if((V40<=90)) goto l11;
l10:V6=134;
l1:if((V6==135)) goto l2;
V5=((-7141));
l3:x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
V=V5;
if((V==(-7141))) goto l4;
pile[v[22]]=878; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(878,jvj+3,jvj+5)*/
l5:if((x[jvj+5]<=0)) goto l9;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=163; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(163,jvj+6,V14)*/
V14=pile[WZ2]; 
if((V14!=V)) goto l6;
x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
l7:if(KR!=78) goto l9;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[550])( );     /*PARAMEXP0(jvj+7,jvj+8)*/
pile[v[22]]=288; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(288,jvj+8,jvj+9)*/
if((x[jvj+9]==1440)) goto l8;
if((x[jvj+9]!=1441)) goto l9;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+7; 
(*f[552])( );     /*EXPACC0(jvj+8,jvj+7)*/
l9:x[jvj+1]=incon; v[0]=jvj; return;
l2:pile[v[22]]=V3; 
(*f[258])( );     /*SMV1(V3,V5)*/
V5=pile[WZ1]; 
goto l3;
l4:pile[v[22]]=878; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(878,jvj+3,jvj+4)*/
for(i=x[jvj+4],V9=0;i>0;i=t[i],V9++)  ;
if((V9!=1)) goto l9;
if((x[jvj+4]<=0)) goto l9;
x[jvj+10]=s[x[jvj+4]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+4];
x[jvj+7]=x[jvj+10] ;z[jvj+7]=z[jvj+10];
goto l7;
l6:x[jvj+5]=t[x[jvj+5]];
goto l5;
l8:pile[v[22]]=jvj+8; pile[WZ1]=jvj+7; 
(*f[551])( );     /*EXPRES0(jvj+8,jvj+7)*/
goto l9;
l11:V6=135;
goto l1;
l12:if((V40<=122)) goto l11;
goto l10;
}
