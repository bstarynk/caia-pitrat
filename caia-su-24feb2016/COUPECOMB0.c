#include "dx.h"
void COUPECOMB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,V21=0,V18=0,V17=0,V13=0,V15=0,V12=0,V26=0,V3=0,V5=0,V6=0,V7=0,V8=0,V4=0,V2=0,V10=0,V11=0,V9=0,K=0,V57=0,V58=0,V46=0,V48=0,V52=0,V53=0,V54=0,V50=0,V51=0,V49=0,V47=0,V55=0,V45=0,V56=0,V41=0,V29=0,V31=0,V35=0,V36=0,V37=0,V33=0,V34=0,V32=0,V30=0,V38=0,V39=0,V28=0,V40=0;
int I;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=11157;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2130&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=405; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(405,jvj+2,N)*/
N=pile[WZ2]; 
V18=N+1;
pile[v[22]]=945; pile[WZ1]=937; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(945,937,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=937; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(937,jvj+2,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=945; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(945,jvj+2,V15)*/
V15=pile[WZ2]; 
V12=V13-V15;
if((V12<=V17)) goto l4;
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(494,324,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l4;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+4,V21)*/
V21=pile[WZ2]; 
if((V21!=V18)) goto l2;
pile[v[22]]=109; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(109,jvj+4,jvj+5)*/
if((x[jvj+5]!=10290)) goto l2;
pile[v[22]]=246; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(246,jvj+4,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=(-2532); pile[WZ1]=V3; 
(*f[64])( );     /*SRA2((-2532),V3,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=(-3571); pile[WZ1]=V5; 
(*f[64])( );     /*SRA2((-3571),V5,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V6,91,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=V7; 
(*f[99])( );     /*SPM0(V26,V7,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V8,93,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V4,41,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V2,40,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V10,32,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V11,41,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; 
(*f[1803])( );     /*SPLL0(V9,K)*/
K=pile[WZ1]; 
pile[v[22]]=jvj+2; pile[WZ1]=405; pile[WZ2]=V18; 
(*f[43])( );     /*CHGC2(jvj+2,405,V18)*/
pile[WZ1]=945; pile[WZ2]=V13; 
(*f[43])( );     /*CHGC2(jvj+2,945,V13)*/
if((N>0)) goto l3;
if((N!=0)) goto l4;
pile[v[22]]=241; pile[WZ1]=27; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(241,27,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=K; 
(*f[64])( );     /*SRA2((-2577),K,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V29,40,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V31; 
(*f[64])( );     /*SRA2((-2491),V31,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V35,91,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=145; pile[WZ1]=V36; 
(*f[99])( );     /*SPM0(145,V36,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V37,93,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=V33; 
(*f[64])( );     /*SRA2(V41,V33,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V34; 
(*f[99])( );     /*SPM0(0,V34,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V32,41,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V30,32,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=(-843); pile[WZ1]=V38; 
(*f[64])( );     /*SRA2((-843),V38,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=3999; pile[WZ1]=V39; 
(*f[64])( );     /*SRA2(3999,V39,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; 
(*f[1803])( );     /*SPLL0(V28,V40)*/
V40=pile[WZ1]; 
pile[v[22]]=V40; 
(*f[656])( );     /*SPLN2(V40,J)*/
J=pile[WZ1]; 
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=J; v[102]=0;return;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l3:pile[v[22]]=241; pile[WZ1]=27; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(241,27,V57)*/
V57=pile[WZ2]; 
pile[WZ1]=80; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(241,80,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=K; 
(*f[64])( );     /*SRA2((-2577),K,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V46,40,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V48; 
(*f[64])( );     /*SRA2((-2491),V48,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V52; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V52,91,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=145; pile[WZ1]=V53; 
(*f[99])( );     /*SPM0(145,V53,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=V54; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V54,93,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=V50; 
(*f[64])( );     /*SRA2(V57,V50,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V51; 
(*f[99])( );     /*SPM0(0,V51,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=V49; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V49,41,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V47,32,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=V58; pile[WZ1]=V55; 
(*f[64])( );     /*SRA2(V58,V55,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; 
(*f[1803])( );     /*SPLL0(V45,V56)*/
V56=pile[WZ1]; 
pile[v[22]]=V56; 
(*f[656])( );     /*SPLN2(V56,J)*/
J=pile[WZ1]; 
goto l5;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
}
