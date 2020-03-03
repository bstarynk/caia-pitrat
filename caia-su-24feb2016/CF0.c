#include "dx.h"
void CF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V16=0,V18=0,V20=0,V52=0,V56=0,V46=0,V47=0,V48=0,V49=0,V50=0,V51=0,V10=0,V53=0,V55=0,V12=0,V57=0,V19=0,V28=0,V39=0,V65=0,V60=0,V61=0,V62=0,V63=0,V64=0,V33=0,V66=0,V38=0;
int A;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=10614;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==684&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l13:pile[v[22]]=159; pile[WZ1]=A; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(159,A,jvj+12)*/
x[jvj+31]=x[jvj+12] ;z[jvj+31]=z[jvj+12];
l14:if((x[jvj+31]>0)) goto l15;
pile[v[22]]=218; pile[WZ1]=A; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(218,A,jvj+18)*/
if((x[jvj+18]==68)) goto l22;
if((x[jvj+18]!=67)) goto l26;
pile[v[22]]=334; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(334,A,jvj+21)*/
x[jvj+22]=vo[20];z[jvj+22]=vz[20];
l23:if((x[jvj+21]<=0)) goto l26;
x[jvj+19]=s[x[jvj+21]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+21];
pile[v[22]]=117; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(117,jvj+19,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(109,jvj+19,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=V33; pile[WZ2]=jvj+24; 
(*f[133])( );if(v[102]) goto l24;     /*TLDEBL1(jvj+23,V33,jvj+24)*/
pile[v[22]]=302; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(302,jvj+24,jvj+25)*/
if((x[jvj+25]==0)) goto l24;
V38=g[30];
if((V38<=0)) goto l25;
V39=vg[30];
if((V39!=0)) goto l19;
if((V38<3)) goto l21;
l19:pile[v[22]]=30; pile[WZ1]=10614; pile[WZ2]=0; pile[WZ3]=(-659); pile[WZ4]=jvj+19; pile[WZ5]=jvj+20; 
(*f[232])( );     /*INTERP3(30,10614,0,(-659),jvj+19,jvj+20)*/
if((x[jvj+20]==135)) goto l20;
l25:fflush(stdout);
pile[v[22]]=10614; pile[WZ1]=218; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(10614,218,jvj+27)*/
pile[v[22]]=109; pile[WZ1]=jvj+23; pile[WZ2]=117; pile[WZ3]=V33; pile[WZ4]=jvj+27; pile[WZ5]=jvj+26; 
(*f[47])( );     /*QUADRI0(109,jvj+23,117,V33,jvj+27,jvj+26)*/
pile[v[22]]=jvj+22; pile[WZ1]=719; pile[WZ2]=jvj+26; 
(*f[35])( );     /*CHGC1(jvj+22,719,jvj+26)*/
pile[v[22]]=jvj+24; 
(*f[1070])( );     /*CE0(jvj+24)*/
l24:x[jvj+21]=t[x[jvj+21]];
goto l23;
l2:x[jvj+2]=s[x[jvj+28]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+28];
pile[v[22]]=258; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(258,jvj+2,jvj+3)*/
x[jvj+29]=x[jvj+3] ;z[jvj+29]=z[jvj+3];
l3:if((x[jvj+29]>0)) goto l4;
x[jvj+28]=t[x[jvj+28]];
l1:if((x[jvj+28]>0)) goto l2;
V28=x[jvj+9];
x[jvj+32]=x[jvj+13] ;z[jvj+32]=z[jvj+13];
l17:if((x[jvj+32]<=0)) goto l16;
x[jvj+10]=s[x[jvj+32]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+32];
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(117,jvj+10,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(109,jvj+10,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=V12; pile[WZ2]=jvj+17; 
(*f[133])( );if(v[102]) goto l18;     /*TLDEBL1(jvj+16,V12,jvj+17)*/
V19=g[29];
if((V19<=0)) goto l6;
V20=vg[29];
if((V20!=0)) goto l10;
if((V19<3)) goto l12;
l10:pile[v[22]]=29; pile[WZ1]=10614; pile[WZ2]=0; pile[WZ3]=(-620); pile[WZ4]=jvj+9; pile[WZ5]=(-625); pile[v[22]+6]=jvj+10; pile[v[22]+7]=jvj+11; 
(*f[187])( );     /*INTERP0(29,10614,0,(-620),jvj+9,(-625),jvj+10,jvj+11)*/
if((x[jvj+11]==135)) goto l11;
l6:pile[v[22]]=334; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(334,A,jvj+6)*/
x[jvj+30]=x[jvj+6] ;z[jvj+30]=z[jvj+6];
l7:if((x[jvj+30]>0)) goto l8;
fflush(stdout);
pile[v[22]]=159; pile[WZ1]=A; pile[WZ2]=V28; 
(*f[134])( );     /*OTA0(159,A,V28)*/
pile[v[22]]=A; pile[WZ1]=218; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(A,218,68)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+17; 
(*f[1069])( );     /*CG0(jvj+15,jvj+17)*/
l18:x[jvj+32]=t[x[jvj+32]];
goto l17;
l4:x[jvj+4]=s[x[jvj+29]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+29];
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+4,V6)*/
V6=pile[WZ2]; 
if((V6!=V10)) goto l5;
pile[v[22]]=109; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(109,jvj+4,jvj+5)*/
if((x[jvj+5]==x[jvj+14])) goto l16;
l5:x[jvj+29]=t[x[jvj+29]];
goto l3;
l8:x[jvj+7]=s[x[jvj+30]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+30];
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+7,V16)*/
V16=pile[WZ2]; 
if((V16!=V10)) goto l9;
pile[v[22]]=109; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(109,jvj+7,jvj+8)*/
if((x[jvj+8]!=x[jvj+14])) goto l9;
V18=x[jvj+7];
pile[v[22]]=334; pile[WZ1]=A; pile[WZ2]=V18; 
(*f[134])( );     /*OTA0(334,A,V18)*/
l9:x[jvj+30]=t[x[jvj+30]];
goto l7;
l11:if((V19<4)) goto l12;
goto l6;
l12:V52=x[jvj+14];
V56=x[jvj+16];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V46; pile[WZ2]=10614; 
(*f[98])( );     /*SRA3(135,V46,10614,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(41,1,V47,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V48,125,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=209; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(20,209,V49,V50)*/
V50=pile[WZ3]; 
pile[WZ1]=V52; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(20,V52,V50,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V10; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(41,V10,V51,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V56; pile[WZ2]=V53; 
(*f[39])( );     /*SDX0(20,V56,V53,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V12; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(41,V12,V55,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; 
(*f[40])( );     /*SLG0(V57)*/
if((V19!=2)) goto l6;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l6;
l15:x[jvj+9]=s[x[jvj+31]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+31];
pile[v[22]]=258; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(258,jvj+9,jvj+13)*/
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,jvj+9,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(109,jvj+9,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=V10; pile[WZ2]=jvj+15; 
(*f[133])( );if(v[102]) goto l16;     /*TLDEBL1(jvj+14,V10,jvj+15)*/
x[jvj+28]=x[jvj+12] ;z[jvj+28]=z[jvj+12];
goto l1;
l16:x[jvj+31]=t[x[jvj+31]];
goto l14;
l20:if((V38<4)) goto l21;
goto l25;
l21:V65=x[jvj+23];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V60; pile[WZ2]=10614; 
(*f[98])( );     /*SRA3(135,V60,10614,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(41,2,V61,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V62,125,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V65; pile[WZ2]=V63; 
(*f[39])( );     /*SDX0(20,V65,V63,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V33; pile[WZ2]=V64; 
(*f[39])( );     /*SDX0(41,V33,V64,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=V66; 
(*f[40])( );     /*SLG0(V66)*/
if((V38!=2)) goto l25;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l25;
l22:pile[v[22]]=A; pile[WZ1]=218; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(A,218,67)*/
goto l13;
l26:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
