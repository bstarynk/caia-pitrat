#include "dx.h"
void DIAS1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V24=0,V71=0,V72=0,V23=0,V41=0,V74=0,V75=0,V76=0,V78=0,V77=0,V27=0,V42=0,V43=0,V44=0,V29=0,L=0,V6=0,V45=0,V46=0,V47=0,V5=0,V30=0,M=0,V50=0,V51=0,V52=0,V7=0,V12=0,V55=0,V56=0,V11=0,V58=0,V9=0,V16=0,V59=0,V60=0,V15=0,V62=0,V13=0,A=0,V64=0,V17=0,V22=0,V65=0,V66=0,V21=0,V38=0,V68=0,V69=0,V70=0,V19=0;
int RR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=20;
if(v[0]>99700) (*f[6])( );

RR=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=552; pile[WZ1]=727; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(552,727,jvj+1)*/
l1:if((x[jvj+1]<=0)) goto l31;
x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=110; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(110,jvj+2,V2)*/
V2=pile[WZ2]; 
if((V2!=RR)) goto l2;
x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(110,jvj+3,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=27; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(27,0,42,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=5; pile[WZ1]=V74; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(5,V74,32,V75)*/
V75=pile[WZ3]; 
pile[v[22]]=V75; pile[WZ1]=V41; 
(*f[37])( );     /*SRA0(V75,V41,V24)*/
V24=pile[WZ2]; 
V23=incon;
pile[v[22]]=301; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(301,jvj+3,jvj+4)*/
if((x[jvj+4]!=68)) goto l3;
pile[v[22]]=V24; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V24,40,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V71; pile[WZ2]=301; 
(*f[98])( );     /*SRA3(135,V71,301,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=V72; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V72,41,V23)*/
V23=pile[WZ2]; 
l4:pile[v[22]]=5; pile[WZ1]=V23; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(5,V23,32,V76)*/
V76=pile[WZ3]; 
V78=75-V76;
pile[v[22]]=V78; pile[WZ1]=V76; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(V78,V76,42,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=V77; 
(*f[40])( );     /*SLG0(V77)*/
l5:pile[v[22]]=258; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(258,jvj+3,jvj+5)*/
l6:if((x[jvj+5]>0)) goto l7;
pile[v[22]]=159; pile[WZ1]=jvj+3; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(159,jvj+3,jvj+19)*/
l28:if((x[jvj+19]<=0)) goto l31;
x[jvj+8]=s[x[jvj+19]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+19];
pile[v[22]]=122; pile[WZ1]=jvj+8; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(122,jvj+8,jvj+20)*/
pile[v[22]]=135; pile[WZ1]=0; 
(*f[42])( );     /*SRA1(135,0,jvj+20,V6)*/
V6=pile[WZ3]; 
V5=incon;
pile[v[22]]=164; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(164,jvj+8,V29)*/
V29=pile[WZ2]; 
L=V29;
pile[v[22]]=V6; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V6,44,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V45; pile[WZ2]=164; 
(*f[42])( );     /*SRA1(135,V45,164,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=V46; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V46,58,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=L; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V47,L,41,V5)*/
V5=pile[WZ3]; 
l10:V7=incon;
pile[v[22]]=280; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(280,jvj+8,V30)*/
V30=pile[WZ2]; 
M=V30;
pile[v[22]]=V5; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V5,44,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V50; pile[WZ2]=280; 
(*f[42])( );     /*SRA1(135,V50,280,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V51,58,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V52; pile[WZ1]=M; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V52,M,41,V7)*/
V7=pile[WZ3]; 
l12:V9=incon;
pile[v[22]]=521; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(521,jvj+8,jvj+11)*/
x[jvj+9]=x[jvj+11] ;z[jvj+9]=z[jvj+11];
pile[v[22]]=V7; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V7,44,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V58; pile[WZ2]=521; 
(*f[42])( );     /*SRA1(135,V58,521,V12)*/
V12=pile[WZ3]; 
V11=incon;
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]==135)) goto l14;
l13:pile[v[22]]=V12; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V12,40,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=jvj+9; 
(*f[223])( );if(v[102]) goto l14;     /*XX0(V55,jvj+9,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V56,41,V11)*/
V11=pile[WZ2]; 
l15:V9=V11;
l17:V13=incon;
pile[v[22]]=530; pile[WZ1]=jvj+8; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(530,jvj+8,jvj+13)*/
x[jvj+9]=x[jvj+13] ;z[jvj+9]=z[jvj+13];
pile[v[22]]=V9; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V9,44,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V62; pile[WZ2]=530; 
(*f[42])( );     /*SRA1(135,V62,530,V16)*/
V16=pile[WZ3]; 
V15=incon;
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+9,jvj+12)*/
if((x[jvj+12]==135)) goto l19;
l18:pile[v[22]]=V16; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V16,40,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=V59; pile[WZ1]=jvj+9; 
(*f[223])( );if(v[102]) goto l19;     /*XX0(V59,jvj+9,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=V60; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V60,41,V15)*/
V15=pile[WZ2]; 
l20:V13=V15;
l22:V17=incon;
pile[v[22]]=613; pile[WZ1]=jvj+8; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(613,jvj+8,jvj+14)*/
A=x[jvj+14];
V64=A;
pile[v[22]]=20; pile[WZ1]=V64; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(20,V64,V13,V17)*/
V17=pile[WZ3]; 
l24:V19=incon;
pile[v[22]]=120; pile[WZ1]=jvj+8; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(120,jvj+8,jvj+18)*/
x[jvj+15]=x[jvj+18] ;z[jvj+15]=z[jvj+18];
pile[v[22]]=110; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(110,jvj+15,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V17,44,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V68; pile[WZ2]=120; 
(*f[42])( );     /*SRA1(135,V68,120,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V69,58,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=V70; 
(*f[64])( );     /*SRA2(V38,V70,V22)*/
V22=pile[WZ2]; 
V21=incon;
pile[v[22]]=129; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(129,jvj+15,jvj+16)*/
x[jvj+17]=x[jvj+16] ;z[jvj+17]=z[jvj+16];
pile[v[22]]=V22; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V22,40,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=jvj+17; 
(*f[223])( );if(v[102]) goto l25;     /*XX0(V65,jvj+17,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=V66; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V66,41,V21)*/
V21=pile[WZ2]; 
l26:V19=V21;
l30:pile[v[22]]=V19; 
(*f[40])( );     /*SLG0(V19)*/
l29:x[jvj+19]=t[x[jvj+19]];
goto l28;
l2:x[jvj+1]=t[x[jvj+1]];
goto l1;
l3:V23=V24;
goto l4;
l7:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=110; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(110,jvj+6,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=129; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(129,jvj+6,jvj+7)*/
pile[v[22]]=0; pile[WZ1]=V27; 
(*f[37])( );     /*SRA0(0,V27,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V42,61,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=jvj+7; 
(*f[223])( );if(v[102]) goto l8;     /*XX0(V43,jvj+7,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; 
(*f[40])( );     /*SLG0(V44)*/
l8:x[jvj+5]=t[x[jvj+5]];
goto l6;
l9:V5=V6;
goto l10;
l11:V7=V5;
goto l12;
l14:V11=V12;
goto l15;
l16:V9=V7;
goto l17;
l19:V15=V16;
goto l20;
l21:V13=V9;
goto l22;
l23:V17=V13;
goto l24;
l25:V21=V22;
goto l26;
l27:V19=V17;
goto l30;
l31:v[0]=jvj; v[22]-=1; return;
}
