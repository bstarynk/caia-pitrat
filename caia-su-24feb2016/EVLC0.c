#include "dx.h"
void EVLC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Q=0,V2=0,M=0,V1=0,V4=0,V23=0,V13=0,V24=0,V14=0,V66=0,V63=0,V64=0,V65=0,V22=0,A=0,B=0,V32=0,V72=0,V67=0,V68=0,V69=0,V70=0,V71=0,V73=0,V20=0,V19=0,I=0,V16=0,V15=0,V18=0,V37=0,V44=0,V75=0,V50=0,V52=0,V51=0,V55=0,V54=0,V60=0,V77=0,V57=0,V56=0,V47=0,V49=0,V48=0,V42=0,V46=0,V62=0,V84=0,V85=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=33;
if(v[0]>99700) (*f[6])( );


WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+13]=incon;
Q=v[90];
V2=knr[Q];
M=v[22];
V1=M+V2;
v[22]=V1;
V4=vbl[Q];
x[jvj+31]=V4 ;z[jvj+31]=(V4<=sepcte) ? V4 : 0;
x[jvj+6]=x[jvj+31] ;z[jvj+6]=z[jvj+31];
x[jvj+1]=vo[20];z[jvj+1]=vz[20];
x[jvj+32]=incon;
pile[v[22]]=1575; pile[v[22]+1]=jvj+1; pile[v[22]+2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1575,jvj+1,jvj+2)*/
x[jvj+32]=x[jvj+2] ;z[jvj+32]=z[jvj+2];
l28:pile[v[22]]=60; pile[v[22]+1]=499; pile[v[22]+2]=jvj+27; 
(*f[46])( );     /*TRI0(60,499,jvj+27)*/
pile[v[22]]=109; pile[v[22]+1]=jvj+6; pile[v[22]+2]=130; pile[v[22]+3]=5; pile[v[22]+4]=jvj+27; pile[v[22]+5]=jvj+5; 
(*f[47])( );     /*QUADRI0(109,jvj+6,130,5,jvj+27,jvj+5)*/
pile[v[22]]=629; pile[v[22]+1]=jvj+1; pile[v[22]+2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(629,jvj+1,jvj+3)*/
pile[v[22]]=159; pile[v[22]+1]=jvj+3; pile[v[22]+2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,jvj+3,jvj+4)*/
if((x[jvj+4]==0)) goto l2;
pile[v[22]]=jvj+5; pile[v[22]+1]=107; 
(*f[34])( );     /*CHGC0(jvj+5,107,jvj+4)*/
l2:x[jvj+26]=x[jvj+32] ;z[jvj+26]=z[jvj+32];
pile[v[22]]=jvj+1; pile[v[22]+1]=276; pile[v[22]+2]=jvj+5; 
(*f[35])( );     /*CHGC1(jvj+1,276,jvj+5)*/
pile[v[22]+1]=1575; pile[v[22]+2]=68; 
(*f[35])( );     /*CHGC1(jvj+1,1575,68)*/
pile[v[22]]=jvj+6; pile[v[22]+1]=Q; pile[v[22]+2]=jvj+7; 
(*f[28])( );if(v[102]) goto l9;     /*TLDEBL0(jvj+6,Q,jvj+7)*/
pile[v[22]]=jvj+7; pile[v[22]+1]=jvj+5; 
(*f[29])( );     /*EVLR0(jvj+7,jvj+5)*/
pile[v[22]]=Q; pile[v[22]+1]=jvj+7; 
(*f[27])( );     /*CRETND0(Q,jvj+7)*/
pile[v[22]]=135; pile[v[22]+2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(135,jvj+7,jvj+13)*/
l9:V20=knd[Q];
V19=V20-1;
I=0;
l10:if((I<=V19)) goto l12;
if(x[jvj+13]!=incon) goto l22;
x[jvj+25]=135 ;z[jvj+25]=135;
l25:V62=incon;
if((x[jvj+25]==134)) goto l26;
V62=1;
l27:v[102]=V62;
v[97]=0;
v[22]=M;
v[0]=jvj; return;
l1:x[jvj+32]=68 ;z[jvj+32]=68;
goto l28;
l3:V23=x[V15];
V13=V23;
l4:V14=incon;
if(x[jvj+11]==20||x[jvj+11]==23) goto l5;
V14=(-101);
l7:if((x[jvj+30]=w[x[jvj+11]][3])==incon) goto l11;
A=V13;
x[jvj+29]=A ;z[jvj+29]=(x[jvj+11]==20&&A<=sepcte) ? A : (x[jvj+11]==41) ? (-1000) : 0;
B=V14;
x[jvj+8]=vo[20];z[jvj+8]=vz[20];
pile[v[22]]=629; pile[v[22]+1]=jvj+8; pile[v[22]+2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(629,jvj+8,jvj+9)*/
pile[v[22]]=258; pile[v[22]+1]=jvj+9; pile[v[22]+2]=jvj+10; 
(*f[33])( );     /*FNDE0(258,jvj+9,jvj+10)*/
if((x[jvj+10]!=0)) goto l29;
l6:V66=x[jvj+29];
pile[v[22]]=0; pile[v[22]+1]=V18; 
(*f[37])( );     /*SRA0(0,V18,V63)*/
V63=pile[v[22]+2]; 
pile[v[22]]=V63; pile[v[22]+1]=58; 
(*f[38])( );     /*SPC0(V63,58,V64)*/
V64=pile[v[22]+2]; 
pile[v[22]]=jvj+11; pile[v[22]+1]=V66; pile[v[22]+2]=V64; 
(*f[39])( );     /*SDX0(jvj+11,V66,V64,V65)*/
V65=pile[v[22]+3]; 
pile[v[22]]=V65; 
(*f[40])( );     /*SLG0(V65)*/
l29:pile[v[22]]=B; pile[v[22]+1]=416; pile[v[22]+2]=jvj+28; 
(*f[46])( );     /*TRI0(B,416,jvj+28)*/
pile[v[22]]=140; pile[v[22]+1]=V18; pile[v[22]+2]=158; pile[v[22]+3]=jvj+11; pile[v[22]+4]=jvj+28; pile[v[22]+5]=jvj+12; 
(*f[48])( );     /*QUADRI1(140,V18,158,jvj+11,jvj+28,jvj+12)*/
V84=x[jvj+29];
V85=z[jvj+29];
pile[v[22]]=jvj+12; pile[v[22]+1]=V84; pile[v[22]+2]=jvj+30; pile[v[22]+3]=V85; 
(*f[49])( );     /*CHP0(jvj+12,V84,jvj+30,V85)*/
pile[v[22]]=jvj+5; pile[v[22]+1]=128; pile[v[22]+2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+5,128,jvj+12)*/
l11:I++;
goto l10;
l5:V24=z[V15];
V14=V24;
goto l7;
l8:pile[v[22]]=130; pile[v[22]+1]=jvj+7; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+7,V32)*/
V32=pile[v[22]+2]; 
V72=x[jvj+6];
pile[v[22]]=10; pile[v[22]+1]=0; pile[v[22]+2]=126; 
(*f[41])( );     /*SRB0(10,0,126,V67)*/
V67=pile[v[22]+3]; 
pile[v[22]]=135; pile[v[22]+1]=V67; pile[v[22]+2]=300; 
(*f[42])( );     /*SRA1(135,V67,300,V68)*/
V68=pile[v[22]+3]; 
pile[v[22]+1]=V68; pile[v[22]+2]=135; 
(*f[42])( );     /*SRA1(135,V68,135,V69)*/
V69=pile[v[22]+3]; 
pile[v[22]]=V69; pile[v[22]+1]=(-740); 
(*f[37])( );     /*SRA0(V69,(-740),V70)*/
V70=pile[v[22]+2]; 
pile[v[22]]=20; pile[v[22]+1]=V72; pile[v[22]+2]=V70; 
(*f[39])( );     /*SDX0(20,V72,V70,V71)*/
V71=pile[v[22]+3]; 
pile[v[22]]=41; pile[v[22]+1]=V32; pile[v[22]+2]=V71; 
(*f[39])( );     /*SDX0(41,V32,V71,V73)*/
V73=pile[v[22]+3]; 
pile[v[22]]=V73; 
(*f[40])( );     /*SLG0(V73)*/
goto l9;
l12:V16=M+I;
V15=pile[V16];
V18=vnd[Q][I];
V22=tnd[Q][I];
x[jvj+11]=V22 ;z[jvj+11]=(V22<=sepcte) ? V22 : 0;
V13=incon;
if(x[jvj+11]==20||x[jvj+11]==23) goto l3;
V13=V15;
goto l4;
l16:if((v[98]==1)) goto l23;
v[97]=1;
l23:pile[v[22]]=jvj+13; pile[v[22]+1]=276; pile[v[22]+2]=jvj+25; 
(*f[31])( );     /*EVLQ0(jvj+13,276,jvj+25)*/
if((x[jvj+25]!=134)) goto l24;
V47=knd[Q];
V49=knr[Q];
V48=V49-1;
l20:if((V47>V48)) goto l24;
V42=vnd[Q][V47];
V46=tnd[Q][V47];
pile[v[22]]=128; pile[v[22]+1]=jvj+5; pile[v[22]+2]=jvj+18; 
(*f[33])( );     /*FNDE0(128,jvj+5,jvj+18)*/
x[jvj+33]=x[jvj+18] ;z[jvj+33]=z[jvj+18];
l17:if((x[jvj+33]<=0)) goto l21;
x[jvj+19]=s[x[jvj+33]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+33];
pile[v[22]]=140; pile[v[22]+1]=jvj+19; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+19,V44)*/
V44=pile[v[22]+2]; 
if((V44!=V42)) goto l18;
if(V46!=41&&V46!=89&&V46!=96&&V46!=1317) goto l19;
if((x[jvj+20]=w[V46][3])==incon) goto l19;
pile[v[22]]=jvj+19; pile[v[22]+1]=jvj+20; pile[v[22]+3]=jvj+21; 
(*f[45])( );if(v[102]) goto l19;     /*FNDZ0(jvj+19,jvj+20,V75,jvj+21)*/
V75=pile[v[22]+2]; 
V50=M+V47;
V52=V75;
V51=V52;
pile[V50]=V51;
l19:if(V46!=20&&V46!=23) goto l21;
V55=M+V47;
V54=pile[V55];
pile[v[22]]=416; pile[v[22]+1]=jvj+19; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(416,jvj+19,V60)*/
V60=pile[v[22]+2]; 
pile[v[22]]=158; pile[v[22]+2]=jvj+22; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(158,jvj+19,jvj+22)*/
if((x[jvj+23]=w[x[jvj+22]][3])==incon) goto l21;
pile[v[22]]=jvj+19; pile[v[22]+1]=jvj+23; pile[v[22]+3]=jvj+24; 
(*f[45])( );if(v[102]) goto l21;     /*FNDZ0(jvj+19,jvj+23,V77,jvj+24)*/
V77=pile[v[22]+2]; 
V57=V77;
V56=V57;
x[V54]=V56;
z[V54]=V60;
l21:V47++;
goto l20;
l18:x[jvj+33]=t[x[jvj+33]];
goto l17;
l22:x[jvj+15]=vo[20];z[jvj+15]=vz[20];
pile[v[22]]=629; pile[v[22]+1]=jvj+15; pile[v[22]+2]=jvj+16; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(629,jvj+15,jvj+16)*/
pile[v[22]]=258; pile[v[22]+1]=jvj+16; pile[v[22]+2]=jvj+17; 
(*f[33])( );     /*FNDE0(258,jvj+16,jvj+17)*/
l13:if((x[jvj+17]<=0)) goto l16;
x[jvj+14]=s[x[jvj+17]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+17];
pile[v[22]]=jvj+14; pile[v[22]+1]=jvj+5; 
(*f[30])( );if(v[102]) goto l15;     /*EVL0(jvj+14,jvj+5,V37)*/
V37=pile[v[22]+2]; 
if((V37==135)) goto l14;
l15:pile[v[22]]=jvj+5; pile[v[22]+1]=130; pile[v[22]+2]=0; 
(*f[43])( );     /*CHGC2(jvj+5,130,0)*/
l14:x[jvj+17]=t[x[jvj+17]];
goto l13;
l24:pile[v[22]]=jvj+15; pile[v[22]+1]=1575; pile[v[22]+2]=jvj+26; 
(*f[35])( );     /*CHGC1(jvj+15,1575,jvj+26)*/
goto l25;
l26:V62=0;
goto l27;
}
