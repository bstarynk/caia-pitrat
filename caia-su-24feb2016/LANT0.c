#include "dx.h"
void LANT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V44=0,V43=0,P=0,V42=0,V41=0,DY=0,V23=0,V9=0,V47=0,V48=0,V3=0,V5=0,V4=0,V32=0,V31=0,V33=0,V24=0,V35=0,V37=0,V36=0,DZ=0,V8=0,DN=0,V10=0,V11=0,V19=0,V49=0,V50=0,V58=0,V40=0;
int DP;
int EX,DF;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=19;
if(v[0]>99700) (*f[6])( );

DP=pile[v[22]]; EX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
DF=x[EX]=DY=x[jvj+4]=x[jvj+10]=DZ=incon;
V44=DP+1;
V43=bh[v[1]][V44];
x[jvj+1]=vo[20];z[jvj+1]=vz[20];
pile[v[22]]=1733; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1733,jvj+1,jvj+2)*/
if((x[jvj+2]!=129)) goto l3;
pile[v[22]]=DP; 
(*f[77])( );     /*CRR0(DP,P)*/
P=pile[WZ1]; 
V42=bh[v[1]][P];
if((V42!=32)) goto l3;
if((V43==36)) goto l2;
V58=V43;
if((V58>=97)) goto l33;
if((V58<65)) goto l31;
if((V58<=90)) goto l32;
l31:V40=134;
l1:if((V40==135)) goto l2;
l3:pile[v[22]]=DP; pile[WZ1]=jvj+4; 
(*f[79])( );if(v[102]) goto l4;     /*LEXP0(DP,jvj+4,DY)*/
DY=pile[WZ2]; 
l9:V3=bh[v[1]][DY];
if((V3!=61)) goto l11;
V5=DY+1;
V4=bh[v[1]][V5];
if((V4!=62)) goto l11;
DF=DY;
l10:x[EX]=x[jvj+4] ;z[EX]=z[jvj+4];
l16:V35=bh[v[1]][DY];
if((V35!=58)) goto l17;
V37=DY+1;
V36=bh[v[1]][V37];
if((V36!=58)) goto l17;
x[jvj+10]=561 ;z[jvj+10]=561;
DZ=V37;
l21:if(DF==incon) goto l22;
l27:V19=bh[v[1]][DF];
if(V19==44||V19==93||V19==41||V19==61||V19==32||V19==45||V19==58||V19==33||V19==59||V19==42) goto l29;
pile[v[22]]=20; pile[WZ1]=10339; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10339,0,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(41,2,V49,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; 
(*f[40])( );     /*SLG0(V50)*/
l29:if(x[EX]!=incon) goto l30;
l28:x[EX]=DF=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l2:pile[v[22]]=DP; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+3; 
(*f[78])( );if(v[102]) goto l3;     /*SMA0(DP,36,67,jvj+3)*/
V41=x[jvj+3];
if((V41<=sepbase)) goto l3;
if((V41>sepbloc)) goto l3;
pile[WZ1]=EX; 
(*f[715])( );     /*LBLOC0(DP,EX,DF)*/
DF=pile[WZ2]; 
l4:V23=bh[v[1]][DP];
if((V23!=46)) goto l5;
pile[v[22]]=DP; pile[WZ1]=jvj+4; 
(*f[79])( );if(v[102]) goto l5;     /*LEXP0(DP,jvj+4,DY)*/
DY=pile[WZ2]; 
l5:if(DF==incon) goto l6;
l15:if(DY!=incon) goto l16;
goto l21;
l6:if(x[EX]==incon) goto l7;
goto l15;
l7:if(DY!=incon) goto l8;
l23:if(x[jvj+4]!=incon) goto l24;
goto l28;
l8:if(x[jvj+4]!=incon) goto l9;
goto l16;
l11:if(V3==44||V3==93||V3==41||V3==32||V3==59||V3==42) goto l12;
if((V3!=58)) goto l16;
V32=DY+1;
V31=bh[v[1]][V32];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
x[jvj+6]=d[36];z[jvj+6]=0;
l13:if((x[jvj+6]<=0)) goto l16;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=332; pile[WZ1]=jvj+7; 
(*f[219])( );if(v[102]) goto l14;     /*FNDC2(332,jvj+7,V33)*/
V33=pile[WZ2]; 
if((V31!=V33)) goto l14;
pile[v[22]]=V32; pile[WZ1]=jvj+8; 
(*f[79])( );if(v[102]) goto l14;     /*LEXP0(V32,jvj+8,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
DF=V24;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+7; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+7,jvj+15)*/
pile[v[22]]=jvj+5; pile[WZ1]=436; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+5,436,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=111; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+14,jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+16; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+9,jvj+16,EX)*/
goto l16;
l12:DF=DY;
goto l10;
l14:x[jvj+6]=t[x[jvj+6]];
goto l13;
l17:pile[v[22]]=DY; pile[WZ2]=jvj+10; 
(*f[716])( );if(v[102]) goto l18;     /*VALREL0(DY,DZ,jvj+10)*/
DZ=pile[WZ1]; 
goto l21;
l18:V8=bh[v[1]][DY];
if((V8!=46)) goto l21;
pile[v[22]]=DY; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+10; 
(*f[78])( );if(v[102]) goto l21;     /*SMA0(DY,64,67,jvj+10)*/
(*f[107])( );     /*CRC0(DY,DN)*/
DN=pile[WZ1]; 
V9=bh[v[1]][DN];
if(V9==46) goto l19;
pile[v[22]]=20; pile[WZ1]=10339; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10339,0,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(41,1,V47,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; 
(*f[40])( );     /*SLG0(V48)*/
l19:V10=bh[v[1]][DN];
if((V10==91)) goto l20;
if((V10!=46)) goto l21;
DZ=DN;
goto l21;
l20:V11=DN-1;
DZ=V11;
goto l21;
l22:if(x[EX]==incon) goto l23;
goto l28;
l24:if(x[jvj+10]!=incon) goto l25;
goto l28;
l25:if(DZ!=incon) goto l26;
goto l28;
l26:pile[v[22]]=jvj+4; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+11)*/
pile[v[22]]=DZ; pile[WZ1]=jvj+12; 
(*f[79])( );if(v[102]) goto l28;     /*LEXP0(DZ,jvj+12,DF)*/
DF=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+10; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+10,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=111; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,111,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+18,jvj+13,103,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+19; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+19,EX)*/
goto l27;
l30:v[0]=jvj; v[22]-=3; pile[v[22]+2]=DF; v[102]=0;return;
l32:V40=135;
goto l1;
l33:if((V58<=122)) goto l32;
goto l31;
}
