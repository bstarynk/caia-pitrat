#include "dx.h"
void QXX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,I=0,LL=0,V16=0,V14=0,V4=0,V6=0,V7=0,V8=0,V9=0,V10=0,V11=0,V12=0,V13=0,V5=0,V15=0,V23=0,V26=0,V24=0,V28=0,V30=0,V29=0,V32=0,V36=0,V35=0,V39=0,V38=0,V40=0,V31=0;
int BL,N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=10927;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==185&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=incon;
if((x[BL]!=10290)) goto l3;
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=405; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(405,jvj+4,V2)*/
V2=pile[WZ2]; 
I=0;
l1:if((I>V2)) goto l3;
pile[v[22]]=BL; pile[WZ1]=I; pile[WZ2]=jvj+5; 
(*f[133])( );if(v[102]) goto l2;     /*TLDEBL1(BL,I,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=46; 
(*f[339])( );     /*CMP0(jvj+5,46)*/
l2:I++;
goto l1;
l3:pile[v[22]]=BL; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[133])( );if(v[102]) goto l5;     /*TLDEBL1(BL,N,jvj+3)*/
pile[v[22]]=372; pile[WZ1]=jvj+3; 
(*f[71])( );     /*ENLV0(372,jvj+3)*/
v[131]=0;
v[132]=0;
if((x[BL]==10290)) goto l5;
pile[v[22]]=jvj+3; 
(*f[306])( );     /*EAC0(jvj+3)*/
pile[WZ1]=46; 
(*f[339])( );     /*CMP0(jvj+3,46)*/
l5:if((v[132]==0)) goto l6;
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=jvj+7; pile[WZ1]=935; pile[WZ2]=953; 
(*f[35])( );     /*CHGC1(jvj+7,935,953)*/
l6:if((v[131]==0)) goto l8;
x[jvj+6]=vo[16];z[jvj+6]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(498,jvj+6,jvj+8)*/
V16=incon;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+6,LL)*/
LL=pile[WZ2]; 
V16=LL;
l7:V14=0;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
v[2]=v[1];
V4=V14;
v[1]=4;
pile[v[22]]=(-6486); pile[WZ1]=V4; 
(*f[64])( );     /*SRA2((-6486),V4,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V6,32,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=(-6487); pile[WZ1]=V7; 
(*f[64])( );     /*SRA2((-6487),V7,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=(-787); pile[WZ1]=V8; 
(*f[64])( );     /*SRA2((-787),V8,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V9,32,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V10; pile[WZ2]=jvj+8; 
(*f[98])( );     /*SRA3(135,V10,jvj+8,V11)*/
V11=pile[WZ3]; 
pile[v[22]]=V11; pile[WZ1]=95; 
(*f[38])( );     /*SPC0(V11,95,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=V12; 
(*f[64])( );     /*SRA2(V16,V12,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=(-787); pile[WZ1]=V13; 
(*f[64])( );     /*SRA2((-787),V13,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V5,0,V15)*/
V15=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V15; pile[WZ1]=406; pile[WZ2]=130; 
(*f[67])( );     /*SPA0(V15,406,130)*/
pile[v[22]]=jvj+9; pile[WZ1]=935; pile[WZ2]=954; 
(*f[35])( );     /*CHGC1(jvj+9,935,954)*/
l8:if(x[jvj+3]!=incon) goto l9;
l10:if((v[131]!=0)) goto l15;
if((v[132]!=0)) goto l15;
if((x[BL]!=10290)) goto l15;
x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=405; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(405,jvj+11,V26)*/
V26=pile[WZ2]; 
V24=0;
l11:if((V24>V26)) goto l15;
pile[v[22]]=BL; pile[WZ1]=V24; pile[WZ2]=jvj+12; 
(*f[133])( );if(v[102]) goto l12;     /*TLDEBL1(BL,V24,jvj+12)*/
pile[v[22]]=246; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(246,jvj+12,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=246; pile[WZ2]=jvj+15; 
(*f[46])( );     /*TRI0(V28,246,jvj+15)*/
pile[v[22]]=109; pile[WZ1]=BL; pile[WZ2]=130; pile[WZ3]=V24; pile[WZ4]=jvj+15; pile[WZ5]=jvj+13; 
(*f[47])( );     /*QUADRI0(109,BL,130,V24,jvj+15,jvj+13)*/
pile[v[22]]=jvj+13; 
(*f[340])( );     /*EACB0(jvj+13)*/
l12:V24++;
goto l11;
l4:V16=((-6488));
goto l7;
l9:if((v[131]!=0)) goto l10;
if((v[132]!=0)) goto l10;
if((x[BL]==10290)) goto l10;
pile[v[22]]=246; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(246,jvj+3,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=246; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(V23,246,jvj+14)*/
pile[v[22]]=109; pile[WZ1]=BL; pile[WZ2]=130; pile[WZ3]=N; pile[WZ4]=jvj+14; pile[WZ5]=jvj+10; 
(*f[47])( );     /*QUADRI0(109,BL,130,N,jvj+14,jvj+10)*/
pile[v[22]]=jvj+10; 
(*f[340])( );     /*EACB0(jvj+10)*/
goto l10;
l13:pile[v[22]]=V30; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V30,83,V29)*/
V29=pile[WZ2]; 
l14:pile[v[22]]=V29; 
(*f[40])( );     /*SLG0(V29)*/
l16:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l15:if((v[131]!=0)) goto l16;
if((v[132]!=0)) goto l16;
if((x[BL]!=10290)) goto l16;
V31=(time(tzt)-inccc);
v[145]=0;
(*f[174])( );     /*COMB0()*/
V32=vv[33];
if((V32!=0)) goto l16;
V36=(time(tzt)-inccc);
V35=V36-V31;
V39=x[BL];
pile[v[22]]=20; pile[WZ1]=V39; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V39,0,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V35; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(41,V35,V38,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; pile[WZ1]=(-5570); 
(*f[37])( );     /*SRA0(V40,(-5570),V30)*/
V30=pile[WZ2]; 
V29=incon;
if((V35>1)) goto l13;
V29=V30;
goto l14;
}
