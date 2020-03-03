#include "dx.h"
void NOUVRESOLUTION0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V=0,V3=0,V2=0,V21=0,V13=0,V16=0,V15=0,V33=0,V32=0,V36=0,V37=0,V25=0,V29=0,V28=0,V20=0,V51=0,V19=0,V52=0,V53=0,V54=0,V7=0,V5=0,I=0,V42=0,V43=0,V44=0,V46=0,V47=0,V39=0,V59=0,V58=0,V60=0,V61=0;
int N,Y,T,D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=11239;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1476&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; Y=pile[v[22]+1]; T=pile[v[22]+2]; D=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1268; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(1268,936,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=944; pile[WZ1]=Y; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(944,Y,jvj+10)*/
V51=x[N];
x[jvj+11]=d[92];z[jvj+11]=0;
x[jvj+24]=x[jvj+10] ;z[jvj+24]=z[jvj+10];
l11:if((x[jvj+24]>0)) goto l12;
x[jvj+16]=d[93];z[jvj+16]=0;
l16:if((x[jvj+10]<=0)) goto l3;
x[jvj+17]=s[x[jvj+10]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+10];
pile[v[22]]=935; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(935,jvj+17,jvj+18)*/
if((x[jvj+18]!=547)) goto l17;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(936,jvj+17,V7)*/
V7=pile[WZ2]; 
if((V7<=V20)) goto l17;
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(683,jvj+17,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=T; pile[WZ2]=jvj+19; 
(*f[1019])( );     /*PLUSTARD0(jvj+17,T,jvj+19)*/
if((x[jvj+19]==135)) goto l18;
l17:x[jvj+10]=t[x[jvj+10]];
goto l16;
l1:V2=V3;
l21:pile[v[22]]=135; pile[WZ1]=V2; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V2,683,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V42,61,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=I; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V43,I,41,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V44; pile[WZ2]=1120; 
(*f[42])( );     /*SRA1(135,V44,1120,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V7; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(41,V7,V46,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; 
(*f[40])( );     /*SLG0(V47)*/
pile[v[22]]=I; pile[WZ1]=510; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(I,510,jvj+23)*/
pile[v[22]]=117; pile[WZ1]=V7; pile[WZ2]=447; pile[WZ3]=547; pile[WZ4]=jvj+23; pile[WZ5]=jvj+20; 
(*f[725])( );     /*QUADRI14(117,V7,447,547,jvj+23,jvj+20)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+20; pile[WZ2]=D; 
(*f[196])( );     /*PLUF0(jvj+16,jvj+20,D)*/
l19:I++;
if((I<=3)) goto l20;
goto l17;
l2:V15=V16;
l15:pile[v[22]]=135; pile[WZ1]=V15; pile[WZ2]=954; 
(*f[42])( );     /*SRA1(135,V15,954,V52)*/
V52=pile[WZ3]; 
pile[WZ1]=V52; pile[WZ2]=1120; 
(*f[42])( );     /*SRA1(135,V52,1120,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V19; pile[WZ2]=V53; 
(*f[39])( );     /*SDX0(41,V19,V53,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=V54; 
(*f[40])( );     /*SLG0(V54)*/
pile[v[22]]=117; pile[WZ1]=V19; pile[WZ2]=447; pile[WZ3]=325; pile[WZ4]=jvj+15; 
(*f[567])( );     /*QUADRI11(117,V19,447,325,jvj+15)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+15; pile[WZ2]=D; 
(*f[196])( );     /*PLUF0(jvj+11,jvj+15,D)*/
l13:x[jvj+24]=t[x[jvj+24]];
goto l11;
l3:pile[v[22]]=1268; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(1268,936,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=944; pile[WZ1]=Y; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(944,Y,jvj+2)*/
l4:if((x[jvj+2]<=0)) goto l24;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=935; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(935,jvj+3,jvj+4)*/
if(x[jvj+4]!=547&&x[jvj+4]!=325) goto l5;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(936,jvj+3,V32)*/
V32=pile[WZ2]; 
if((V32<=V33)) goto l5;
pile[v[22]]=jvj+3; pile[WZ1]=T; pile[WZ2]=jvj+5; 
(*f[1019])( );     /*PLUSTARD0(jvj+3,T,jvj+5)*/
if((x[jvj+5]==135)) goto l22;
l5:x[jvj+2]=t[x[jvj+2]];
goto l4;
l8:x[jvj+6]=s[x[jvj+8]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+8];
pile[v[22]]=935; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(935,jvj+6,jvj+9)*/
if(x[jvj+9]!=547&&x[jvj+9]!=325) goto l9;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(936,jvj+6,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=1268; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1268,936,V37)*/
V37=pile[WZ2]; 
if((V36<=V37)) goto l24;
l6:pile[v[22]]=T; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[1019])( );     /*PLUSTARD0(T,jvj+6,jvj+7)*/
if((x[jvj+7]==135)) goto l24;
l9:x[jvj+8]=t[x[jvj+8]];
l7:if((x[jvj+8]>0)) goto l8;
V59=x[N];
x[jvj+21]=d[92];z[jvj+21]=0;
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=33; 
(*f[41])( );     /*SRB0(10,0,33,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V59; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(20,V59,V58,V29)*/
V29=pile[WZ3]; 
V28=incon;
pile[v[22]]=163; pile[WZ1]=Y; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(163,Y,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=V25; 
(*f[37])( );     /*SRA0(V29,V25,V28)*/
V28=pile[WZ2]; 
l23:pile[v[22]]=135; pile[WZ1]=V28; pile[WZ2]=397; 
(*f[42])( );     /*SRA1(135,V28,397,V60)*/
V60=pile[WZ3]; 
pile[WZ1]=V60; pile[WZ2]=1120; 
(*f[42])( );     /*SRA1(135,V60,1120,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=V61; 
(*f[40])( );     /*SLG0(V61)*/
pile[v[22]]=117; pile[WZ1]=V39; pile[WZ2]=447; pile[WZ3]=397; pile[WZ4]=jvj+22; 
(*f[567])( );     /*QUADRI11(117,V39,447,397,jvj+22)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=D; 
(*f[196])( );     /*PLUF0(jvj+21,jvj+22,D)*/
l24:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l10:V28=V29;
goto l23;
l12:x[jvj+12]=s[x[jvj+24]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+24];
pile[v[22]]=935; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(935,jvj+12,jvj+13)*/
if((x[jvj+13]!=325)) goto l13;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(936,jvj+12,V19)*/
V19=pile[WZ2]; 
if((V19<=V20)) goto l13;
pile[v[22]]=jvj+12; pile[WZ1]=T; pile[WZ2]=jvj+14; 
(*f[1019])( );     /*PLUSTARD0(jvj+12,T,jvj+14)*/
if((x[jvj+14]==135)) goto l14;
goto l13;
l14:pile[v[22]]=20; pile[WZ1]=V51; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V51,0,V16)*/
V16=pile[WZ3]; 
V15=incon;
pile[v[22]]=163; pile[WZ1]=Y; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(163,Y,V21)*/
V21=pile[WZ2]; 
V13=V21;
pile[v[22]]=V16; pile[WZ1]=V13; 
(*f[37])( );     /*SRA0(V16,V13,V15)*/
V15=pile[WZ2]; 
goto l15;
l18:I=1;
l20:if((V5!=I)) goto l19;
pile[v[22]]=20; pile[WZ1]=V51; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V51,0,V3)*/
V3=pile[WZ3]; 
V2=incon;
pile[v[22]]=163; pile[WZ1]=Y; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(163,Y,V9)*/
V9=pile[WZ2]; 
V=V9;
pile[v[22]]=V3; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V3,V,V2)*/
V2=pile[WZ2]; 
goto l21;
l22:pile[v[22]]=936; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(936,jvj+3,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=944; pile[WZ1]=Y; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(944,Y,jvj+8)*/
goto l7;
}
