#include "dx.h"
void ARCHIVESSAI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V31=0,V32=0,V34=0,V36=0,V44=0,LL=0,L=0,V26=0,V1=0,V2=0,S=0,V3=0,V16=0,V15=0,V20=0,MB=0,MA=0,V52=0,V55=0,V53=0,V54=0,V57=0,V51=0,V58=0,V61=0,V60=0,V70=0,V68=0,V48=0,V49=0,V59=0,V73=0,V74=0,D=0;
int B;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=40;
x[jvj+1]=10898;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1283&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=MB=S=x[jvj+17]=incon;
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(163,jvj+3,V34)*/
V34=pile[WZ2]; 
if((V34==(-7141))) goto l4;
l1:pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(498,jvj+3,jvj+4)*/
pile[v[22]]=983; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(983,jvj+4,jvj+5)*/
pile[v[22]]=878; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(878,jvj+5,jvj+6)*/
l2:if((x[jvj+6]<=0)) goto l4;
x[jvj+2]=s[x[jvj+6]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+6];
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,jvj+2,V31)*/
V31=pile[WZ2]; 
pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,jvj+3,V32)*/
V32=pile[WZ2]; 
if((V31==V32)) goto l3;
x[jvj+6]=t[x[jvj+6]];
goto l2;
l3:x[jvj+8]=x[jvj+2] ;z[jvj+8]=z[jvj+2];
l7:pile[v[22]]=493; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(493,jvj+8,LL)*/
LL=pile[WZ2]; 
L=LL;
l9:V26=vv[2];
if((V26<=0)) goto l18;
pile[v[22]]=860; pile[WZ1]=B; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(860,B,jvj+11)*/
if(x[jvj+11]==104||x[jvj+11]==368) goto l18;
pile[v[22]]=944; pile[WZ1]=jvj+8; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(944,jvj+8,jvj+12)*/
pile[v[22]]=1078; pile[WZ1]=B; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1078,B,jvj+13)*/
l10:if((x[jvj+12]<=0)) goto l18;
x[jvj+14]=s[x[jvj+12]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+12];
pile[v[22]]=1078; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1078,jvj+14,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[1143])( );     /*MEMEPB0(jvj+15,jvj+13,jvj+16)*/
if((x[jvj+16]==68)) goto l12;
l11:x[jvj+12]=t[x[jvj+12]];
goto l10;
l4:x[jvj+7]=vo[16];z[jvj+7]=vz[16];
pile[v[22]]=163; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+7,V36)*/
V36=pile[WZ2]; 
if((V36==(-7141))) goto l8;
l5:pile[v[22]]=498; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(498,jvj+7,jvj+9)*/
pile[v[22]]=983; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(983,jvj+9,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=498; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+10,498,jvj+8)*/
pile[v[22]]=163; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(163,jvj+7,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=163; pile[WZ2]=V44; 
(*f[177])( );     /*CHGC4(jvj+8,163,V44)*/
l6:pile[v[22]]=jvj+10; pile[WZ1]=878; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+10,878,jvj+8)*/
goto l7;
l8:L=(-1);
if(x[jvj+8]!=incon) goto l9;
l18:pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(935,B,jvj+27)*/
if((x[jvj+27]!=547)) goto l19;
x[jvj+28]=vo[12];z[jvj+28]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(860,jvj+28,jvj+29)*/
if(x[jvj+29]!=530&&x[jvj+29]!=1085) goto l19;
pile[v[22]]=927; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(927,B,V20)*/
V20=pile[WZ2]; 
if((V20>=600000)) goto l19;
MB=68;
l19:x[jvj+18]=vo[12];z[jvj+18]=vz[12];
pile[v[22]]=1241; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1241,jvj+18,jvj+19)*/
if((x[jvj+19]==67)) goto l21;
l15:pile[v[22]]=683; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(683,B,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(645,597,jvj+26)*/
l16:if((x[jvj+26]<=0)) goto l21;
x[jvj+23]=s[x[jvj+26]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+26];
pile[v[22]]=683; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(683,jvj+23,V15)*/
V15=pile[WZ2]; 
if((V15!=V16)) goto l17;
pile[v[22]]=1241; pile[WZ1]=jvj+18; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1241,jvj+18,jvj+25)*/
if((x[jvj+25]==68)) goto l20;
l14:pile[v[22]]=860; pile[WZ1]=jvj+18; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(860,jvj+18,jvj+22)*/
if((x[jvj+22]!=530)) goto l21;
pile[v[22]]=1092; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(1092,jvj+23,jvj+24)*/
if(x[jvj+24]!=255&&x[jvj+24]!=228) goto l21;
pile[v[22]]=961; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(961,jvj+18,V3)*/
V3=pile[WZ2]; 
l21:MA=67;
l22:if(MB==incon) goto l23;
l29:if(S==incon) goto l30;
l32:if((MB!=67)) goto l33;
pile[v[22]]=1296; pile[WZ1]=B; 
(*f[71])( );     /*ENLV0(1296,B)*/
l33:if(x[jvj+8]!=incon) goto l28;
l35:pile[v[22]]=493; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(493,B,V68)*/
V68=pile[WZ2]; 
if((L>=V68)) goto l36;
pile[v[22]]=935; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(935,B,jvj+34)*/
if(x[jvj+34]==547||x[jvj+34]==325) goto l36;
pile[v[22]]=B; 
(*f[1543])( );     /*ANOSOL0(B)*/
l36:if((L<0)) goto l37;
if((L==V68)) goto l37;
pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(935,B,jvj+35)*/
if(x[jvj+35]!=547&&x[jvj+35]!=325) goto l37;
pile[v[22]]=B; 
(*f[1543])( );     /*ANOSOL0(B)*/
l37:if(x[jvj+8]!=incon) goto l38;
l39:if(x[jvj+17]!=incon) goto l40;
if(x[jvj+8]!=incon) goto l43;
l46:if((MA!=68)) goto l47;
(*f[1526])( );     /*STUTIREG0()*/
l47:if(x[jvj+8]!=incon) goto l48;
l50:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l12:x[jvj+17]=x[jvj+14] ;z[jvj+17]=z[jvj+14];
pile[v[22]]=1005; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(1005,B,V1)*/
V1=pile[WZ2]; 
pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(1005,jvj+17,V2)*/
V2=pile[WZ2]; 
if((V1>V2)) goto l18;
S=67;
goto l21;
l13:x[jvj+20]=vo[16];z[jvj+20]=vz[16];
pile[v[22]]=970; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(970,jvj+20,jvj+21)*/
if((x[jvj+21]==104)) goto l21;
l20:MA=68;
goto l22;
l17:x[jvj+26]=t[x[jvj+26]];
goto l16;
l23:MB=67;
goto l29;
l25:V53++;
l24:if((V53>V54)) goto l42;
V57=r[V53];
if((V57!=1)) goto l25;
x[jvj+30]=V53 ;z[jvj+30]=(V53<=sepcte) ? V53 : 0;
pile[v[22]]=1001; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(1001,jvj+30,jvj+31)*/
x[jvj+40]=x[jvj+31] ;z[jvj+40]=z[jvj+31];
l26:if((x[jvj+40]<=0)) goto l25;
x[jvj+32]=s[x[jvj+40]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+40];
pile[v[22]]=117; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(117,jvj+32,V51)*/
V51=pile[WZ2]; 
if((V51!=V52)) goto l27;
V58=x[jvj+32];
pile[v[22]]=1001; pile[WZ1]=jvj+30; pile[WZ2]=V58; 
(*f[134])( );     /*OTA0(1001,jvj+30,V58)*/
l27:x[jvj+40]=t[x[jvj+40]];
goto l26;
l28:if((MA==68)) goto l34;
if((MB==68)) goto l34;
goto l35;
l30:if(x[jvj+8]!=incon) goto l31;
goto l32;
l31:pile[v[22]]=B; pile[WZ1]=jvj+33; 
(*f[1541])( );if(v[102]) goto l32;     /*CALRES0(B,jvj+33)*/
pile[WZ1]=jvj+8; pile[WZ2]=jvj+33; 
(*f[1542])( );     /*MEMORESSAI0(B,jvj+8,jvj+33)*/
goto l32;
l34:pile[v[22]]=90; 
(*f[1487])( );     /*SORES1(90)*/
V61=vv[20];
if((V61<=0)) goto l35;
pile[v[22]]=993; pile[WZ1]=994; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(993,994,V60)*/
V60=pile[WZ2]; 
if((V60!=3)) goto l35;
pile[v[22]]=jvj+8; 
(*f[1540])( );     /*CMLCOND0(jvj+8)*/
goto l35;
l38:if((L>=0)) goto l39;
pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(935,B,jvj+36)*/
if(x[jvj+36]!=547&&x[jvj+36]!=325) goto l39;
pile[v[22]]=860; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(860,B,jvj+37)*/
if(x[jvj+37]!=530&&x[jvj+37]!=954&&x[jvj+37]!=1085&&x[jvj+37]!=301&&x[jvj+37]!=1102) goto l39;
pile[v[22]]=jvj+8; pile[WZ1]=493; pile[WZ2]=V68; 
(*f[43])( );     /*CHGC2(jvj+8,493,V68)*/
goto l39;
l40:if(x[jvj+8]!=incon) goto l41;
goto l46;
l41:pile[v[22]]=1005; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(1005,B,V48)*/
V48=pile[WZ2]; 
pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(1005,jvj+17,V49)*/
V49=pile[WZ2]; 
if((V48<=V49)) goto l43;
V59=x[jvj+17];
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(117,jvj+17,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(1484,854,V55)*/
V55=pile[WZ2]; 
V53=sepfacts+1;
V54=sepfacts+V55;
goto l24;
l42:pile[v[22]]=944; pile[WZ1]=jvj+8; pile[WZ2]=V59; 
(*f[134])( );     /*OTA0(944,jvj+8,V59)*/
l43:pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(935,B,jvj+38)*/
if((x[jvj+38]!=547)) goto l46;
pile[v[22]]=860; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(860,B,jvj+39)*/
if(x[jvj+39]!=530&&x[jvj+39]!=301&&x[jvj+39]!=1085&&x[jvj+39]!=1102) goto l46;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(876,B,V73)*/
V73=pile[WZ2]; 
pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(876,jvj+8,V70)*/
V70=pile[WZ2]; 
if((V70<=V73)) goto l46;
l44:pile[v[22]]=jvj+8; pile[WZ1]=876; pile[WZ2]=V73; 
(*f[43])( );     /*CHGC2(jvj+8,876,V73)*/
goto l46;
l48:if((MB!=68)) goto l50;
(*f[1288])( );if(v[102]) goto l50;     /*CALDIFF0(D)*/
D=pile[v[22]]; 
pile[v[22]]=967; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(967,jvj+8,V74)*/
V74=pile[WZ2]; 
if((V74<=D)) goto l49;
l45:pile[v[22]]=jvj+8; pile[WZ1]=967; pile[WZ2]=D; 
(*f[43])( );     /*CHGC2(jvj+8,967,D)*/
l49:pile[v[22]]=B; pile[WZ1]=967; pile[WZ2]=D; 
(*f[43])( );     /*CHGC2(B,967,D)*/
goto l50;
}
