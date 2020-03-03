#include "dx.h"
void SORTA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X=0,Y=0,V2=0,V40=0,V41=0,V42=0,V44=0,V46=0,V27=0,M=0,V16=0,V15=0,I=0,V24=0,V63=0,V65=0,V66=0,V30=0,V31=0,V74=0,V76=0,V77=0,V58=0,V60=0,V56=0,V57=0,V59=0,V61=0,V6=0,V50=0,V52=0,V47=0,V48=0,V49=0,V51=0,V53=0,V28=0,V70=0,V68=0,V69=0,V71=0,V72=0,V33=0,V38=0,V39=0,V35=0,V79=0,V34=0,V36=0,V37=0,V83=0;
int NN;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=18;
if(v[0]>99700) (*f[6])( );

NN=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
X=incon;
X=v[0];
Y=v[22];
x[jvj+1]=d[0];z[jvj+1]=0;
l1:if((x[jvj+1]>0)) goto l2;
x[jvj+5]=250 ;z[jvj+5]=250;
l10:I=0;
l12:V24=v[I];
if((V24==0)) goto l11;
pile[v[22]]=41; pile[WZ1]=I; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,I,0,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=V63; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V63,58,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V24; pile[WZ2]=V65; 
(*f[39])( );     /*SDX0(41,V24,V65,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=V66; 
(*f[40])( );     /*SLG0(V66)*/
fflush(stdout);
l11:I++;
if((I<=300)) goto l12;
V30=0;
l14:V31=vv[V30];
if((V31==0)) goto l13;
pile[v[22]]=41; pile[WZ1]=V30; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V30,0,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=V74; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V74,58,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V31; pile[WZ2]=V76; 
(*f[39])( );     /*SDX0(41,V31,V76,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=V77; 
(*f[40])( );     /*SLG0(V77)*/
fflush(stdout);
l13:V30++;
if((V30<=200)) goto l14;
x[jvj+8]=vo[20];z[jvj+8]=vz[20];
pile[v[22]]=719; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(719,jvj+8,jvj+9)*/
pile[v[22]]=218; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(218,jvj+9,jvj+10)*/
if((x[jvj+10]!=298)) goto l16;
x[jvj+7]=vo[16];z[jvj+7]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+7; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(498,jvj+7,jvj+11)*/
V58=x[jvj+11];
V60=x[jvj+5];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=719; 
(*f[42])( );     /*SRA1(135,0,719,V56)*/
V56=pile[WZ3]; 
pile[WZ1]=V56; pile[WZ2]=298; 
(*f[42])( );     /*SRA1(135,V56,298,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V58; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(20,V58,V57,V16)*/
V16=pile[WZ3]; 
V15=incon;
pile[v[22]]=163; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,jvj+7,M)*/
M=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=M; 
(*f[37])( );     /*SRA0(V16,M,V15)*/
V15=pile[WZ2]; 
l15:pile[v[22]]=20; pile[WZ1]=V60; pile[WZ2]=V15; 
(*f[39])( );     /*SDX0(20,V60,V15,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NN; pile[WZ2]=V59; 
(*f[39])( );     /*SDX0(41,NN,V59,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=V61; 
(*f[40])( );     /*SLG0(V61)*/
fflush(stdout);
l16:x[jvj+12]=vo[20];z[jvj+12]=vz[20];
pile[v[22]]=719; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(719,jvj+12,jvj+13)*/
pile[v[22]]=218; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(218,jvj+13,jvj+14)*/
if(x[jvj+14]!=10240&&x[jvj+14]!=10614) goto l6;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+13,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,jvj+13,jvj+15)*/
V50=x[jvj+14];
V52=x[jvj+15];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=719; 
(*f[42])( );     /*SRA1(135,0,719,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; pile[WZ1]=(-4669); 
(*f[37])( );     /*SRA0(V47,(-4669),V48)*/
V48=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V50; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(20,V50,V48,V49)*/
V49=pile[WZ3]; 
pile[WZ1]=V52; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(20,V52,V49,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V6; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(41,V6,V51,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; 
(*f[40])( );     /*SLG0(V53)*/
fflush(stdout);
l6:x[jvj+18]=w[177][8];
l7:if((x[jvj+18]<=0)) goto l20;
x[jvj+6]=s[x[jvj+18]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+18];
pile[v[22]]=190; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(190,jvj+6,V27)*/
V27=pile[WZ2]; 
if((V27!=(-1719))) goto l8;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+6,V28)*/
V28=pile[WZ2]; 
if((X<V28)) goto l19;
V70=v[0];
pile[v[22]]=0; pile[WZ1]=(-1719); 
(*f[37])( );     /*SRA0(0,(-1719),V68)*/
V68=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V70; pile[WZ2]=V68; 
(*f[39])( );     /*SDX0(41,V70,V68,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V69,62,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V28; pile[WZ2]=V71; 
(*f[39])( );     /*SDX0(41,V28,V71,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=V72; 
(*f[40])( );     /*SLG0(V72)*/
fflush(stdout);
l19:if(X!=incon) goto l20;
l21:if(x[jvj+5]==381||x[jvj+5]==250) goto l24;
V36=Y-100;
V33=incon;
if((V36>0)) goto l17;
V33=0;
l22:if((V33>Y)) goto l24;
V37=pile[V33];
pile[v[22]]=41; pile[WZ1]=V33; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V33,0,V83)*/
V83=pile[WZ3]; 
pile[WZ1]=V37; pile[WZ2]=V83; 
(*f[39])( );     /*SDX0(41,V37,V83,V35)*/
V35=pile[WZ3]; 
V34=incon;
if((V37<=com)) goto l18;
if((V37<=100000)) goto l18;
V38=z[V37];
V39=x[V37];
pile[WZ1]=V39; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(41,V39,V35,V79)*/
V79=pile[WZ3]; 
pile[WZ1]=V38; pile[WZ2]=V79; 
(*f[39])( );     /*SDX0(41,V38,V79,V34)*/
V34=pile[WZ3]; 
l23:pile[v[22]]=V34; 
(*f[40])( );     /*SLG0(V34)*/
fflush(stdout);
V33++;
goto l22;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=159; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(159,jvj+2,jvj+3)*/
x[jvj+17]=x[jvj+3] ;z[jvj+17]=z[jvj+3];
l3:if((x[jvj+17]>0)) goto l4;
x[jvj+1]=t[x[jvj+1]];
goto l1;
l4:x[jvj+4]=s[x[jvj+17]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+17];
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+4,V2)*/
V2=pile[WZ2]; 
if((V2!=NN)) goto l5;
x[jvj+5]=x[jvj+4] ;z[jvj+5]=z[jvj+4];
if((x[jvj+5]==381)) goto l10;
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(10,0,126,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V40; pile[WZ2]=jvj+5; 
(*f[42])( );     /*SRA1(135,V40,jvj+5,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=X; pile[WZ2]=V41; 
(*f[39])( );     /*SDX0(41,X,V41,V42)*/
V42=pile[WZ3]; 
pile[WZ1]=Y; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(41,Y,V42,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=10; pile[WZ1]=V44; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(10,V44,126,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=V46; 
(*f[40])( );     /*SLG0(V46)*/
fflush(stdout);
goto l10;
l5:x[jvj+17]=t[x[jvj+17]];
goto l3;
l8:x[jvj+18]=t[x[jvj+18]];
goto l7;
l9:V15=V16;
goto l15;
l17:V33=V36;
goto l22;
l18:V34=V35;
goto l23;
l20:if(x[jvj+5]==381||x[jvj+5]==250) goto l21;
pile[v[22]]=999999; pile[WZ1]=X; pile[WZ2]=21; pile[WZ3]=jvj+16; 
(*f[53])( );if(v[102]) goto l21;     /*ESSOB0(999999,X,21,jvj+16)*/
goto l21;
l24:v[0]=jvj; v[22]-=1; return;
}
