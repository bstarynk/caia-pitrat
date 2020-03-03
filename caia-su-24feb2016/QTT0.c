#include "dx.h"
void QTT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V30=0,V28=0,V29=0,V3=0,V19=0,V34=0,V32=0,V33=0,V18=0,V11=0,V9=0,V42=0,V47=0,V45=0,V46=0,V48=0,V50=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=10865;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1763&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l1:x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=334; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(334,jvj+2,jvj+3)*/
if((x[jvj+3]!=0)) goto l2;
(*f[1954])( );     /*QTTBIS0()*/
l2:x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=334; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(334,jvj+4,jvj+5)*/
if((x[jvj+5]>0)) goto l3;
if((v[190]!=0)) goto l11;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(250,158,jvj+15)*/
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=291; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(291,jvj+16,jvj+17)*/
l16:if((x[jvj+17]>0)) goto l17;
pile[v[22]]=120; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(120,jvj+15,jvj+18)*/
pile[v[22]]=698; pile[WZ1]=jvj+18; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(698,jvj+18,jvj+6)*/
pile[v[22]]=528; pile[WZ1]=jvj+6; 
(*f[1956])( );     /*QRR0(528,jvj+6)*/
V3=g[488];
if((V3<=0)) goto l12;
V4=vg[488];
if((V4!=0)) goto l4;
if((V3<3)) goto l6;
l4:pile[v[22]]=488; pile[WZ1]=10865; pile[WZ2]=0; pile[WZ3]=(-728); pile[WZ4]=jvj+6; pile[WZ5]=jvj+7; 
(*f[232])( );     /*INTERP3(488,10865,0,(-728),jvj+6,jvj+7)*/
if((x[jvj+7]==135)) goto l5;
l12:x[jvj+9]=vo[14];z[jvj+9]=vz[14];
V11=x[jvj+6];
pile[v[22]]=291; pile[WZ1]=jvj+9; pile[WZ2]=V11; 
(*f[134])( );     /*OTA0(291,jvj+9,V11)*/
pile[v[22]]=334; 
(*f[134])( );     /*OTA0(334,jvj+9,V11)*/
pile[v[22]]=509; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(509,jvj+6,jvj+10)*/
V9=x[jvj+6];
l13:if((x[jvj+10]<=0)) goto l14;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=258; pile[WZ1]=jvj+11; pile[WZ2]=V9; 
(*f[134])( );     /*OTA0(258,jvj+11,V9)*/
x[jvj+10]=t[x[jvj+10]];
goto l13;
l3:x[jvj+21]=s[x[jvj+5]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+5];
x[jvj+6]=x[jvj+21] ;z[jvj+6]=z[jvj+21];
goto l12;
l5:if((V3<4)) goto l6;
goto l12;
l6:V30=x[jvj+6];
pile[v[22]]=0; pile[WZ1]=(-3220); 
(*f[37])( );     /*SRA0(0,(-3220),V28)*/
V28=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V30; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(20,V30,V28,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; 
(*f[40])( );     /*SLG0(V29)*/
if((V3==2)) goto l7;
goto l12;
l7:pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l12;
l9:if((V18<4)) goto l10;
goto l12;
l10:V34=x[jvj+6];
pile[v[22]]=0; pile[WZ1]=(-3220); 
(*f[37])( );     /*SRA0(0,(-3220),V32)*/
V32=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V34; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(20,V34,V32,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; 
(*f[40])( );     /*SLG0(V33)*/
if((V18==2)) goto l7;
goto l12;
l11:if((v[190]<=0)) goto l14;
pile[v[22]]=jvj+6; 
(*f[1957])( );if(v[102]) goto l14;     /*QYYDNA0(jvj+6)*/
pile[v[22]]=528; pile[WZ1]=jvj+6; 
(*f[1956])( );     /*QRR0(528,jvj+6)*/
V18=g[419];
if((V18<=0)) goto l12;
V19=vg[419];
if((V19!=0)) goto l8;
if((V18<3)) goto l10;
l8:pile[v[22]]=419; pile[WZ1]=10865; pile[WZ2]=0; pile[WZ3]=17; pile[WZ4]=jvj+6; pile[WZ5]=jvj+8; 
(*f[232])( );     /*INTERP3(419,10865,0,17,jvj+6,jvj+8)*/
if((x[jvj+8]==135)) goto l9;
goto l12;
l14:x[jvj+12]=vo[14];z[jvj+12]=vz[14];
pile[v[22]]=291; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(291,jvj+12,jvj+13)*/
if((x[jvj+13]!=0)) goto l1;
pile[v[22]]=221; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(221,jvj+12,jvj+14)*/
if((x[jvj+14]!=0)) goto l1;
l15:x[jvj+1]=incon; v[0]=jvj; return;
l17:x[jvj+19]=s[x[jvj+17]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+17];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[1958])( );     /*VALCOMP0(jvj+19,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+15; 
(*f[1305])( );if(v[102]) goto l18;     /*VALGLO2(jvj+20,jvj+15,V42)*/
V42=pile[WZ2]; 
if((v[36]<=0)) goto l18;
V47=x[jvj+19];
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=43; 
(*f[41])( );     /*SRB0(10,0,43,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V45; pile[WZ2]=259; 
(*f[42])( );     /*SRA1(135,V45,259,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V47; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(20,V47,V46,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V42; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(41,V42,V48,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; 
(*f[40])( );     /*SLG0(V50)*/
pile[v[22]]=jvj+20; 
(*f[1306])( );     /*SORJGT0(jvj+20)*/
l18:x[jvj+17]=t[x[jvj+17]];
goto l16;
}
