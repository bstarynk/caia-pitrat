#include "dx.h"
void ATOME37T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V7=0,V3=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=20037;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3438&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=489; pile[WZ1]=D; pile[WZ2]=jvj+3; 
(*f[1969])( );     /*FNDEND0(489,D,jvj+3)*/
for(i=x[jvj+3],V1=0;i>0;i=t[i],V1++)  ;
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+4,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=D; pile[WZ2]=jvj+5; 
(*f[1948])( );if(v[102]) goto l3;     /*FNDOND0(498,D,jvj+5)*/
pile[v[22]]=472; pile[WZ1]=jvj+5; 
(*f[1975])( );if(v[102]) goto l3;     /*FNDCND0(472,jvj+5,V3)*/
V3=pile[WZ2]; 
if((V1!=V3)) goto l3;
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+6)*/
l1:if((x[jvj+6]<=0)) goto l3;
x[jvj+8]=s[x[jvj+6]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+6];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l2;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+12)*/
pile[WZ1]=jvj+5; pile[WZ3]=(-625); pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(101,jvj+5,110,(-625),jvj+13)*/
pile[v[22]]=V7; pile[WZ1]=858; pile[WZ2]=jvj+9; 
(*f[46])( );     /*TRI0(V7,858,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+10; 
(*f[189])( );     /*TRI4(jvj+9,v[13],642,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=3438; pile[WZ2]=246; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,3438,246,jvj+11)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20037; pile[WZ4]=jvj+11; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(158,1,218,20037,jvj+11,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=159; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+7,159,jvj+12)*/
pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+7,159,jvj+13)*/
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+8; pile[WZ3]=jvj+7; 
(*f[1569])( );     /*DELIER0(365,D,jvj+8,jvj+7)*/
l2:x[jvj+6]=t[x[jvj+6]];
goto l1;
l3:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
