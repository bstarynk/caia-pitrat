#include "dx.h"
void SMD1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V40=0,HA=0,DD=0,K=0,M=0,V2=0,MM=0,V16=0,V15=0,V44=0,V43=0,V49=0,V48=0,V21=0,V20=0,V29=0,V28=0,V25=0,V24=0,V33=0,V32=0,V35=0,V6=0,V57=0,V52=0,V53=0,V54=0,V55=0,V56=0,V5=0,V58=0,V1=0,V4=0,V59=0,V60=0,V61=0,V63=0,V62=0,V64=0,V65=0,V67=0,V66=0;
int KK,Z,D,HH;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

KK=pile[v[22]]; Z=pile[v[22]+1]; D=pile[v[22]+2]; HH=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
K=x[jvj+6]=DD=x[jvj+1]=incon;
pile[v[22]]=68; pile[WZ1]=191; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(68,191,jvj+8)*/
V40=HH;
HA=V40;
if(x[Z]==1389||x[Z]==1392||x[Z]==1387||x[Z]==1388||x[Z]==1390||x[Z]==1391||x[Z]==1691) goto l6;
x[jvj+6]=x[Z] ;z[jvj+6]=z[Z];
DD=D;
K=KK;
if((K==64)) goto l1;
if((K==36)) goto l2;
if((K==38)) goto l3;
if((K==34)) goto l4;
if((K==(-80))) goto l5;
if((K!=35)) goto l6;
x[jvj+7]=1691 ;z[jvj+7]=1691;
l18:V49=sepnouv+1;
l19:if((V49>sepfacts)) goto l35;
V48=r[V49];
if((V48!=1)) goto l20;
V49++;
goto l19;
l1:x[jvj+7]=1389 ;z[jvj+7]=1389;
l9:M=100;
l8:if((M>sepbase)) goto l35;
if((M<775)) goto l11;
if((M<825)) goto l10;
l11:V2=r[M];
if((V2==1)) goto l10;
x[jvj+9]=M ;z[jvj+9]=(M<=sepcte) ? M : 0;
r[M]=1;
s[M]=x[jvj+8];
x[jvj+1]=x[jvj+9] ;z[jvj+1]=z[jvj+9];
MM=M;
l34:w[MM][0]=HA;
if((MM<=sepbase)) goto l35;
if((MM>sepbloc)) goto l35;
pile[v[22]]=0; pile[WZ1]=(-5596); 
(*f[37])( );     /*SRA0(0,(-5596),V58)*/
V58=pile[WZ2]; 
V64=V58-1;
V65=0;
l45:if((V65<=V64)) goto l46;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
pile[v[22]]=(-1); pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+5; 
(*f[78])( );if(v[102]) goto l35;     /*SMA0((-1),64,67,jvj+5)*/
if((x[jvj+5]==68)) goto l35;
pile[v[22]]=jvj+1; pile[WZ1]=708; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+1,708,68)*/
l35:if(x[jvj+6]!=incon) goto l36;
l41:if(x[jvj+1]!=incon) goto l42;
l43:if(x[Z]!=1389&&x[Z]!=1392&&x[Z]!=1387&&x[Z]!=1388&&x[Z]!=1390&&x[Z]!=1391&&x[Z]!=1691) goto l44;
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(10,0,126,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=10373; pile[WZ2]=V59; 
(*f[39])( );     /*SDX0(20,10373,V59,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=V60; pile[WZ1]=(-5025); 
(*f[37])( );     /*SRA0(V60,(-5025),V61)*/
V61=pile[WZ2]; 
V63=75-V61;
pile[v[22]]=V63; pile[WZ1]=V61; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(V63,V61,126,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; 
(*f[40])( );     /*SLG0(V62)*/
l44:v[0]=jvj; v[22]-=4; return;
l2:x[jvj+7]=1387 ;z[jvj+7]=1387;
l12:V16=sepbase+1;
l13:if((V16>sepbloc)) goto l35;
V15=r[V16];
if((V15!=1)) goto l14;
V16++;
goto l13;
l3:x[jvj+7]=1388 ;z[jvj+7]=1388;
l27:V25=sepcod+1;
l28:if((V25>seppb)) goto l35;
V24=r[V25];
if((V24!=1)) goto l29;
V25++;
goto l28;
l4:x[jvj+7]=1390 ;z[jvj+7]=1390;
l21:V21=sepbloc+1;
l22:if((V21>sepnouv)) goto l35;
V20=r[V21];
if((V20!=1)) goto l23;
V21++;
goto l22;
l5:x[jvj+7]=1391 ;z[jvj+7]=1391;
l30:x[jvj+2]=vo[20];z[jvj+2]=vz[20];
pile[v[22]]=667; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(667,jvj+2,V33)*/
V33=pile[WZ2]; 
V32=V33+1000;
x[jvj+3]=V33 ;z[jvj+3]=(V33<=sepcte) ? V33 : 0;
V35=r[V32];
if((V35==1)) goto l35;
x[jvj+16]=V32 ;z[jvj+16]=(V32<=sepcte) ? V32 : 0;
r[V32]=1;
s[V32]=x[jvj+8];
x[jvj+1]=x[jvj+16] ;z[jvj+1]=z[jvj+16];
MM=V32;
pile[v[22]]=jvj+1; pile[WZ1]=100; pile[WZ2]=978; 
(*f[35])( );     /*CHGC1(jvj+1,100,978)*/
pile[WZ1]=983; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(jvj+1,983,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ2]=jvj+1; 
(*f[35])( );     /*CHGC1(jvj+3,983,jvj+1)*/
goto l34;
l6:x[jvj+7]=1392 ;z[jvj+7]=1392;
if(K!=incon) goto l7;
goto l35;
l7:if((K==64)) goto l9;
if((K==36)) goto l12;
if((K==59)) goto l15;
if((K==35)) goto l18;
if((K==34)) goto l21;
if((K==124)) goto l24;
if((K==38)) goto l27;
if((K==(-80))) goto l30;
goto l35;
l10:M++;
goto l8;
l14:x[jvj+10]=V16 ;z[jvj+10]=(V16<=sepcte) ? V16 : 0;
r[V16]=1;
s[V16]=x[jvj+8];
x[jvj+1]=x[jvj+10] ;z[jvj+1]=z[jvj+10];
MM=V16;
pile[v[22]]=jvj+1; pile[WZ1]=100; pile[WZ2]=508; 
(*f[35])( );     /*CHGC1(jvj+1,100,508)*/
goto l34;
l15:V44=sepsimp+1;
l16:if((V44>sepcte)) goto l35;
V43=r[V44];
if((V43!=1)) goto l17;
V44++;
goto l16;
l17:x[jvj+11]=V44 ;z[jvj+11]=(V44<=sepcte) ? V44 : 0;
r[V44]=1;
s[V44]=x[jvj+8];
x[jvj+1]=x[jvj+11] ;z[jvj+1]=z[jvj+11];
MM=V44;
pile[v[22]]=jvj+1; pile[WZ1]=100; pile[WZ2]=1651; 
(*f[35])( );     /*CHGC1(jvj+1,100,1651)*/
goto l34;
l20:x[jvj+12]=V49 ;z[jvj+12]=(V49<=sepcte) ? V49 : 0;
r[V49]=1;
s[V49]=x[jvj+8];
x[jvj+1]=x[jvj+12] ;z[jvj+1]=z[jvj+12];
MM=V49;
pile[v[22]]=jvj+1; pile[WZ1]=100; pile[WZ2]=1732; 
(*f[35])( );     /*CHGC1(jvj+1,100,1732)*/
goto l34;
l23:x[jvj+13]=V21 ;z[jvj+13]=(V21<=sepcte) ? V21 : 0;
r[V21]=1;
s[V21]=x[jvj+8];
x[jvj+1]=x[jvj+13] ;z[jvj+1]=z[jvj+13];
MM=V21;
pile[v[22]]=jvj+1; pile[WZ1]=100; pile[WZ2]=508; 
(*f[35])( );     /*CHGC1(jvj+1,100,508)*/
pile[v[22]]=240; pile[WZ1]=670; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(240,670,jvj+1)*/
goto l34;
l24:V29=sepexp+1;
l25:if((V29>sepsimp)) goto l35;
V28=r[V29];
if((V28!=1)) goto l26;
V29++;
goto l25;
l26:x[jvj+14]=V29 ;z[jvj+14]=(V29<=sepcte) ? V29 : 0;
r[V29]=1;
s[V29]=x[jvj+8];
x[jvj+1]=x[jvj+14] ;z[jvj+1]=z[jvj+14];
MM=V29;
pile[v[22]]=jvj+1; pile[WZ1]=100; pile[WZ2]=553; 
(*f[35])( );     /*CHGC1(jvj+1,100,553)*/
pile[v[22]]=324; pile[WZ1]=554; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(324,554,jvj+1)*/
goto l34;
l29:x[jvj+15]=V25 ;z[jvj+15]=(V25<=sepcte) ? V25 : 0;
r[V25]=1;
s[V25]=x[jvj+8];
x[jvj+1]=x[jvj+15] ;z[jvj+1]=z[jvj+15];
MM=V25;
pile[v[22]]=jvj+1; pile[WZ1]=100; pile[WZ2]=298; 
(*f[35])( );     /*CHGC1(jvj+1,100,298)*/
pile[v[22]]=324; pile[WZ1]=457; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(324,457,jvj+1)*/
pile[v[22]]=jvj+1; pile[WZ1]=708; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+1,708,68)*/
goto l34;
l32:if((V5<4)) goto l33;
goto l43;
l33:V57=x[jvj+1];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V52; pile[WZ2]=10373; 
(*f[98])( );     /*SRA3(135,V52,10373,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V53,125,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=V54; pile[WZ1]=(-4429); 
(*f[37])( );     /*SRA0(V54,(-4429),V55)*/
V55=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V57; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(41,V57,V55,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=V56; 
(*f[40])( );     /*SLG0(V56)*/
if((V5!=2)) goto l43;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l43;
l36:if(DD!=incon) goto l37;
l38:pile[v[22]]=jvj+6; pile[WZ1]=163; pile[WZ2]=HA; 
(*f[177])( );     /*CHGC4(jvj+6,163,HA)*/
if(x[jvj+1]!=incon) goto l39;
l40:V4=(-HH);
pile[v[22]]=jvj+7; pile[WZ1]=jvj+6; pile[WZ2]=8192; pile[WZ3]=V4; 
(*f[722])( );     /*SMX0(jvj+7,jvj+6,8192,V4)*/
goto l41;
l37:V1=DD-1;
pile[v[22]]=jvj+6; pile[WZ1]=130; pile[WZ2]=V1; 
(*f[43])( );     /*CHGC2(jvj+6,130,V1)*/
goto l38;
l39:pile[v[22]]=jvj+6; pile[WZ1]=101; pile[WZ2]=jvj+1; 
(*f[35])( );     /*CHGC1(jvj+6,101,jvj+1)*/
goto l40;
l42:pile[v[22]]=jvj+1; pile[WZ1]=3; pile[WZ2]=HA; 
(*f[177])( );     /*CHGC4(jvj+1,3,HA)*/
V5=g[73];
if((V5<=0)) goto l43;
V6=vg[73];
if((V6!=0)) goto l31;
if((V5<3)) goto l33;
l31:pile[v[22]]=73; pile[WZ1]=10373; pile[WZ2]=1; pile[WZ3]=(-624); pile[WZ4]=jvj+1; pile[WZ5]=jvj+4; 
(*f[232])( );     /*INTERP3(73,10373,1,(-624),jvj+1,jvj+4)*/
if((x[jvj+4]==135)) goto l32;
goto l43;
l46:V67=c[0][V65];
V66=V67;
putchar(V66);
V65++;
goto l45;
}
