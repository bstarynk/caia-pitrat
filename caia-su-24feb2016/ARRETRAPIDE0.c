#include "dx.h"
void ARRETRAPIDE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V17=0,V14=0,D=0,V10=0,V41=0,V43=0,V35=0,V36=0,V37=0,V38=0,V40=0,V42=0,V9=0,V53=0,V54=0,V58=0,V56=0,V60=0;
int M;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=42;
x[jvj+1]=10925;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==961&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+22]=x[jvj+26]=x[jvj+27]=D=x[jvj+29]=incon;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=927; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(927,jvj+2,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=865; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(865,jvj+2,jvj+23)*/
pile[v[22]]=987; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(987,jvj+23,V17)*/
V17=pile[WZ2]; 
V14=V15-V17;
D=V14;
l7:pile[v[22]]=865; pile[WZ1]=jvj+2; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(865,jvj+2,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[1292])( );if(v[102]) goto l3;     /*STOCKECHOIX0(jvj+24,jvj+25)*/
pile[v[22]]=1081; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1081,jvj+25,jvj+7)*/
pile[v[22]]=1112; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1112,jvj+2,jvj+3)*/
l1:x[jvj+4]=x[jvj+3] ;z[jvj+4]=z[jvj+3];
pile[v[22]]=698; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(698,jvj+4,jvj+5)*/
pile[v[22]]=1081; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1081,jvj+5,jvj+6)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[1081])( );     /*IDENSEXP0(jvj+7,jvj+6,jvj+8)*/
if((x[jvj+8]==135)) goto l3;
l2:pile[v[22]]=120; pile[WZ1]=jvj+4; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(120,jvj+4,jvj+3)*/
goto l1;
l4:x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=865; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(865,jvj+9,jvj+10)*/
pile[v[22]]=498; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(498,jvj+10,jvj+11)*/
pile[v[22]]=226; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(226,jvj+11,jvj+12)*/
x[jvj+13]=d[76];z[jvj+13]=0;
l5:if((x[jvj+12]<=0)) goto l9;
x[jvj+14]=s[x[jvj+12]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+12];
pile[v[22]]=287; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(287,jvj+14,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[1290])( );if(v[102]) goto l6;     /*DEPEXP0(jvj+15,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
pile[v[22]]=80; pile[WZ1]=jvj+14; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(80,jvj+14,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[1291])( );if(v[102]) goto l6;     /*CONVEXP0(jvj+18,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
x[jvj+33]=x[jvj+17] ;z[jvj+33]=z[jvj+17];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+31,jvj+20,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+32,jvj+21)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[196])( );     /*PLUF0(jvj+13,jvj+21,jvj+22)*/
l6:x[jvj+12]=t[x[jvj+12]];
goto l5;
l8:x[jvj+26]=x[jvj+7] ;z[jvj+26]=z[jvj+7];
l3:x[jvj+22]=0 ;z[jvj+22]=0;
if(x[jvj+22]!=incon) goto l4;
l9:if(x[jvj+22]!=incon) goto l10;
l15:if(x[jvj+26]!=incon) goto l16;
l18:if(D!=incon) goto l19;
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l10:x[jvj+27]=x[jvj+22] ;z[jvj+27]=z[jvj+22];
goto l15;
l12:if((V9>=4)) goto l13;
V41=x[jvj+26];
V43=x[jvj+27];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=10925; 
(*f[98])( );     /*SRA3(135,V35,10925,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=V36; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V36,125,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=D; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(41,D,V37,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V41; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(23,V41,V38,V40)*/
V40=pile[WZ3]; 
pile[WZ1]=V43; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(23,V43,V40,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; 
(*f[40])( );     /*SLG0(V42)*/
l13:if((V9!=2)) goto l18;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l18;
l14:V9=g[447];
if((V9<=0)) goto l18;
V10=vg[447];
if((V10!=0)) goto l11;
if((V9<3)) goto l12;
l11:pile[v[22]]=447; pile[WZ1]=10925; pile[WZ2]=0; pile[WZ3]=(-656); pile[WZ4]=D; pile[WZ5]=(-697); pile[v[22]+6]=jvj+26; pile[v[22]+7]=(-1544); pile[v[22]+8]=jvj+27; pile[v[22]+9]=jvj+28; 
(*f[1295])( );     /*INTERP15(447,10925,0,(-656),D,(-697),jvj+26,(-1544),jvj+27,jvj+28)*/
if((x[jvj+28]==135)) goto l12;
goto l18;
l16:if(x[jvj+27]!=incon) goto l22;
goto l18;
l19:if(x[jvj+29]!=incon) goto l20;
goto l21;
l20:pile[v[22]]=D; pile[WZ1]=jvj+29; pile[WZ2]=1112; pile[WZ3]=52; 
(*f[1293])( );     /*TRIE1(D,jvj+29,1112,52)*/
goto l21;
l22:x[jvj+34]=vo[12];z[jvj+34]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(683,jvj+34,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(109,jvj+34,jvj+35)*/
pile[v[22]]=6; pile[WZ1]=1102; pile[WZ2]=jvj+36; 
(*f[46])( );     /*TRI0(6,1102,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+26; pile[WZ2]=1081; pile[WZ3]=jvj+37; 
(*f[301])( );     /*TRI11(jvj+36,jvj+26,1081,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=616; pile[WZ2]=1062; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+37,616,1062,jvj+38)*/
pile[v[22]]=1060; pile[WZ1]=(-20); pile[WZ2]=jvj+38; pile[WZ3]=1056; pile[WZ4]=jvj+39; 
(*f[298])( );     /*TRIENS1(1060,(-20),jvj+38,1056,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=V53; pile[WZ2]=683; pile[WZ3]=jvj+40; 
(*f[189])( );     /*TRI4(jvj+39,V53,683,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+27; pile[WZ2]=658; pile[WZ3]=jvj+41; 
(*f[301])( );     /*TRI11(jvj+40,jvj+27,658,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+35; pile[WZ2]=109; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+41,jvj+35,109,jvj+29)*/
pile[v[22]]=jvj+29; 
(*f[429])( );     /*NOUVSAUVE0(jvj+29)*/
pile[v[22]]=163; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(163,jvj+34,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=jvj+29; pile[WZ1]=163; pile[WZ2]=V54; 
(*f[177])( );     /*CHGC4(jvj+29,163,V54)*/
l23:V56=incon;
x[jvj+42]=vo[14];z[jvj+42]=vz[14];
pile[v[22]]=1122; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(1122,jvj+42,V58)*/
V58=pile[WZ2]; 
V56=V58;
l24:V60=V56+10;
pile[v[22]]=jvj+29; pile[WZ1]=936; pile[WZ2]=V60; 
(*f[43])( );     /*CHGC2(jvj+29,936,V60)*/
l17:if(D!=incon) goto l14;
goto l18;
l25:V56=3;
goto l24;
}
