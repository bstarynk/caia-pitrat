#include "dx.h"
void EAP1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,NRR=0,KK=0,NR=0,K=0,M=0,V27=0,V11=0,V10=0,V6=0,LL=0,V22=0,V15=0,V28=0,V29=0,V3=0,V5=0,V36=0,V32=0,V34=0,DFF=0,V39=0,V42=0,V43=0,V44=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=10522;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==124&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=LL=x[jvj+7]=M=incon;
x[jvj+3]=vo[20];z[jvj+3]=vz[20];
pile[v[22]]=276; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(276,jvj+3,jvj+4)*/
l1:V4=bh[v[1]][0];
if((V4<48)) goto l32;
if((V4>57)) goto l32;
V3=135;
l2:if((V3==135)) goto l3;
l24:if(x[jvj+4]!=incon) goto l25;
l31:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; return;
l3:pile[v[22]]=0; 
(*f[126])( );     /*LND2(0,NRR,KK)*/
NRR=pile[WZ1]; KK=pile[WZ2]; 
if((NRR>7)) goto l24;
NR=NRR;
K=KK;
if((NR==7)) goto l6;
if(x[jvj+4]!=incon) goto l7;
l8:M=NR;
l10:V27=bh[v[1]][K];
if((V27!=59)) goto l12;
if((NR<=0)) goto l12;
x[jvj+15]=vo[27];z[jvj+15]=vz[27];
pile[v[22]]=1702; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1702,jvj+15,jvj+16)*/
pile[v[22]]=128; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(128,jvj+16,jvj+17)*/
l36:if((x[jvj+17]<=0)) goto l11;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=140; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(140,jvj+18,V39)*/
V39=pile[WZ2]; 
if((V39!=43)) goto l37;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(130,jvj+18,V42)*/
V42=pile[WZ2]; 
V43=V42;
V44=v[1];
v[1]=0;
pile[v[22]]=V43; 
(*f[40])( );     /*SLG0(V43)*/
v[1]=V44;
l11:pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l12:if(x[jvj+4]!=incon) goto l13;
l22:LL=K;
l23:if(x[jvj+7]==incon) goto l24;
if(x[jvj+4]!=incon) goto l26;
l30:if((x[jvj+7]!=12)) goto l31;
pile[v[22]]=0; pile[WZ1]=(-1761); 
(*f[37])( );     /*SRA0(0,(-1761),V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=(-3412); 
(*f[37])( );     /*SRA0(V28,(-3412),V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; 
(*f[40])( );     /*SLG0(V29)*/
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l31;
l5:x[jvj+11]=68 ;z[jvj+11]=68;
l20:pile[v[22]]=jvj+4; pile[WZ1]=366; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(jvj+4,366,jvj+11)*/
if((NR!=7)) goto l21;
pile[v[22]]=498; pile[WZ1]=jvj+4; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(498,jvj+4,jvj+12)*/
pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,V22)*/
V22=pile[WZ1]; 
pile[v[22]]=jvj+12; pile[WZ1]=130; pile[WZ2]=V22; 
(*f[43])( );     /*CHGC2(jvj+12,130,V22)*/
l21:if(LL==incon) goto l22;
goto l23;
l6:M=0;
goto l10;
l7:if((NR!=6)) goto l8;
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+4,M)*/
M=pile[WZ2]; 
goto l10;
l9:x[jvj+19]=12 ;z[jvj+19]=12;
l19:LL=V6;
x[jvj+7]=x[jvj+19] ;z[jvj+7]=z[jvj+19];
if((x[jvj+7]==12)) goto l4;
pile[v[22]]=109; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(109,jvj+4,jvj+6)*/
if((x[jvj+7]==x[jvj+6])) goto l4;
pile[v[22]]=jvj+4; pile[WZ1]=449; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(jvj+4,449,jvj+7)*/
l16:pile[v[22]]=jvj+4; pile[WZ1]=117; pile[WZ2]=M; 
(*f[43])( );     /*CHGC2(jvj+4,117,M)*/
pile[WZ1]=130; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+4,130,0)*/
l4:x[jvj+11]=incon;
if((NR==6)) goto l5;
x[jvj+11]=67 ;z[jvj+11]=67;
goto l20;
l13:if((V27==46)) goto l14;
if((V27==43)) goto l15;
if((V27!=32)) goto l4;
if((NR<=0)) goto l4;
V11=K+1;
V10=bh[v[1]][V11];
if((V10==32)) goto l4;
if((V10<48)) goto l33;
if((V10>57)) goto l33;
V5=135;
l17:if((V5==134)) goto l18;
goto l4;
l14:if((NR<=0)) goto l4;
pile[v[22]]=K; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+8; 
(*f[78])( );if(v[102]) goto l4;     /*SMA0(K,36,67,jvj+8)*/
pile[v[22]]=jvj+4; pile[WZ1]=39; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(jvj+4,39,jvj+8)*/
goto l4;
l15:if((NR<=0)) goto l4;
x[jvj+9]=vo[20];z[jvj+9]=vz[20];
pile[v[22]]=449; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(449,jvj+9,jvj+10)*/
pile[v[22]]=jvj+4; pile[WZ1]=449; 
(*f[35])( );     /*CHGC1(jvj+4,449,jvj+10)*/
goto l16;
l18:pile[v[22]]=K; 
(*f[107])( );     /*CRC0(K,V6)*/
V6=pile[WZ1]; 
x[jvj+19]=incon;
pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+5; 
(*f[78])( );if(v[102]) goto l9;     /*SMA0(K,36,67,jvj+5)*/
x[jvj+19]=x[jvj+5] ;z[jvj+19]=z[jvj+5];
goto l19;
l25:pile[v[22]]=109; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(109,jvj+4,jvj+7)*/
if(M!=incon) goto l26;
l27:if(LL!=incon) goto l28;
l29:if(x[jvj+7]!=incon) goto l30;
goto l31;
l26:pile[v[22]]=109; pile[WZ1]=jvj+4; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(109,jvj+4,jvj+13)*/
if((x[jvj+7]!=x[jvj+13])) goto l27;
pile[v[22]]=jvj+4; pile[WZ1]=130; pile[WZ2]=M; 
(*f[43])( );     /*CHGC2(jvj+4,130,M)*/
goto l27;
l28:V15=bh[v[1]][LL];
if(V15!=44&&V15!=45) goto l29;
pile[v[22]]=107; pile[WZ1]=jvj+4; 
(*f[71])( );     /*ENLV0(107,jvj+4)*/
V36=LL;
l34:V32=bh[v[1]][V36];
if(V32!=44&&V32!=45) goto l35;
pile[v[22]]=V36; pile[WZ1]=jvj+14; 
(*f[335])( );if(v[102]) goto l35;     /*LANT0(V36,jvj+14,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=107; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+4,107,jvj+14)*/
V36=V34;
goto l34;
l32:V3=134;
goto l2;
l33:V5=134;
goto l17;
l35:DFF=V36;
goto l29;
l37:x[jvj+17]=t[x[jvj+17]];
goto l36;
}
