#include "dx.h"
void MISENFORME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,NN=0,V53=0,V55=0,V51=0,V52=0,V54=0,V26=0,V44=0,V46=0,V48=0,V50=0,V42=0,V43=0,V45=0,V47=0,V49=0,V61=0,V56=0,V57=0,V58=0,V59=0,V60=0;
int A,BA,XP;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=49;
x[jvj+1]=11781;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1233&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; BA=pile[v[22]+1]; XP=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=250 ;z[jvj+11]=250;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+3)*/
pile[v[22]]=A; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[760])( );     /*MEMEX0(A,jvj+3,jvj+4)*/
if((x[jvj+4]==134)) goto l1;
l17:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l1:x[jvj+5]=x[A] ;z[jvj+5]=z[A];
x[jvj+6]=incon;
if((x[XP]==228)) goto l2;
x[jvj+6]=x[jvj+11] ;z[jvj+6]=z[jvj+11];
l4:pile[v[22]]=jvj+5; pile[WZ1]=BA; pile[WZ2]=XP; pile[WZ3]=jvj+6; pile[WZ4]=jvj+7; 
(*f[1498])( );     /*CALCULABLE0(jvj+5,BA,XP,jvj+6,jvj+7)*/
V7=incon;
if((x[jvj+7]==68)) goto l3;
V7=924;
l5:NN=V7;
if((NN==924)) goto l11;
if((NN!=1865)) goto l17;
pile[v[22]]=1682; pile[WZ1]=BA; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1682,BA,jvj+34)*/
V44=x[jvj+34];
V46=x[jvj+5];
pile[v[22]]=jvj+5; pile[WZ2]=XP; pile[WZ3]=jvj+32; 
(*f[1497])( );if(v[102]) goto l17;     /*AJUSTECAL0(jvj+5,BA,XP,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ2]=jvj+30; pile[WZ3]=jvj+35; 
(*f[1496])( );     /*TYPEXPR0(jvj+32,BA,jvj+30,jvj+35)*/
x[jvj+46]=incon;
if((x[jvj+35]!=1881)) goto l14;
if(x[XP]!=228&&x[XP]!=129) goto l14;
pile[v[22]]=530; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(530,jvj+30,jvj+31)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[255])( );     /*COPEXP0(jvj+32,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+31; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+31,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=111; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,111,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+45; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+45,jvj+46)*/
l15:V48=x[jvj+32];
x[R]=x[jvj+46] ;z[R]=z[jvj+46];
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
l18:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l2:x[jvj+6]=228 ;z[jvj+6]=228;
goto l4;
l3:V7=1865;
goto l5;
l7:x[jvj+10]=s[x[jvj+26]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+26];
pile[v[22]]=jvj+10; pile[WZ1]=BA; pile[WZ2]=1881; pile[WZ3]=jvj+11; pile[WZ4]=jvj+12; 
(*f[1500])( );if(v[102]) goto l8;     /*MISENFORME1(jvj+10,BA,1881,jvj+11,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+12)*/
l8:x[jvj+26]=t[x[jvj+26]];
l6:if((x[jvj+26]>0)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+21,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=BA; pile[WZ2]=228; pile[WZ3]=jvj+11; pile[WZ4]=jvj+28; 
(*f[1500])( );if(v[102]) goto l16;     /*MISENFORME1(jvj+27,BA,228,jvj+11,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(jvj+28,jvj+29)*/
x[jvj+16]=0 ;z[jvj+16]=0;
l9:if((x[jvj+13]>0)) goto l10;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1698; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,1698,jvj+39)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V26; pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(100,21,140,V26,jvj+43)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+24; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+24,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+16; pile[WZ2]=107; pile[WZ3]=jvj+49; 
(*f[301])( );     /*TRI11(jvj+48,jvj+16,107,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+49; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+29,jvj+49,jvj+41)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+40,jvj+41,103,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+42; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+43,jvj+42,R)*/
goto l18;
l10:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+15)*/
x[jvj+13]=t[x[jvj+13]];
goto l9;
l11:if(x[XP]!=228&&x[XP]!=129) goto l12;
pile[v[22]]=1682; pile[WZ1]=BA; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1682,BA,jvj+17)*/
V53=x[jvj+17];
V55=x[jvj+5];
pile[v[22]]=jvj+5; pile[WZ2]=XP; pile[WZ3]=228; pile[WZ4]=jvj+8; 
(*f[1499])( );if(v[102]) goto l12;     /*AJUSTEXP0(jvj+5,BA,XP,228,jvj+8)*/
x[jvj+38]=incon;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=228; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,228,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+37; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+9,jvj+37,jvj+38)*/
x[R]=x[jvj+38] ;z[R]=z[jvj+38];
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
goto l18;
l12:if((x[XP]!=1881)) goto l16;
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+5,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=1698)) goto l16;
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+5,jvj+20)*/
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+20,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+5,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]!=22)) goto l16;
pile[v[22]]=111; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+21,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+23,jvj+24)*/
pile[v[22]]=1901; pile[WZ1]=1714; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(1901,1714,jvj+25)*/
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==x[jvj+24]) goto l13;
l16:V61=x[jvj+5];
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
goto l18;
l13:pile[v[22]]=107; pile[WZ1]=jvj+21; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,jvj+21,jvj+26)*/
x[jvj+13]=0 ;z[jvj+13]=0;
goto l6;
l14:x[jvj+46]=x[jvj+32] ;z[jvj+46]=z[jvj+32];
goto l15;
}
