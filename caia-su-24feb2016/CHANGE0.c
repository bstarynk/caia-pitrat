#include "dx.h"
void CHANGE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,DV=0,V3=0,V36=0,V37=0,LR=0,DW=0,V38=0,XJ=0,V41=0,V85=0,V22=0,V83=0,V19=0,V25=0,V26=0,V87=0,V27=0,V89=0,V30=0,V34=0,Z=0,DKK=0,V48=0,V90=0,V49=0,V92=0,V50=0,V52=0,V53=0,V61=0,V54=0,V55=0,V63=0,V78=0,V79=0,V81=0,V56=0,V70=0,V93=0,V73=0,V97=0,V100=0;
int L,KR;
int M;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=10828;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==369&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; KR=pile[v[22]+1]; M=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[jvj+9]=DW=x[jvj+16]=XJ=LR=x[jvj+26]=Z=incon;
if((KR!=67)) goto l1;
pile[v[22]]=374; pile[WZ1]=L; pile[WZ2]=M; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(374,L,M)*/
l3:pile[v[22]]=358; pile[WZ1]=L; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(358,L,jvj+2)*/
DV=1;
l5:V37=bh[v[1]][DV];
V36=incon;
if((V37==43)) goto l4;
V36=V37;
l6:LR=V36;
if((LR==32)) goto l7;
V38=DV+1;
DW=V38;
if((LR==81)) goto l21;
if((LR==67)) goto l22;
if((LR==71)) goto l23;
l16:if(LR==78||LR==82) goto l17;
l9:if((LR==80)) goto l25;
if((LR==32)) goto l8;
l11:if((LR==65)) goto l26;
if((LR==32)) goto l10;
l13:if((LR==88)) goto l27;
if((LR==32)) goto l12;
l28:if((LR!=77)) goto l29;
V41=DW+1;
pile[v[22]]=V41; pile[WZ1]=jvj+9; 
(*f[262])( );if(v[102]) goto l29;     /*LPAT0(V41,jvj+9,XJ)*/
XJ=pile[WZ2]; 
l29:pile[v[22]]=274; pile[WZ1]=M; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(274,M,jvj+11)*/
pile[v[22]]=109; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(109,M,jvj+12)*/
x[jvj+16]=x[jvj+11] ;z[jvj+16]=z[jvj+11];
z[jvj+16]=x[jvj+12];
l33:if(x[jvj+2]!=incon) goto l34;
l40:if(XJ==incon) goto l41;
l46:if(x[jvj+2]!=incon) goto l47;
l64:if(x[jvj+16]!=incon) goto l65;
l69:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:x[M]=x[L] ;z[M]=z[L];
if((KR==78)) goto l2;
if((KR==67)) goto l3;
goto l29;
l2:V2=bh[v[1]][1];
pile[v[22]]=187; pile[WZ1]=240; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(187,240,jvj+35)*/
l72:if((x[jvj+35]>0)) goto l73;
if((V2!=32)) goto l29;
pile[v[22]]=1; 
(*f[107])( );     /*CRC0(1,V3)*/
V3=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+2; 
(*f[78])( );if(v[102]) goto l29;     /*SMA0(1,64,67,jvj+2)*/
DV=V3;
goto l5;
l4:V36=32;
goto l6;
l7:DW=DV;
pile[v[22]]=444; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(444,jvj+2,jvj+7)*/
if((x[jvj+7]==105)) goto l22;
l20:if((x[jvj+2]==108)) goto l23;
l15:if(x[jvj+2]==114||x[jvj+2]==113) goto l17;
goto l16;
l14:if((LR==32)) goto l15;
goto l16;
l17:x[jvj+10]=incon;
if((LR==32)) goto l18;
if((LR==82)) goto l19;
if((LR!=78)) goto l9;
x[jvj+10]=114 ;z[jvj+10]=114;
l24:pile[v[22]]=DW; pile[WZ1]=jvj+10; pile[WZ2]=jvj+9; 
(*f[731])( );if(v[102]) goto l9;     /*LBAR0(DW,jvj+10,jvj+9,XJ)*/
XJ=pile[WZ3]; 
goto l29;
l18:x[jvj+10]=x[jvj+2] ;z[jvj+10]=z[jvj+2];
if((x[jvj+10]!=(-99999998))) goto l24;
l8:pile[v[22]]=444; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(444,jvj+2,jvj+3)*/
if((x[jvj+3]==184)) goto l25;
l10:pile[v[22]]=444; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(444,jvj+2,jvj+4)*/
if((x[jvj+4]==107)) goto l26;
l12:pile[v[22]]=146; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(146,jvj+2,jvj+6)*/
if((x[jvj+6]!=129)) goto l29;
pile[v[22]]=444; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(444,jvj+2,jvj+5)*/
if(x[jvj+5]==107||x[jvj+5]==105||x[jvj+5]==184) goto l29;
l27:pile[v[22]]=DW; pile[WZ1]=jvj+9; 
(*f[79])( );if(v[102]) goto l28;     /*LEXP0(DW,jvj+9,XJ)*/
XJ=pile[WZ2]; 
goto l29;
l19:x[jvj+10]=113 ;z[jvj+10]=113;
goto l24;
l21:pile[v[22]]=109; pile[WZ1]=L; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(109,L,jvj+8)*/
pile[v[22]]=DW; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[734])( );if(v[102]) goto l16;     /*LIRESQ0(DW,jvj+8,jvj+9,XJ)*/
XJ=pile[WZ3]; 
goto l29;
l22:pile[v[22]]=DW; pile[WZ1]=jvj+9; 
(*f[726])( );     /*LCONT0(DW,jvj+9,XJ)*/
XJ=pile[WZ2]; 
goto l29;
l23:pile[v[22]]=DW; pile[WZ1]=94; pile[WZ2]=jvj+9; 
(*f[732])( );if(v[102]) goto l14;     /*LEXR1(DW,94,jvj+9,XJ)*/
XJ=pile[WZ3]; 
goto l29;
l25:pile[v[22]]=DW; pile[WZ1]=jvj+9; 
(*f[358])( );if(v[102]) goto l11;     /*LREG0(DW,jvj+9,XJ)*/
XJ=pile[WZ2]; 
goto l29;
l26:pile[v[22]]=DW; pile[WZ1]=jvj+9; 
(*f[335])( );if(v[102]) goto l13;     /*LANT0(DW,jvj+9,XJ)*/
XJ=pile[WZ2]; 
goto l29;
l32:V25=bh[v[1]][DW];
if((V25!=43)) goto l70;
if((V26=w[x[jvj+2]][1])==incon) goto l70;
if((V26!=20)) goto l70;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+2; pile[WZ3]=jvj+20; 
(*f[45])( );if(v[102]) goto l70;     /*FNDZ0(jvj+16,jvj+2,V87,jvj+20)*/
V87=pile[WZ2]; 
V27=V87;
V89=V27;
pile[v[22]]=jvj+9; pile[WZ2]=V89; 
(*f[43])( );     /*CHGC2(jvj+9,jvj+2,V89)*/
l70:if((V97=w[x[jvj+2]][1])==incon) goto l39;
if((V97!=23)) goto l71;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+16,jvj+2,jvj+9)*/
l39:pile[v[22]]=jvj+2; pile[WZ1]=jvj+16; pile[WZ2]=jvj+9; 
(*f[727])( );     /*INTERA0(jvj+2,jvj+16,jvj+9)*/
pile[v[22]]=jvj+25; 
(*f[365])( );     /*STK0(jvj+25)*/
goto l40;
l34:if((KR!=67)) goto l35;
if((V30=w[x[jvj+2]][1])==incon) goto l35;
if((V30!=23)) goto l35;
pile[v[22]]=374; pile[WZ1]=L; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(374,L,jvj+21)*/
pile[v[22]]=274; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(274,jvj+21,jvj+22)*/
pile[v[22]]=109; pile[WZ1]=M; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(109,M,jvj+23)*/
pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(274,L,jvj+24)*/
V34=x[jvj+24];
z[jvj+22]=(-1);
pile[v[22]]=jvj+2; pile[WZ1]=jvj+22; pile[WZ2]=V34; 
(*f[134])( );     /*OTA0(jvj+2,jvj+22,V34)*/
pile[v[22]]=jvj+23; 
(*f[365])( );     /*STK0(jvj+23)*/
l35:if(x[jvj+9]!=incon) goto l36;
goto l40;
l36:if(DW!=incon) goto l37;
goto l40;
l37:if(x[jvj+16]!=incon) goto l38;
goto l40;
l38:pile[v[22]]=109; pile[WZ1]=M; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(109,M,jvj+25)*/
if((x[jvj+2]!=128)) goto l32;
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,jvj+9,jvj+13)*/
if((x[jvj+14]=w[x[jvj+13]][3])==incon) goto l32;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+14; pile[WZ3]=jvj+15; 
(*f[45])( );if(v[102]) goto l32;     /*FNDZ0(jvj+9,jvj+14,V85,jvj+15)*/
V85=pile[WZ2]; 
V22=V85;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(jvj+2,jvj+16,jvj+17)*/
l30:if((x[jvj+17]<=0)) goto l32;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+14; pile[WZ3]=jvj+19; 
(*f[45])( );if(v[102]) goto l31;     /*FNDZ0(jvj+18,jvj+14,V83,jvj+19)*/
V83=pile[WZ2]; 
V19=V83;
if((V19==V22)) goto l40;
l31:x[jvj+17]=t[x[jvj+17]];
goto l30;
l41:if(LR!=incon) goto l42;
goto l46;
l42:if(DW!=incon) goto l43;
goto l46;
l43:if((LR!=32)) goto l46;
pile[v[22]]=DW; pile[WZ3]=jvj+26; 
(*f[334])( );if(v[102]) goto l46;     /*LNB0(DW,Z,DKK,jvj+26)*/
Z=pile[WZ1]; DKK=pile[WZ2]; 
goto l46;
l45:if((x[jvj+38]=w[x[jvj+2]][2])==incon) goto l64;
x[jvj+33]=x[jvj+38] ;z[jvj+33]=z[jvj+38];
l63:if((x[jvj+33]==x[jvj+26])) goto l64;
pile[v[22]]=109; pile[WZ1]=L; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(109,L,jvj+32)*/
pile[v[22]]=10828; pile[WZ1]=jvj+32; pile[WZ2]=jvj+26; pile[WZ3]=(-5784); pile[WZ4]=jvj+33; 
(*f[733])( );     /*FAUTE2(10828,jvj+32,jvj+26,(-5784),jvj+33)*/
goto l64;
l47:if(x[jvj+26]!=incon) goto l48;
goto l64;
l48:if(Z!=incon) goto l49;
l44:x[jvj+33]=incon;
if((x[jvj+37]=w[x[jvj+2]][1])==incon) goto l45;
if((x[jvj+37]==23)) goto l45;
x[jvj+33]=x[jvj+37] ;z[jvj+33]=z[jvj+37];
goto l63;
l49:if(x[jvj+16]!=incon) goto l50;
goto l44;
l50:if((x[jvj+26]==41)) goto l51;
if((x[jvj+26]==89)) goto l53;
if((x[jvj+26]==96)) goto l55;
if((x[jvj+26]==1317)) goto l57;
if((x[jvj+26]!=20)) goto l62;
if((V56=w[x[jvj+2]][1])==incon) goto l62;
if((V56!=23)) goto l59;
x[jvj+29]=Z ;z[jvj+29]=(Z<=sepcte) ? Z : 0;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+2; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+16,jvj+2,jvj+29)*/
l59:if(DW!=incon) goto l60;
l62:if((KR!=67)) goto l44;
if((V70=w[x[jvj+2]][1])==incon) goto l44;
if((V70!=23)) goto l44;
if((x[jvj+30]=w[x[jvj+26]][3])==incon) goto l44;
pile[v[22]]=L; pile[WZ1]=jvj+30; pile[WZ3]=jvj+31; 
(*f[45])( );if(v[102]) goto l44;     /*FNDZ0(L,jvj+30,V93,jvj+31)*/
V93=pile[WZ2]; 
V73=V93;
if((V73==Z)) goto l44;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+16; pile[WZ2]=V73; 
(*f[134])( );     /*OTA0(jvj+2,jvj+16,V73)*/
goto l44;
l51:if((V50=w[x[jvj+2]][1])==incon) goto l62;
if((V50!=23)) goto l52;
pile[v[22]]=Z; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[235])( );     /*PLUSC2(Z,jvj+2,jvj+16)*/
goto l62;
l52:pile[v[22]]=jvj+16; pile[WZ1]=jvj+2; pile[WZ2]=Z; 
(*f[43])( );     /*CHGC2(jvj+16,jvj+2,Z)*/
goto l62;
l53:if((V52=w[x[jvj+2]][1])==incon) goto l62;
if((V52!=23)) goto l54;
V61=Z;
pile[v[22]]=jvj+2; pile[WZ1]=V61; pile[WZ2]=jvj+16; 
(*f[462])( );     /*PLUSC3(jvj+2,V61,jvj+16)*/
goto l62;
l54:V53=Z;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+2; pile[WZ2]=V53; 
(*f[69])( );     /*CHGC3(jvj+16,jvj+2,V53)*/
goto l62;
l55:if((V54=w[x[jvj+2]][1])==incon) goto l62;
if((V54!=23)) goto l56;
V63=Z;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+2; pile[WZ2]=V63; 
(*f[735])( );     /*PLUSC4(jvj+16,jvj+2,V63)*/
goto l62;
l56:V55=Z;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+2; pile[WZ2]=V55; 
(*f[177])( );     /*CHGC4(jvj+16,jvj+2,V55)*/
goto l62;
l57:if((V78=w[x[jvj+2]][1])==incon) goto l62;
if((V78!=23)) goto l58;
V81=Z;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+2; pile[WZ2]=V81; 
(*f[737])( );     /*PLUSC5(jvj+16,jvj+2,V81)*/
goto l62;
l58:V79=Z;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+2; pile[WZ2]=V79; 
(*f[736])( );     /*CHGC5(jvj+16,jvj+2,V79)*/
goto l62;
l60:if((V56==23)) goto l62;
x[jvj+28]=Z ;z[jvj+28]=(Z<=sepcte) ? Z : 0;
V48=bh[v[1]][DW];
if((V48!=43)) goto l61;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+2; pile[WZ3]=jvj+27; 
(*f[45])( );if(v[102]) goto l61;     /*FNDZ0(jvj+16,jvj+2,V90,jvj+27)*/
V90=pile[WZ2]; 
V49=V90;
V92=V49;
pile[v[22]]=jvj+28; pile[WZ2]=V92; 
(*f[43])( );     /*CHGC2(jvj+28,jvj+2,V92)*/
l61:pile[v[22]]=jvj+16; pile[WZ1]=jvj+2; pile[WZ2]=jvj+28; 
(*f[35])( );     /*CHGC1(jvj+16,jvj+2,jvj+28)*/
goto l62;
l65:if(Z!=incon) goto l66;
goto l69;
l66:if(x[jvj+26]!=incon) goto l67;
goto l69;
l67:if(x[jvj+2]!=incon) goto l68;
goto l69;
l68:pile[v[22]]=109; pile[WZ1]=M; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(109,M,jvj+34)*/
pile[v[22]]=jvj+34; 
(*f[365])( );     /*STK0(jvj+34)*/
goto l69;
l71:pile[v[22]]=jvj+16; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(jvj+16,jvj+2,jvj+9)*/
goto l39;
l73:x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=331; pile[WZ1]=jvj+36; 
(*f[219])( );if(v[102]) goto l74;     /*FNDC2(331,jvj+36,V100)*/
V100=pile[WZ2]; 
if((V100!=V2)) goto l74;
x[jvj+2]=x[jvj+36] ;z[jvj+2]=z[jvj+36];
DV=2;
goto l5;
l74:x[jvj+35]=t[x[jvj+35]];
goto l72;
}
