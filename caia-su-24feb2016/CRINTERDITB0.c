#include "dx.h"
void CRINTERDITB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V4=0,V3=0,V25=0,V16=0,V13=0,V12=0,V7=0,V6=0;
int MIN,MAX,S,C,B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

MIN=pile[v[22]]; MAX=pile[v[22]+1]; S=pile[v[22]+2]; C=pile[v[22]+3]; B=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[C] ;z[jvj+3]=z[C];
V25=MAX;
l1:if((x[jvj+3]!=68)) goto l2;
pile[v[22]]=280; pile[WZ1]=S; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(280,S,V2)*/
V2=pile[WZ2]; 
V1=V2-1;
if((V25>=V1)) goto l2;
pile[v[22]]=MIN; pile[WZ1]=280; pile[WZ2]=jvj+5; 
(*f[46])( );     /*TRI0(MIN,280,jvj+5)*/
pile[v[22]]=120; pile[WZ1]=S; pile[WZ2]=164; pile[WZ3]=V25; pile[WZ4]=jvj+5; pile[WZ5]=jvj+1; 
(*f[47])( );     /*QUADRI0(120,S,164,V25,jvj+5,jvj+1)*/
pile[v[22]]=B; pile[WZ1]=120; pile[WZ2]=jvj+1; 
(*f[35])( );     /*CHGC1(B,120,jvj+1)*/
l2:pile[v[22]]=164; pile[WZ1]=S; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(164,S,V4)*/
V4=pile[WZ2]; 
V3=V4+1;
if((MIN<=V3)) goto l3;
pile[v[22]]=120; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,S,jvj+2)*/
pile[v[22]]=MIN; pile[WZ1]=V25; pile[WZ3]=jvj+3; pile[WZ4]=S; 
(*f[2055])( );     /*CRINTERDITB0(MIN,V25,jvj+2,jvj+3,S)*/
l3:if((V25<V3)) goto l5;
if((MIN>V3)) goto l4;
pile[v[22]]=280; pile[WZ1]=S; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(280,S,V16)*/
V16=pile[WZ2]; 
if((MIN<V16)) goto l4;
pile[v[22]]=S; pile[WZ1]=164; pile[WZ2]=V25; 
(*f[43])( );     /*CHGC2(S,164,V25)*/
pile[v[22]]=V16; pile[WZ1]=V25; pile[WZ2]=S; pile[WZ3]=67; pile[WZ4]=B; 
(*f[2055])( );     /*CRINTERDITB0(V16,V25,S,67,B)*/
l4:pile[v[22]]=280; pile[WZ1]=S; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(280,S,V13)*/
V13=pile[WZ2]; 
V12=V13-1;
if((MIN>V12)) goto l5;
pile[v[22]]=S; pile[WZ1]=164; pile[WZ2]=V25; 
(*f[43])( );     /*CHGC2(S,164,V25)*/
pile[WZ1]=280; pile[WZ2]=MIN; 
(*f[43])( );     /*CHGC2(S,280,MIN)*/
pile[v[22]]=MIN; pile[WZ1]=V25; pile[WZ2]=S; pile[WZ3]=67; pile[WZ4]=B; 
(*f[2055])( );     /*CRINTERDITB0(MIN,V25,S,67,B)*/
l5:if((x[jvj+3]!=67)) goto l6;
if((V4>V25)) goto l7;
pile[v[22]]=120; pile[WZ1]=S; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,S,jvj+4)*/
pile[v[22]]=B; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(B,120,jvj+4)*/
pile[v[22]]=MIN; pile[WZ1]=V25; pile[WZ3]=jvj+3; pile[WZ4]=B; 
(*f[2055])( );     /*CRINTERDITB0(MIN,V25,jvj+4,jvj+3,B)*/
l6:if((V25>V4)) goto l7;
pile[v[22]]=280; pile[WZ1]=S; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(280,S,V7)*/
V7=pile[WZ2]; 
V6=V7-1;
if((MIN>V6)) goto l7;
if((V25<V6)) goto l7;
pile[v[22]]=S; pile[WZ1]=280; pile[WZ2]=MIN; 
(*f[43])( );     /*CHGC2(S,280,MIN)*/
V25=V4;
x[jvj+3]=67 ;z[jvj+3]=67;
goto l1;
l7:v[0]=jvj; v[22]-=5; return;
}
