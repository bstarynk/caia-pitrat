#include "dx.h"
void SIMPLIFENS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int E;
int F;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=11105;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3986&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; F=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+14]=x[E] ;z[jvj+14]=z[E];
l3:x[jvj+16]=x[jvj+14] ;z[jvj+16]=z[jvj+14];
l1:if((x[jvj+16]>0)) goto l2;
x[F]=x[jvj+14] ;z[F]=z[jvj+14];
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+2]=s[x[jvj+16]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+16];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l4;
pile[v[22]]=870; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(870,jvj+2,V2)*/
V2=pile[WZ2]; 
if((V2!=1)) goto l4;
x[jvj+5]=d[20];z[jvj+5]=0;
l5:if((x[jvj+5]<=0)) goto l4;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+6,jvj+2,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=484)) goto l6;
pile[v[22]]=268; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+6,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+9,jvj+2,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=41)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+7,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+12,jvj+13)*/
if(x[jvj+13]!=96&&x[jvj+13]!=89&&x[jvj+13]!=41&&x[jvj+13]!=20&&x[jvj+13]!=128&&x[jvj+13]!=570&&x[jvj+13]!=1317) goto l6;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; pile[WZ3]=jvj+15; 
(*f[3199])( );     /*SUBSTENS0(jvj+7,jvj+10,jvj+14,jvj+15)*/
x[jvj+14]=x[jvj+15] ;z[jvj+14]=z[jvj+15];
goto l3;
l4:x[jvj+16]=t[x[jvj+16]];
goto l1;
l6:x[jvj+5]=t[x[jvj+5]];
goto l5;
}
