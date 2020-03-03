#include "dx.h"
void ATOME20T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V9=0,V2=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=20020;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3118&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(498,jvj+2,jvj+3)*/
pile[v[22]]=1182; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1182,jvj+3,jvj+4)*/
if((68!=x[jvj+4])) goto l4;
pile[v[22]]=280; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l4;     /*FNDCND0(280,D,V3)*/
V3=pile[WZ2]; 
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+5,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=D; pile[WZ2]=jvj+6; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(498,D,jvj+6)*/
pile[v[22]]=480; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(480,jvj+6,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[D]) goto l1;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+8; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+8)*/
l2:if((x[jvj+8]<=0)) goto l4;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+9,V2)*/
V2=pile[WZ2]; 
if((V2>=V3)) goto l3;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+14)*/
pile[WZ1]=jvj+6; pile[WZ3]=(-625); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(101,jvj+6,110,(-625),jvj+15)*/
pile[v[22]]=V9; pile[WZ1]=858; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(V9,858,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,v[13],642,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=3118; pile[WZ2]=246; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,3118,246,jvj+13)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20020; pile[WZ4]=jvj+13; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(158,1,218,20020,jvj+13,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=159; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+10,159,jvj+14)*/
pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+10,159,jvj+15)*/
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+9; pile[WZ3]=jvj+10; 
(*f[1569])( );     /*DELIER0(365,D,jvj+9,jvj+10)*/
l3:x[jvj+8]=t[x[jvj+8]];
goto l2;
}
