#include "dx.h"
void CALPRIO1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,V5=0,S=0,F=0,V8=0,P=0,V14=0,B=0,RS=0,V19=0,V31=0,V33=0,V23=0,V24=0,V22=0,V27=0,V26=0,V25=0,V36=0,Q=0,V40=0,V34=0,V35=0,V37=0,V39=0;
int BL,NR,Z;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=11148;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1142&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; NR=pile[v[22]+1]; Z=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
F=P=B=S=incon;
pile[v[22]]=983; pile[WZ1]=BL; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(983,BL,jvj+3)*/
pile[v[22]]=1212; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1212,jvj+3,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l3;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=683; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,jvj+5,V3)*/
V3=pile[WZ2]; 
if((V3!=NR)) goto l2;
pile[v[22]]=1210; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(1210,jvj+5,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=947; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(947,jvj+5,V5)*/
V5=pile[WZ2]; 
S=V4;
F=V5;
l3:pile[v[22]]=1088; pile[WZ1]=BL; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1088,BL,jvj+6)*/
l4:if((x[jvj+6]>0)) goto l5;
x[jvj+16]=250 ;z[jvj+16]=250;
l9:if(F!=incon) goto l10;
l12:if(x[jvj+16]==634||x[jvj+16]==580) goto l13;
l14:pile[v[22]]=1088; pile[WZ1]=BL; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1088,BL,jvj+11)*/
l15:if((x[jvj+11]<=0)) goto l19;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+12,V14)*/
V14=pile[WZ2]; 
if((V14!=(-7416))) goto l16;
pile[v[22]]=159; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(159,jvj+12,jvj+13)*/
x[jvj+24]=x[jvj+13] ;z[jvj+24]=z[jvj+13];
l17:if((x[jvj+24]<=0)) goto l16;
x[jvj+14]=s[x[jvj+24]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+24];
pile[v[22]]=459; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(459,jvj+14,jvj+15)*/
B=x[jvj+15];
l19:if(P==incon) goto l20;
l35:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l5:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+7,V8)*/
V8=pile[WZ2]; 
if((V8!=(-7416))) goto l6;
pile[v[22]]=159; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(159,jvj+7,jvj+8)*/
x[jvj+23]=x[jvj+8] ;z[jvj+23]=z[jvj+8];
l7:if((x[jvj+23]<=0)) goto l6;
x[jvj+9]=s[x[jvj+23]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+23];
pile[v[22]]=447; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(447,jvj+9,jvj+10)*/
x[jvj+16]=x[jvj+10] ;z[jvj+16]=z[jvj+10];
if((x[jvj+16]==1086)) goto l13;
goto l9;
l6:x[jvj+6]=t[x[jvj+6]];
goto l4;
l8:x[jvj+23]=t[x[jvj+23]];
goto l7;
l10:if((x[jvj+16]==902)) goto l11;
if((x[jvj+16]!=904)) goto l12;
if((F>=300)) goto l13;
goto l12;
l11:if((F>=200)) goto l13;
goto l12;
l13:P=44;
goto l14;
l16:x[jvj+11]=t[x[jvj+11]];
goto l15;
l18:x[jvj+24]=t[x[jvj+24]];
goto l17;
l20:if(B!=incon) goto l21;
l22:if(S!=incon) goto l23;
goto l35;
l21:if((x[jvj+16]!=262)) goto l22;
if(B==472||B==473||B==688||B==750) goto l35;
goto l22;
l23:if(F!=incon) goto l24;
goto l35;
l24:pile[v[22]]=BL; pile[WZ1]=jvj+16; pile[WZ2]=S; pile[WZ3]=F; pile[WZ4]=jvj+17; 
(*f[1442])( );     /*VALPRIO0(BL,jvj+16,S,F,jvj+17)*/
pile[v[22]]=jvj+17; 
(*f[766])( );if(v[102]) goto l35;     /*VALGLO0(jvj+17,RS)*/
RS=pile[WZ1]; 
pile[v[22]]=158; pile[WZ1]=Z; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(158,Z,jvj+21)*/
if((x[jvj+21]==67)) goto l32;
if((x[jvj+21]!=68)) goto l35;
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(164,Z,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(280,Z,V24)*/
V24=pile[WZ2]; 
V22=V23-V24;
if((V22<=0)) goto l35;
V27=RS-V24;
V26=1000*V27;
V25=V26/V22;
pile[v[22]]=V25; pile[WZ1]=jvj+22; 
(*f[1443])( );     /*CVNBPRIO1(V25,jvj+22)*/
x[jvj+18]=incon;
if((x[jvj+22]==985)) goto l27;
if((x[jvj+22]==1204)) goto l25;
x[jvj+18]=x[jvj+22] ;z[jvj+18]=z[jvj+22];
l29:V19=incon;
if((x[jvj+18]==616)) goto l31;
pile[v[22]]=196; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(196,jvj+18,jvj+19)*/
pile[v[22]]=BL; pile[WZ1]=jvj+20; 
(*f[834])( );     /*RAPIDE0(BL,jvj+20)*/
if((x[jvj+20]==135)) goto l30;
l31:V19=x[jvj+18];
l34:V36=x[BL];
Q=V19;
V40=Q;
pile[v[22]]=20; pile[WZ1]=11149; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11149,0,V34)*/
V34=pile[WZ3]; 
pile[WZ1]=V36; pile[WZ2]=V34; 
(*f[39])( );     /*SDX0(20,V36,V34,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=RS; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(41,RS,V35,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V40; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(20,V40,V37,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
goto l35;
l25:x[jvj+25]=incon;
if((F==0)) goto l26;
x[jvj+25]=606 ;z[jvj+25]=606;
l28:x[jvj+18]=x[jvj+25] ;z[jvj+18]=z[jvj+25];
goto l29;
l26:x[jvj+25]=616 ;z[jvj+25]=616;
goto l28;
l27:x[jvj+18]=616 ;z[jvj+18]=616;
goto l29;
l30:V19=x[jvj+19];
goto l34;
l32:pile[v[22]]=280; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(280,Z,V31)*/
V31=pile[WZ2]; 
if((RS>=V31)) goto l33;
pile[v[22]]=Z; pile[WZ1]=280; pile[WZ2]=RS; 
(*f[43])( );     /*CHGC2(Z,280,RS)*/
l33:pile[v[22]]=164; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(164,Z,V33)*/
V33=pile[WZ2]; 
if((RS<=V33)) goto l35;
pile[v[22]]=Z; pile[WZ1]=164; pile[WZ2]=RS; 
(*f[43])( );     /*CHGC2(Z,164,RS)*/
goto l35;
}
