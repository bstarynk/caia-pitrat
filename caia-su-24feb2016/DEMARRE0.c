#include "dx.h"
void DEMARRE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V25=0,V26=0,V27=0,V28=0,V29=0,V30=0,V13=0,V18=0,F=0,NR=0,V1=0,V2=0,V8=0,V5=0,V3=0,V4=0,V6=0,NS=0,V12=0,V21=0,V22=0,V20=0,V31=0,V32=0,V33=0,V43=0,V34=0,V37=0,V36=0;
int N,UR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=11154;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==533&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; UR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V43=N;
l36:x[jvj+12]=F=NR=NS=incon;
V18=vv[3];
if((V18<=0)) goto l4;
x[jvj+12]=528 ;z[jvj+12]=528;
l4:if((V43==3)) goto l5;
if((V43==5)) goto l5;
l6:pile[v[22]]=905; pile[WZ1]=994; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(905,994,F)*/
F=pile[WZ2]; 
l7:if(x[jvj+12]==incon) goto l8;
if(F!=incon) goto l11;
l30:if((V43<6)) goto l33;
V13=g[525];
if((V13<=0)) goto l31;
V14=vg[525];
if((V14!=0)) goto l1;
if((V13<3)) goto l3;
l1:pile[v[22]]=525; pile[WZ1]=11154; pile[WZ2]=0; pile[WZ3]=jvj+2; 
(*f[291])( );     /*INTERP4(525,11154,0,jvj+2)*/
if((x[jvj+2]==135)) goto l2;
l31:exit(0);
l35:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:if((V13<4)) goto l3;
goto l31;
l3:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V25; pile[WZ2]=11154; 
(*f[98])( );     /*SRA3(135,V25,11154,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V26,125,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=50; pile[WZ1]=V27; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(50,V27,126,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V28; pile[WZ2]=1196; 
(*f[42])( );     /*SRA1(135,V28,1196,V29)*/
V29=pile[WZ3]; 
pile[WZ1]=V29; pile[WZ2]=301; 
(*f[42])( );     /*SRA1(135,V29,301,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; 
(*f[40])( );     /*SLG0(V30)*/
if((V13!=2)) goto l31;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l31;
l5:
(*f[25])( );     /*FAIREXP0()*/
goto l6;
l8:if(F!=incon) goto l9;
goto l30;
l9:if((F==(-5963))) goto l10;
if((F!=(-9009))) goto l13;
x[jvj+12]=301 ;z[jvj+12]=301;
l14:NR=4;
l18:NS=5;
l23:if((V43!=0)) goto l24;
pile[v[22]]=UR; pile[WZ1]=F; 
(*f[145])( );     /*PBAZERO0(UR,F)*/
l24:if(x[jvj+12]!=incon) goto l25;
if(NR!=incon) goto l29;
goto l30;
l10:x[jvj+12]=324 ;z[jvj+12]=324;
l12:NR=2;
NS=3;
goto l23;
l11:if((F==(-5963))) goto l12;
l13:if((F==(-9009))) goto l14;
if((F==(-9009))) goto l18;
goto l23;
l17:x[jvj+4]=t[x[jvj+4]];
l16:if((x[jvj+4]<=0)) goto l33;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=683; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(683,jvj+5,V8)*/
V8=pile[WZ2]; 
if((V8!=NR)) goto l17;
pile[v[22]]=83; pile[WZ1]=NR; pile[WZ2]=0; pile[WZ3]=250; pile[WZ4]=F; pile[WZ5]=jvj+5; 
(*f[885])( );     /*CRENSORD1(83,NR,0,250,F,jvj+5)*/
V5=0;
pile[v[22]]=81; pile[WZ1]=46; pile[WZ2]=NR; pile[WZ3]=67; 
(*f[313])( );     /*EDITORD1(81,46,NR,67)*/
(*f[91])( );     /*MND0()*/
(*f[114])( );     /*EAKK0()*/
v[2]=v[1];
V3=V5;
v[1]=4;
pile[v[22]]=(-7464); pile[WZ1]=V3; 
(*f[64])( );     /*SRA2((-7464),V3,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V4,0,V6)*/
V6=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V6; pile[WZ1]=406; pile[WZ2]=0; 
(*f[67])( );     /*SPA0(V6,406,0)*/
pile[v[22]]=365; pile[WZ1]=10833; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(365,10833,jvj+6)*/
if((x[jvj+6]<=0)) goto l33;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=81; pile[WZ1]=46; pile[WZ2]=jvj+7; 
(*f[355])( );     /*EAX0(81,46,jvj+7)*/
(*f[114])( );     /*EAKK0()*/
l33:V20=V43+1;
pile[v[22]]=994; pile[WZ1]=993; pile[WZ2]=V20; 
(*f[43])( );     /*CHGC2(994,993,V20)*/
V21=vv[21];
if((V21<=0)) goto l34;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
l34:pile[v[22]]=20; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(20,0,42,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V31; pile[WZ2]=80; 
(*f[42])( );     /*SRA1(135,V31,80,V32)*/
V32=pile[WZ3]; 
pile[WZ1]=V32; pile[WZ2]=993; 
(*f[42])( );     /*SRA1(135,V32,993,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V43; pile[WZ2]=V33; 
(*f[39])( );     /*SDX0(41,V43,V33,V34)*/
V34=pile[WZ3]; 
V37=75-V34;
pile[v[22]]=V37; pile[WZ1]=V34; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(V37,V34,42,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=V36; 
(*f[40])( );     /*SLG0(V36)*/
if((V43==4)) goto l32;
V43=V20;
goto l36;
l20:x[jvj+8]=t[x[jvj+8]];
l19:if((x[jvj+8]<=0)) goto l33;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=683; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(683,jvj+9,V12)*/
V12=pile[WZ2]; 
if((V12!=NS)) goto l20;
pile[v[22]]=32; pile[WZ1]=NS; pile[WZ2]=NR; pile[WZ3]=jvj+12; pile[WZ4]=F; pile[WZ5]=jvj+9; 
(*f[885])( );     /*CRENSORD1(32,NS,NR,jvj+12,F,jvj+9)*/
pile[v[22]]=81; pile[WZ1]=32; pile[WZ2]=NS; pile[WZ3]=67; 
(*f[313])( );     /*EDITORD1(81,32,NS,67)*/
x[jvj+10]=d[14];z[jvj+10]=0;
l21:if((x[jvj+10]>0)) goto l22;
(*f[113])( );     /*EAK0()*/
goto l33;
l22:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=1242; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+11,1242,0)*/
x[jvj+10]=t[x[jvj+10]];
goto l21;
l25:if(NR!=incon) goto l26;
goto l30;
l26:if((V43!=2)) goto l27;
pile[v[22]]=jvj+12; pile[WZ1]=F; pile[WZ2]=jvj+13; 
(*f[553])( );if(v[102]) goto l27;     /*EXPPB3(jvj+12,F,jvj+13)*/
pile[v[22]]=1268; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(1268,936,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=1038; pile[WZ1]=1058; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(1038,1058,V2)*/
V2=pile[WZ2]; 
l15:if((x[jvj+13]<=0)) goto l27;
x[jvj+3]=s[x[jvj+13]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+13];
pile[v[22]]=jvj+3; pile[WZ1]=493; pile[WZ2]=100; 
(*f[43])( );     /*CHGC2(jvj+3,493,100)*/
pile[WZ1]=936; pile[WZ2]=V1; 
(*f[43])( );     /*CHGC2(jvj+3,936,V1)*/
pile[WZ1]=683; pile[WZ2]=NR; 
(*f[43])( );     /*CHGC2(jvj+3,683,NR)*/
pile[WZ1]=978; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+3,978,67)*/
pile[WZ1]=948; 
(*f[35])( );     /*CHGC1(jvj+3,948,67)*/
pile[WZ1]=860; pile[WZ2]=530; 
(*f[35])( );     /*CHGC1(jvj+3,860,530)*/
pile[WZ1]=1058; pile[WZ2]=V2; 
(*f[43])( );     /*CHGC2(jvj+3,1058,V2)*/
(*f[554])( );     /*AJEXP1(jvj+3)*/
x[jvj+13]=t[x[jvj+13]];
goto l15;
l27:if(NS!=incon) goto l28;
l29:if((V43!=1)) goto l30;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(645,597,jvj+4)*/
goto l16;
l28:if((V43!=4)) goto l29;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(645,597,jvj+8)*/
goto l19;
l32:pile[v[22]]=1221; pile[WZ1]=1167; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(1221,1167,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=994; pile[WZ2]=V22; 
(*f[186])( );     /*BTC0(994,1167,V22)*/
goto l31;
}
