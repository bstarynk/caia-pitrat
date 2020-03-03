#include "dx.h"
void PROCEDURALISB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int E,EE,N,AT,P,Z;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=11694;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1508&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; EE=pile[v[22]+1]; N=pile[v[22]+2]; AT=pile[v[22]+3]; P=pile[v[22]+4]; Z=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[P] ;z[jvj+3]=z[P];
x[jvj+4]=x[AT] ;z[jvj+4]=z[AT];
l3:x[jvj+16]=x[E] ;z[jvj+16]=z[E];
l1:if((x[jvj+16]>0)) goto l2;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=Z; 
(*f[35])( );     /*CHGC1(jvj+3,jvj+4,Z)*/
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; return;
l2:x[jvj+2]=s[x[jvj+16]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+16];
for(a=x[EE];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l4;
x[jvj+5]=x[jvj+2] ;z[jvj+5]=z[jvj+2];
pile[v[22]]=EE; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(EE,jvj+2)*/
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=1719)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+5,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+5,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1781; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,1781,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=111; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,111,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+11; pile[WZ2]=103; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+14,jvj+11,103,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+15; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+9,jvj+15,jvj+12)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+12; 
(*f[35])( );     /*CHGC1(jvj+3,jvj+4,jvj+12)*/
x[jvj+4]=160 ;z[jvj+4]=160;
x[jvj+3]=x[jvj+12] ;z[jvj+3]=z[jvj+12];
goto l3;
l4:x[jvj+16]=t[x[jvj+16]];
goto l1;
}
