#include "dx.h"
void DECSOUSFACA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int S,E,EE,EA;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

S=pile[v[22]]; E=pile[v[22]+1]; EE=pile[v[22]+2]; EA=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[S] ;z[jvj+2]=z[S];
l2:x[jvj+6]=x[E] ;z[jvj+6]=z[E];
l1:if((x[jvj+6]<=0)) goto l8;
x[jvj+5]=s[x[jvj+6]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+6];
for(a=x[EE];a>0;a=t[a]) if(s[a]==x[jvj+5]) goto l3;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+1; 
(*f[46])( );     /*TRI0(0,117,jvj+1)*/
for(a=x[EA];a>0;a=t[a]) if(s[a]==x[jvj+5]) goto l4;
l5:pile[v[22]]=117; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+1,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=218; pile[WZ1]=jvj+5; pile[WZ2]=510; pile[WZ3]=V1; pile[WZ4]=jvj+4; 
(*f[192])( );     /*QUADRI4(218,jvj+5,510,V1,jvj+4)*/
pile[v[22]]=158; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(158,jvj+2,jvj+3)*/
if((x[jvj+3]==250)) goto l7;
l6:pile[v[22]]=jvj+4; pile[WZ1]=498; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(jvj+4,498,jvj+2)*/
l7:pile[v[22]]=EE; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(EE,jvj+5)*/
pile[v[22]]=jvj+2; pile[WZ1]=120; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+2,120,jvj+4)*/
x[jvj+2]=x[jvj+4] ;z[jvj+2]=z[jvj+4];
goto l2;
l3:x[jvj+6]=t[x[jvj+6]];
goto l1;
l4:pile[v[22]]=jvj+1; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+1,117,1)*/
goto l5;
l8:v[0]=jvj; v[22]-=4; return;
}
