#include "dx.h"
void XS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V15=0,V17=0,V35=0,V36=0,V37=0,V38=0,V39=0,V40=0,V41=0,V42=0,V27=0,V28=0,V30=0,V31=0,V32=0,V33=0,V46=0,V47=0,V48=0,V49=0,V50=0,V51=0,V52=0;
int I,X;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=20;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(160,X,jvj+8)*/
pile[v[22]]=103; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,X,jvj+9)*/
pile[v[22]]=102; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,X,jvj+10)*/
pile[v[22]]=436; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(436,X,jvj+11)*/
pile[v[22]]=111; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,X,jvj+12)*/
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=448; 
(*f[98])( );     /*SRA3(135,I,448,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=V35; pile[WZ1]=jvj+12; 
(*f[344])( );if(v[102]) goto l1;     /*XX1(V35,jvj+12,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=jvj+11; 
(*f[344])( );if(v[102]) goto l1;     /*XX1(V36,jvj+11,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=jvj+10; 
(*f[344])( );if(v[102]) goto l1;     /*XX1(V37,jvj+10,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V38,42,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=jvj+9; 
(*f[223])( );if(v[102]) goto l1;     /*XX0(V39,jvj+9,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V40,45,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V41,62,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=jvj+8; 
(*f[223])( );if(v[102]) goto l1;     /*XX0(V42,jvj+8,J)*/
J=pile[WZ2]; 
l12:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l1:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,X,jvj+1)*/
l2:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,X,jvj+2)*/
l3:pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(160,X,jvj+3)*/
l11:pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=448; 
(*f[98])( );     /*SRA3(135,I,448,J)*/
J=pile[WZ3]; 
goto l12;
l4:V15=V16;
l5:V17=incon;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,X,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]==20)) goto l6;
pile[v[22]]=V15; 
(*f[223])( );if(v[102]) goto l6;     /*XX0(V15,jvj+6,V17)*/
V17=pile[WZ2]; 
l10:J=V17;
goto l12;
l6:V17=V15;
goto l10;
l7:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,X,jvj+13)*/
pile[v[22]]=111; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,X,jvj+14)*/
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=448; 
(*f[98])( );     /*SRA3(135,I,448,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; pile[WZ1]=jvj+14; 
(*f[344])( );if(v[102]) goto l2;     /*XX1(V27,jvj+14,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=jvj+13; 
(*f[344])( );if(v[102]) goto l2;     /*XX1(V28,jvj+13,J)*/
J=pile[WZ2]; 
goto l12;
l8:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,X,jvj+15)*/
pile[v[22]]=436; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(436,X,jvj+16)*/
pile[v[22]]=111; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,X,jvj+17)*/
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=448; 
(*f[98])( );     /*SRA3(135,I,448,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; pile[WZ1]=jvj+17; 
(*f[344])( );if(v[102]) goto l3;     /*XX1(V30,jvj+17,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=jvj+16; 
(*f[344])( );if(v[102]) goto l3;     /*XX1(V31,jvj+16,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V32,61,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=jvj+15; 
(*f[223])( );if(v[102]) goto l3;     /*XX0(V33,jvj+15,J)*/
J=pile[WZ2]; 
goto l12;
l9:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,X,jvj+18)*/
pile[v[22]]=436; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(436,X,jvj+19)*/
pile[v[22]]=111; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,X,jvj+20)*/
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=448; 
(*f[98])( );     /*SRA3(135,I,448,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=V46; pile[WZ1]=jvj+20; 
(*f[344])( );if(v[102]) goto l11;     /*XX1(V46,jvj+20,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=jvj+19; 
(*f[344])( );if(v[102]) goto l11;     /*XX1(V47,jvj+19,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=33; 
(*f[38])( );     /*SPC0(V48,33,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=V49; pile[WZ1]=jvj+18; 
(*f[223])( );if(v[102]) goto l11;     /*XX0(V49,jvj+18,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V50,41,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V51,45,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V52; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V52,62,V16)*/
V16=pile[WZ2]; 
V15=incon;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,X,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+4,jvj+5)*/
pile[v[22]]=135; pile[WZ1]=V16; 
(*f[98])( );     /*SRA3(135,V16,jvj+5,V15)*/
V15=pile[WZ3]; 
goto l5;
}
