#include "dx.h"
void STOCKER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V17=0,V14=0,V13=0,ND=0,V8=0,V7=0,V3=0,V2=0,V48=0,V49=0,V44=0,V45=0,V33=0,V35=0,T=0,V56=0,V52=0,V54=0,V57=0,V41=0,V40=0,S=0,V70=0,V84=0,V88=0,V87=0,V92=0,V93=0,V74=0,V94=0,V77=0,V82=0,V80=0,V81=0,GG=0,V23=0,V21=0,V27=0,V97=0,V26=0,V114=0,V113=0,V116=0,V36=0,V115=0;
int HIST;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=74;
x[jvj+1]=10396;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==481&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
ND=x[jvj+12]=x[jvj+11]=x[jvj+54]=x[jvj+35]=S=x[jvj+59]=incon;
x[jvj+10]=vo[12];z[jvj+10]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(683,jvj+10,ND)*/
ND=pile[WZ2]; 
l5:pile[v[22]]=246; pile[WZ1]=HIST; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(246,HIST,V14)*/
V14=pile[WZ2]; 
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=1466; pile[WZ1]=jvj+9; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1466,jvj+9,jvj+7)*/
pile[v[22]]=246; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(246,jvj+7,V13)*/
V13=pile[WZ2]; 
if((V13!=V14)) goto l6;
pile[v[22]]=159; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(159,jvj+7,jvj+8)*/
l3:if((x[jvj+8]>0)) goto l4;
if(ND!=incon) goto l32;
l71:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+68]=t[x[jvj+68]];
l1:if((x[jvj+68]<=0)) goto l6;
x[jvj+5]=s[x[jvj+68]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+68];
pile[v[22]]=110; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(110,jvj+5,V17)*/
V17=pile[WZ2]; 
if((V17!=V18)) goto l2;
pile[v[22]]=101; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=x[jvj+3])) goto l2;
x[jvj+8]=t[x[jvj+8]];
goto l3;
l4:x[jvj+2]=s[x[jvj+8]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+8];
pile[v[22]]=110; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(110,jvj+2,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=101; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+2,jvj+3)*/
pile[v[22]]=159; pile[WZ1]=HIST; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,HIST,jvj+4)*/
x[jvj+68]=x[jvj+4] ;z[jvj+68]=z[jvj+4];
goto l1;
l6:x[jvj+11]=x[HIST] ;z[jvj+11]=z[HIST];
pile[v[22]]=218; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(218,jvj+11,jvj+12)*/
pile[v[22]]=246; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(246,jvj+11,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=345; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(345,jvj+12,jvj+13)*/
pile[v[22]]=365; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(365,jvj+13,jvj+14)*/
l7:if((x[jvj+14]<=0)) goto l26;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=246; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(246,jvj+15,V7)*/
V7=pile[WZ2]; 
if((V7!=V8)) goto l8;
x[jvj+16]=x[jvj+15] ;z[jvj+16]=z[jvj+15];
if(ND!=incon) goto l11;
l26:pile[v[22]]=715; pile[WZ1]=jvj+11; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(715,jvj+11,jvj+35)*/
l27:if((v[93]<=0)) goto l28;
x[jvj+36]=vo[14];z[jvj+36]=vz[14];
pile[v[22]]=1415; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(1415,jvj+36,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=1524; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+37,1524,1)*/
pile[v[22]]=jvj+11; pile[WZ1]=1525; pile[WZ2]=jvj+37; 
(*f[35])( );     /*CHGC1(jvj+11,1525,jvj+37)*/
l28:if(ND!=incon) goto l29;
l54:if(x[jvj+35]!=incon) goto l55;
l56:if(S==incon) goto l57;
goto l71;
l8:x[jvj+14]=t[x[jvj+14]];
goto l7;
l10:x[jvj+17]=t[x[jvj+17]];
l9:if((x[jvj+17]<=0)) goto l26;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=110; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(110,jvj+18,V2)*/
V2=pile[WZ2]; 
if((V2!=V3)) goto l10;
pile[v[22]]=jvj+18; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+18,1070,68)*/
goto l26;
l11:if((ND!=1)) goto l26;
pile[v[22]]=757; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(757,jvj+16,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=159; pile[WZ1]=jvj+11; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(159,jvj+11,jvj+17)*/
goto l9;
l13:x[jvj+19]=t[x[jvj+19]];
l12:if((x[jvj+19]<=0)) goto l32;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+20,jvj+21)*/
pile[v[22]]=1070; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1070,jvj+20,jvj+22)*/
pile[v[22]]=578; pile[WZ1]=jvj+21; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(578,jvj+21,jvj+38)*/
l30:if((x[jvj+38]<=0)) goto l32;
x[jvj+29]=s[x[jvj+38]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+38];
pile[v[22]]=246; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(246,jvj+29,V40)*/
V40=pile[WZ2]; 
if((V40!=V41)) goto l31;
pile[v[22]]=159; pile[WZ1]=jvj+11; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(159,jvj+11,jvj+32)*/
x[jvj+70]=x[jvj+32] ;z[jvj+70]=z[jvj+32];
l22:if((x[jvj+70]>0)) goto l23;
S=68;
pile[v[22]]=130; pile[WZ1]=20; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(130,20,V56)*/
V56=pile[WZ2]; 
if((V56>=0)) goto l32;
pile[v[22]]=715; pile[WZ1]=jvj+29; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(715,jvj+29,jvj+33)*/
pile[v[22]]=130; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(130,jvj+33,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=715; pile[WZ1]=jvj+11; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(715,jvj+11,jvj+34)*/
pile[v[22]]=130; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(130,jvj+34,V54)*/
V54=pile[WZ2]; 
if((V52>=V54)) goto l32;
V57=x[jvj+29];
pile[v[22]]=jvj+29; 
(*f[824])( );     /*ENLISENV0(jvj+29)*/
pile[v[22]]=578; pile[WZ1]=jvj+21; pile[WZ2]=V57; 
(*f[134])( );     /*OTA0(578,jvj+21,V57)*/
pile[v[22]]=jvj+11; 
(*f[481])( );     /*STOCKER0(jvj+11)*/
l32:pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(645,597,jvj+39)*/
l33:if((x[jvj+39]<=0)) goto l46;
x[jvj+40]=s[x[jvj+39]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+39];
pile[v[22]]=683; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(683,jvj+40,V70)*/
V70=pile[WZ2]; 
if((V70!=ND)) goto l34;
x[jvj+54]=x[jvj+40] ;z[jvj+54]=z[jvj+40];
l46:if(x[jvj+12]!=incon) goto l47;
goto l54;
l14:pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+23,jvj+24)*/
pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+24]==x[jvj+26])) goto l24;
l18:x[jvj+69]=t[x[jvj+69]];
l17:if((x[jvj+69]<=0)) goto l31;
x[jvj+25]=s[x[jvj+69]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+69];
pile[v[22]]=110; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(110,jvj+25,V45)*/
V45=pile[WZ2]; 
if((V44!=V45)) goto l18;
if((T==41)) goto l15;
if((T==20)) goto l14;
if((T!=23)) goto l18;
pile[v[22]]=128; pile[WZ1]=jvj+23; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(128,jvj+23,jvj+27)*/
pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(128,jvj+25,jvj+28)*/
for(i=x[jvj+27],V114=0;i>0;i=t[i],V114++)  ;
for(i=x[jvj+28],V113=0;i>0;i=t[i],V113++)  ;
if((V114!=V113)) goto l73;
V116=x[jvj+27];
l72:if((V116>0)) goto l75;
V36=135;
l16:if((V36==135)) goto l24;
goto l18;
l15:pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+23,V48)*/
V48=pile[WZ2]; 
pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+25,V49)*/
V49=pile[WZ2]; 
if((V48==V49)) goto l24;
goto l18;
l20:if(V33==incon) goto l21;
l25:T=V33;
pile[v[22]]=110; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(110,jvj+23,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=159; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(159,jvj+29,jvj+30)*/
x[jvj+69]=x[jvj+30] ;z[jvj+69]=z[jvj+30];
goto l17;
l21:V33=23;
goto l25;
l23:x[jvj+23]=s[x[jvj+70]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+70];
V33=incon;
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+23,jvj+31)*/
V33=20;
l19:pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+23,V35)*/
V35=pile[WZ2]; 
V33=41;
goto l25;
l24:x[jvj+70]=t[x[jvj+70]];
goto l22;
l29:if((ND!=1)) goto l32;
pile[v[22]]=246; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(246,jvj+11,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=159; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(159,jvj+11,jvj+19)*/
goto l12;
l31:x[jvj+38]=t[x[jvj+38]];
goto l30;
l34:x[jvj+39]=t[x[jvj+39]];
goto l33;
l36:x[jvj+71]=t[x[jvj+71]];
l35:if((x[jvj+71]<=0)) goto l52;
x[jvj+42]=s[x[jvj+71]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+71];
pile[v[22]]=642; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(642,jvj+42,V84)*/
V84=pile[WZ2]; 
if((V84!=GG)) goto l36;
x[jvj+59]=x[jvj+42] ;z[jvj+59]=z[jvj+42];
goto l56;
l38:x[jvj+72]=t[x[jvj+72]];
l37:if((x[jvj+72]<=0)) goto l41;
x[jvj+45]=s[x[jvj+72]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+72];
pile[v[22]]=110; pile[WZ1]=jvj+45; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(110,jvj+45,V87)*/
V87=pile[WZ2]; 
if((V87!=V88)) goto l38;
pile[v[22]]=101; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+45,jvj+49)*/
x[jvj+74]=x[jvj+48] ;z[jvj+74]=z[jvj+48];
l42:if((x[jvj+74]<=0)) goto l41;
x[jvj+50]=s[x[jvj+74]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+74];
pile[v[22]]=117; pile[WZ1]=jvj+50; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(117,jvj+50,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=102; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,jvj+50,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+49; pile[WZ2]=jvj+52; 
(*f[827])( );if(v[102]) goto l43;     /*VOIRCOND0(jvj+51,jvj+49,jvj+52)*/
if((x[jvj+52]==135)) goto l44;
l43:x[jvj+74]=t[x[jvj+74]];
goto l42;
l40:x[jvj+43]=s[x[jvj+73]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+73];
pile[v[22]]=1544; pile[WZ1]=jvj+43; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(1544,jvj+43,jvj+48)*/
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(110,jvj+43,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=159; pile[WZ1]=jvj+11; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(159,jvj+11,jvj+44)*/
x[jvj+72]=x[jvj+44] ;z[jvj+72]=z[jvj+44];
goto l37;
l41:x[jvj+73]=t[x[jvj+73]];
l39:if((x[jvj+73]>0)) goto l40;
pile[v[22]]=117; pile[WZ1]=jvj+53; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(117,jvj+53,V93)*/
V93=pile[WZ2]; 
V74=V93;
V81=V82-V74;
V77=incon;
pile[v[22]]=642; pile[WZ1]=301; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(642,301,V94)*/
V94=pile[WZ2]; 
if((V81>=V94)) goto l45;
V77=V94;
l53:GG=V77;
pile[v[22]]=159; pile[WZ1]=337; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(159,337,jvj+41)*/
x[jvj+71]=x[jvj+41] ;z[jvj+71]=z[jvj+41];
goto l35;
l44:pile[v[22]]=jvj+53; pile[WZ1]=117; pile[WZ2]=V92; 
(*f[186])( );     /*BTC0(jvj+53,117,V92)*/
goto l43;
l45:V77=V81;
goto l53;
l47:if(x[jvj+11]!=incon) goto l48;
goto l54;
l48:if(x[jvj+54]!=incon) goto l49;
goto l54;
l49:if(x[jvj+35]!=incon) goto l50;
goto l56;
l50:pile[v[22]]=970; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(970,jvj+54,jvj+55)*/
if((x[jvj+55]!=1489)) goto l55;
pile[v[22]]=642; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(642,jvj+35,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=1538; pile[WZ1]=jvj+12; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(1538,jvj+12,jvj+56)*/
l51:if((x[jvj+56]<=0)) goto l55;
x[jvj+46]=s[x[jvj+56]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+56];
pile[v[22]]=683; pile[WZ1]=jvj+46; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(683,jvj+46,V80)*/
V80=pile[WZ2]; 
if((V80!=ND)) goto l52;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+53; 
(*f[46])( );     /*TRI0(0,117,jvj+53)*/
pile[v[22]]=159; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(159,jvj+46,jvj+47)*/
x[jvj+73]=x[jvj+47] ;z[jvj+73]=z[jvj+47];
goto l39;
l52:x[jvj+56]=t[x[jvj+56]];
goto l51;
l55:x[jvj+59]=x[jvj+35] ;z[jvj+59]=z[jvj+35];
goto l56;
l57:if(x[jvj+59]!=incon) goto l58;
l67:if(x[jvj+12]!=incon) goto l68;
if(x[jvj+11]!=incon) goto l64;
goto l71;
l58:pile[v[22]]=130; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l67;     /*FNDC0(130,jvj+59,V21)*/
V21=pile[WZ2]; 
if((V21<v[95])) goto l71;
x[jvj+57]=vo[13];z[jvj+57]=vz[13];
pile[v[22]]=1062; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(1062,jvj+57,jvj+58)*/
pile[v[22]]=130; pile[WZ1]=jvj+58; 
(*f[26])( );if(v[102]) goto l67;     /*FNDC0(130,jvj+58,V23)*/
V23=pile[WZ2]; 
if((V21<V23)) goto l71;
goto l67;
l60:if((V26<4)) goto l61;
goto l71;
l61:pile[v[22]]=0; pile[WZ1]=jvj+11; 
(*f[828])( );if(v[102]) goto l62;     /*SORHIST0(0,jvj+11,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=V97; 
(*f[40])( );     /*SLG0(V97)*/
l62:if((V26!=2)) goto l71;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l71;
l66:x[jvj+61]=t[x[jvj+61]];
l65:if((x[jvj+61]<=0)) goto l63;
x[jvj+62]=s[x[jvj+61]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+61];
pile[v[22]]=1070; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(1070,jvj+62,jvj+63)*/
pile[v[22]]=101; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(101,jvj+62,jvj+67)*/
z[jvj+67]=(-1);
pile[v[22]]=jvj+67; pile[WZ1]=578; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+67,578,jvj+11)*/
l63:V26=g[334];
if((V26<=0)) goto l71;
V27=vg[334];
if((V27!=0)) goto l59;
if((V26<3)) goto l61;
l59:pile[v[22]]=334; pile[WZ1]=10396; pile[WZ2]=0; pile[WZ3]=(-10730); pile[WZ4]=jvj+11; pile[WZ5]=jvj+60; 
(*f[232])( );     /*INTERP3(334,10396,0,(-10730),jvj+11,jvj+60)*/
if((x[jvj+60]==135)) goto l60;
goto l71;
l68:if(x[jvj+11]!=incon) goto l69;
goto l71;
l69:pile[v[22]]=jvj+12; pile[WZ1]=jvj+11; pile[WZ2]=jvj+64; 
(*f[825])( );if(v[102]) goto l64;     /*STOFILTRE0(jvj+12,jvj+11,jvj+64)*/
if((x[jvj+64]==135)) goto l70;
l64:pile[v[22]]=159; pile[WZ1]=jvj+11; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(159,jvj+11,jvj+61)*/
goto l65;
l70:x[jvj+65]=vo[13];z[jvj+65]=vz[13];
x[jvj+66]=vo[14];z[jvj+66]=vz[14];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+65; 
(*f[826])( );     /*AJOULISENV0(jvj+11,jvj+65)*/
pile[v[22]]=jvj+66; pile[WZ1]=1466; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(jvj+66,1466,jvj+11)*/
goto l64;
l74:V116=t[V116];
goto l72;
l75:V115=s[V116];
for(a=x[jvj+28];a>0;a=t[a]) if(s[a]==V115) goto l74;
l73:V36=134;
goto l16;
}
