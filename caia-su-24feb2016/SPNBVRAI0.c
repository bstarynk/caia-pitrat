#include "dx.h"
void SPNBVRAI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V11=0,V5=0,V8=0,V9=0,V10=0,V6=0,V7=0,V4=0,V55=0,V39=0,V40=0,V42=0,V43=0,V41=0,V44=0,V46=0,V47=0,V48=0,V45=0,V38=0,V34=0,V20=0,V21=0,V23=0,V24=0,V22=0,V25=0,V27=0,V28=0,V29=0,V26=0,V19=0;
int N,I;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=20;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; I=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
J=0;
pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(218,N,jvj+1)*/
pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+1,K)*/
K=pile[WZ2]; 
pile[v[22]]=208; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(208,N,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=22)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+2,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+4,jvj+5)*/
V11=incon;
if((x[jvj+5]==1215)) goto l1;
if((x[jvj+5]!=1214)) goto l6;
V11=1;
l2:V5=0;
pile[v[22]]=(-8107); pile[WZ1]=V5; 
(*f[64])( );     /*SRA2((-8107),V5,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V8,91,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=V9; 
(*f[99])( );     /*SPM0(K,V9,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V10,93,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V6,61,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=V7; 
(*f[99])( );     /*SPM0(V11,V7,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; 
(*f[289])( );     /*SPLN1(V4)*/
l6:pile[v[22]]=208; pile[WZ1]=N; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(208,N,jvj+12)*/
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]==1215)) goto l7;
if((x[jvj+14]!=1214)) goto l11;
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+17)*/
x[jvj+20]=x[jvj+17] ;z[jvj+20]=z[jvj+17];
l9:if((x[jvj+20]<=0)) goto l11;
x[jvj+11]=s[x[jvj+20]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+20];
pile[v[22]]=241; pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(241,87,V55)*/
V55=pile[WZ2]; 
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+19]=x[jvj+17] ;z[jvj+19]=z[jvj+17];
l3:if((x[jvj+19]>0)) goto l4;
pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+18; 
(*f[300])( );     /*TRI10(jvj+6,107,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+11; pile[WZ2]=102; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+18,jvj+11,102,jvj+8)*/
pile[v[22]]=107; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+9)*/
if((x[jvj+9]==0)) goto l10;
V39=0;
pile[v[22]]=(-2577); pile[WZ1]=V39; 
(*f[64])( );     /*SRA2((-2577),V39,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V40,40,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=V42; 
(*f[2190])( );if(v[102]) goto l10;     /*SPCARD0(jvj+8,V42,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V43,41,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V41,32,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=(-8107); pile[WZ1]=V44; 
(*f[64])( );     /*SRA2((-8107),V44,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V46,91,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=V47; 
(*f[99])( );     /*SPM0(K,V47,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V48,93,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=V45; 
(*f[64])( );     /*SRA2(V55,V45,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; 
(*f[289])( );     /*SPLN1(V38)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+11)*/
l10:x[jvj+20]=t[x[jvj+20]];
goto l9;
l1:V11=0;
goto l2;
l4:x[jvj+7]=s[x[jvj+19]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+19];
if((x[jvj+7]==x[jvj+11])) goto l5;
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==x[jvj+7]) goto l5;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
l5:x[jvj+19]=t[x[jvj+19]];
goto l3;
l7:pile[v[22]]=241; pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(241,87,V34)*/
V34=pile[WZ2]; 
V20=0;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+15)*/
l8:if((x[jvj+15]<=0)) goto l11;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=(-2577); pile[WZ1]=V20; 
(*f[64])( );     /*SRA2((-2577),V20,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V21,40,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=jvj+16; pile[WZ1]=V23; 
(*f[2077])( );     /*SPR0(jvj+16,V23,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V24,41,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V22,32,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=(-8107); pile[WZ1]=V25; 
(*f[64])( );     /*SRA2((-8107),V25,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V27,91,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=V28; 
(*f[99])( );     /*SPM0(K,V28,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V29,93,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=V26; 
(*f[64])( );     /*SRA2(V34,V26,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V19; 
(*f[289])( );     /*SPLN1(V19)*/
x[jvj+15]=t[x[jvj+15]];
goto l8;
l11:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
}
