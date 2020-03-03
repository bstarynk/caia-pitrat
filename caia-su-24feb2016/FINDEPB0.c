#include "dx.h"
void FINDEPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V26=0,V22=0,D=0,G=0,V29=0,V28=0,V36=0,V39=0,V44=0,V45=0,V31=0,V30=0,V52=0,V51=0,V56=0,V58=0,V66=0;
int C,B;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=44;
x[jvj+1]=11063;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==959&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
C=pile[v[22]]; B=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[B]=x[C]=x[jvj+7]=x[jvj+13]=incon;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=jvj+2; pile[WZ1]=1201; pile[WZ2]=80; 
(*f[35])( );     /*CHGC1(jvj+2,1201,80)*/
x[jvj+3]=vo[12];z[jvj+3]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(860,jvj+3,jvj+4)*/
if((x[jvj+4]==228)) goto l8;
pile[v[22]]=B; 
(*f[925])( );if(v[102]) goto l1;     /*CONSTRUIRESSAI0(B)*/
l1:if((x[jvj+4]!=104)) goto l2;
(*f[1285])( );     /*FINTEST0()*/
l2:if(x[B]!=incon) goto l3;
l8:x[C]=80 ;z[C]=80;
if(x[B]!=incon) goto l9;
l32:x[jvj+35]=vo[12];z[jvj+35]=vz[12];
pile[v[22]]=1121; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(1121,jvj+35,V56)*/
V56=pile[WZ2]; 
if((V56>=0)) goto l36;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(117,jvj+35,V58)*/
V58=pile[WZ2]; 
x[jvj+36]=924 ;z[jvj+36]=924;
l33:pile[v[22]]=120; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(120,jvj+36,jvj+37)*/
pile[v[22]]=698; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(698,jvj+37,jvj+38)*/
pile[v[22]]=1104; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(1104,jvj+38,jvj+39)*/
for(a=x[jvj+39];a>0;a=t[a]) if(s[a]==V58) goto l35;
l34:x[jvj+36]=x[jvj+37] ;z[jvj+36]=z[jvj+37];
goto l33;
l3:pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+3,V11)*/
V11=pile[WZ2]; 
if((V11!=(-7141))) goto l4;
pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(935,B,jvj+5)*/
if((x[jvj+5]!=547)) goto l4;
x[C]=1097 ;z[C]=1097;
l4:pile[v[22]]=735; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(735,jvj+3,jvj+6)*/
pile[WZ1]=jvj+6; pile[WZ2]=B; pile[WZ3]=68; pile[WZ4]=jvj+7; 
(*f[1282])( );     /*ANAPRED1(735,jvj+6,B,68,jvj+7)*/
l5:pile[v[22]]=1542; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1542,jvj+3,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(109,jvj+3,jvj+31)*/
pile[v[22]]=983; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(983,jvj+31,jvj+32)*/
pile[v[22]]=878; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(878,jvj+32,jvj+33)*/
l30:if((x[jvj+33]<=0)) goto l7;
x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=163; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(163,jvj+34,V52)*/
V52=pile[WZ2]; 
pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(163,jvj+3,V51)*/
V51=pile[WZ2]; 
if((V52==V51)) goto l31;
x[jvj+33]=t[x[jvj+33]];
goto l30;
l9:if((v[180]<=0)) goto l10;
pile[v[22]]=B; pile[WZ1]=jvj+13; 
(*f[1284])( );if(v[102]) goto l10;     /*ECRIREJOURNAL0(B,jvj+13)*/
l10:x[jvj+14]=vo[12];z[jvj+14]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(860,jvj+14,jvj+15)*/
if(x[jvj+15]==228||x[jvj+15]==844||x[jvj+15]==104||x[jvj+15]==1178) goto l12;
pile[v[22]]=1238; pile[WZ1]=994; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1238,994,jvj+12)*/
if((x[jvj+12]==68)) goto l12;
l11:pile[v[22]]=B; 
(*f[1283])( );     /*ARCHIVESSAI0(B)*/
l12:pile[v[22]]=1238; pile[WZ1]=994; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1238,994,jvj+16)*/
if((x[jvj+16]!=68)) goto l13;
pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(935,B,jvj+17)*/
if((x[jvj+17]!=547)) goto l13;
pile[v[22]]=927; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(927,B,V22)*/
V22=pile[WZ2]; 
if((V22>600000)) goto l13;
(*f[1288])( );if(v[102]) goto l13;     /*CALDIFF0(D)*/
D=pile[v[22]]; 
pile[v[22]]=B; pile[WZ1]=967; pile[WZ2]=D; 
(*f[43])( );     /*CHGC2(B,967,D)*/
l13:if(x[jvj+7]!=incon) goto l14;
l6:if((v[58]>0)) goto l29;
x[jvj+10]=vo[12];z[jvj+10]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(860,jvj+10,jvj+11)*/
if((x[jvj+11]==368)) goto l29;
goto l32;
l14:if(x[jvj+13]!=incon) goto l15;
goto l6;
l15:if((x[jvj+7]!=135)) goto l6;
x[jvj+18]=vo[12];z[jvj+18]=vz[12];
x[jvj+19]=d[45];z[jvj+19]=0;
l16:if((x[jvj+19]<=0)) goto l6;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(jvj+20,jvj+18,jvj+21)*/
x[jvj+44]=x[jvj+21] ;z[jvj+44]=z[jvj+21];
l17:if((x[jvj+44]>0)) goto l18;
x[jvj+19]=t[x[jvj+19]];
goto l16;
l18:x[jvj+22]=s[x[jvj+44]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+44];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+22; pile[WZ2]=B; pile[WZ3]=68; pile[WZ4]=jvj+13; 
(*f[1281])( );     /*ANAPRED0(jvj+20,jvj+22,B,68,jvj+13)*/
x[jvj+44]=t[x[jvj+44]];
goto l17;
l19:
(*f[170])( );     /*SURVEILLE0()*/
l22:V36=vv[33];
if((V36!=0)) goto l26;
x[jvj+29]=vo[12];z[jvj+29]=vz[12];
pile[v[22]]=117; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(117,jvj+29,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(109,jvj+29,jvj+30)*/
V44=x[jvj+30];
pile[v[22]]=20; pile[WZ1]=V44; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V44,0,V29)*/
V29=pile[WZ3]; 
V28=incon;
pile[v[22]]=163; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(163,jvj+29,G)*/
G=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=G; 
(*f[37])( );     /*SRA0(V29,G,V28)*/
V28=pile[WZ2]; 
l23:pile[v[22]]=41; pile[WZ1]=V39; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(41,V39,V28,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; 
(*f[40])( );     /*SLG0(V45)*/
l26:pile[v[22]]=V31; 
(*f[656])( );     /*SPLN2(V31,V30)*/
V30=pile[WZ1]; 
pile[v[22]]=V30; 
(*f[288])( );     /*SPLN0(V30)*/
l28:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l20:pile[v[22]]=B; 
(*f[1289])( );     /*IMPRIMER0(B)*/
if((v[93]<=0)) goto l22;
x[jvj+27]=vo[12];z[jvj+27]=vz[12];
pile[v[22]]=1383; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(1383,jvj+27,jvj+28)*/
if((x[jvj+28]==1385)) goto l19;
if((x[jvj+28]!=1384)) goto l22;
(*f[906])( );     /*ANAVEILLE0()*/
goto l22;
l21:V28=V29;
goto l23;
l25:V31=0;
if((v[52]>0)) goto l20;
x[jvj+25]=vo[12];z[jvj+25]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(860,jvj+25,jvj+26)*/
if((x[jvj+26]!=228)) goto l20;
goto l22;
l29:pile[v[22]]=559; pile[WZ1]=158; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(559,158,jvj+24)*/
x[jvj+23]=vo[14];z[jvj+23]=vz[14];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+23; 
(*f[1287])( );     /*SQUELETTE0(jvj+24,jvj+23)*/
pile[v[22]]=B; pile[WZ1]=661; pile[WZ2]=jvj+24; 
(*f[35])( );     /*CHGC1(B,661,jvj+24)*/
goto l32;
l31:x[jvj+9]=x[jvj+34] ;z[jvj+9]=z[jvj+34];
pile[v[22]]=B; pile[WZ1]=jvj+8; 
(*f[378])( );     /*CPI0(B,jvj+8)*/
pile[v[22]]=jvj+9; pile[WZ1]=1543; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+9,1543,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=642; pile[WZ2]=V26; 
(*f[43])( );     /*CHGC2(jvj+8,642,V26)*/
l7:if(x[C]==incon) goto l8;
if((x[C]==80)) goto l9;
goto l12;
l35:pile[v[22]]=698; pile[WZ1]=jvj+37; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(698,jvj+37,jvj+40)*/
pile[v[22]]=1104; pile[WZ1]=jvj+40; pile[WZ2]=V58; 
(*f[134])( );     /*OTA0(1104,jvj+40,V58)*/
l36:if((V56<=0)) goto l24;
pile[v[22]]=117; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(117,jvj+35,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=1109; pile[WZ1]=924; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(1109,924,jvj+41)*/
l37:if((x[jvj+41]<=0)) goto l24;
x[jvj+42]=s[x[jvj+41]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+41];
pile[v[22]]=1104; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(1104,jvj+42,jvj+43)*/
for(a=x[jvj+43];a>0;a=t[a]) if(s[a]==V66) goto l38;
x[jvj+41]=t[x[jvj+41]];
goto l37;
l38:pile[v[22]]=1104; pile[WZ1]=jvj+42; pile[WZ2]=V66; 
(*f[134])( );     /*OTA0(1104,jvj+42,V66)*/
l24:if(x[B]!=incon) goto l25;
x[C]=x[B]=incon;
l27:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
}
