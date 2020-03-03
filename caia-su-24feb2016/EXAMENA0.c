#include "dx.h"
void EXAMENA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,MX=0,V7=0,V11=0,V22=0,V25=0,V39=0,V41=0,V35=0,V36=0,V37=0,V38=0,V40=0,V24=0,V49=0,V48=0,V45=0,V46=0,V44=0,V50=0,V56=0,V62=0,V58=0,V57=0,V53=0,V51=0,V55=0,V54=0,V2=0,V63=0,V65=0,V66=0,V68=0,V64=0,V67=0,V60=0;
int RN;
int H;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=11619;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1311&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RN=pile[v[22]]; H=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=x[H]=x[jvj+7]=x[jvj+13]=incon;
pile[v[22]]=120; pile[WZ1]=RN; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(120,RN,jvj+6)*/
pile[v[22]]=698; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(698,jvj+6,jvj+7)*/
l3:x[jvj+8]=vo[12];z[jvj+8]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(860,jvj+8,jvj+9)*/
if(x[jvj+9]!=228&&x[jvj+9]!=967&&x[jvj+9]!=682) goto l10;
pile[v[22]]=204; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(204,jvj+6,MX)*/
MX=pile[WZ2]; 
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+2]=x[RN] ;z[jvj+2]=z[RN];
l1:pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,jvj+2,jvj+3)*/
pile[v[22]]=204; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(204,jvj+3,V9)*/
V9=pile[WZ2]; 
if((V9!=MX)) goto l2;
pile[v[22]]=698; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(698,jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+4)*/
l2:x[jvj+2]=x[jvj+3] ;z[jvj+2]=z[jvj+3];
goto l1;
l4:if(x[jvj+5]!=incon) goto l5;
l9:if(x[H]==incon) goto l10;
l12:if(x[jvj+7]!=incon) goto l13;
l21:if(x[H]==incon) goto l22;
l27:if(x[H]==incon) goto l28;
l32:if(x[H]!=incon) goto l33;
l31:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l5:V7=x[jvj+5];
for(i=x[jvj+5],V11=0;i>0;i=t[i],V11++)  ;
V50=1;
V56=49;
V57=incon;
V62=v[V56];
V58=V62%1000000;
if((V58>0)) goto l38;
V57=137643;
l37:v[V56]=V57;
V53=V11+1;
V51=V53-V50;
V55=v[49]%V51;
V54=V50+V55;
V2=V54;
V49=V2;
V48=V7;
l34:if((V49==1)) goto l36;
if((V49<=1)) goto l35;
if((V48<=0)) goto l35;
V45=t[V48];
if((V45<=0)) goto l35;
V46=V49-1;
V48=V45;
V49=V46;
goto l34;
l6:pile[v[22]]=868; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(868,jvj+7,jvj+10)*/
if((x[jvj+10]==55)) goto l12;
l11:x[H]=x[jvj+7] ;z[H]=z[jvj+7];
goto l12;
l8:pile[v[22]]=jvj+7; pile[WZ1]=jvj+11; 
(*f[799])( );if(v[102]) goto l14;     /*NORME0(jvj+7,jvj+11)*/
l14:if(x[jvj+11]!=incon) goto l15;
l16:if(x[H]==incon) goto l17;
goto l21;
l10:if(x[jvj+7]!=incon) goto l6;
goto l12;
l13:pile[v[22]]=868; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(868,jvj+7,jvj+12)*/
if((x[jvj+12]!=55)) goto l16;
pile[v[22]]=929; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(929,jvj+7,V22)*/
V22=pile[WZ2]; 
x[jvj+11]=incon;
if((v[244]<=0)) goto l7;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+11; 
(*f[965])( );if(v[102]) goto l7;     /*NORM0(jvj+7,jvj+11)*/
l7:if(x[jvj+11]==incon) goto l8;
goto l14;
l15:x[jvj+13]=x[jvj+11] ;z[jvj+13]=z[jvj+11];
pile[v[22]]=jvj+13; pile[WZ1]=929; pile[WZ2]=V22; 
(*f[43])( );     /*CHGC2(jvj+13,929,V22)*/
goto l16;
l17:if(x[jvj+13]!=incon) goto l18;
goto l21;
l18:pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=55)) goto l19;
x[H]=x[jvj+7] ;z[H]=z[jvj+7];
l19:if(x[H]==incon) goto l20;
goto l21;
l20:pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+13,jvj+16)*/
if((x[jvj+16]!=134)) goto l21;
pile[v[22]]=746; pile[WZ1]=jvj+7; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(746,jvj+7,jvj+17)*/
pile[v[22]]=jvj+17; 
(*f[1559])( );     /*CONTRADICTION0(jvj+17)*/
x[H]=985 ;z[H]=985;
goto l21;
l22:if(x[jvj+13]!=incon) goto l23;
goto l27;
l23:pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+13,jvj+18)*/
if((x[jvj+18]!=135)) goto l27;
pile[v[22]]=120; pile[WZ1]=RN; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(120,RN,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=H; 
(*f[1311])( );if(v[102]) goto l27;     /*EXAMENA0(jvj+19,H)*/
goto l27;
l25:if((V24>=4)) goto l26;
V39=x[jvj+13];
V41=x[jvj+7];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=11619; 
(*f[98])( );     /*SRA3(135,V35,11619,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=V36; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V36,125,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V39; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(20,V39,V37,V38)*/
V38=pile[WZ3]; 
pile[WZ1]=V41; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(20,V41,V38,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; 
(*f[40])( );     /*SLG0(V40)*/
l26:if((V24!=2)) goto l32;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l32;
l28:if(x[jvj+7]!=incon) goto l29;
goto l32;
l29:if(x[jvj+13]!=incon) goto l30;
goto l32;
l30:pile[v[22]]=746; pile[WZ1]=jvj+7; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(746,jvj+7,jvj+21)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+13; 
(*f[1558])( );     /*RESTAURE0(jvj+7,jvj+13,jvj+21)*/
x[H]=985 ;z[H]=985;
V24=g[602];
if((V24<=0)) goto l32;
V25=vg[602];
if((V25!=0)) goto l24;
if((V24<3)) goto l25;
l24:pile[v[22]]=602; pile[WZ1]=11619; pile[WZ2]=0; pile[WZ3]=(-631); pile[WZ4]=jvj+13; pile[WZ5]=(-601); pile[v[22]+6]=jvj+7; pile[v[22]+7]=jvj+20; 
(*f[187])( );     /*INTERP0(602,11619,0,(-631),jvj+13,(-601),jvj+7,jvj+20)*/
if((x[jvj+20]==135)) goto l25;
goto l32;
l33:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l35:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l36:V44=s[V48];
x[jvj+22]=V44 ;z[jvj+22]=(V44<=sepcte) ? V44 : 0;
x[H]=x[jvj+22] ;z[H]=z[jvj+22];
goto l9;
l38:V60=V58%100000;
V67=V58/100000;
V64=V60*10;
V68=V60/10000;
V66=V67+V68;
V65=V66%10;
V63=V64+V65;
V57=V63;
goto l37;
}
