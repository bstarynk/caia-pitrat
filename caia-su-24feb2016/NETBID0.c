#include "dx.h"
void NETBID0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V2=0,V3=0,V4=0,V5=0,V6=0,V7=0,V8=0,V9=0;
int BL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=365; pile[WZ1]=BL; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(365,BL,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
V10=x[BL];
pile[v[22]]=BL; pile[WZ1]=0; pile[WZ2]=V10; pile[WZ3]=147; 
(*f[285])( );     /*ENLY0(BL,0,V10,147,V2,V3)*/
V2=pile[WZ4]; V3=pile[WZ5]; 
pile[WZ1]=V3; pile[WZ2]=V2; pile[WZ3]=184; 
(*f[285])( );     /*ENLY0(BL,V3,V2,184,V4,V5)*/
V4=pile[WZ4]; V5=pile[WZ5]; 
pile[WZ1]=V5; pile[WZ2]=V4; pile[WZ3]=365; 
(*f[285])( );     /*ENLY0(BL,V5,V4,365,V6,V7)*/
V6=pile[WZ4]; V7=pile[WZ5]; 
pile[WZ1]=V7; pile[WZ2]=V6; pile[WZ3]=565; 
(*f[285])( );     /*ENLY0(BL,V7,V6,565,V8,V9)*/
V8=pile[WZ4]; V9=pile[WZ5]; 
if(x[BL]!=10169&&x[BL]!=10547) goto l3;
pile[WZ1]=583; pile[WZ2]=jvj+4; 
(*f[54])( );     /*TRI1(BL,583,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=68; pile[WZ2]=371; pile[WZ3]=jvj+5; 
(*f[58])( );     /*TRI3(jvj+4,68,371,jvj+5)*/
pile[v[22]]=130; pile[WZ1]=0; pile[WZ2]=297; pile[WZ3]=BL; pile[WZ4]=jvj+5; pile[WZ5]=jvj+3; 
(*f[725])( );     /*QUADRI14(130,0,297,BL,jvj+5,jvj+3)*/
pile[v[22]]=BL; pile[WZ1]=365; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(BL,365,jvj+3)*/
l3:v[0]=jvj; v[22]-=1; return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=jvj+2; 
(*f[316])( );     /*NETT0(jvj+2)*/
x[jvj+1]=t[x[jvj+1]];
goto l1;
}
