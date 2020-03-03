#include "dx.h"
void XOR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V33=0,V77=0,V32=0,V64=0,V65=0,V67=0,V68=0,V52=0,V53=0,V54=0,V55=0,V56=0,V58=0,V59=0,V60=0,V61=0,V62=0,V79=0,V80=0,V81=0,V82=0,V84=0,V85=0,V86=0,V87=0,V88=0,V89=0,V90=0,V91=0,V92=0,V44=0,V45=0,V46=0,V47=0,V48=0,V49=0,V50=0,V75=0,V26=0,V70=0,V71=0,V72=0,V73=0,V25=0;
int K,X;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=23;
if(v[0]>99700) (*f[6])( );

K=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,X,jvj+2)*/
if((x[jvj+2]!=73)) goto l9;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,X,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==33)) goto l2;
if((x[jvj+4]==255)) goto l3;
if((x[jvj+4]==32)) goto l4;
if((x[jvj+4]==38)) goto l5;
if((x[jvj+4]==722)) goto l6;
if((x[jvj+4]!=1479)) goto l8;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,X,jvj+14)*/
pile[v[22]]=102; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,X,jvj+15)*/
pile[v[22]]=120; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(120,X,jvj+16)*/
pile[v[22]]=436; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(436,X,jvj+17)*/
pile[v[22]]=135; pile[WZ1]=K; pile[WZ2]=1479; 
(*f[98])( );     /*SRA3(135,K,1479,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=V84; pile[WZ1]=33; 
(*f[38])( );     /*SPC0(V84,33,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=jvj+15; 
(*f[223])( );if(v[102]) goto l8;     /*XX0(V85,jvj+15,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=V86; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V86,40,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=V87; pile[WZ1]=jvj+14; 
(*f[223])( );if(v[102]) goto l8;     /*XX0(V87,jvj+14,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=V88; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V88,41,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=V89; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V89,61,V90)*/
V90=pile[WZ2]; 
pile[v[22]]=V90; pile[WZ1]=jvj+17; 
(*f[223])( );if(v[102]) goto l8;     /*XX0(V90,jvj+17,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=V91; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V91,32,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=V92; pile[WZ1]=jvj+16; 
(*f[223])( );if(v[102]) goto l8;     /*XX0(V92,jvj+16,J)*/
J=pile[WZ2]; 
l14:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l1:V32=V33;
l7:pile[v[22]]=V32; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V32,93,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=V82; pile[WZ1]=jvj+13; 
(*f[344])( );if(v[102]) goto l8;     /*XX1(V82,jvj+13,J)*/
J=pile[WZ2]; 
goto l14;
l2:pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(120,X,jvj+5)*/
pile[v[22]]=135; pile[WZ1]=K; pile[WZ2]=33; 
(*f[98])( );     /*SRA3(135,K,33,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V64,32,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=jvj+5; 
(*f[223])( );if(v[102]) goto l8;     /*XX0(V65,jvj+5,J)*/
J=pile[WZ2]; 
goto l14;
l3:pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(128,X,jvj+6)*/
pile[v[22]]=135; pile[WZ1]=K; pile[WZ2]=255; 
(*f[98])( );     /*SRA3(135,K,255,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=V67; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V67,32,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=V68; pile[WZ1]=jvj+6; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V68,jvj+6,44,J)*/
J=pile[WZ3]; 
goto l14;
l4:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,X,jvj+7)*/
pile[v[22]]=103; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,X,jvj+8)*/
pile[v[22]]=135; pile[WZ1]=K; pile[WZ2]=32; 
(*f[98])( );     /*SRA3(135,K,32,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V52,32,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; pile[WZ1]=jvj+7; 
(*f[641])( );if(v[102]) goto l8;     /*XY0(V53,jvj+7,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=V54; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V54,40,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=jvj+8; 
(*f[223])( );if(v[102]) goto l8;     /*XX0(V55,jvj+8,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V56,41,J)*/
J=pile[WZ2]; 
goto l14;
l5:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,X,jvj+9)*/
pile[v[22]]=103; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,X,jvj+10)*/
pile[v[22]]=160; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(160,X,jvj+11)*/
pile[v[22]]=K; pile[WZ1]=jvj+9; 
(*f[641])( );if(v[102]) goto l8;     /*XY0(K,jvj+9,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=V58; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V58,40,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=V59; pile[WZ1]=jvj+10; 
(*f[223])( );if(v[102]) goto l8;     /*XX0(V59,jvj+10,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=V60; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V60,41,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=V61; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V61,61,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=V62; pile[WZ1]=jvj+11; 
(*f[223])( );if(v[102]) goto l8;     /*XX0(V62,jvj+11,J)*/
J=pile[WZ2]; 
goto l14;
l6:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,X,jvj+12)*/
pile[v[22]]=120; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(120,X,jvj+13)*/
pile[v[22]]=135; pile[WZ1]=K; pile[WZ2]=722; 
(*f[98])( );     /*SRA3(135,K,722,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=V79; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V79,32,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=V80; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V80,91,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=V81; pile[WZ1]=jvj+12; 
(*f[223])( );if(v[102]) goto l8;     /*XX0(V81,jvj+12,V33)*/
V33=pile[WZ2]; 
V32=incon;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,X,jvj+1)*/
pile[v[22]]=V33; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V33,44,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=V77; pile[WZ1]=jvj+1; 
(*f[223])( );if(v[102]) goto l1;     /*XX0(V77,jvj+1,V32)*/
V32=pile[WZ2]; 
goto l7;
l8:if(x[jvj+4]!=36&&x[jvj+4]!=37&&x[jvj+4]!=84&&x[jvj+4]!=364&&x[jvj+4]!=166&&x[jvj+4]!=915&&x[jvj+4]!=1372&&x[jvj+4]!=1568) goto l9;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,X,jvj+18)*/
pile[v[22]]=103; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,X,jvj+19)*/
pile[v[22]]=160; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(160,X,jvj+20)*/
pile[v[22]]=135; pile[WZ1]=K; pile[WZ2]=jvj+4; 
(*f[98])( );     /*SRA3(135,K,jvj+4,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V44,32,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=jvj+18; 
(*f[641])( );if(v[102]) goto l9;     /*XY0(V45,jvj+18,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V46,40,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=jvj+19; 
(*f[223])( );if(v[102]) goto l9;     /*XX0(V47,jvj+19,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V48,41,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=V49; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V49,32,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=jvj+20; 
(*f[223])( );if(v[102]) goto l9;     /*XX0(V50,jvj+20,J)*/
J=pile[WZ2]; 
goto l14;
l9:V25=incon;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,X,jvj+23)*/
if((x[jvj+23]!=73)) goto l12;
pile[v[22]]=111; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,X,jvj+21)*/
V26=incon;
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+21,jvj+22)*/
pile[v[22]]=135; pile[WZ1]=K; 
(*f[98])( );     /*SRA3(135,K,jvj+22,V75)*/
V75=pile[WZ3]; 
pile[v[22]]=X; pile[WZ1]=1325; pile[WZ2]=V75; 
(*f[1051])( );     /*XD0(X,1325,V75,V26)*/
V26=pile[WZ3]; 
l11:V25=V26;
l13:J=V25;
goto l14;
l10:pile[v[22]]=(-2953); pile[WZ1]=K; 
(*f[64])( );     /*SRA2((-2953),K,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=V70; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V70,34,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=V71; pile[WZ1]=jvj+21; 
(*f[223])( );if(v[102]) goto l12;     /*XX0(V71,jvj+21,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=V72; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V72,34,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=1325; pile[WZ2]=V73; 
(*f[1051])( );     /*XD0(X,1325,V73,V26)*/
V26=pile[WZ3]; 
goto l11;
l12:V25=K;
goto l13;
}
