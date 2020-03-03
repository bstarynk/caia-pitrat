#include "dx.h"
void CRESOM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V36=0,V32=0,V35=0,V54=0,V50=0,V53=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=26;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[A]==0)) goto l8;
for(i=x[A],V1=0;i>0;i=t[i],V1++)  ;
if((V1==1)) goto l1;
if((V1<=1)) goto l6;
x[jvj+1]=0 ;z[jvj+1]=0;
x[jvj+26]=x[A] ;z[jvj+26]=z[A];
l2:if((x[jvj+26]>0)) goto l3;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+3; 
(*f[299])( );     /*COPEL0(jvj+1,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=111; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+4,111,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+3; pile[WZ2]=107; pile[WZ3]=jvj+6; 
(*f[301])( );     /*TRI11(jvj+5,jvj+3,107,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+6,22,100,R)*/
l7:v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:x[jvj+25]=x[A] ;z[jvj+25]=z[A];
if((x[jvj+25]<=0)) goto l6;
x[jvj+16]=s[x[jvj+25]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+25];
pile[v[22]]=117; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+16,V54)*/
V54=pile[WZ2]; 
if((V54==0)) goto l16;
if((V54!=1)) goto l14;
pile[v[22]]=218; pile[WZ2]=R; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(218,jvj+16,R)*/
goto l7;
l3:x[jvj+7]=s[x[jvj+26]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+26];
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+7,V36)*/
V36=pile[WZ2]; 
if((V36==0)) goto l12;
if((V36!=1)) goto l10;
pile[v[22]]=218; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(218,jvj+7,jvj+2)*/
l5:pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+1,jvj+2)*/
l4:x[jvj+26]=t[x[jvj+26]];
goto l2;
l6:v[0]=jvj; v[22]-=2; v[102]=1;return;
l8:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,0,R)*/
goto l7;
l9:pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+7,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,jvj+7,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+11)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V32; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,V32,jvj+12)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+11; pile[WZ4]=jvj+2; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+11,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=107; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+2,107,jvj+12)*/
pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+2,107,jvj+10)*/
goto l5;
l10:if(V36==0||V36==1) goto l9;
pile[v[22]]=218; pile[WZ1]=jvj+7; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(218,jvj+7,jvj+13)*/
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+13,V35)*/
V35=pile[WZ2]; 
if((V35!=1)) goto l11;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V36; pile[WZ4]=jvj+2; 
(*f[192])( );     /*QUADRI4(100,41,130,V36,jvj+2)*/
goto l5;
l11:pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=486)) goto l9;
x[jvj+2]=x[jvj+13] ;z[jvj+2]=z[jvj+13];
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V36; pile[WZ4]=jvj+8; 
(*f[192])( );     /*QUADRI4(100,41,130,V36,jvj+8)*/
pile[v[22]]=jvj+2; pile[WZ1]=107; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+2,107,jvj+8)*/
goto l5;
l12:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+2; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+2)*/
goto l5;
l13:pile[v[22]]=117; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+16,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(218,jvj+16,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+20)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V50; pile[WZ4]=jvj+21; 
(*f[192])( );     /*QUADRI4(100,41,130,V50,jvj+21)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+20; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+20,R)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(R,107,jvj+21)*/
pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(R,107,jvj+19)*/
goto l7;
l14:if(V54==0||V54==1) goto l13;
pile[v[22]]=218; pile[WZ1]=jvj+16; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(218,jvj+16,jvj+22)*/
pile[v[22]]=130; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+22,V53)*/
V53=pile[WZ2]; 
if((V53!=1)) goto l15;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V54; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V54,R)*/
goto l7;
l15:pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=486)) goto l13;
x[R]=x[jvj+22] ;z[R]=z[jvj+22];
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V54; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,V54,jvj+17)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(R,107,jvj+17)*/
goto l7;
l16:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,0,R)*/
goto l7;
}
