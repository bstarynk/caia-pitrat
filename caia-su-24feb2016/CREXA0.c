#include "dx.h"
void CREXA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V52=0,V46=0,V47=0,V48=0,V49=0,V50=0,V51=0,V4=0,V38=0,V32=0,V33=0,V34=0,V35=0,V36=0,V37=0,V45=0,V39=0,V40=0,V41=0,V42=0,V43=0,V44=0,V31=0,FF=0;
int E,F;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=11825;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==944&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; F=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1854; pile[WZ1]=F; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1854,F,jvj+2)*/
pile[v[22]]=184; pile[WZ1]=jvj+2; 
(*f[71])( );     /*ENLV0(184,jvj+2)*/
pile[v[22]]=1871; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1871,jvj+2,jvj+3)*/
x[jvj+36]=x[E] ;z[jvj+36]=z[E];
l6:if((x[jvj+36]<=0)) goto l9;
x[jvj+5]=s[x[jvj+36]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+36];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[938])( );     /*USE0(jvj+5,jvj+6)*/
pile[v[22]]=155; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(155,jvj+3,jvj+4)*/
if((x[jvj+4]!=68)) goto l2;
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==(-697)) goto l1;
l2:pile[v[22]]=118; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(118,jvj+3,V4)*/
V4=pile[WZ2]; 
if((V4<1)) goto l7;
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==(-598)) goto l3;
l4:if((V4<3)) goto l7;
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==(-632)) goto l5;
l7:x[jvj+36]=t[x[jvj+36]];
goto l6;
l1:V52=x[jvj+5];
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V46; pile[WZ2]=(-89); 
(*f[41])( );     /*SRB0(20,V46,(-89),V47)*/
V47=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V47; pile[WZ2]=1344; 
(*f[42])( );     /*SRA1(135,V47,1344,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; pile[WZ1]=(-697); 
(*f[37])( );     /*SRA0(V48,(-697),V49)*/
V49=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V49; pile[WZ2]=297; 
(*f[42])( );     /*SRA1(135,V49,297,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V52; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(20,V52,V50,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; 
(*f[40])( );     /*SLG0(V51)*/
goto l2;
l3:V38=x[jvj+5];
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V32; pile[WZ2]=(-89); 
(*f[41])( );     /*SRB0(20,V32,(-89),V33)*/
V33=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V33; pile[WZ2]=1344; 
(*f[42])( );     /*SRA1(135,V33,1344,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; pile[WZ1]=(-598); 
(*f[37])( );     /*SRA0(V34,(-598),V35)*/
V35=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=297; 
(*f[42])( );     /*SRA1(135,V35,297,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V38; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(20,V38,V36,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; 
(*f[40])( );     /*SLG0(V37)*/
goto l4;
l5:V45=x[jvj+5];
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V39; pile[WZ2]=(-89); 
(*f[41])( );     /*SRB0(20,V39,(-89),V40)*/
V40=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V40; pile[WZ2]=1344; 
(*f[42])( );     /*SRA1(135,V40,1344,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; pile[WZ1]=(-632); 
(*f[37])( );     /*SRA0(V41,(-632),V42)*/
V42=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V42; pile[WZ2]=297; 
(*f[42])( );     /*SRA1(135,V42,297,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V45; pile[WZ2]=V43; 
(*f[39])( );     /*SDX0(20,V45,V43,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; 
(*f[40])( );     /*SLG0(V44)*/
goto l7;
l8:pile[v[22]]=jvj+9; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1698; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,1698,jvj+32)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+35; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+35,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=1688; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+15,1688,jvj+16)*/
l17:pile[v[22]]=jvj+15; pile[WZ1]=jvj+15; pile[WZ2]=jvj+2; pile[WZ3]=jvj+29; 
(*f[1247])( );     /*TRADNAM0(jvj+15,jvj+15,jvj+2,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=1682; 
(*f[35])( );     /*CHGC1(jvj+29,1682,jvj+2)*/
pile[v[22]]=F; pile[WZ1]=jvj+26; pile[WZ2]=jvj+9; pile[WZ3]=jvj+28; pile[WZ4]=jvj+29; pile[WZ5]=jvj+15; pile[v[22]+6]=jvj+2; pile[v[22]+7]=jvj+30; 
(*f[1248])( );     /*CREXB0(F,jvj+26,jvj+9,jvj+28,jvj+29,jvj+15,jvj+2,jvj+30)*/
pile[v[22]]=jvj+30; 
(*f[1237])( );     /*TOUCHEFINALE0(jvj+30)*/
pile[v[22]]=jvj+2; pile[WZ1]=184; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+2,184,jvj+30)*/
pile[v[22]]=1260; pile[WZ1]=jvj+15; 
(*f[71])( );     /*ENLV0(1260,jvj+15)*/
l14:x[jvj+39]=t[x[jvj+39]];
l12:if((x[jvj+39]>0)) goto l13;
x[jvj+38]=t[x[jvj+38]];
l10:if((x[jvj+38]>0)) goto l11;
pile[v[22]]=jvj+2; 
(*f[172])( );     /*SORBL1(jvj+2)*/
(*f[365])( );     /*STK0(jvj+2)*/
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l9:pile[v[22]]=1867; pile[WZ1]=145; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1867,145,jvj+17)*/
x[jvj+38]=x[E] ;z[jvj+38]=z[E];
goto l10;
l11:x[jvj+15]=s[x[jvj+38]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+38];
pile[v[22]]=1689; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1689,jvj+15,jvj+18)*/
x[jvj+39]=x[jvj+18] ;z[jvj+39]=z[jvj+18];
goto l12;
l13:x[jvj+19]=s[x[jvj+39]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+39];
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=22)) goto l14;
pile[v[22]]=102; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+19,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+7,jvj+21)*/
if((x[jvj+21]!=22)) goto l14;
pile[v[22]]=111; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+7,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[F]!=x[jvj+23])) goto l14;
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+19,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+24,jvj+25)*/
FF=x[jvj+25];
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==FF) goto l15;
goto l14;
l15:pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+7,jvj+26)*/
x[jvj+31]=incon;
pile[v[22]]=103; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,jvj+7,jvj+8)*/
x[jvj+37]=x[jvj+8] ;z[jvj+37]=z[jvj+8];
x[jvj+31]=x[jvj+37] ;z[jvj+31]=z[jvj+37];
l16:pile[v[22]]=103; pile[WZ1]=jvj+19; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+19,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+28)*/
x[jvj+9]=x[jvj+31] ;z[jvj+9]=z[jvj+31];
pile[v[22]]=1871; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1871,jvj+2,jvj+10)*/
pile[v[22]]=1836; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1836,jvj+10,jvj+11)*/
if((x[jvj+11]!=1881)) goto l17;
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+9,V31)*/
V31=pile[WZ2]; 
if((V31==(-591))) goto l17;
l20:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+12)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[760])( );     /*MEMEX0(jvj+9,jvj+12,jvj+13)*/
if((x[jvj+13]==134)) goto l8;
goto l17;
l19:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+31)*/
goto l16;
}
