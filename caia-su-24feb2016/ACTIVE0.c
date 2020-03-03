#include "dx.h"
void ACTIVE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V5=0,V32=0,V27=0,V28=0,V29=0,V30=0,V31=0,V33=0,V35=0,V4=0,V37=0,V36=0,V22=0,V39=0,V40=0,V41=0,V42=0,V43=0,V44=0,V21=0;
int BL,NR,C,E,DF;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=10646;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==322&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; NR=pile[v[22]+1]; C=pile[v[22]+2]; E=pile[v[22]+3]; DF=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+15]=x[jvj+14]=incon;
pile[v[22]]=724; pile[WZ1]=240; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(724,240,jvj+5)*/
l5:if((x[jvj+5]<=0)) goto l18;
x[jvj+2]=s[x[jvj+5]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+5];
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+2,V3)*/
V3=pile[WZ2]; 
if((V3!=NR)) goto l6;
pile[v[22]]=109; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,jvj+2,jvj+6)*/
if((x[jvj+6]!=x[BL])) goto l6;
x[jvj+14]=x[jvj+2] ;z[jvj+14]=z[jvj+2];
if((C!=65)) goto l4;
V37=x[jvj+14];
pile[v[22]]=20; pile[WZ1]=V37; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V37,0,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=V36; 
(*f[40])( );     /*SLG0(V36)*/
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l2:x[jvj+3]=s[x[jvj+28]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+28];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[709])( );if(v[102]) goto l3;     /*SUBGEN0(jvj+3,jvj+4)*/
pile[v[22]]=jvj+2; pile[WZ1]=107; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+2,107,jvj+4)*/
l3:x[jvj+28]=t[x[jvj+28]];
l1:if((x[jvj+28]>0)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=331; pile[WZ2]=C; 
(*f[69])( );     /*CHGC3(jvj+2,331,C)*/
if((C!=88)) goto l11;
pile[v[22]]=DF; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+15; 
(*f[78])( );if(v[102]) goto l11;     /*SMA0(DF,36,67,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=39; pile[WZ2]=jvj+15; 
(*f[35])( );     /*CHGC1(jvj+14,39,jvj+15)*/
l11:pile[v[22]]=365; pile[WZ1]=10547; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(365,10547,jvj+8)*/
if((x[jvj+8]<=0)) goto l17;
x[jvj+12]=s[x[jvj+8]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+8];
pile[v[22]]=107; pile[WZ1]=jvj+14; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+14,jvj+16)*/
if((x[jvj+16]==0)) goto l17;
x[jvj+11]=0 ;z[jvj+11]=0;
l12:if((x[jvj+16]>0)) goto l13;
pile[v[22]]=273; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(273,jvj+14,jvj+17)*/
pile[v[22]]=jvj+12; pile[WZ1]=322; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+12,322,1)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=82; pile[WZ4]=jvj+27; 
(*f[192])( );     /*QUADRI4(100,41,130,82,jvj+27)*/
pile[WZ3]=1; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+25)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=31; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,31,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+24,jvj+25,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+27,jvj+26,jvj+21)*/
pile[v[22]]=jvj+11; pile[WZ1]=107; pile[WZ2]=jvj+20; 
(*f[300])( );     /*TRI10(jvj+11,107,jvj+20)*/
pile[v[22]]=jvj+21; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+22; 
(*f[298])( );     /*TRIENS1(jvj+21,(-20),jvj+20,105,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+22,42,100,jvj+18)*/
pile[v[22]]=10547; pile[WZ1]=184; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(10547,184,jvj+18)*/
pile[v[22]]=jvj+12; pile[WZ1]=222; pile[WZ2]=jvj+17; 
(*f[34])( );     /*CHGC0(jvj+12,222,jvj+17)*/
pile[v[22]]=10547; 
(*f[710])( );     /*CL1(10547)*/
pile[v[22]]=135; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(135,jvj+12,jvj+13)*/
(*f[711])( );     /*NETBID1()*/
pile[v[22]]=jvj+14; pile[WZ1]=135; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(jvj+14,135,jvj+13)*/
l17:if(x[jvj+15]==incon) goto l18;
l20:if((C==65)) goto l21;
pile[v[22]]=jvj+14; pile[WZ1]=C; 
(*f[712])( );     /*INU1(jvj+14,C)*/
goto l21;
l4:pile[v[22]]=107; pile[WZ1]=jvj+2; 
(*f[71])( );     /*ENLV0(107,jvj+2)*/
pile[v[22]]=135; 
(*f[71])( );     /*ENLV0(135,jvj+2)*/
x[jvj+28]=x[E] ;z[jvj+28]=z[E];
goto l1;
l6:x[jvj+5]=t[x[jvj+5]];
goto l5;
l8:if((V4<4)) goto l9;
goto l21;
l9:V32=x[BL];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V27; pile[WZ2]=10646; 
(*f[98])( );     /*SRA3(135,V27,10646,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(41,1,V28,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V29,125,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V32; pile[WZ2]=V30; 
(*f[39])( );     /*SDX0(20,V32,V30,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NR; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(41,NR,V31,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; pile[WZ1]=(-3412); 
(*f[37])( );     /*SRA0(V33,(-3412),V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; 
(*f[40])( );     /*SLG0(V35)*/
if((V4!=2)) goto l21;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l21;
l10:V4=g[257];
if((V4<=0)) goto l21;
V5=vg[257];
if((V5!=0)) goto l7;
if((V4<3)) goto l9;
l7:pile[v[22]]=257; pile[WZ1]=10646; pile[WZ2]=0; pile[WZ3]=(-732); pile[WZ4]=NR; pile[WZ5]=(-604); pile[v[22]+6]=BL; pile[v[22]+7]=jvj+7; 
(*f[353])( );     /*INTERP7(257,10646,0,(-732),NR,(-604),BL,jvj+7)*/
if((x[jvj+7]==135)) goto l8;
goto l21;
l13:x[jvj+9]=s[x[jvj+16]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+16];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+10)*/
x[jvj+16]=t[x[jvj+16]];
goto l12;
l15:if((V21<4)) goto l16;
l19:if(x[jvj+14]==incon) goto l10;
goto l20;
l16:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V39; pile[WZ2]=10646; 
(*f[98])( );     /*SRA3(135,V39,10646,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(41,2,V40,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V41,125,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V42; pile[WZ2]=39; 
(*f[42])( );     /*SRA1(135,V42,39,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=V43; pile[WZ1]=(-3412); 
(*f[37])( );     /*SRA0(V43,(-3412),V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; 
(*f[40])( );     /*SLG0(V44)*/
if((V21!=2)) goto l19;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l19;
l18:if((C!=88)) goto l19;
V21=g[258];
if((V21<=0)) goto l19;
V22=vg[258];
if((V22!=0)) goto l14;
if((V21<3)) goto l16;
l14:pile[v[22]]=258; pile[WZ1]=10646; pile[WZ2]=0; pile[WZ3]=jvj+19; 
(*f[291])( );     /*INTERP4(258,10646,0,jvj+19)*/
if((x[jvj+19]==135)) goto l15;
goto l19;
}
