#include "dx.h"
void VAUT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V14=0,V15=0,CC=0,V19=0,V20=0,V21=0,V3=0,V2=0,V1=0,DM=0,V7=0,V9=0,V8=0,V4=0,V5=0,V6=0,V24=0,V51=0,V53=0,V50=0,V52=0,V54=0,V56=0,V23=0,V30=0,V59=0,V61=0,V58=0,V60=0,V62=0,V64=0,V29=0,V37=0,V38=0,V41=0,V42=0;
int HIST,A,B,C;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=10086;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2056&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; C=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
DM=incon;
pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,B,jvj+2)*/
pile[v[22]]=B; pile[WZ1]=jvj+3; 
(*f[200])( );if(v[102]) goto l1;     /*NDD0(B,jvj+3)*/
l2:if((x[A]==280)) goto l3;
if((x[A]!=164)) goto l8;
pile[v[22]]=1553; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1553,jvj+3,jvj+6)*/
l6:if((x[jvj+6]<=0)) goto l8;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=164; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(164,jvj+7,V19)*/
V19=pile[WZ2]; 
if((C>V19)) goto l7;
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(280,jvj+7,V20)*/
V20=pile[WZ2]; 
if((C<V20)) goto l7;
V21=V20-1;
CC=V21;
l9:if(x[A]!=164&&x[A]!=280) goto l11;
pile[v[22]]=A; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(A,jvj+3,V3)*/
V3=pile[WZ2]; 
V2=V3-CC;
V1=abs(V2);
DM=V1;
V7=30*DM;
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(A,jvj+3,V9)*/
V9=pile[WZ2]; 
V8=abs(V9);
if((V7<V8)) goto l41;
l11:if((x[A]==280)) goto l12;
if((x[A]!=164)) goto l10;
pile[v[22]]=164; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(164,jvj+3,V6)*/
V6=pile[WZ2]; 
if((V6<=CC)) goto l41;
l10:pile[v[22]]=A; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(A,jvj+3,V4)*/
V4=pile[WZ2]; 
if((V4==CC)) goto l41;
l13:x[jvj+8]=x[jvj+3] ;z[jvj+8]=z[jvj+3];
if((v[111]!=0)) goto l14;
pile[v[22]]=A; pile[WZ1]=jvj+8; pile[WZ2]=CC; pile[WZ3]=HIST; 
(*f[2118])( );     /*ARCHIVE6(A,jvj+8,CC,HIST)*/
l14:z[jvj+8]=(-1);
if((v[247]<=0)) goto l23;
pile[v[22]]=218; pile[WZ1]=HIST; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(218,HIST,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=A; 
(*f[1734])( );     /*AJMEMA0(jvj+11,A)*/
l23:pile[v[22]]=jvj+8; pile[WZ1]=A; pile[WZ2]=CC; 
(*f[43])( );     /*CHGC2(jvj+8,A,CC)*/
if((x[A]==688)) goto l24;
if((x[A]==280)) goto l25;
if((x[A]!=164)) goto l32;
pile[v[22]]=1553; pile[WZ1]=jvj+8; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1553,jvj+8,jvj+15)*/
l28:if((x[jvj+15]<=0)) goto l32;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=280; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(280,jvj+16,V41)*/
V41=pile[WZ2]; 
if((V41<=CC)) goto l29;
V42=x[jvj+16];
pile[v[22]]=1553; pile[WZ1]=jvj+8; pile[WZ2]=V42; 
(*f[134])( );     /*OTA0(1553,jvj+8,V42)*/
l29:x[jvj+15]=t[x[jvj+15]];
goto l28;
l1:x[jvj+3]=x[B] ;z[jvj+3]=z[B];
goto l2;
l3:pile[v[22]]=1553; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1553,jvj+3,jvj+4)*/
l4:if((x[jvj+4]<=0)) goto l8;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=280; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(280,jvj+5,V13)*/
V13=pile[WZ2]; 
if((C<V13)) goto l5;
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(164,jvj+5,V14)*/
V14=pile[WZ2]; 
if((C>V14)) goto l5;
V15=V14+1;
CC=V15;
goto l9;
l5:x[jvj+4]=t[x[jvj+4]];
goto l4;
l7:x[jvj+6]=t[x[jvj+6]];
goto l6;
l8:CC=C;
goto l9;
l12:pile[v[22]]=280; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(280,jvj+3,V5)*/
V5=pile[WZ2]; 
if((V5>=CC)) goto l41;
goto l10;
l16:if((V23<4)) goto l17;
l36:if(x[A]!=164&&x[A]!=280) goto l37;
V29=g[575];
if((V29<=0)) goto l37;
V30=vg[575];
if((V30!=0)) goto l19;
if((V29<3)) goto l21;
l19:pile[v[22]]=575; pile[WZ1]=10086; pile[WZ2]=0; pile[WZ3]=(-598); pile[WZ4]=A; pile[WZ5]=(-719); pile[v[22]+6]=jvj+8; pile[v[22]+7]=(-15); pile[v[22]+8]=CC; pile[v[22]+9]=(-6231); pile[v[22]+10]=HIST; pile[v[22]+11]=jvj+10; 
(*f[1272])( );     /*INTERP14(575,10086,0,(-598),A,(-719),jvj+8,(-15),CC,(-6231),HIST,jvj+10)*/
if((x[jvj+10]==135)) goto l20;
l37:if(DM!=incon) goto l38;
l39:if(x[A]!=280&&x[A]!=164&&x[A]!=473&&x[A]!=472&&x[A]!=750&&x[A]!=688) goto l40;
x[jvj+23]=vo[14];z[jvj+23]=vz[14];
pile[v[22]]=1418; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(1418,jvj+23,jvj+24)*/
if((x[jvj+24]!=68)) goto l40;
pile[v[22]]=B; 
(*f[1595])( );     /*CRETUND0(B)*/
l40:pile[v[22]]=A; pile[WZ1]=jvj+8; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(A,jvj+8,HIST)*/
l41:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l17:V51=x[A];
V53=x[jvj+8];
pile[v[22]]=20; pile[WZ1]=V51; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V51,0,V50)*/
V50=pile[WZ3]; 
pile[WZ1]=V53; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(20,V53,V50,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=CC; pile[WZ2]=V52; 
(*f[39])( );     /*SDX0(41,CC,V52,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=V54; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l18;     /*SORHIST1(V54,HIST,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V56; 
(*f[40])( );     /*SLG0(V56)*/
l18:if((V23!=2)) goto l36;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l36;
l20:if((V29<4)) goto l21;
goto l37;
l21:V59=x[A];
V61=x[jvj+8];
pile[v[22]]=20; pile[WZ1]=V59; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V59,0,V58)*/
V58=pile[WZ3]; 
pile[WZ1]=V61; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(20,V61,V58,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=CC; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(41,CC,V60,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l22;     /*SORHIST1(V62,HIST,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=V64; 
(*f[40])( );     /*SLG0(V64)*/
l22:if((V29!=2)) goto l37;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l37;
l24:if((CC!=1)) goto l32;
x[jvj+12]=vo[16];z[jvj+12]=vz[16];
pile[v[22]]=jvj+12; pile[WZ1]=242; pile[WZ2]=688; 
(*f[35])( );     /*CHGC1(jvj+12,242,688)*/
l32:x[jvj+17]=d[60];z[jvj+17]=0;
l30:if((x[jvj+17]>0)) goto l31;
if(x[A]==164||x[A]==280) goto l36;
V23=g[574];
if((V23<=0)) goto l36;
V24=vg[574];
if((V24!=0)) goto l15;
if((V23<3)) goto l17;
l15:pile[v[22]]=574; pile[WZ1]=10086; pile[WZ2]=0; pile[WZ3]=(-598); pile[WZ4]=A; pile[WZ5]=(-719); pile[v[22]+6]=jvj+8; pile[v[22]+7]=(-15); pile[v[22]+8]=CC; pile[v[22]+9]=(-6231); pile[v[22]+10]=HIST; pile[v[22]+11]=jvj+9; 
(*f[1272])( );     /*INTERP14(574,10086,0,(-598),A,(-719),jvj+8,(-15),CC,(-6231),HIST,jvj+9)*/
if((x[jvj+9]==135)) goto l16;
goto l36;
l25:pile[v[22]]=1553; pile[WZ1]=jvj+8; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1553,jvj+8,jvj+13)*/
l26:if((x[jvj+13]<=0)) goto l32;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=164; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(164,jvj+14,V37)*/
V37=pile[WZ2]; 
if((V37>=CC)) goto l27;
V38=x[jvj+14];
pile[v[22]]=1553; pile[WZ1]=jvj+8; pile[WZ2]=V38; 
(*f[134])( );     /*OTA0(1553,jvj+8,V38)*/
l27:x[jvj+13]=t[x[jvj+13]];
goto l26;
l31:x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=jvj+18; pile[WZ1]=461; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(jvj+18,461,jvj+19)*/
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==x[A]) goto l34;
l33:x[jvj+17]=t[x[jvj+17]];
goto l30;
l34:pile[v[22]]=jvj+18; pile[WZ1]=jvj+8; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(jvj+18,jvj+8,jvj+20)*/
x[jvj+25]=x[jvj+20] ;z[jvj+25]=z[jvj+20];
l35:if((x[jvj+25]<=0)) goto l33;
x[jvj+21]=s[x[jvj+25]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+25];
pile[v[22]]=jvj+21; pile[WZ1]=A; pile[WZ2]=CC; 
(*f[43])( );     /*CHGC2(jvj+21,A,CC)*/
x[jvj+25]=t[x[jvj+25]];
goto l35;
l38:pile[v[22]]=218; pile[WZ1]=A; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(218,A,jvj+22)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+22; pile[WZ2]=DM; 
(*f[43])( );     /*CHGC2(jvj+8,jvj+22,DM)*/
goto l39;
}
