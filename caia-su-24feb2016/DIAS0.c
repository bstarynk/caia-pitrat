#include "dx.h"
void DIAS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V22=0,V69=0,V70=0,V21=0,V39=0,V72=0,V73=0,V74=0,V76=0,V75=0,V25=0,V40=0,V41=0,V42=0,V27=0,L=0,V4=0,V43=0,V44=0,V45=0,V3=0,V28=0,M=0,V48=0,V49=0,V50=0,V5=0,V10=0,V53=0,V54=0,V9=0,V56=0,V7=0,V14=0,V57=0,V58=0,V13=0,V60=0,V11=0,A=0,V62=0,V15=0,V20=0,V63=0,V64=0,V19=0,V36=0,V66=0,V67=0,V68=0,V17=0;
int X;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=17;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=110; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(110,X,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=27; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(27,0,42,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=5; pile[WZ1]=V72; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(5,V72,32,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; pile[WZ1]=V39; 
(*f[37])( );     /*SRA0(V73,V39,V22)*/
V22=pile[WZ2]; 
V21=incon;
pile[v[22]]=301; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(301,X,jvj+1)*/
if((x[jvj+1]!=68)) goto l1;
pile[v[22]]=V22; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V22,40,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V69; pile[WZ2]=301; 
(*f[98])( );     /*SRA3(135,V69,301,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V70,41,V21)*/
V21=pile[WZ2]; 
l2:pile[v[22]]=5; pile[WZ1]=V21; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(5,V21,32,V74)*/
V74=pile[WZ3]; 
V76=75-V74;
pile[v[22]]=V76; pile[WZ1]=V74; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(V76,V74,42,V75)*/
V75=pile[WZ3]; 
pile[v[22]]=V75; 
(*f[40])( );     /*SLG0(V75)*/
l3:pile[v[22]]=258; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(258,X,jvj+2)*/
l4:if((x[jvj+2]>0)) goto l5;
pile[v[22]]=159; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(159,X,jvj+16)*/
l26:if((x[jvj+16]>0)) goto l27;
v[0]=jvj; v[22]-=1; return;
l1:V21=V22;
goto l2;
l5:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=110; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(110,jvj+3,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=129; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(129,jvj+3,jvj+4)*/
pile[v[22]]=0; pile[WZ1]=V25; 
(*f[37])( );     /*SRA0(0,V25,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V40,61,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=jvj+4; 
(*f[223])( );if(v[102]) goto l6;     /*XX0(V41,jvj+4,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; 
(*f[40])( );     /*SLG0(V42)*/
l6:x[jvj+2]=t[x[jvj+2]];
goto l4;
l7:V3=V4;
l8:V5=incon;
pile[v[22]]=280; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(280,jvj+5,V28)*/
V28=pile[WZ2]; 
M=V28;
pile[v[22]]=V3; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V3,44,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V48; pile[WZ2]=280; 
(*f[42])( );     /*SRA1(135,V48,280,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V49,58,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=M; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V50,M,41,V5)*/
V5=pile[WZ3]; 
l10:V7=incon;
pile[v[22]]=521; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(521,jvj+5,jvj+8)*/
x[jvj+6]=x[jvj+8] ;z[jvj+6]=z[jvj+8];
pile[v[22]]=V5; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V5,44,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V56; pile[WZ2]=521; 
(*f[42])( );     /*SRA1(135,V56,521,V10)*/
V10=pile[WZ3]; 
V9=incon;
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]==135)) goto l12;
l11:pile[v[22]]=V10; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V10,40,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; pile[WZ1]=jvj+6; 
(*f[223])( );if(v[102]) goto l12;     /*XX0(V53,jvj+6,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=V54; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V54,41,V9)*/
V9=pile[WZ2]; 
l13:V7=V9;
l15:V11=incon;
pile[v[22]]=530; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(530,jvj+5,jvj+10)*/
x[jvj+6]=x[jvj+10] ;z[jvj+6]=z[jvj+10];
pile[v[22]]=V7; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V7,44,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V60; pile[WZ2]=530; 
(*f[42])( );     /*SRA1(135,V60,530,V14)*/
V14=pile[WZ3]; 
V13=incon;
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+6,jvj+9)*/
if((x[jvj+9]==135)) goto l17;
l16:pile[v[22]]=V14; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V14,40,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=jvj+6; 
(*f[223])( );if(v[102]) goto l17;     /*XX0(V57,jvj+6,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=V58; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V58,41,V13)*/
V13=pile[WZ2]; 
l18:V11=V13;
l20:V15=incon;
pile[v[22]]=613; pile[WZ1]=jvj+5; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(613,jvj+5,jvj+11)*/
A=x[jvj+11];
V62=A;
pile[v[22]]=20; pile[WZ1]=V62; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(20,V62,V11,V15)*/
V15=pile[WZ3]; 
l22:V17=incon;
pile[v[22]]=120; pile[WZ1]=jvj+5; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(120,jvj+5,jvj+15)*/
x[jvj+12]=x[jvj+15] ;z[jvj+12]=z[jvj+15];
pile[v[22]]=110; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(110,jvj+12,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V15,44,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V66; pile[WZ2]=120; 
(*f[42])( );     /*SRA1(135,V66,120,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=V67; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V67,58,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=V68; 
(*f[64])( );     /*SRA2(V36,V68,V20)*/
V20=pile[WZ2]; 
V19=incon;
pile[v[22]]=129; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(129,jvj+12,jvj+13)*/
x[jvj+14]=x[jvj+13] ;z[jvj+14]=z[jvj+13];
pile[v[22]]=V20; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V20,40,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=V63; pile[WZ1]=jvj+14; 
(*f[223])( );if(v[102]) goto l23;     /*XX0(V63,jvj+14,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=V64; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V64,41,V19)*/
V19=pile[WZ2]; 
l24:V17=V19;
l29:pile[v[22]]=V17; 
(*f[40])( );     /*SLG0(V17)*/
l28:x[jvj+16]=t[x[jvj+16]];
goto l26;
l9:V5=V3;
goto l10;
l12:V9=V10;
goto l13;
l14:V7=V5;
goto l15;
l17:V13=V14;
goto l18;
l19:V11=V7;
goto l20;
l21:V15=V11;
goto l22;
l23:V19=V20;
goto l24;
l25:V17=V15;
goto l29;
l27:x[jvj+5]=s[x[jvj+16]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+16];
pile[v[22]]=122; pile[WZ1]=jvj+5; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(122,jvj+5,jvj+17)*/
pile[v[22]]=135; pile[WZ1]=0; 
(*f[42])( );     /*SRA1(135,0,jvj+17,V4)*/
V4=pile[WZ3]; 
V3=incon;
pile[v[22]]=164; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(164,jvj+5,V27)*/
V27=pile[WZ2]; 
L=V27;
pile[v[22]]=V4; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V4,44,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V43; pile[WZ2]=164; 
(*f[42])( );     /*SRA1(135,V43,164,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V44,58,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=L; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V45,L,41,V3)*/
V3=pile[WZ3]; 
goto l8;
}
