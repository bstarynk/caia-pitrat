#include "dx.h"
void SPRESS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V1=0,V55=0,V9=0,V12=0,V6=0,R=0,K=0,V52=0,V62=0,V46=0,V47=0,V48=0,V49=0,V50=0,V45=0,V51=0,V34=0,V35=0,V36=0,V37=0,V39=0,V40=0,V41=0,V38=0,V33=0,V42=0,V31=0,V20=0,V21=0,V22=0,V23=0,V27=0,V28=0,V29=0,V25=0,V26=0,V63=0,V24=0,V19=0,V30=0,V43=0;
int P,M,NN,X,I;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

P=pile[v[22]]; M=pile[v[22]+1]; NN=pile[v[22]+2]; X=pile[v[22]+3]; I=pile[v[22]+4]; v[22]+=6; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V63=P;
V62=I;
l22:x[jvj+15]=K=incon;
x[jvj+5]=vo[20];z[jvj+5]=vz[20];
pile[v[22]]=719; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(719,jvj+5,jvj+6)*/
pile[v[22]]=109; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(109,jvj+6,jvj+7)*/
if(x[jvj+7]==10253||x[jvj+7]==10290) goto l7;
l4:pile[v[22]]=474; pile[WZ1]=21; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(474,21,jvj+8)*/
l5:if((x[jvj+8]<=0)) goto l7;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=117; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+9,V55)*/
V55=pile[WZ2]; 
if((V55!=V63)) goto l6;
x[jvj+15]=x[jvj+9] ;z[jvj+15]=z[jvj+9];
l7:if((V63>=M)) goto l21;
V9=vnd[NN][V63];
pile[v[22]]=113; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(113,X,jvj+10)*/
l8:if((x[jvj+10]<=0)) goto l21;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=113)) goto l9;
pile[v[22]]=103; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,jvj+11,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+13,V12)*/
V12=pile[WZ2]; 
if((V9!=V12)) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+11,jvj+14)*/
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+14,V6)*/
V6=pile[WZ2]; 
V1=incon;
x[jvj+1]=vo[15];z[jvj+1]=vz[15];
pile[v[22]]=283; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(283,jvj+1,jvj+2)*/
l1:if((x[jvj+2]<=0)) goto l3;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+3,V16)*/
V16=pile[WZ2]; 
if((V16!=V6)) goto l2;
pile[v[22]]=158; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,jvj+3,jvj+4)*/
if(x[jvj+4]!=20&&x[jvj+4]!=23) goto l3;
V1=67;
l10:x[jvj+16]=x[jvj+14] ;z[jvj+16]=z[jvj+14];
R=V1;
if((R==67)) goto l11;
if(x[jvj+15]!=incon) goto l12;
l13:if((V63!=0)) goto l14;
if((R!=68)) goto l14;
pile[v[22]]=jvj+16; pile[WZ1]=V62; 
(*f[2200])( );     /*SPP1(jvj+16,V62,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V34,61,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=(-6004); pile[WZ1]=V35; 
(*f[64])( );     /*SRA2((-6004),V35,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V36,91,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V37; 
(*f[64])( );     /*SRA2((-2491),V37,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V39,91,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=22; pile[WZ1]=V40; 
(*f[99])( );     /*SPM0(22,V40,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V41,93,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; 
(*f[38])( );     /*SPC0(V38,93,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V33,59,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V42,32,K)*/
K=pile[WZ2]; 
l14:if(x[jvj+15]==incon) goto l15;
l17:if((R==68)) goto l18;
l19:if(K!=incon) goto l20;
l21:J=V62;
v[0]=jvj; v[22]-=6; pile[v[22]+5]=J; return;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l3:V1=68;
goto l10;
l6:x[jvj+8]=t[x[jvj+8]];
goto l5;
l9:x[jvj+10]=t[x[jvj+10]];
goto l8;
l11:K=V62;
l20:V43=V63+1;
V62=K;
V63=V43;
goto l22;
l12:if((R!=68)) goto l13;
if((V63<=0)) goto l13;
pile[v[22]]=110; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(110,jvj+15,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=jvj+16; pile[WZ1]=V62; 
(*f[2200])( );     /*SPP1(jvj+16,V62,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V46,61,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=(-6004); pile[WZ1]=V47; 
(*f[64])( );     /*SRA2((-6004),V47,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V48,91,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=V52; pile[WZ1]=V49; 
(*f[64])( );     /*SRA2(V52,V49,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V50,93,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V45,59,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V51,32,K)*/
K=pile[WZ2]; 
l18:gardevaleur[V63]=250;
goto l19;
l15:if(K==incon) goto l16;
goto l17;
l16:if((R!=68)) goto l21;
if((V63<=0)) goto l18;
pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(241,51,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=jvj+16; pile[WZ1]=V62; 
(*f[2200])( );     /*SPP1(jvj+16,V62,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V20,61,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=(-6004); pile[WZ1]=V21; 
(*f[64])( );     /*SRA2((-6004),V21,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V22,91,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V23; 
(*f[64])( );     /*SRA2((-2491),V23,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V27,91,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=22; pile[WZ1]=V28; 
(*f[99])( );     /*SPM0(22,V28,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V29,93,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=V25; 
(*f[64])( );     /*SRA2(V31,V25,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V63; pile[WZ1]=V26; 
(*f[99])( );     /*SPM0(V63,V26,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V24,93,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V19,59,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V30,32,K)*/
K=pile[WZ2]; 
goto l18;
}
