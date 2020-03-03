#include "dx.h"
void SORGRAMA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V2=0,V18=0,V12=0,V11=0,V19=0,JM=0,V13=0,V24=0,V23=0,V33=0,V32=0,V15=0,V47=0,JN=0,JJ=0,V41=0,V9=0,V8=0,V44=0,V50=0,V27=0,V53=0,V34=0,V55=0,V36=0,JK=0,V64=0,V77=0,V76=0,V67=0,V71=0,V70=0;
int Q,N,E,I;
int J;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=31;
if(v[0]>99700) (*f[6])( );

Q=pile[v[22]]; N=pile[v[22]+1]; E=pile[v[22]+2]; I=pile[v[22]+3]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=incon;
x[jvj+28]=x[E] ;z[jvj+28]=z[E];
l1:if((x[jvj+28]<=0)) goto l17;
x[jvj+1]=s[x[jvj+28]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+28];
pile[v[22]]=1640; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1640,jvj+1,jvj+2)*/
if((x[jvj+2]!=x[Q])) goto l2;
x[jvj+3]=x[jvj+1] ;z[jvj+3]=z[jvj+1];
if((V15=w[x[jvj+3]][1])==incon) goto l17;
if((V15==23)) goto l8;
if((V15==20)) goto l14;
pile[v[22]]=N; pile[WZ1]=jvj+3; pile[WZ3]=jvj+13; 
(*f[45])( );if(v[102]) goto l13;     /*FNDZ0(N,jvj+3,V41,jvj+13)*/
V41=pile[WZ2]; 
V9=V41;
V8=V9;
V44=V8;
pile[v[22]]=I; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(I,32,V3)*/
V3=pile[WZ2]; 
V2=incon;
pile[v[22]]=1640; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1640,jvj+3,jvj+4)*/
pile[v[22]]=1650; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1650,jvj+4,jvj+5)*/
if((x[jvj+5]!=68)) goto l3;
V2=V3;
l12:pile[v[22]]=41; pile[WZ1]=V44; pile[WZ2]=V2; 
(*f[39])( );     /*SDX0(41,V44,V2,JJ)*/
JJ=pile[WZ3]; 
l18:pile[v[22]]=242; pile[WZ1]=Q; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(242,Q,jvj+15)*/
pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(242,Q,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=N; pile[WZ2]=E; pile[WZ3]=JJ; 
(*f[1100])( );if(v[102]) goto l20;     /*SORGRAMA0(jvj+16,N,E,JJ,J)*/
J=pile[WZ4]; 
l24:v[0]=jvj; v[22]-=5; pile[v[22]+4]=J; v[102]=0;return;
l2:x[jvj+28]=t[x[jvj+28]];
goto l1;
l3:pile[v[22]]=135; pile[WZ1]=V3; pile[WZ2]=jvj+3; 
(*f[42])( );     /*SRA1(135,V3,jvj+3,V2)*/
V2=pile[WZ3]; 
goto l12;
l4:pile[v[22]]=V12; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V12,91,V11)*/
V11=pile[WZ2]; 
l10:JN=V11;
V64=67;
V77=V64;
V76=JN;
l28:pile[v[22]]=128; pile[WZ1]=jvj+20; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(128,jvj+20,jvj+26)*/
if((x[jvj+26]<=0)) goto l32;
x[jvj+31]=s[x[jvj+26]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+26];
V67=x[jvj+31];
x[jvj+27]=x[jvj+31] ;z[jvj+27]=z[jvj+31];
pile[WZ2]=V67; 
(*f[134])( );     /*OTA0(128,jvj+20,V67)*/
if((x[jvj+21]==20)) goto l31;
V71=incon;
if((V77==68)) goto l33;
V71=V76;
l29:pile[v[22]]=V71; pile[WZ1]=jvj+27; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(V71,jvj+27,V70)*/
V70=pile[WZ2]; 
l30:V76=V70;
V77=68;
goto l28;
l5:pile[v[22]]=JM; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(JM,93,V13)*/
V13=pile[WZ2]; 
l11:pile[v[22]]=V13; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V13,32,JJ)*/
JJ=pile[WZ2]; 
goto l18;
l6:pile[v[22]]=135; pile[WZ1]=V24; pile[WZ2]=jvj+3; 
(*f[42])( );     /*SRA1(135,V24,jvj+3,V23)*/
V23=pile[WZ3]; 
l16:pile[v[22]]=20; pile[WZ1]=V53; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(20,V53,V23,JJ)*/
JJ=pile[WZ3]; 
goto l18;
l7:pile[v[22]]=135; pile[WZ1]=V33; pile[WZ2]=jvj+3; 
(*f[42])( );     /*SRA1(135,V33,jvj+3,V32)*/
V32=pile[WZ3]; 
l22:JK=V32;
pile[v[22]]=JK; pile[WZ1]=jvj+18; 
(*f[719])( );if(v[102]) goto l23;     /*SORGRAM0(JK,jvj+18,J)*/
J=pile[WZ2]; 
goto l24;
l8:pile[v[22]]=jvj+3; pile[WZ1]=N; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(jvj+3,N,jvj+12)*/
if((x[jvj+12]==0)) goto l17;
if((x[jvj+21]=w[x[jvj+3]][2])==incon) goto l17;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(250,158,jvj+20)*/
if((x[jvj+21]==20)) goto l27;
pile[v[22]]=jvj+21; pile[WZ1]=100; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,100,jvj+22)*/
if((x[jvj+23]=w[x[jvj+21]][3])==incon) goto l9;
x[jvj+29]=x[jvj+12] ;z[jvj+29]=z[jvj+12];
l25:if((x[jvj+29]<=0)) goto l9;
x[jvj+24]=s[x[jvj+29]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+29];
pile[v[22]]=jvj+20; pile[WZ1]=128; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+20,128,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[35])( );     /*CHGC1(jvj+22,jvj+23,jvj+24)*/
x[jvj+29]=t[x[jvj+29]];
goto l25;
l9:pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=jvj+3; 
(*f[42])( );     /*SRA1(135,I,jvj+3,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V47,32,V12)*/
V12=pile[WZ2]; 
V11=incon;
for(i=x[jvj+12],V18=0;i>0;i=t[i],V18++)  ;
if((V18>1)) goto l4;
V11=V12;
goto l10;
l13:if((V15==20)) goto l14;
l17:JJ=I;
goto l18;
l14:if((x[jvj+3]==1640)) goto l17;
pile[v[22]]=N; pile[WZ1]=jvj+3; pile[WZ3]=jvj+14; 
(*f[45])( );if(v[102]) goto l17;     /*FNDZ0(N,jvj+3,V50,jvj+14)*/
V50=pile[WZ2]; 
V27=V50;
x[jvj+6]=V27 ;z[jvj+6]=(V27<=sepcte) ? V27 : 0;
pile[v[22]]=1640; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1640,jvj+6,jvj+7)*/
if((x[jvj+7]==68)) goto l17;
l15:V53=x[jvj+6];
pile[v[22]]=I; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(I,32,V24)*/
V24=pile[WZ2]; 
V23=incon;
pile[v[22]]=1640; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1640,jvj+3,jvj+8)*/
pile[v[22]]=1650; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1650,jvj+8,jvj+9)*/
if((x[jvj+9]!=68)) goto l6;
V23=V24;
goto l16;
l19:J=JJ;
goto l24;
l20:if(x[jvj+3]!=incon) goto l21;
l23:v[0]=jvj; v[22]-=5; v[102]=1;return;
l21:if((V34=w[x[jvj+3]][1])==incon) goto l23;
if((V34!=20)) goto l23;
pile[v[22]]=N; pile[WZ1]=jvj+3; pile[WZ3]=jvj+17; 
(*f[45])( );if(v[102]) goto l23;     /*FNDZ0(N,jvj+3,V55,jvj+17)*/
V55=pile[WZ2]; 
V36=V55;
x[jvj+18]=V36 ;z[jvj+18]=(V36<=sepcte) ? V36 : 0;
pile[v[22]]=1640; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(1640,jvj+18,jvj+19)*/
if((x[jvj+19]!=68)) goto l23;
pile[v[22]]=I; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(I,32,V33)*/
V33=pile[WZ2]; 
V32=incon;
pile[v[22]]=1640; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1640,jvj+3,jvj+10)*/
pile[v[22]]=1650; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1650,jvj+10,jvj+11)*/
if((x[jvj+11]!=68)) goto l7;
V32=V33;
goto l22;
l27:x[jvj+30]=x[jvj+12] ;z[jvj+30]=z[jvj+12];
l26:if((x[jvj+30]<=0)) goto l9;
x[jvj+25]=s[x[jvj+30]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+30];
pile[v[22]]=jvj+20; pile[WZ1]=128; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+20,128,jvj+25)*/
x[jvj+30]=t[x[jvj+30]];
goto l26;
l31:pile[v[22]]=V76; pile[WZ1]=jvj+27; 
(*f[719])( );if(v[102]) goto l32;     /*SORGRAM0(V76,jvj+27,V70)*/
V70=pile[WZ2]; 
goto l30;
l32:JM=V76;
V13=incon;
for(i=x[jvj+12],V19=0;i>0;i=t[i],V19++)  ;
if((V19>1)) goto l5;
V13=JM;
goto l11;
l33:pile[v[22]]=V76; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V76,44,V71)*/
V71=pile[WZ2]; 
goto l29;
}
