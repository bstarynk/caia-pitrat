#include "dx.h"
void LIREPBILAN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,W=0,V2=0,V10=0,V11=0,V8=0,V7=0,V18=0,V41=0,V34=0,V35=0,V36=0,V37=0,V39=0,V40=0,V21=0,V12=0,V13=0,V14=0,V24=0,V23=0,V25=0,V26=0,V28=0,V29=0,V31=0,V32=0;
int BL,V;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; V=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((V!=(-7085))) goto l17;
x[jvj+11]=966 ;z[jvj+11]=966;
l11:pile[v[22]]=120; pile[WZ1]=jvj+11; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(120,jvj+11,jvj+1)*/
pile[v[22]]=109; pile[WZ1]=jvj+1; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(109,jvj+1,jvj+12)*/
if((x[jvj+12]!=x[BL])) goto l12;
pile[v[22]]=191; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(191,jvj+1,jvj+2)*/
l12:x[jvj+11]=x[jvj+1] ;z[jvj+11]=z[jvj+1];
goto l11;
l1:V2=incon;
pile[v[22]]=163; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(163,jvj+1,V4)*/
V4=pile[WZ2]; 
W=V4;
V2=W;
l2:if(V2==incon) goto l3;
l13:if(V2!=incon) goto l14;
goto l12;
l3:V2=((-1278));
goto l13;
l4:if((V==(-1278))) goto l19;
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(163,jvj+3,V10)*/
V10=pile[WZ2]; 
if((V10==V)) goto l19;
l18:x[jvj+13]=x[jvj+3] ;z[jvj+13]=z[jvj+3];
l16:pile[v[22]]=120; pile[WZ1]=jvj+13; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(120,jvj+13,jvj+3)*/
pile[v[22]]=109; pile[WZ1]=jvj+3; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(109,jvj+3,jvj+14)*/
if((x[jvj+14]!=x[BL])) goto l18;
pile[v[22]]=191; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(191,jvj+3,jvj+4)*/
goto l18;
l6:V7=V8;
l20:if(V7!=incon) goto l21;
goto l18;
l8:x[jvj+6]=s[x[jvj+15]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+15];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+6,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=158; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(158,jvj+6,jvj+7)*/
pile[v[22]]=195; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(195,jvj+6,jvj+8)*/
V41=x[jvj+8];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=491; 
(*f[42])( );     /*SRA1(135,0,491,V34)*/
V34=pile[WZ3]; 
pile[WZ1]=V34; pile[WZ2]=jvj+7; 
(*f[42])( );     /*SRA1(135,V34,jvj+7,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=V35; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V35,61,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V18; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(41,V18,V36,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V37,(-9813),V39)*/
V39=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V41; pile[WZ2]=V39; 
(*f[39])( );     /*SDX0(23,V41,V39,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; 
(*f[40])( );     /*SLG0(V40)*/
l9:x[jvj+15]=t[x[jvj+15]];
l7:if((x[jvj+15]>0)) goto l8;
pile[v[22]]=jvj+3; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+3,191,68)*/
pile[v[22]]=1133; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1133,jvj+3,jvj+9)*/
x[jvj+16]=x[jvj+9] ;z[jvj+16]=z[jvj+9];
l10:if((x[jvj+16]<=0)) goto l18;
x[jvj+10]=s[x[jvj+16]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+16];
pile[v[22]]=jvj+10; 
(*f[446])( );     /*LIRELTDEBILAN0(jvj+10)*/
x[jvj+16]=t[x[jvj+16]];
goto l10;
l14:pile[v[22]]=BL; pile[WZ1]=V2; 
(*f[447])( );     /*LIREPBILAN0(BL,V2)*/
pile[v[22]]=75; pile[WZ1]=0; pile[WZ2]=36; 
(*f[41])( );     /*SRB0(75,0,36,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=V21; 
(*f[40])( );     /*SLG0(V21)*/
goto l12;
l15:if((V!=(-7085))) goto l17;
l22:v[0]=jvj; v[22]-=2; return;
l17:x[jvj+13]=966 ;z[jvj+13]=966;
goto l16;
l19:pile[v[22]]=941; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(941,jvj+3,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=942; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(942,jvj+3,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=943; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(943,jvj+3,V14)*/
V14=pile[WZ2]; 
V24=x[jvj+14];
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(10,0,42,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V24; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(20,V24,V23,V8)*/
V8=pile[WZ3]; 
V7=incon;
if((V==(-1278))) goto l5;
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+3,V11)*/
V11=pile[WZ2]; 
if((V!=V11)) goto l5;
pile[v[22]]=V8; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V8,V,V7)*/
V7=pile[WZ2]; 
l5:if(V7==incon) goto l6;
goto l20;
l21:pile[v[22]]=V7; pile[WZ1]=(-6740); 
(*f[37])( );     /*SRA0(V7,(-6740),V25)*/
V25=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V14; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(41,V14,V25,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V26,45,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=V13; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V28,V13,41,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V29,45,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=V12; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V31,V12,41,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; 
(*f[40])( );     /*SLG0(V32)*/
pile[v[22]]=1170; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1170,jvj+3,jvj+5)*/
x[jvj+15]=x[jvj+5] ;z[jvj+15]=z[jvj+5];
goto l7;
}
