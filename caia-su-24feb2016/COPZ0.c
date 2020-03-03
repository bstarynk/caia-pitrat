#include "dx.h"
void COPZ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0;
int RL,AT,Y;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=10402;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2158&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RL=pile[v[22]]; AT=pile[v[22]+1]; Y=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=268; pile[WZ1]=AT; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,AT,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=Y; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+2,Y,jvj+3)*/
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+3,V4)*/
V4=pile[WZ2]; 
if((V4==0)) goto l1;
if((V4!=1)) goto l4;
if((x[RL]==28)) goto l6;
l5:if((x[RL]==29)) goto l7;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:if(x[RL]==27||x[RL]==26) goto l6;
l3:if(x[RL]==25||x[RL]==30) goto l7;
goto l8;
l6:pile[v[22]]=111; pile[WZ1]=Y; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,Y,jvj+4)*/
pile[v[22]]=AT; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(AT,Y,jvj+5)*/
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+7; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+7)*/
pile[v[22]]=jvj+4; pile[WZ1]=101; pile[WZ2]=26; 
(*f[35])( );     /*CHGC1(jvj+4,101,26)*/
pile[v[22]]=Y; pile[WZ1]=102; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(Y,102,jvj+6)*/
pile[WZ1]=103; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(Y,103,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=176; pile[WZ2]=23; 
(*f[35])( );     /*CHGC1(jvj+7,176,23)*/
l2:if((V4==0)) goto l3;
l4:if((V4==1)) goto l5;
goto l8;
l7:pile[v[22]]=111; pile[WZ1]=Y; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,Y,jvj+8)*/
pile[v[22]]=AT; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(AT,Y,jvj+9)*/
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+9,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+11)*/
pile[v[22]]=jvj+8; pile[WZ1]=101; pile[WZ2]=25; 
(*f[35])( );     /*CHGC1(jvj+8,101,25)*/
pile[v[22]]=Y; pile[WZ1]=102; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(Y,102,jvj+10)*/
pile[WZ1]=103; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(Y,103,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=176; pile[WZ2]=23; 
(*f[35])( );     /*CHGC1(jvj+11,176,23)*/
goto l8;
}
