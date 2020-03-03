#include "dx.h"
void DEGREE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V25=0,V19=0,V34=0,V35=0,V33=0,V7=0,V6=0,V48=0,V49=0,V52=0,V53=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=25;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=x[A] ;z[jvj+7]=z[A];
l7:pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]==41)) goto l15;
if((x[jvj+8]==484)) goto l16;
if((x[jvj+8]!=22)) goto l9;
pile[v[22]]=111; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+7,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+9,jvj+10)*/
pile[v[22]]=1821; pile[WZ1]=145; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1821,145,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==x[jvj+10]) goto l8;
l9:pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+7,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]==486)) goto l10;
if((x[jvj+17]==52)) goto l11;
if((x[jvj+17]==596)) goto l12;
if((x[jvj+17]!=485)) goto l13;
pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+23)*/
for(i=x[jvj+23],V7=0;i>0;i=t[i],V7++)  ;
x[jvj+3]=0 ;z[jvj+3]=0;
l1:if((x[jvj+23]>0)) goto l2;
for(i=x[jvj+3],V6=0;i>0;i=t[i],V6++)  ;
if((V6!=V7)) goto l13;
if((x[jvj+3]==0)) goto l13;
V52=(-999999);
x[jvj+25]=x[jvj+3] ;z[jvj+25]=z[jvj+3];
l18:if((x[jvj+25]>0)) goto l19;
if((V52==(-999999))) goto l13;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V52; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V52,R)*/
l14:v[0]=jvj; v[22]-=2; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+23]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+23];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[1945])( );if(v[102]) goto l3;     /*DEGREE0(jvj+1,jvj+2)*/
pile[v[22]]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+3,jvj+2)*/
l3:x[jvj+23]=t[x[jvj+23]];
goto l1;
l5:x[jvj+4]=s[x[jvj+18]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+18];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[1945])( );if(v[102]) goto l6;     /*DEGREE0(jvj+4,jvj+5)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+5,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=jvj+6; pile[WZ1]=117; pile[WZ2]=V25; 
(*f[186])( );     /*BTC0(jvj+6,117,V25)*/
l6:x[jvj+18]=t[x[jvj+18]];
l4:if((x[jvj+18]>0)) goto l5;
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+6,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V19; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V19,R)*/
goto l14;
l8:pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+7,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[1945])( );if(v[102]) goto l9;     /*DEGREE0(jvj+12,jvj+13)*/
pile[v[22]]=103; pile[WZ1]=jvj+7; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,jvj+7,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[1945])( );if(v[102]) goto l9;     /*DEGREE0(jvj+14,jvj+15)*/
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+13,V48)*/
V48=pile[WZ2]; 
pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+15,V49)*/
V49=pile[WZ2]; 
if((V48>=V49)) goto l17;
x[R]=x[jvj+15] ;z[R]=z[jvj+15];
goto l14;
l10:pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+18)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(0,117,jvj+6)*/
goto l4;
l11:pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+7,jvj+19)*/
x[jvj+7]=x[jvj+19] ;z[jvj+7]=z[jvj+19];
goto l7;
l12:pile[v[22]]=103; pile[WZ1]=jvj+7; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+7,jvj+20)*/
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+20,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+7,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[1945])( );if(v[102]) goto l13;     /*DEGREE0(jvj+21,jvj+22)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+22,V35)*/
V35=pile[WZ2]; 
V33=V34*V35;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V33; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V33,R)*/
goto l14;
l13:v[0]=jvj; v[22]-=2; v[102]=1;return;
l15:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,0,R)*/
goto l14;
l16:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,1,R)*/
goto l14;
l17:x[R]=x[jvj+13] ;z[R]=z[jvj+13];
goto l14;
l19:x[jvj+24]=s[x[jvj+25]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+25];
pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+24,V53)*/
V53=pile[WZ2]; 
if(V53>V52) V52=V53;
l20:x[jvj+25]=t[x[jvj+25]];
goto l18;
}
