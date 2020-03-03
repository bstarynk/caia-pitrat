#include "dx.h"
void BILEXPLIQUE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V8=0,V6=0,V33=0,V21=0,V22=0,V23=0,V24=0,V25=0,V27=0,V28=0,V30=0,V31=0,V32=0,V2=0,V11=0,V17=0,V15=0,V47=0,V49=0,V52=0,V35=0,V36=0,V37=0,V38=0,V39=0,V41=0,V42=0,V44=0,V45=0,V46=0,V48=0,V50=0,V51=0,V10=0,V56=0,V55=0;
int SX,SY,M,L,TT,K;
int R,E;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=10740;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1330&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
SX=pile[v[22]]; SY=pile[v[22]+1]; M=pile[v[22]+2]; L=pile[v[22]+3]; TT=pile[v[22]+4]; K=pile[v[22]+5]; R=pile[v[22]+6]; E=pile[v[22]+7]; v[22]+=8; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=incon;
pile[v[22]]=SX; 
(*f[1579])( );     /*NBECHECS0(SX)*/
pile[v[22]]=SY; 
(*f[1579])( );     /*NBECHECS0(SY)*/
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+2; 
(*f[54])( );     /*TRI1(250,158,jvj+2)*/
pile[v[22]]=SX; pile[WZ1]=SY; pile[WZ3]=R; 
(*f[1580])( );if(v[102]) goto l14;     /*COMPSQUELETTES0(SX,SY,jvj+2,R)*/
l11:pile[v[22]]=258; pile[WZ1]=jvj+2; pile[WZ2]=E; 
(*f[33])( );     /*FNDE0(258,jvj+2,E)*/
if(x[R]!=incon) goto l10;
x[R]=x[E]=incon;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=8; v[102]=1;return;
l2:if((V2<4)) goto l3;
l5:pile[v[22]]=TT; pile[WZ1]=158; pile[WZ2]=528; 
(*f[35])( );     /*CHGC1(TT,158,528)*/
pile[WZ1]=447; pile[WZ2]=L; 
(*f[35])( );     /*CHGC1(TT,447,L)*/
pile[v[22]]=jvj+5; pile[WZ1]=1244; pile[WZ2]=TT; 
(*f[36])( );     /*PLUSC0(jvj+5,1244,TT)*/
goto l11;
l3:pile[v[22]]=117; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,M,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=1078; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1078,M,jvj+4)*/
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+4,V6)*/
V6=pile[WZ2]; 
V33=x[L];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V21; pile[WZ2]=10740; 
(*f[98])( );     /*SRA3(135,V21,10740,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V22; 
(*f[39])( );     /*SDX0(41,2,V22,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=V23; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V23,125,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V8; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(41,V8,V24,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V25; pile[WZ2]=48; 
(*f[42])( );     /*SRA1(135,V25,48,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V6; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(41,V6,V27,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V28; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V28,876,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V30,(-9813),V31)*/
V31=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V33; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(20,V33,V31,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; 
(*f[40])( );     /*SLG0(V32)*/
l4:if((V2!=2)) goto l5;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l5;
l7:if((V10<4)) goto l8;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=8; v[102]=0;return;
l8:pile[v[22]]=117; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,M,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=1078; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1078,M,jvj+7)*/
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+7,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=258; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(258,jvj+2,jvj+8)*/
V47=x[R];
V49=x[jvj+8];
V52=x[L];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=10740; 
(*f[98])( );     /*SRA3(135,V35,10740,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(41,1,V36,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V37,125,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V17; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(41,V17,V38,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V39; pile[WZ2]=586; 
(*f[42])( );     /*SRA1(135,V39,586,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V15; pile[WZ2]=V41; 
(*f[39])( );     /*SDX0(41,V15,V41,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V42,58,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V44; pile[WZ2]=576; 
(*f[42])( );     /*SRA1(135,V44,576,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V47; pile[WZ2]=V45; 
(*f[39])( );     /*SDX0(20,V47,V45,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V49; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(23,V49,V46,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V48,(-9813),V50)*/
V50=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V52; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(20,V52,V50,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; 
(*f[40])( );     /*SLG0(V51)*/
l9:if((V10!=2)) goto l13;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l13;
l10:V10=g[502];
if((V10<=0)) goto l13;
V11=vg[502];
if((V11!=0)) goto l6;
if((V10<3)) goto l8;
l6:pile[v[22]]=502; pile[WZ1]=10740; pile[WZ2]=0; pile[WZ3]=(-600); pile[WZ4]=M; pile[WZ5]=(-601); pile[v[22]+6]=R; pile[v[22]+7]=(-620); pile[v[22]+8]=jvj+2; pile[v[22]+9]=(-595); pile[v[22]+10]=L; pile[v[22]+11]=jvj+6; 
(*f[1341])( );     /*INTERP17(502,10740,0,(-600),M,(-601),R,(-620),jvj+2,(-595),L,jvj+6)*/
if((x[jvj+6]==135)) goto l7;
goto l13;
l14:pile[v[22]]=109; pile[WZ1]=M; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(109,M,jvj+9)*/
pile[v[22]]=983; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(983,jvj+9,jvj+10)*/
pile[v[22]]=878; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(878,jvj+10,jvj+11)*/
l15:if((x[jvj+11]<=0)) goto l11;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=163; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(163,jvj+12,V56)*/
V56=pile[WZ2]; 
pile[WZ1]=M; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(163,M,V55)*/
V55=pile[WZ2]; 
if((V56==V55)) goto l16;
x[jvj+11]=t[x[jvj+11]];
goto l15;
l16:x[jvj+5]=x[jvj+12] ;z[jvj+5]=z[jvj+12];
V2=g[501];
if((V2<=0)) goto l5;
V3=vg[501];
if((V3!=0)) goto l1;
if((V2<3)) goto l3;
l1:pile[v[22]]=501; pile[WZ1]=10740; pile[WZ2]=0; pile[WZ3]=(-600); pile[WZ4]=M; pile[WZ5]=(-595); pile[v[22]+6]=L; pile[v[22]+7]=jvj+3; 
(*f[187])( );     /*INTERP0(501,10740,0,(-600),M,(-595),L,jvj+3)*/
if((x[jvj+3]==135)) goto l2;
goto l5;
}
