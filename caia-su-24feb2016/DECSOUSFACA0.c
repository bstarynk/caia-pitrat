#include "dx.h"
void DECSOUSFACA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0;
int EA;
int T;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

EA=pile[v[22]]; T=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+7]=x[jvj+11] ;z[jvj+7]=z[jvj+11];
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+4; 
(*f[54])( );     /*TRI1(250,158,jvj+4)*/
x[jvj+1]=0 ;z[jvj+1]=0;
x[jvj+10]=x[EA] ;z[jvj+10]=z[EA];
l1:if((x[jvj+10]>0)) goto l2;
x[jvj+9]=x[jvj+1] ;z[jvj+9]=z[jvj+1];
x[jvj+12]=x[jvj+9] ;z[jvj+12]=z[jvj+9];
l3:if((x[jvj+12]<=0)) goto l9;
x[jvj+8]=s[x[jvj+12]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+12];
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l4;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
for(a=x[EA];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l5;
l6:pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+3,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=218; pile[WZ1]=jvj+8; pile[WZ2]=510; pile[WZ3]=V5; pile[WZ4]=jvj+6; 
(*f[192])( );     /*QUADRI4(218,jvj+8,510,V5,jvj+6)*/
pile[v[22]]=158; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(158,jvj+4,jvj+5)*/
if((x[jvj+5]==250)) goto l8;
l7:pile[v[22]]=jvj+6; pile[WZ1]=498; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+6,498,jvj+4)*/
l8:pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+4; pile[WZ1]=120; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+4,120,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+9; pile[WZ2]=jvj+7; pile[WZ3]=EA; 
(*f[4076])( );     /*DECSOUSFACA1(jvj+6,jvj+9,jvj+7,EA)*/
l9:pile[v[22]]=120; pile[WZ1]=jvj+4; pile[WZ2]=T; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(120,jvj+4,T)*/
v[0]=jvj; v[22]-=2; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+10]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+10];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+1,jvj+2)*/
x[jvj+10]=t[x[jvj+10]];
goto l1;
l4:x[jvj+12]=t[x[jvj+12]];
goto l3;
l5:pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+3,117,1)*/
goto l6;
l10:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
