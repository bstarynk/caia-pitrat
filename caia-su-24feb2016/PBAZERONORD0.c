#include "dx.h"
void PBAZERONORD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V18=0,V22=0,V24=0,V29=0,V30=0,V34=0,V36=0,V31=0,V26=0,V38=0,V19=0,V7=0,V5=0,V6=0,V9=0,V3=0,V10=0,V59=0,V58=0,V60=0,V52=0,V73=0,V72=0,V74=0,V66=0;
int NR,UR;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=45;
x[jvj+1]=10118;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==156&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NR=pile[v[22]]; UR=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((UR!=80)) goto l29;
x[jvj+6]=d[21];z[jvj+6]=0;
l5:if((x[jvj+6]>0)) goto l6;
pile[v[22]]=1109; pile[WZ1]=924; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1109,924,jvj+7)*/
l8:if((x[jvj+7]>0)) goto l9;
pile[v[22]]=1051; pile[WZ1]=1243; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1051,1243,jvj+8)*/
l12:if((x[jvj+8]>0)) goto l13;
pile[v[22]]=1051; pile[WZ1]=994; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1051,994,jvj+10)*/
l16:if((x[jvj+10]>0)) goto l17;
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(457,324,jvj+12)*/
l20:if((x[jvj+12]<=0)) goto l29;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=983; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(983,jvj+13,jvj+14)*/
x[jvj+15]=x[jvj+14] ;z[jvj+15]=z[jvj+14];
pile[v[22]]=878; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(878,jvj+15,jvj+16)*/
x[jvj+17]=d[22];z[jvj+17]=0;
l22:if((x[jvj+17]<=0)) goto l21;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
x[jvj+42]=x[jvj+16] ;z[jvj+42]=z[jvj+16];
l23:if((x[jvj+42]>0)) goto l24;
x[jvj+17]=t[x[jvj+17]];
goto l22;
l6:x[jvj+45]=s[x[jvj+6]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+6];
x[jvj+31]=683 ;z[jvj+31]=683;
x[jvj+28]=x[jvj+45] ;z[jvj+28]=z[jvj+45];
l37:pile[v[22]]=120; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(120,jvj+28,jvj+29)*/
pile[v[22]]=698; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(698,jvj+29,jvj+30)*/
V58=incon;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(jvj+31,jvj+30,V59)*/
V59=pile[WZ2]; 
if((V59!=NR)) goto l38;
V58=68;
l38:pile[v[22]]=1078; pile[WZ1]=jvj+30; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(1078,jvj+30,jvj+32)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(jvj+31,jvj+32,V60)*/
V60=pile[WZ2]; 
if((V60!=NR)) goto l44;
V58=68;
l39:V52=V58;
if((V52==68)) goto l42;
if((V52!=67)) goto l45;
x[jvj+28]=x[jvj+29] ;z[jvj+28]=z[jvj+29];
goto l37;
l7:x[jvj+6]=t[x[jvj+6]];
goto l5;
l9:x[jvj+4]=s[x[jvj+7]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+7];
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(683,jvj+4,V29)*/
V29=pile[WZ2]; 
if((V29==NR)) goto l11;
l3:pile[v[22]]=359; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(359,jvj+4,V30)*/
V30=pile[WZ2]; 
if((V30==NR)) goto l11;
l10:x[jvj+7]=t[x[jvj+7]];
goto l8;
l11:V31=x[jvj+4];
pile[v[22]]=1109; pile[WZ1]=924; pile[WZ2]=V31; 
(*f[134])( );     /*OTA0(1109,924,V31)*/
goto l10;
l13:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=1078; pile[WZ1]=jvj+9; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1078,jvj+9,jvj+3)*/
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,jvj+3,V22)*/
V22=pile[WZ2]; 
if((V22==NR)) goto l15;
l2:pile[v[22]]=359; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(359,jvj+3,V24)*/
V24=pile[WZ2]; 
if((V24==NR)) goto l15;
l14:x[jvj+8]=t[x[jvj+8]];
goto l12;
l15:V26=x[jvj+9];
pile[v[22]]=1051; pile[WZ1]=1243; pile[WZ2]=V26; 
(*f[134])( );     /*OTA0(1051,1243,V26)*/
goto l14;
l17:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=1078; pile[WZ1]=jvj+11; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1078,jvj+11,jvj+5)*/
pile[v[22]]=683; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(683,jvj+5,V34)*/
V34=pile[WZ2]; 
if((V34==NR)) goto l19;
l4:pile[v[22]]=359; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(359,jvj+5,V36)*/
V36=pile[WZ2]; 
if((V36==NR)) goto l19;
l18:x[jvj+10]=t[x[jvj+10]];
goto l16;
l19:V38=x[jvj+11];
pile[v[22]]=1051; pile[WZ1]=994; pile[WZ2]=V38; 
(*f[134])( );     /*OTA0(1051,994,V38)*/
goto l18;
l21:x[jvj+12]=t[x[jvj+12]];
goto l20;
l24:x[jvj+19]=s[x[jvj+42]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+42];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(jvj+18,jvj+19,jvj+20)*/
x[jvj+43]=x[jvj+20] ;z[jvj+43]=z[jvj+20];
l25:if((x[jvj+43]>0)) goto l26;
x[jvj+42]=t[x[jvj+42]];
goto l23;
l26:x[jvj+2]=s[x[jvj+43]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+43];
pile[v[22]]=683; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(683,jvj+2,V17)*/
V17=pile[WZ2]; 
if((V17==NR)) goto l28;
l1:pile[v[22]]=359; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(359,jvj+2,V18)*/
V18=pile[WZ2]; 
if((V18==NR)) goto l28;
l27:x[jvj+43]=t[x[jvj+43]];
goto l25;
l28:V19=x[jvj+2];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=V19; 
(*f[134])( );     /*OTA0(jvj+18,jvj+19,V19)*/
goto l27;
l29:pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(1484,854,V7)*/
V7=pile[WZ2]; 
V5=sepfacts+1;
V6=sepfacts+V7;
l30:if((V5>V6)) goto l36;
V9=r[V5];
if((V9!=1)) goto l31;
x[jvj+21]=V5 ;z[jvj+21]=(V5<=sepcte) ? V5 : 0;
pile[v[22]]=983; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(983,jvj+21,jvj+22)*/
x[jvj+25]=x[jvj+22] ;z[jvj+25]=z[jvj+22];
x[jvj+23]=d[16];z[jvj+23]=0;
l32:if((x[jvj+23]<=0)) goto l31;
x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(jvj+24,jvj+25,jvj+26)*/
x[jvj+44]=x[jvj+26] ;z[jvj+44]=z[jvj+26];
l33:if((x[jvj+44]>0)) goto l34;
x[jvj+23]=t[x[jvj+23]];
goto l32;
l31:V5++;
goto l30;
l34:x[jvj+27]=s[x[jvj+44]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+44];
pile[v[22]]=683; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(683,jvj+27,V3)*/
V3=pile[WZ2]; 
if((V3!=NR)) goto l35;
V10=x[jvj+27];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=V10; 
(*f[134])( );     /*OTA0(jvj+24,jvj+25,V10)*/
l35:x[jvj+44]=t[x[jvj+44]];
goto l33;
l36:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l41:pile[v[22]]=120; pile[WZ1]=jvj+28; 
(*f[71])( );     /*ENLV0(120,jvj+28)*/
l40:pile[v[22]]=120; pile[WZ1]=jvj+29; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(120,jvj+29,jvj+33)*/
pile[v[22]]=jvj+28; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+28,120,jvj+33)*/
goto l37;
l42:pile[v[22]]=120; pile[WZ1]=jvj+29; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(120,jvj+29,jvj+34)*/
goto l40;
l43:V58=67;
goto l39;
l44:if(V58==incon) goto l43;
goto l39;
l45:x[jvj+38]=359 ;z[jvj+38]=359;
x[jvj+35]=x[jvj+45] ;z[jvj+35]=z[jvj+45];
l46:pile[v[22]]=120; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(120,jvj+35,jvj+36)*/
pile[v[22]]=698; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(698,jvj+36,jvj+37)*/
V72=incon;
pile[v[22]]=jvj+38; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(jvj+38,jvj+37,V73)*/
V73=pile[WZ2]; 
if((V73!=NR)) goto l47;
V72=68;
l47:pile[v[22]]=1078; pile[WZ1]=jvj+37; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1078,jvj+37,jvj+39)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(jvj+38,jvj+39,V74)*/
V74=pile[WZ2]; 
if((V74!=NR)) goto l53;
V72=68;
l48:V66=V72;
if((V66==68)) goto l51;
if((V66!=67)) goto l7;
x[jvj+35]=x[jvj+36] ;z[jvj+35]=z[jvj+36];
goto l46;
l50:pile[v[22]]=120; pile[WZ1]=jvj+35; 
(*f[71])( );     /*ENLV0(120,jvj+35)*/
l49:pile[v[22]]=120; pile[WZ1]=jvj+36; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(120,jvj+36,jvj+40)*/
pile[v[22]]=jvj+35; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+35,120,jvj+40)*/
goto l46;
l51:pile[v[22]]=120; pile[WZ1]=jvj+36; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(120,jvj+36,jvj+41)*/
goto l49;
l52:V72=67;
goto l48;
l53:if(V72==incon) goto l52;
goto l48;
}
