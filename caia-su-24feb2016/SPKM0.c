#include "dx.h"
void SPKM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,V15=0,V5=0,V7=0,V8=0,V9=0,V10=0,V6=0,V4=0,V11=0,V12=0,V3=0,V13=0,A=0,V31=0,Q=0,V30=0,V20=0,V21=0,V23=0,V24=0,V22=0,V18=0,V19=0,V17=0,V25=0,V54=0,V55=0,V39=0,V40=0,V42=0,V43=0,V41=0,V37=0,V38=0,V36=0,V45=0,V48=0,V49=0,V50=0,V46=0,V47=0,V44=0,V52=0,V51=0,V53=0;
int I;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=10597;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1808&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=I; 
(*f[656])( );     /*SPLN2(I,L)*/
L=pile[WZ1]; 
pile[v[22]]=365; pile[WZ1]=10253; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(365,10253,jvj+2)*/
if((x[jvj+2]<=0)) goto l3;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=246; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(246,jvj+3,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=L; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(L,40,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=(-2532); pile[WZ1]=V5; 
(*f[64])( );     /*SRA2((-2532),V5,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=(-3571); pile[WZ1]=V7; 
(*f[64])( );     /*SRA2((-3571),V7,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V8,91,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=V9; 
(*f[99])( );     /*SPM0(V15,V9,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V10,93,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V6,41,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V4,40,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V11,32,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V12,41,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V3,59,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V13,32,A)*/
A=pile[WZ2]; 
x[jvj+4]=vo[15];z[jvj+4]=vz[15];
pile[v[22]]=297; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(297,jvj+4,jvj+5)*/
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(365,jvj+5,jvj+6)*/
for(i=x[jvj+6],V31=0;i>0;i=t[i],V31++)  ;
if((V31==1)) goto l1;
if((V31<=1)) goto l3;
pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,51,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=(-1719); pile[WZ1]=A; 
(*f[64])( );     /*SRA2((-1719),A,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V20,91,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=(-2521); pile[WZ1]=V21; 
(*f[64])( );     /*SRA2((-2521),V21,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=V23; 
(*f[64])( );     /*SRA2(V30,V23,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=2; pile[WZ1]=V24; 
(*f[99])( );     /*SPM0(2,V24,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V22,93,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V18,61,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=(-1936); pile[WZ1]=V19; 
(*f[64])( );     /*SRA2((-1936),V19,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V17,59,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V25,32,Q)*/
Q=pile[WZ2]; 
l2:pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,51,V54)*/
V54=pile[WZ2]; 
pile[WZ1]=80; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,80,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=(-1719); pile[WZ1]=Q; 
(*f[64])( );     /*SRA2((-1719),Q,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V39,91,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=(-2521); pile[WZ1]=V40; 
(*f[64])( );     /*SRA2((-2521),V40,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V54; pile[WZ1]=V42; 
(*f[64])( );     /*SRA2(V54,V42,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V43; 
(*f[99])( );     /*SPM0(1,V43,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V41,93,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V37,61,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=(-1936); pile[WZ1]=V38; 
(*f[64])( );     /*SRA2((-1936),V38,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V36,59,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V45; 
(*f[64])( );     /*SRA2((-2491),V45,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V48,91,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V49; 
(*f[99])( );     /*SPM0(0,V49,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V50,93,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V46,61,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=(-2521); pile[WZ1]=V47; 
(*f[64])( );     /*SRA2((-2521),V47,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V44,59,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=V52; 
(*f[64])( );     /*SRA2(V55,V52,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V51,59,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; 
(*f[656])( );     /*SPLN2(V53,J)*/
J=pile[WZ1]; 
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=J; v[102]=0;return;
l1:Q=A;
goto l2;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
}
