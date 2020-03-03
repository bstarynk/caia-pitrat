#include "dx.h"
void ATOME165T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V14=0,V2=0,V15=0,V3=0,P=0,I=0,V16=0,M=0,V6=0,V5=0,V18=0;
int D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=20165;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3508&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(498,jvj+2,jvj+3)*/
pile[v[22]]=1182; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1182,jvj+3,jvj+4)*/
if((68!=x[jvj+4])) goto l6;
pile[v[22]]=1474; pile[WZ1]=D; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1474,D,jvj+5)*/
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+5,P)*/
P=pile[WZ2]; 
if((P<=0)) goto l6;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(510,jvj+5,I)*/
I=pile[WZ2]; 
;
if((I>=0)) goto l3;
V13=I+P;
l3:x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+6,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=280; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l6;     /*FNDCND0(280,D,M)*/
M=pile[WZ2]; 
V6=M%P;
V3=incon;
if((V6<0)) goto l2;
V3=V6;
l4:V5=I-V3;
V2=incon;
if((V5<0)) goto l1;
V2=V5;
l5:if((V2==0)) goto l6;
V18=M+V2;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+12)*/
pile[v[22]]=V16; pile[WZ1]=858; pile[WZ2]=jvj+8; 
(*f[46])( );     /*TRI0(V16,858,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+9; 
(*f[189])( );     /*TRI4(jvj+8,v[13],642,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=3508; pile[WZ2]=246; pile[WZ3]=jvj+10; 
(*f[189])( );     /*TRI4(jvj+9,3508,246,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=20165; pile[WZ2]=218; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+10,20165,218,jvj+11)*/
pile[v[22]]=jvj+12; pile[WZ1]=(-20); pile[WZ2]=jvj+11; pile[WZ3]=159; pile[WZ4]=jvj+13; 
(*f[298])( );     /*TRIENS1(jvj+12,(-20),jvj+11,159,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+13,1,158,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=280; pile[WZ2]=D; pile[WZ3]=V18; 
(*f[2056])( );     /*VAUT0(jvj+7,280,D,V18)*/
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:V14=V5+P;
V2=V14;
goto l5;
l2:V15=V6+P;
V3=V15;
goto l4;
}
