#include "dx.h"
void MALICE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,V2=0,V1=0,T=0,V3=0,V5=0,V85=0,V34=0,V28=0,V37=0,V36=0,V41=0,V43=0,V42=0,V40=0,U=0,DD=0,V19=0,V83=0,V26=0,V25=0,V44=0,V91=0,V88=0,V89=0,V90=0,V80=0,V79=0,V82=0,V81=0,V54=0,V62=0,V67=0,V65=0,V66=0,V69=0,V93=0,V70=0,V72=0,V92=0,V94=0,V96=0,V97=0,V98=0,V99=0,V52=0,V60=0;
int S;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=10592;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1190&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V40=vv[15];
U=V40;
DD=v[14];
x[jvj+2]=vo[12];z[jvj+2]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(860,jvj+2,jvj+13)*/
V19=x[jvj+13];
vv[34]=V19;
l6:x[jvj+14]=incon;
pile[v[22]]=860; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(860,jvj+2,jvj+5)*/
if((x[jvj+5]!=844)) goto l7;
x[jvj+14]=449 ;z[jvj+14]=449;
l15:pile[v[22]]=jvj+2; pile[WZ1]=jvj+14; pile[WZ3]=jvj+15; 
(*f[45])( );if(v[102]) goto l16;     /*FNDZ0(jvj+2,jvj+14,V83,jvj+15)*/
V83=pile[WZ2]; 
V26=V83;
V25=V26;
vv[35]=V25;
l16:V44=vv[33];
if((V44>0)) goto l17;
if((V44!=0)) goto l8;
if((v[52]>0)) goto l19;
pile[v[22]]=860; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(860,jvj+2,jvj+3)*/
if((x[jvj+3]!=228)) goto l19;
l8:V28=incon;
x[jvj+6]=vo[12];z[jvj+6]=vz[12];
x[jvj+8]=incon;
pile[v[22]]=860; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(860,jvj+6,jvj+7)*/
if((x[jvj+7]!=844)) goto l9;
x[jvj+8]=190 ;z[jvj+8]=190;
l10:pile[v[22]]=jvj+6; pile[WZ1]=jvj+8; pile[WZ3]=jvj+9; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(jvj+6,jvj+8,V85,jvj+9)*/
V85=pile[WZ2]; 
V34=V85;
V28=V34;
l21:vv[36]=V28;
x[jvj+10]=vo[12];z[jvj+10]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(683,jvj+10,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(645,597,jvj+11)*/
l12:if((x[jvj+11]<=0)) goto l34;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=683; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(683,jvj+12,V36)*/
V36=pile[WZ2]; 
if((V36!=V37)) goto l13;
pile[v[22]]=265; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(265,jvj+12,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=265; pile[WZ2]=jvj+37; 
(*f[300])( );     /*TRI10(jvj+18,265,jvj+37)*/
vo[42]=x[jvj+37];vz[42]=0;
l34:x[jvj+23]=vo[12];z[jvj+23]=vz[12];
pile[v[22]]=117; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(117,jvj+23,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=S; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(498,S,jvj+26)*/
pile[v[22]]=905; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(905,jvj+26,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=S; pile[WZ1]=jvj+28; 
(*f[378])( );     /*CPI0(S,jvj+28)*/
vo[16]=x[jvj+28];vz[16]=(-1);
vv[15]=2;
vv[30]=V52;
vv[31]=298;
vv[38]=(-1);
vv[37]=0;
pile[v[22]]=1253; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(1253,jvj+23,V54)*/
V54=pile[WZ2]; 
v[47]=V54;
l25:x[jvj+24]=d[32];z[jvj+24]=0;
l23:if((x[jvj+24]>0)) goto l24;
pile[v[22]]=jvj+28; pile[WZ1]=905; pile[WZ2]=V60; 
(*f[177])( );     /*CHGC4(jvj+28,905,V60)*/
pile[WZ1]=1221; pile[WZ2]=25; 
(*f[43])( );     /*CHGC2(jvj+28,1221,25)*/
(*f[1474])( );     /*RESOUDRE0(jvj+28)*/
vv[15]=U;
v[14]=DD;
if((v[93]<=0)) goto l29;
x[jvj+29]=vo[14];z[jvj+29]=vz[14];
pile[v[22]]=1383; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(1383,jvj+29,jvj+30)*/
if((x[jvj+30]!=1385)) goto l29;
(*f[170])( );     /*SURVEILLE0()*/
l29:V62=vv[101];
if((V62<=0)) goto l35;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(1484,854,V67)*/
V67=pile[WZ2]; 
V65=sepfacts+1;
V66=sepfacts+V67;
l30:if((V65>V66)) goto l35;
V69=r[V65];
if((V69!=1)) goto l31;
x[jvj+31]=V65 ;z[jvj+31]=(V65<=sepcte) ? V65 : 0;
pile[v[22]]=345; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(345,jvj+31,jvj+32)*/
x[jvj+33]=x[jvj+32] ;z[jvj+33]=z[jvj+32];
pile[v[22]]=365; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(365,jvj+33,jvj+34)*/
V93=x[jvj+31];
x[jvj+39]=x[jvj+34] ;z[jvj+39]=z[jvj+34];
l32:if((x[jvj+39]<=0)) goto l31;
x[jvj+35]=s[x[jvj+39]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+39];
pile[v[22]]=1210; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(1210,jvj+35,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(130,jvj+35,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=288; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(288,jvj+35,jvj+36)*/
pile[v[22]]=1210; 
(*f[71])( );     /*ENLV0(1210,jvj+35)*/
pile[v[22]]=20; pile[WZ1]=V93; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V93,0,V92)*/
V92=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V72; pile[WZ2]=V92; 
(*f[39])( );     /*SDX0(41,V72,V92,V94)*/
V94=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V94; pile[WZ2]=jvj+36; 
(*f[42])( );     /*SRA1(135,V94,jvj+36,V96)*/
V96=pile[WZ3]; 
pile[WZ1]=V96; pile[WZ2]=1210; 
(*f[42])( );     /*SRA1(135,V96,1210,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=V97; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V97,58,V98)*/
V98=pile[WZ2]; 
pile[v[22]]=V98; pile[WZ1]=V70; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V98,V70,41,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=V99; 
(*f[40])( );     /*SLG0(V99)*/
l33:x[jvj+39]=t[x[jvj+39]];
goto l32;
l1:V1=V2;
l2:V3=incon;
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+2,T)*/
T=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=T; pile[WZ2]=V1; 
(*f[39])( );     /*SDX0(41,T,V1,V3)*/
V3=pile[WZ3]; 
l4:V5=incon;
pile[v[22]]=860; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(860,jvj+2,jvj+4)*/
pile[v[22]]=135; pile[WZ1]=V3; 
(*f[42])( );     /*SRA1(135,V3,jvj+4,V5)*/
V5=pile[WZ3]; 
l20:V82=75-V5;
pile[v[22]]=V82; pile[WZ1]=V5; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(V82,V5,42,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=V81; 
(*f[40])( );     /*SLG0(V81)*/
pile[v[22]]=jvj+2; 
(*f[1255])( );     /*SOREXP1(jvj+2)*/
fflush(stdout);
goto l8;
l3:V3=V1;
goto l4;
l5:V5=V3;
goto l20;
l7:x[jvj+14]=109 ;z[jvj+14]=109;
goto l15;
l9:x[jvj+8]=163 ;z[jvj+8]=163;
goto l10;
l11:V28=0;
goto l21;
l13:x[jvj+11]=t[x[jvj+11]];
goto l12;
l14:V42=V43;
l18:pile[v[22]]=V42; 
(*f[40])( );     /*SLG0(V42)*/
goto l8;
l17:pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+2,jvj+16)*/
V91=x[jvj+16];
pile[v[22]]=0; pile[WZ1]=73; 
(*f[38])( );     /*SPC0(0,73,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=V88; pile[WZ1]=(-9916); 
(*f[37])( );     /*SRA0(V88,(-9916),V89)*/
V89=pile[WZ2]; 
pile[v[22]]=V89; pile[WZ1]=(-9919); 
(*f[37])( );     /*SRA0(V89,(-9919),V90)*/
V90=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V91; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(20,V91,V90,V43)*/
V43=pile[WZ3]; 
V42=incon;
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(163,jvj+2,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=V41; 
(*f[37])( );     /*SRA0(V43,V41,V42)*/
V42=pile[WZ2]; 
goto l18;
l19:pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+2,jvj+17)*/
V80=x[jvj+17];
pile[v[22]]=22; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(22,0,42,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V80; pile[WZ2]=V79; 
(*f[39])( );     /*SDX0(20,V80,V79,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(163,jvj+2,L)*/
L=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=L; 
(*f[37])( );     /*SRA0(V2,L,V1)*/
V1=pile[WZ2]; 
goto l2;
l24:x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(jvj+25,jvj+26,jvj+27)*/
x[jvj+38]=x[jvj+27] ;z[jvj+38]=z[jvj+27];
l26:if((x[jvj+38]>0)) goto l27;
x[jvj+24]=t[x[jvj+24]];
goto l23;
l27:x[jvj+19]=s[x[jvj+38]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+38];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+21)*/
pile[v[22]]=135; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(135,jvj+19,jvj+20)*/
pile[v[22]]=jvj+21; pile[WZ1]=135; 
(*f[35])( );     /*CHGC1(jvj+21,135,jvj+20)*/
l22:pile[v[22]]=345; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(345,jvj+19,jvj+22)*/
pile[v[22]]=jvj+21; pile[WZ1]=345; 
(*f[35])( );     /*CHGC1(jvj+21,345,jvj+22)*/
l28:pile[v[22]]=jvj+28; pile[WZ1]=jvj+25; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+28,jvj+25,jvj+21)*/
x[jvj+38]=t[x[jvj+38]];
goto l26;
l31:V65++;
goto l30;
l35:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
