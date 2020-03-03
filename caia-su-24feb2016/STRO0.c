#include "dx.h"
void STRO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,XR=0,V12=0,V2=0,V3=0,V26=0,V85=0,V66=0,V68=0,V61=0,V62=0,V63=0,V64=0,V65=0,V67=0,V69=0,V25=0,V5=0,V4=0,V6=0,V10=0,V20=0,V24=0,V23=0,K=0,E=0,V50=0,V49=0,ST=0,V52=0,V51=0,MT=0,V54=0,V57=0,V58=0,V72=0,V73=0,V74=0,V75=0,V76=0,V78=0,V80=0,V82=0,V53=0,V44=0,V46=0,V48=0,V32=0,V33=0,V34=0,V36=0,V35=0,V37=0,V38=0,V39=0,R=0,V40=0,V41=0,V42=0,V84=0;
int X,P,I,J;
int Q;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; P=pile[v[22]+1]; I=pile[v[22]+2]; J=pile[v[22]+3]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V85=X;
V84=P;
l35:E=K=MT=incon;
V1=r[V85];
XR=V1;
if(XR!=102&&XR!=103&&XR!=111&&XR!=160&&XR!=436) goto l19;
V5=s[V85];
V4=t[V5];
V6=t[V4];
if((V6!=0)) goto l19;
if((V4<=0)) goto l19;
x[jvj+1]=XR ;z[jvj+1]=(XR<=sepcte) ? XR : 0;
V10=s[V5];
x[jvj+2]=V10 ;z[jvj+2]=(V10<=sepcte) ? V10 : 0;
V20=s[V4];
if((x[jvj+2]==41)) goto l1;
if((x[jvj+2]!=20)) goto l2;
if((V20<=sepcte)) goto l3;
l2:if(x[jvj+2]==21||x[jvj+2]==89||x[jvj+2]==96||x[jvj+2]==1317) goto l3;
l19:V50=t[XR];
V49=s[V50];
ST=V49;
V52=XR;
if((V51=w[V52][1])==incon) goto l24;
MT=V51;
l24:if(E==incon) goto l25;
l27:if(K==incon) goto l28;
l29:if(MT==incon) goto l23;
l30:if(K==incon) goto l31;
l32:if((ST!=41)) goto l33;
V32=abs(K);
if((V32<=32767)) goto l33;
V33=V84+2;
V34=V84+4;
V36=K>>16;
V35=V36&65535;
V37=V84+6;
V38=K&65535;
V39=V84+8;
sy[V84]=((stogrand>>8)&0xff);sy[V84+1]=(stogrand&0xff);
sy[V33]=((E>>8)&0xff);sy[V33+1]=(E&0xff);
sy[V34]=((V35>>8)&0xff);sy[V34+1]=(V35&0xff);
sy[V37]=((V38>>8)&0xff);sy[V37+1]=(V38&0xff);
R=V39;
l34:V42=t[V85];
if((V42>0)) goto l36;
Q=R;
v[0]=jvj; v[22]-=5; pile[v[22]+4]=Q; return;
l1:V12=abs(V20);
if((V12<=32767)) goto l3;
goto l2;
l3:V2=incon;
if((x[jvj+1]==102)) goto l4;
if((x[jvj+1]==103)) goto l5;
if((x[jvj+1]==160)) goto l6;
if((x[jvj+1]==111)) goto l7;
if((x[jvj+1]==436)) goto l8;
V2=(-1);
l9:V3=incon;
if((x[jvj+2]==21)) goto l10;
if((x[jvj+2]==41)) goto l11;
if((x[jvj+2]==89)) goto l12;
if((x[jvj+2]==96)) goto l13;
if((x[jvj+2]==1317)) goto l14;
V3=0;
l18:V24=775+V2;
V23=V24+V3;
K=V20;
E=V23;
if((V2>=0)) goto l19;
V25=g[175];
if((V25<=0)) goto l19;
V26=vg[175];
if((V26!=0)) goto l15;
if((V25<3)) goto l17;
l15:pile[v[22]]=175; pile[WZ1]=10035; pile[WZ2]=0; pile[WZ3]=(-675); pile[WZ4]=jvj+1; pile[WZ5]=(-9); pile[v[22]+6]=jvj+2; pile[v[22]+7]=(-596); pile[v[22]+8]=V85; pile[v[22]+9]=jvj+3; 
(*f[1340])( );     /*INTERP16(175,10035,0,(-675),jvj+1,(-9),jvj+2,(-596),V85,jvj+3)*/
if((x[jvj+3]==135)) goto l16;
goto l19;
l4:V2=0;
goto l9;
l5:V2=6;
goto l9;
l6:V2=12;
goto l9;
l7:V2=18;
goto l9;
l8:V2=24;
goto l9;
l10:V3=1;
goto l18;
l11:V3=2;
goto l18;
l12:V3=3;
goto l18;
l13:V3=4;
goto l18;
l14:V3=5;
goto l18;
l16:if((V25<4)) goto l17;
goto l19;
l17:V66=x[jvj+1];
V68=x[jvj+2];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V61; pile[WZ2]=10035; 
(*f[98])( );     /*SRA3(135,V61,10035,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(41,1,V62,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=V63; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V63,125,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V66; pile[WZ2]=V64; 
(*f[39])( );     /*SDX0(20,V66,V64,V65)*/
V65=pile[WZ3]; 
pile[WZ1]=V68; pile[WZ2]=V65; 
(*f[39])( );     /*SDX0(20,V68,V65,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V85; pile[WZ2]=V67; 
(*f[39])( );     /*SDX0(41,V85,V67,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; 
(*f[40])( );     /*SLG0(V69)*/
if((V25!=2)) goto l19;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l19;
l21:if((V53<4)) goto l22;
goto l30;
l22:V57=t[V85];
V58=s[V85];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V72; pile[WZ2]=10035; 
(*f[98])( );     /*SRA3(135,V72,10035,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V73; 
(*f[39])( );     /*SDX0(41,2,V73,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=V74; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V74,125,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V85; pile[WZ2]=V75; 
(*f[39])( );     /*SDX0(41,V85,V75,V76)*/
V76=pile[WZ3]; 
pile[WZ1]=XR; pile[WZ2]=V76; 
(*f[39])( );     /*SDX0(41,XR,V76,V78)*/
V78=pile[WZ3]; 
pile[WZ1]=V58; pile[WZ2]=V78; 
(*f[39])( );     /*SDX0(41,V58,V78,V80)*/
V80=pile[WZ3]; 
pile[WZ1]=V57; pile[WZ2]=V80; 
(*f[39])( );     /*SDX0(41,V57,V80,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=V82; 
(*f[40])( );     /*SLG0(V82)*/
if((V53!=2)) goto l30;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l30;
l23:V53=g[499];
if((V53<=0)) goto l30;
V54=vg[499];
if((V54!=0)) goto l20;
if((V53<3)) goto l22;
l20:pile[v[22]]=499; pile[WZ1]=10035; pile[WZ2]=0; pile[WZ3]=(-596); pile[WZ4]=V85; pile[WZ5]=(-699); pile[v[22]+6]=XR; pile[v[22]+7]=jvj+4; 
(*f[1256])( );     /*INTERP12(499,10035,0,(-596),V85,(-699),XR,jvj+4)*/
if((x[jvj+4]==135)) goto l21;
goto l30;
l25:if(ST==20||ST==23) goto l26;
E=XR;
goto l27;
l26:V44=(-XR);
E=V44;
goto l27;
l28:if(ST!=20&&ST!=23) goto l29;
V46=s[V85];
if((V46<=sepcte)) goto l29;
if((XR==I)) goto l29;
if((XR==J)) goto l29;
pile[v[22]]=V46; 
(*f[1068])( );     /*CORVA2(V46,K)*/
K=pile[WZ1]; 
goto l29;
l31:V48=s[V85];
K=V48;
goto l32;
l33:V40=V84+2;
V41=V84+4;
sy[V84]=((E>>8)&0xff);sy[V84+1]=(E&0xff);
sy[V40]=((K>>8)&0xff);sy[V40+1]=(K&0xff);
R=V41;
goto l34;
l36:V84=R;
V85=V42;
goto l35;
}
