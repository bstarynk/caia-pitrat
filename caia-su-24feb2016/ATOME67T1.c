#include "dx.h"
void ATOME67T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0;
int D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=20067;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3440&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,jvj+3,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=921; pile[WZ1]=D; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(921,D,jvj+4)*/
pile[v[22]]=489; pile[WZ2]=jvj+5; 
(*f[1969])( );     /*FNDEND0(489,D,jvj+5)*/
if((x[jvj+5]!=0)) goto l1;
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+6]=s[x[jvj+16]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+16];
pile[v[22]]=365; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[1969])( );     /*FNDEND0(365,jvj+6,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l6;
l4:x[jvj+16]=t[x[jvj+16]];
l2:if((x[jvj+16]>0)) goto l3;
x[jvj+5]=t[x[jvj+5]];
l1:if((x[jvj+5]<=0)) goto l5;
x[jvj+9]=s[x[jvj+5]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+5];
x[jvj+16]=x[jvj+4] ;z[jvj+16]=z[jvj+4];
goto l2;
l6:pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+14)*/
pile[v[22]]=V5; pile[WZ1]=858; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(V5,858,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,v[13],642,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=3440; pile[WZ2]=246; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,3440,246,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=20067; pile[WZ2]=218; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+12,20067,218,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=(-20); pile[WZ2]=jvj+13; pile[WZ3]=159; pile[WZ4]=jvj+15; 
(*f[298])( );     /*TRIENS1(jvj+14,(-20),jvj+13,159,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+15,1,158,jvj+8)*/
pile[v[22]]=365; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[1569])( );     /*DELIER0(365,jvj+6,jvj+9,jvj+8)*/
goto l4;
}
