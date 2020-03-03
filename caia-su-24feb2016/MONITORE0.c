#include "dx.h"
void MONITORE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V5=0,V4=0,T=0,V2=0,V1=0,K=0,V10=0,V8=0,V12=0,V9=0,V17=0,V20=0,V33=0,V24=0,V25=0,V26=0,V27=0,V28=0,V30=0,V31=0,V32=0,V34=0,V35=0,V37=0,V39=0,V16=0,V15=0;
int RM;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=10639;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==960&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RM=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=1009; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(1009,jvj+2,V6)*/
V6=pile[WZ2]; 
V5=(time(tzt)-inccc);
V4=V5-V6;
T=V4;
x[jvj+3]=vo[12];z[jvj+3]=vz[12];
pile[v[22]]=936; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(936,jvj+3,V2)*/
V2=pile[WZ2]; 
V1=V2-T;
K=V1;
if((K<=0)) goto l12;
V9=K/10;
V8=incon;
pile[v[22]]=945; pile[WZ1]=1058; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(945,1058,V10)*/
V10=pile[WZ2]; 
if((V9<=V10)) goto l1;
V8=V10;
l1:pile[v[22]]=1038; pile[WZ1]=1058; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(1038,1058,V12)*/
V12=pile[WZ2]; 
if((V9>=V12)) goto l2;
V8=V12;
l4:x[jvj+5]=vo[12];z[jvj+5]=vz[12];
pile[v[22]]=jvj+5; pile[WZ1]=1058; pile[WZ2]=V8; 
(*f[43])( );     /*CHGC2(jvj+5,1058,V8)*/
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; v[102]=1;return;
l2:if(V8==incon) goto l3;
goto l4;
l3:V8=V9;
goto l4;
l6:if((V16<4)) goto l7;
l9:fflush(stdout);
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; v[102]=0;return;
l7:x[jvj+7]=vo[12];z[jvj+7]=vz[12];
pile[v[22]]=936; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(936,jvj+7,V20)*/
V20=pile[WZ2]; 
V33=v[63];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V24; pile[WZ2]=10639; 
(*f[98])( );     /*SRA3(135,V24,10639,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V25,125,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V26; pile[WZ2]=643; 
(*f[42])( );     /*SRA1(135,V26,643,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=T; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(41,T,V27,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=949; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(20,949,V28,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V30,58,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V33; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(41,V33,V31,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V32,46,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V20; pile[WZ2]=V34; 
(*f[39])( );     /*SDX0(41,V20,V34,V35)*/
V35=pile[WZ3]; 
pile[WZ1]=K; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(41,K,V35,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V37; pile[WZ2]=RM; 
(*f[42])( );     /*SRA1(135,V37,RM,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
l8:if((V16!=2)) goto l9;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l9;
l12:pile[v[22]]=936; pile[WZ1]=158; pile[WZ2]=jvj+4; 
(*f[54])( );     /*TRI1(936,158,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=RM; 
(*f[958])( );if(v[102]) goto l10;     /*MANAGER1(jvj+4,RM)*/
if((v[139]<=0)) goto l11;
V15=v[139]+600;
if((T<V15)) goto l11;
v[139]=V15;
V16=g[375];
if((V16<=0)) goto l9;
V17=vg[375];
if((V17!=0)) goto l5;
if((V16<3)) goto l7;
l5:pile[v[22]]=375; pile[WZ1]=10639; pile[WZ2]=0; pile[WZ3]=(-2823); pile[WZ4]=RM; pile[WZ5]=(-620); pile[v[22]+6]=T; pile[v[22]+7]=(-612); pile[v[22]+8]=K; pile[v[22]+9]=jvj+6; 
(*f[1059])( );     /*INTERP11(375,10639,0,(-2823),RM,(-620),T,(-612),K,jvj+6)*/
if((x[jvj+6]==135)) goto l6;
goto l9;
}
