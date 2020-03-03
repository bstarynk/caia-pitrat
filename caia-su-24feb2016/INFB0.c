#include "dx.h"
void INFB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V62=0,V24=0,V20=0,V19=0,V47=0,V46=0,V40=0,V34=0,V28=0,V79=0,V78=0,V72=0,V9=0,V8=0,V61=0,V60=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=43;
x[jvj+1]=11859;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3873&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,A,jvj+16)*/
if((x[jvj+16]==41)) goto l13;
if((x[jvj+16]!=484)) goto l14;
pile[v[22]]=A; pile[WZ1]=jvj+17; 
(*f[200])( );if(v[102]) goto l14;     /*NDD0(A,jvj+17)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l14;     /*FNDCND0(280,jvj+17,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V24; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V24,R)*/
l26:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+35]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+35];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[3873])( );if(v[102]) goto l3;     /*INFB0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+3)*/
l3:x[jvj+35]=t[x[jvj+35]];
l1:if((x[jvj+35]>0)) goto l2;
for(i=x[jvj+4],V8=0;i>0;i=t[i],V8++)  ;
if((V8!=V9)) goto l25;
x[jvj+7]=0 ;z[jvj+7]=0;
l4:if((x[jvj+4]>0)) goto l5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+7; pile[WZ2]=107; pile[WZ3]=jvj+39; 
(*f[301])( );     /*TRI11(jvj+38,jvj+7,107,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+39,22,100,R)*/
goto l26;
l5:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+6)*/
x[jvj+4]=t[x[jvj+4]];
goto l4;
l7:x[jvj+8]=s[x[jvj+43]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+43];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[3873])( );if(v[102]) goto l25;     /*INFB0(jvj+8,jvj+9)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+9,V62)*/
V62=pile[WZ2]; 
if((V62<0)) goto l25;
x[jvj+43]=t[x[jvj+43]];
l6:if((x[jvj+43]>0)) goto l7;
x[jvj+12]=0 ;z[jvj+12]=0;
l8:if((x[jvj+36]>0)) goto l9;
for(i=x[jvj+12],V60=0;i>0;i=t[i],V60++)  ;
if((V60!=V61)) goto l25;
x[jvj+15]=0 ;z[jvj+15]=0;
l11:if((x[jvj+12]>0)) goto l12;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+15; pile[WZ2]=107; pile[WZ3]=jvj+42; 
(*f[301])( );     /*TRI11(jvj+41,jvj+15,107,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+42,22,100,R)*/
goto l26;
l9:x[jvj+10]=s[x[jvj+36]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+36];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[3873])( );if(v[102]) goto l10;     /*INFB0(jvj+10,jvj+11)*/
pile[v[22]]=jvj+12; 
(*f[522])( );     /*PLUB2(jvj+12,jvj+11)*/
l10:x[jvj+36]=t[x[jvj+36]];
goto l8;
l12:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+14)*/
x[jvj+12]=t[x[jvj+12]];
goto l11;
l13:x[R]=x[A] ;z[R]=z[A];
goto l26;
l14:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,A,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]==52)) goto l15;
if((x[jvj+19]==596)) goto l16;
if((x[jvj+19]==485)) goto l24;
if((x[jvj+19]!=486)) goto l25;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,A,jvj+36)*/
for(i=x[jvj+36],V61=0;i>0;i=t[i],V61++)  ;
x[jvj+43]=x[jvj+36] ;z[jvj+43]=z[jvj+36];
goto l6;
l15:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,A,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[3888])( );if(v[102]) goto l25;     /*SUPB0(jvj+20,jvj+21)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+21,V20)*/
V20=pile[WZ2]; 
V19=(-V20);
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V19; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V19,R)*/
goto l26;
l16:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,A,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[1585])( );     /*NEGATIF0(jvj+22,jvj+23)*/
if((x[jvj+23]==135)) goto l17;
l21:pile[v[22]]=jvj+22; pile[WZ1]=jvj+30; 
(*f[1352])( );     /*POSITIF0(jvj+22,jvj+30)*/
if((x[jvj+30]==135)) goto l22;
l25:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l17:pile[v[22]]=jvj+22; pile[WZ1]=jvj+24; 
(*f[3888])( );if(v[102]) goto l21;     /*SUPB0(jvj+22,jvj+24)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+24,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,A,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[997])( );if(v[102]) goto l19;     /*IMPAIR0(jvj+25,jvj+26)*/
if((x[jvj+26]==135)) goto l18;
l19:pile[v[22]]=jvj+25; pile[WZ1]=jvj+28; 
(*f[996])( );if(v[102]) goto l21;     /*PAIR0(jvj+25,jvj+28)*/
if((x[jvj+28]==135)) goto l20;
goto l21;
l18:pile[v[22]]=jvj+25; pile[WZ1]=jvj+27; 
(*f[3888])( );if(v[102]) goto l19;     /*SUPB0(jvj+25,jvj+27)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+27,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=V47; 
(*f[1006])( );if(v[102]) goto l19;     /*POWER0(V46,V47,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V40; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V40,R)*/
goto l26;
l20:pile[v[22]]=jvj+25; pile[WZ1]=jvj+29; 
(*f[3873])( );if(v[102]) goto l21;     /*INFB0(jvj+25,jvj+29)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+29,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=V47; 
(*f[1006])( );if(v[102]) goto l21;     /*POWER0(V34,V47,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V28; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V28,R)*/
goto l26;
l22:pile[v[22]]=jvj+22; pile[WZ1]=jvj+31; 
(*f[3873])( );if(v[102]) goto l25;     /*INFB0(jvj+22,jvj+31)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+31,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,A,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[1352])( );     /*POSITIF0(jvj+32,jvj+33)*/
if((x[jvj+33]==135)) goto l23;
goto l25;
l23:pile[v[22]]=jvj+32; pile[WZ1]=jvj+34; 
(*f[3873])( );if(v[102]) goto l25;     /*INFB0(jvj+32,jvj+34)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+34,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=V78; pile[WZ1]=V79; 
(*f[1006])( );if(v[102]) goto l25;     /*POWER0(V78,V79,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V72; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V72,R)*/
goto l26;
l24:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,A,jvj+35)*/
for(i=x[jvj+35],V9=0;i>0;i=t[i],V9++)  ;
x[jvj+4]=0 ;z[jvj+4]=0;
goto l1;
}
