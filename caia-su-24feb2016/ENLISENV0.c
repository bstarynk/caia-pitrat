#include "dx.h"
void ENLISENV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V9=0,V11=0;
int S;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=10454;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==824&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[13];z[jvj+3]=vz[13];
x[jvj+4]=x[jvj+3] ;z[jvj+4]=z[jvj+3];
pile[v[22]]=717; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(717,jvj+4,jvj+5)*/
pile[v[22]]=715; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(715,jvj+5,jvj+10)*/
pile[WZ1]=S; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(715,S,jvj+11)*/
if((x[jvj+10]!=x[jvj+11])) goto l4;
V8=x[S];
pile[v[22]]=159; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(159,S,jvj+6)*/
l1:if((x[jvj+6]<=0)) goto l3;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=1070; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1070,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+7,jvj+9)*/
z[jvj+9]=(-1);
pile[v[22]]=578; pile[WZ1]=jvj+9; pile[WZ2]=V8; 
(*f[134])( );     /*OTA0(578,jvj+9,V8)*/
l3:pile[v[22]]=718; pile[WZ1]=jvj+5; pile[WZ2]=V8; 
(*f[134])( );     /*OTA0(718,jvj+5,V8)*/
l4:pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+11,V9)*/
V9=pile[WZ2]; 
pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+10,V11)*/
V11=pile[WZ2]; 
if((V9>=V11)) goto l8;
pile[v[22]]=120; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(120,jvj+5,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=S; pile[WZ2]=jvj+5; pile[WZ3]=67; 
(*f[1166])( );     /*ENLISENV1(jvj+12,S,jvj+5,67)*/
l8:pile[v[22]]=715; pile[WZ1]=jvj+5; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(715,jvj+5,jvj+15)*/
pile[WZ1]=S; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(715,S,jvj+16)*/
if((x[jvj+15]!=x[jvj+16])) goto l9;
pile[v[22]]=718; pile[WZ1]=jvj+5; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(718,jvj+5,jvj+17)*/
if((x[jvj+17]!=0)) goto l9;
x[jvj+14]=incon;
pile[v[22]]=120; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+5,jvj+13)*/
x[jvj+14]=x[jvj+13] ;z[jvj+14]=z[jvj+13];
l6:if((x[jvj+14]==250)) goto l7;
pile[v[22]]=jvj+4; pile[WZ1]=717; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(jvj+4,717,jvj+14)*/
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+6]=t[x[jvj+6]];
goto l1;
l5:x[jvj+14]=250 ;z[jvj+14]=250;
goto l6;
l7:pile[v[22]]=717; pile[WZ1]=jvj+4; 
(*f[71])( );     /*ENLV0(717,jvj+4)*/
goto l9;
}
