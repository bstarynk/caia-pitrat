#include "dx.h"
void ATOME60T4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int T=0,V19=0,V9=0,V7=0,V11=0,V8=0,V1=0,V2=0,V6=0,V5=0;
int D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=20060;z[jvj+1]=(-100);
x[jvj+2]=4;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3315&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+8; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+8)*/
for(i=x[jvj+8],V9=0;i>0;i=t[i],V9++)  ;
pile[v[22]]=498; pile[WZ2]=jvj+9; 
(*f[1948])( );if(v[102]) goto l9;     /*FNDOND0(498,D,jvj+9)*/
pile[v[22]]=473; pile[WZ1]=jvj+9; 
(*f[1975])( );if(v[102]) goto l9;     /*FNDCND0(473,jvj+9,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=688; 
(*f[1975])( );if(v[102]) goto l9;     /*FNDCND0(688,jvj+9,V11)*/
V11=pile[WZ2]; 
V8=V9*V11;
pile[v[22]]=473; 
(*f[1975])( );if(v[102]) goto l9;     /*FNDCND0(473,jvj+9,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=688; 
(*f[1975])( );if(v[102]) goto l9;     /*FNDCND0(688,jvj+9,V2)*/
V2=pile[WZ2]; 
x[jvj+7]=0 ;z[jvj+7]=0;
x[jvj+17]=x[jvj+8] ;z[jvj+17]=z[jvj+8];
l4:if((x[jvj+17]>0)) goto l5;
for(i=x[jvj+7],V6=0;i>0;i=t[i],V6++)  ;
V5=V6*V7;
if((V5!=V8)) goto l9;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+15)*/
pile[v[22]]=602; pile[WZ1]=715; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(602,715,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,v[13],642,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=3314; pile[WZ2]=246; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,3314,246,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=20060; pile[WZ2]=218; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+13,20060,218,jvj+14)*/
pile[v[22]]=jvj+15; pile[WZ1]=(-20); pile[WZ2]=jvj+14; pile[WZ3]=159; pile[WZ4]=jvj+16; 
(*f[298])( );     /*TRIENS1(jvj+15,(-20),jvj+14,159,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+16,289,158,jvj+10)*/
pile[v[22]]=jvj+10; 
(*f[481])( );     /*STOCKER0(jvj+10)*/
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:T=s[V19];
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==T) goto l3;
l8:x[jvj+18]=t[x[jvj+18]];
l6:if((x[jvj+18]>0)) goto l7;
x[jvj+17]=t[x[jvj+17]];
goto l4;
l3:V19=t[V19];
l1:if((V19>0)) goto l2;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+3)*/
goto l8;
l5:x[jvj+5]=s[x[jvj+17]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+17];
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(365,jvj+5,jvj+6)*/
x[jvj+18]=x[jvj+6] ;z[jvj+18]=z[jvj+6];
goto l6;
l7:x[jvj+3]=s[x[jvj+18]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+18];
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[1969])( );     /*FNDEND0(365,jvj+3,jvj+4)*/
V19=x[jvj+4];
goto l1;
}
