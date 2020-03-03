#include "dx.h"
void QUESPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V8=0,V7=0,V5=0,V22=0,TT=0,GG=0,V27=0,T=0,G=0,V14=0,V12=0,S=0,V17=0,V15=0,SS=0,V20=0,V18=0,V25=0,V23=0,V=0,V31=0,V30=0,V40=0,V29=0,V28=0,V35=0,V41=0,V42=0,V54=0,V53=0;
int R,E,EC;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=35;
x[jvj+1]=10631;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==501&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; E=pile[v[22]+1]; EC=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=158; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(158,R,jvj+2)*/
V1=incon;
if((x[jvj+2]!=74)) goto l1;
V1=0;
l1:if(x[jvj+2]!=490&&x[jvj+2]!=1013) goto l2;
V1=(-999999);
l2:if(x[jvj+2]==491||x[jvj+2]==1014) goto l3;
if(V1==incon) goto l29;
if((V1!=(-99999998))) goto l30;
l29:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:V1=999999;
l30:pile[v[22]]=510; pile[WZ1]=V1; pile[WZ2]=515; pile[WZ3]=V1; pile[WZ4]=jvj+12; 
(*f[391])( );     /*QUADRI10(510,V1,515,V1,jvj+12)*/
x[jvj+34]=x[E] ;z[jvj+34]=z[E];
l22:if((x[jvj+34]>0)) goto l23;
pile[v[22]]=510; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(510,jvj+12,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=1018; pile[WZ1]=R; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(1018,R,jvj+23)*/
pile[v[22]]=135; pile[WZ1]=0; 
(*f[42])( );     /*SRA1(135,0,jvj+23,V41)*/
V41=pile[WZ3]; 
pile[WZ1]=V41; pile[WZ2]=jvj+2; 
(*f[42])( );     /*SRA1(135,V41,jvj+2,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V35; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(41,V35,V42,V29)*/
V29=pile[WZ3]; 
V28=incon;
pile[v[22]]=447; pile[WZ1]=jvj+12; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(447,jvj+12,jvj+20)*/
pile[v[22]]=109; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(109,jvj+20,jvj+21)*/
V40=x[jvj+21];
pile[v[22]]=20; pile[WZ1]=V40; pile[WZ2]=V29; 
(*f[39])( );     /*SDX0(20,V40,V29,V31)*/
V31=pile[WZ3]; 
V30=incon;
pile[v[22]]=163; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(163,jvj+20,V)*/
V=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V31,V,V30)*/
V30=pile[WZ2]; 
l26:V28=V30;
l28:pile[v[22]]=V28; 
(*f[40])( );     /*SLG0(V28)*/
pile[v[22]]=898; pile[WZ1]=jvj+12; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(898,jvj+12,jvj+22)*/
if((x[jvj+22]==0)) goto l29;
pile[v[22]]=jvj+22; pile[WZ1]=0; pile[WZ2]=2; 
(*f[846])( );     /*SORENSPB0(jvj+22,0,2)*/
goto l29;
l6:pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,R,jvj+11)*/
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+26; 
(*f[46])( );     /*TRI0(0,416,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=20; pile[WZ2]=158; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+26,20,158,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+27; pile[WZ5]=jvj+24; 
(*f[599])( );     /*QUADRI12(101,jvj+6,140,(-625),jvj+27,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=(-20); pile[WZ2]=128; pile[WZ3]=jvj+25; 
(*f[180])( );     /*TRIENS0(jvj+24,(-20),128,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=10547; pile[WZ2]=109; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+25,10547,109,jvj+10)*/
x[jvj+33]=x[jvj+11] ;z[jvj+33]=z[jvj+11];
l7:if((x[jvj+33]>0)) goto l8;
if((x[jvj+2]==74)) goto l17;
if((x[jvj+2]==490)) goto l18;
if((x[jvj+2]==491)) goto l20;
if((x[jvj+2]==1014)) goto l21;
if((x[jvj+2]!=1013)) goto l24;
pile[v[22]]=515; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(515,jvj+12,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=1018; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(1018,R,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(jvj+19,jvj+6,V23)*/
V23=pile[WZ2]; 
G=V25;
T=V23;
if((T>=G)) goto l13;
pile[v[22]]=510; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(510,jvj+12,V27)*/
V27=pile[WZ2]; 
if((T<=V27)) goto l14;
pile[v[22]]=jvj+12; pile[WZ1]=510; pile[WZ2]=T; 
(*f[43])( );     /*CHGC2(jvj+12,510,T)*/
pile[WZ1]=447; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(jvj+12,447,jvj+14)*/
l14:if((T>=G)) goto l13;
l24:x[jvj+34]=t[x[jvj+34]];
goto l22;
l8:x[jvj+9]=s[x[jvj+33]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+33];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[30])( );if(v[102]) goto l24;     /*EVL0(jvj+9,jvj+10,V5)*/
V5=pile[WZ2]; 
if((V5==135)) goto l9;
goto l24;
l9:x[jvj+33]=t[x[jvj+33]];
goto l7;
l10:pile[v[22]]=459; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(459,jvj+12,jvj+13)*/
pile[v[22]]=jvj+12; pile[WZ1]=447; 
(*f[35])( );     /*CHGC1(jvj+12,447,jvj+13)*/
l12:pile[v[22]]=jvj+12; pile[WZ1]=515; pile[WZ2]=TT; 
(*f[43])( );     /*CHGC2(jvj+12,515,TT)*/
pile[WZ1]=510; pile[WZ2]=GG; 
(*f[43])( );     /*CHGC2(jvj+12,510,GG)*/
l16:pile[v[22]]=jvj+12; pile[WZ1]=459; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(jvj+12,459,jvj+14)*/
goto l24;
l13:pile[v[22]]=459; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(459,jvj+12,jvj+15)*/
pile[v[22]]=jvj+12; pile[WZ1]=447; 
(*f[35])( );     /*CHGC1(jvj+12,447,jvj+15)*/
l15:pile[v[22]]=jvj+12; pile[WZ1]=515; pile[WZ2]=T; 
(*f[43])( );     /*CHGC2(jvj+12,515,T)*/
pile[WZ1]=510; pile[WZ2]=G; 
(*f[43])( );     /*CHGC2(jvj+12,510,G)*/
goto l16;
l17:pile[v[22]]=jvj+12; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+12,510,1)*/
pile[WZ1]=898; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+12,898,jvj+14)*/
goto l24;
l18:pile[v[22]]=510; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(510,jvj+12,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=1018; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(1018,R,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(jvj+16,jvj+6,V12)*/
V12=pile[WZ2]; 
S=V12;
if((S<=V14)) goto l24;
pile[v[22]]=jvj+12; pile[WZ1]=510; pile[WZ2]=S; 
(*f[43])( );     /*CHGC2(jvj+12,510,S)*/
l19:pile[v[22]]=jvj+12; pile[WZ1]=447; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(jvj+12,447,jvj+14)*/
goto l24;
l20:pile[v[22]]=510; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(510,jvj+12,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=1018; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(1018,R,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(jvj+17,jvj+6,V15)*/
V15=pile[WZ2]; 
SS=V15;
if((SS>=V17)) goto l24;
pile[v[22]]=jvj+12; pile[WZ1]=510; pile[WZ2]=SS; 
(*f[43])( );     /*CHGC2(jvj+12,510,SS)*/
goto l19;
l21:pile[v[22]]=515; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(515,jvj+12,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=1018; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(1018,R,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(jvj+18,jvj+6,V18)*/
V18=pile[WZ2]; 
GG=V20;
TT=V18;
if((TT<=GG)) goto l10;
pile[v[22]]=510; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(510,jvj+12,V22)*/
V22=pile[WZ2]; 
if((TT>=V22)) goto l11;
pile[v[22]]=jvj+12; pile[WZ1]=510; pile[WZ2]=TT; 
(*f[43])( );     /*CHGC2(jvj+12,510,TT)*/
pile[WZ1]=447; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(jvj+12,447,jvj+14)*/
l11:if((TT<=GG)) goto l10;
goto l24;
l23:x[jvj+14]=s[x[jvj+34]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+34];
pile[v[22]]=109; pile[WZ1]=jvj+14; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(109,jvj+14,jvj+28)*/
pile[v[22]]=983; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(983,jvj+28,jvj+29)*/
pile[v[22]]=878; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(878,jvj+29,jvj+30)*/
l31:if((x[jvj+30]<=0)) goto l24;
x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=163; pile[WZ1]=jvj+31; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(163,jvj+31,V54)*/
V54=pile[WZ2]; 
pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(163,jvj+14,V53)*/
V53=pile[WZ2]; 
if((V54==V53)) goto l32;
x[jvj+30]=t[x[jvj+30]];
goto l31;
l25:V30=V31;
goto l26;
l27:V28=V29;
goto l28;
l32:x[jvj+35]=x[jvj+31] ;z[jvj+35]=z[jvj+31];
x[jvj+4]=x[jvj+35] ;z[jvj+4]=z[jvj+35];
pile[v[22]]=683; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(683,R,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(218,R,jvj+3)*/
pile[v[22]]=944; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(944,jvj+4,jvj+5)*/
x[jvj+32]=x[jvj+5] ;z[jvj+32]=z[jvj+5];
l4:if((x[jvj+32]<=0)) goto l24;
x[jvj+6]=s[x[jvj+32]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+32];
pile[v[22]]=683; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(683,jvj+6,V7)*/
V7=pile[WZ2]; 
if((V7!=V8)) goto l5;
pile[v[22]]=935; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(935,jvj+6,jvj+7)*/
if((x[jvj+7]!=x[jvj+3])) goto l5;
pile[v[22]]=jvj+6; pile[WZ1]=EC; pile[WZ2]=jvj+8; 
(*f[505])( );     /*EVCOND0(jvj+6,EC,jvj+8)*/
if((x[jvj+8]==135)) goto l6;
l5:x[jvj+32]=t[x[jvj+32]];
goto l4;
}
