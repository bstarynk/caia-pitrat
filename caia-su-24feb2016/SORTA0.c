#include "dx.h"
void SORTA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X=0,Y=0,V38=0,V39=0,V40=0,V42=0,V44=0,V25=0,NN=0,M=0,V14=0,V13=0,I=0,V22=0,V61=0,V63=0,V64=0,V28=0,V29=0,V72=0,V74=0,V75=0,V56=0,V58=0,V54=0,V55=0,V57=0,V59=0,V4=0,V48=0,V50=0,V45=0,V46=0,V47=0,V49=0,V51=0,V26=0,V68=0,V66=0,V67=0,V69=0,V70=0,V31=0,V36=0,V37=0,V33=0,V77=0,V32=0,V34=0,V35=0,V81=0;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
X=incon;
X=v[0];
Y=v[22];
if((x[R]==381)) goto l4;
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(10,0,126,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V38; pile[WZ2]=R; 
(*f[42])( );     /*SRA1(135,V38,R,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=X; pile[WZ2]=V39; 
(*f[39])( );     /*SDX0(41,X,V39,V40)*/
V40=pile[WZ3]; 
pile[WZ1]=Y; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(41,Y,V40,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=10; pile[WZ1]=V42; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(10,V42,126,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; 
(*f[40])( );     /*SLG0(V44)*/
fflush(stdout);
l4:NN=0;
I=0;
l7:V22=v[I];
if((V22==0)) goto l6;
pile[v[22]]=41; pile[WZ1]=I; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,I,0,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=V61; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V61,58,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V22; pile[WZ2]=V63; 
(*f[39])( );     /*SDX0(41,V22,V63,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; 
(*f[40])( );     /*SLG0(V64)*/
fflush(stdout);
l6:I++;
if((I<=300)) goto l7;
V28=0;
l9:V29=vv[V28];
if((V29==0)) goto l8;
pile[v[22]]=41; pile[WZ1]=V28; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V28,0,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=V72; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V72,58,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V29; pile[WZ2]=V74; 
(*f[39])( );     /*SDX0(41,V29,V74,V75)*/
V75=pile[WZ3]; 
pile[v[22]]=V75; 
(*f[40])( );     /*SLG0(V75)*/
fflush(stdout);
l8:V28++;
if((V28<=200)) goto l9;
x[jvj+3]=vo[20];z[jvj+3]=vz[20];
pile[v[22]]=719; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(719,jvj+3,jvj+4)*/
pile[v[22]]=218; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(218,jvj+4,jvj+5)*/
if((x[jvj+5]!=298)) goto l11;
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(498,jvj+2,jvj+6)*/
V56=x[jvj+6];
V58=x[R];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=719; 
(*f[42])( );     /*SRA1(135,0,719,V54)*/
V54=pile[WZ3]; 
pile[WZ1]=V54; pile[WZ2]=298; 
(*f[42])( );     /*SRA1(135,V54,298,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V56; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(20,V56,V55,V14)*/
V14=pile[WZ3]; 
V13=incon;
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+2,M)*/
M=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=M; 
(*f[37])( );     /*SRA0(V14,M,V13)*/
V13=pile[WZ2]; 
l10:pile[v[22]]=20; pile[WZ1]=V58; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(20,V58,V13,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NN; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(41,NN,V57,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; 
(*f[40])( );     /*SLG0(V59)*/
fflush(stdout);
l11:x[jvj+7]=vo[20];z[jvj+7]=vz[20];
pile[v[22]]=719; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(719,jvj+7,jvj+8)*/
pile[v[22]]=218; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(218,jvj+8,jvj+9)*/
if(x[jvj+9]!=10240&&x[jvj+9]!=10614) goto l1;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(117,jvj+8,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(109,jvj+8,jvj+10)*/
V48=x[jvj+9];
V50=x[jvj+10];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=719; 
(*f[42])( );     /*SRA1(135,0,719,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=(-4669); 
(*f[37])( );     /*SRA0(V45,(-4669),V46)*/
V46=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V48; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(20,V48,V46,V47)*/
V47=pile[WZ3]; 
pile[WZ1]=V50; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(20,V50,V47,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V4; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(41,V4,V49,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; 
(*f[40])( );     /*SLG0(V51)*/
fflush(stdout);
l1:x[jvj+12]=w[177][8];
l2:if((x[jvj+12]<=0)) goto l15;
x[jvj+1]=s[x[jvj+12]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+12];
pile[v[22]]=190; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(190,jvj+1,V25)*/
V25=pile[WZ2]; 
if((V25!=(-1719))) goto l3;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+1,V26)*/
V26=pile[WZ2]; 
if((X<V26)) goto l14;
V68=v[0];
pile[v[22]]=0; pile[WZ1]=(-1719); 
(*f[37])( );     /*SRA0(0,(-1719),V66)*/
V66=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V68; pile[WZ2]=V66; 
(*f[39])( );     /*SDX0(41,V68,V66,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=V67; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V67,62,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V26; pile[WZ2]=V69; 
(*f[39])( );     /*SDX0(41,V26,V69,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; 
(*f[40])( );     /*SLG0(V70)*/
fflush(stdout);
l14:if(X!=incon) goto l15;
l16:if(x[R]==381||x[R]==250) goto l19;
V34=Y-100;
V31=incon;
if((V34>0)) goto l12;
V31=0;
l17:if((V31>Y)) goto l19;
V35=pile[V31];
pile[v[22]]=41; pile[WZ1]=V31; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V31,0,V81)*/
V81=pile[WZ3]; 
pile[WZ1]=V35; pile[WZ2]=V81; 
(*f[39])( );     /*SDX0(41,V35,V81,V33)*/
V33=pile[WZ3]; 
V32=incon;
if((V35<=com)) goto l13;
if((V35<=100000)) goto l13;
V36=z[V35];
V37=x[V35];
pile[WZ1]=V37; pile[WZ2]=V33; 
(*f[39])( );     /*SDX0(41,V37,V33,V77)*/
V77=pile[WZ3]; 
pile[WZ1]=V36; pile[WZ2]=V77; 
(*f[39])( );     /*SDX0(41,V36,V77,V32)*/
V32=pile[WZ3]; 
l18:pile[v[22]]=V32; 
(*f[40])( );     /*SLG0(V32)*/
fflush(stdout);
V31++;
goto l17;
l3:x[jvj+12]=t[x[jvj+12]];
goto l2;
l5:V13=V14;
goto l10;
l12:V31=V34;
goto l17;
l13:V32=V33;
goto l18;
l15:if(x[R]==381||x[R]==250) goto l16;
pile[v[22]]=999999; pile[WZ1]=X; pile[WZ2]=21; pile[WZ3]=jvj+11; 
(*f[53])( );if(v[102]) goto l16;     /*ESSOB0(999999,X,21,jvj+11)*/
goto l16;
l19:v[0]=jvj; v[22]-=1; return;
}
