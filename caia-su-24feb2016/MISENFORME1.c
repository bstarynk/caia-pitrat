#include "dx.h"
void MISENFORME1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,NN=0,V44=0,V46=0,V48=0,V50=0,V42=0,V43=0,V45=0,V47=0,V49=0,V53=0,V55=0,V51=0,V52=0,V54=0,V26=0,V61=0,V56=0,V57=0,V58=0,V59=0,V60=0;
int A,BA,XP,XD;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=48;
x[jvj+1]=11781;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1500&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; BA=pile[v[22]+1]; XP=pile[v[22]+2]; XD=pile[v[22]+3]; R=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+3)*/
pile[v[22]]=A; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[760])( );     /*MEMEX0(A,jvj+3,jvj+4)*/
if((x[jvj+4]==134)) goto l1;
l20:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l1:x[jvj+5]=x[A] ;z[jvj+5]=z[A];
x[jvj+6]=incon;
if((x[XP]==228)) goto l2;
x[jvj+6]=x[XD] ;z[jvj+6]=z[XD];
l4:pile[v[22]]=jvj+5; pile[WZ1]=BA; pile[WZ2]=XP; pile[WZ3]=jvj+6; pile[WZ4]=jvj+7; 
(*f[1498])( );     /*CALCULABLE0(jvj+5,BA,XP,jvj+6,jvj+7)*/
V7=incon;
if((x[jvj+7]==68)) goto l3;
V7=924;
l5:NN=V7;
if((NN==1865)) goto l13;
if((NN==924)) goto l15;
if((NN==924)) goto l19;
goto l20;
l2:x[jvj+6]=228 ;z[jvj+6]=228;
goto l4;
l3:V7=1865;
goto l5;
l6:x[jvj+37]=x[jvj+10] ;z[jvj+37]=z[jvj+10];
l14:V48=x[jvj+10];
x[R]=x[jvj+37] ;z[R]=z[jvj+37];
V50=x[R];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1865; 
(*f[42])( );     /*SRA1(135,0,1865,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V44; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(20,V44,V42,V43)*/
V43=pile[WZ3]; 
pile[WZ1]=V46; pile[WZ2]=V43; 
(*f[39])( );     /*SDX0(20,V46,V43,V45)*/
V45=pile[WZ3]; 
pile[WZ1]=V48; pile[WZ2]=V45; 
(*f[39])( );     /*SDX0(20,V48,V45,V47)*/
V47=pile[WZ3]; 
pile[WZ1]=V50; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(20,V50,V47,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; 
(*f[40])( );     /*SLG0(V49)*/
l21:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
l7:pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=228; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,228,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+39; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+39,jvj+40)*/
l16:x[R]=x[jvj+40] ;z[R]=z[jvj+40];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=924; 
(*f[42])( );     /*SRA1(135,0,924,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V53; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(20,V53,V51,V52)*/
V52=pile[WZ3]; 
pile[WZ1]=V55; pile[WZ2]=V52; 
(*f[39])( );     /*SDX0(20,V55,V52,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=V54; 
(*f[40])( );     /*SLG0(V54)*/
goto l21;
l9:x[jvj+14]=s[x[jvj+31]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+31];
pile[v[22]]=jvj+14; pile[WZ1]=BA; pile[WZ2]=1881; pile[WZ3]=XD; pile[WZ4]=jvj+15; 
(*f[1500])( );if(v[102]) goto l10;     /*MISENFORME1(jvj+14,BA,1881,XD,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+15)*/
l10:x[jvj+31]=t[x[jvj+31]];
l8:if((x[jvj+31]>0)) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+26; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+26,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=BA; pile[WZ2]=228; pile[WZ3]=XD; pile[WZ4]=jvj+33; 
(*f[1500])( );if(v[102]) goto l19;     /*MISENFORME1(jvj+32,BA,228,XD,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[255])( );     /*COPEXP0(jvj+33,jvj+34)*/
x[jvj+19]=0 ;z[jvj+19]=0;
l11:if((x[jvj+16]>0)) goto l12;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1698; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,1698,jvj+41)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V26; pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(100,21,140,V26,jvj+45)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+29; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+29,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+19; pile[WZ2]=107; pile[WZ3]=jvj+48; 
(*f[301])( );     /*TRI11(jvj+47,jvj+19,107,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+48; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+34,jvj+48,jvj+43)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; pile[WZ2]=103; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+42,jvj+43,103,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+44; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+45,jvj+44,R)*/
goto l21;
l12:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
pile[v[22]]=jvj+19; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+18)*/
x[jvj+16]=t[x[jvj+16]];
goto l11;
l13:pile[v[22]]=1682; pile[WZ1]=BA; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1682,BA,jvj+20)*/
V44=x[jvj+20];
V46=x[jvj+5];
pile[v[22]]=jvj+5; pile[WZ2]=XP; pile[WZ3]=jvj+10; 
(*f[1497])( );if(v[102]) goto l20;     /*AJUSTECAL0(jvj+5,BA,XP,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ2]=jvj+8; pile[WZ3]=jvj+21; 
(*f[1496])( );     /*TYPEXPR0(jvj+10,BA,jvj+8,jvj+21)*/
x[jvj+37]=incon;
if((x[jvj+21]!=1881)) goto l6;
if(x[XP]!=228&&x[XP]!=129) goto l6;
pile[v[22]]=530; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(530,jvj+8,jvj+9)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+9; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+9,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=111; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,111,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+36; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+36,jvj+37)*/
goto l14;
l15:if(x[XP]!=228&&x[XP]!=129) goto l17;
pile[v[22]]=1682; pile[WZ1]=BA; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1682,BA,jvj+22)*/
V53=x[jvj+22];
V55=x[jvj+5];
pile[v[22]]=jvj+5; pile[WZ2]=XP; pile[WZ3]=228; pile[WZ4]=jvj+12; 
(*f[1499])( );if(v[102]) goto l17;     /*AJUSTEXP0(jvj+5,BA,XP,228,jvj+12)*/
x[jvj+40]=incon;
if((x[XD]!=228)) goto l7;
x[jvj+40]=x[jvj+12] ;z[jvj+40]=z[jvj+12];
goto l16;
l17:if((x[XP]!=1881)) goto l19;
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+5,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=1698)) goto l19;
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+5,jvj+25)*/
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+25,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,jvj+5,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=22)) goto l19;
pile[v[22]]=111; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+26,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+28,jvj+29)*/
pile[v[22]]=1901; pile[WZ1]=1714; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(1901,1714,jvj+30)*/
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==x[jvj+29]) goto l18;
l19:V61=x[jvj+5];
x[R]=250 ;z[R]=250;
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V56; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(20,V56,35,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=11781; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(20,11781,V57,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V58; pile[WZ2]=XP; 
(*f[42])( );     /*SRA1(135,V58,XP,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V61; pile[WZ2]=V59; 
(*f[39])( );     /*SDX0(20,V61,V59,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=V60; 
(*f[40])( );     /*SLG0(V60)*/
pile[v[22]]=BA; pile[WZ1]=80; pile[WZ2]=616; 
(*f[35])( );     /*CHGC1(BA,80,616)*/
goto l21;
l18:pile[v[22]]=107; pile[WZ1]=jvj+26; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(107,jvj+26,jvj+31)*/
x[jvj+16]=0 ;z[jvj+16]=0;
goto l8;
}
