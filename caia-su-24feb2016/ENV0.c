#include "dx.h"
void ENV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V3=0,V11=0,V33=0,V28=0,V9=0,V29=0,V31=0,V32=0,V10=0,W=0;
int TL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=10256;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1427&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=222; pile[WZ1]=TL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(222,TL,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=292; pile[WZ1]=TL; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(292,TL,jvj+4)*/
l3:if((x[jvj+4]>0)) goto l4;
pile[v[22]]=TL; pile[WZ1]=(-20); pile[WZ2]=256; pile[WZ3]=jvj+25; 
(*f[180])( );     /*TRIENS0(TL,(-20),256,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=1; pile[WZ2]=117; pile[WZ3]=jvj+5; 
(*f[189])( );     /*TRI4(jvj+25,1,117,jvj+5)*/
pile[v[22]]=357; pile[WZ1]=TL; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(357,TL,jvj+22)*/
pile[v[22]]=223; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(223,TL,jvj+23)*/
x[jvj+26]=x[jvj+22] ;z[jvj+26]=z[jvj+22];
l9:if((x[jvj+26]>0)) goto l10;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+22; pile[WZ2]=jvj+5; 
(*f[1652])( );     /*ORB0(jvj+3,jvj+22,jvj+5)*/
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(250,158,jvj+24)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; pile[WZ2]=jvj+17; 
(*f[1653])( );if(v[102]) goto l26;     /*ORP0(jvj+23,jvj+24,jvj+17)*/
x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=292; pile[WZ1]=TL; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(292,TL,jvj+8)*/
l12:if((x[jvj+8]>0)) goto l13;
if((x[jvj+11]==0)) goto l20;
pile[v[22]]=TL; pile[WZ1]=525; pile[WZ2]=jvj+11; 
(*f[34])( );     /*CHGC0(TL,525,jvj+11)*/
l20:x[jvj+12]=d[108];z[jvj+12]=0;
l18:if((x[jvj+12]>0)) goto l19;
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(302,TL,jvj+20)*/
l23:if((x[jvj+20]<=0)) goto l26;
x[jvj+18]=s[x[jvj+20]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+20];
pile[v[22]]=102; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,jvj+18,jvj+21)*/
pile[v[22]]=248; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(248,jvj+18,jvj+19)*/
if((x[jvj+19]!=0)) goto l25;
pile[v[22]]=jvj+18; pile[WZ1]=TL; 
(*f[1383])( );     /*ISV0(jvj+18,TL)*/
l25:pile[v[22]]=218; pile[WZ1]=jvj+21; 
(*f[71])( );     /*ENLV0(218,jvj+21)*/
l24:x[jvj+20]=t[x[jvj+20]];
goto l23;
l2:V2=s[x[jvj+2]];
pile[v[22]]=jvj+3; pile[WZ1]=V2; 
(*f[331])( );     /*PLUE3(jvj+3,V2)*/
x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:V3=s[x[jvj+4]];
pile[v[22]]=jvj+3; pile[WZ1]=V3; 
(*f[331])( );     /*PLUE3(jvj+3,V3)*/
x[jvj+4]=t[x[jvj+4]];
goto l3;
l6:if((V10<4)) goto l7;
l8:pile[v[22]]=jvj+6; pile[WZ1]=117; pile[WZ2]=V9; 
(*f[43])( );     /*CHGC2(jvj+6,117,V9)*/
pile[v[22]]=jvj+5; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+5,117,1)*/
l11:x[jvj+26]=t[x[jvj+26]];
goto l9;
l7:V33=x[jvj+6];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=208; 
(*f[42])( );     /*SRA1(135,0,208,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V9; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(41,V9,V28,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V29,58,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V33; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(20,V33,V31,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; 
(*f[40])( );     /*SLG0(V32)*/
if((V10!=2)) goto l8;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l8;
l10:x[jvj+6]=s[x[jvj+26]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+26];
pile[v[22]]=jvj+6; 
(*f[1651])( );     /*USVAR0(jvj+6)*/
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+5,V9)*/
V9=pile[WZ2]; 
V10=g[187];
if((V10<=0)) goto l8;
V11=vg[187];
if((V11!=0)) goto l5;
if((V10<3)) goto l7;
l5:pile[v[22]]=187; pile[WZ1]=10256; pile[WZ2]=0; pile[WZ3]=(-2060); pile[WZ4]=jvj+5; pile[WZ5]=(-601); pile[v[22]+6]=jvj+6; pile[v[22]+7]=jvj+7; 
(*f[187])( );     /*INTERP0(187,10256,0,(-2060),jvj+5,(-601),jvj+6,jvj+7)*/
if((x[jvj+7]==135)) goto l6;
goto l8;
l13:W=s[x[jvj+8]];
x[jvj+27]=x[jvj+22] ;z[jvj+27]=z[jvj+22];
l14:if((x[jvj+27]>0)) goto l15;
x[jvj+8]=t[x[jvj+8]];
goto l12;
l15:x[jvj+9]=s[x[jvj+27]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+27];
pile[v[22]]=253; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(253,jvj+9,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==W) goto l17;
l16:x[jvj+27]=t[x[jvj+27]];
goto l14;
l17:pile[v[22]]=jvj+11; pile[WZ1]=W; 
(*f[331])( );     /*PLUE3(jvj+11,W)*/
goto l16;
l19:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=122; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(122,jvj+13,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+5; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(jvj+14,jvj+5,jvj+15)*/
x[jvj+28]=x[jvj+15] ;z[jvj+28]=z[jvj+15];
l22:if((x[jvj+28]<=0)) goto l21;
x[jvj+16]=s[x[jvj+28]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+28];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[1380])( );     /*RECZ0(jvj+13,jvj+16,jvj+17)*/
x[jvj+28]=t[x[jvj+28]];
goto l22;
l21:x[jvj+12]=t[x[jvj+12]];
goto l18;
l26:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
