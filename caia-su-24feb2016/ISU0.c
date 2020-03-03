#include "dx.h"
void ISU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F=0,V25=0,V24=0,V=0,V40=0,V19=0,RS=0,V48=0;
int TL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=37;
x[jvj+1]=10394;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1657&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(302,TL,jvj+9)*/
l4:if((x[jvj+9]>0)) goto l5;
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(302,TL,jvj+26)*/
l15:if((x[jvj+26]>0)) goto l16;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+3,jvj+4)*/
F=x[jvj+4];
if(F==179||F==82) goto l7;
l6:x[jvj+9]=t[x[jvj+9]];
goto l4;
l5:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+10,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+2,jvj+11)*/
if((x[jvj+11]==435)) goto l1;
if((x[jvj+11]!=39)) goto l6;
pile[v[22]]=113; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(113,jvj+2,jvj+5)*/
x[jvj+35]=x[jvj+5] ;z[jvj+35]=z[jvj+5];
l2:if((x[jvj+35]<=0)) goto l6;
x[jvj+6]=s[x[jvj+35]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+35];
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+6,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]==21)) goto l7;
l3:x[jvj+35]=t[x[jvj+35]];
goto l2;
l7:pile[v[22]]=jvj+10; pile[WZ1]=TL; 
(*f[1844])( );     /*ISUU0(jvj+10,TL)*/
goto l6;
l9:x[jvj+36]=t[x[jvj+36]];
l8:if((x[jvj+36]<=0)) goto l18;
x[jvj+15]=s[x[jvj+36]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+36];
pile[v[22]]=130; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+15,V24)*/
V24=pile[WZ2]; 
if((V24!=V25)) goto l9;
pile[v[22]]=223; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(223,jvj+15,jvj+20)*/
pile[v[22]]=283; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(283,jvj+15,jvj+21)*/
x[jvj+37]=x[jvj+21] ;z[jvj+37]=z[jvj+21];
l11:if((x[jvj+37]<=0)) goto l18;
x[jvj+22]=s[x[jvj+37]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+37];
pile[v[22]]=158; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(158,jvj+22,jvj+23)*/
if(x[jvj+23]!=41&&x[jvj+23]!=89&&x[jvj+23]!=96&&x[jvj+23]!=1317) goto l12;
V40=x[jvj+20];
if((V40<=0)) goto l12;
V=s[V40];
l17:x[jvj+26]=t[x[jvj+26]];
goto l15;
l12:x[jvj+37]=t[x[jvj+37]];
goto l11;
l13:V19=67;
l10:pile[v[22]]=102; pile[WZ1]=jvj+16; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+16,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+12,jvj+17)*/
if((x[jvj+17]!=39)) goto l18;
pile[v[22]]=111; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+12,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+18,jvj+19)*/
x[jvj+13]=x[jvj+19] ;z[jvj+13]=z[jvj+19];
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+12,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=365; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(365,jvj+13,jvj+14)*/
x[jvj+36]=x[jvj+14] ;z[jvj+36]=z[jvj+14];
goto l8;
l14:pile[v[22]]=jvj+16; pile[WZ1]=TL; 
(*f[1383])( );     /*ISV0(jvj+16,TL)*/
goto l17;
l16:x[jvj+16]=s[x[jvj+26]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+26];
pile[v[22]]=135; pile[WZ1]=jvj+16; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(135,jvj+16,jvj+27)*/
pile[v[22]]=134; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(134,jvj+16,jvj+28)*/
if((x[jvj+27]!=x[jvj+28])) goto l17;
V19=incon;
pile[v[22]]=102; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+16,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=22)) goto l13;
V19=68;
goto l10;
l18:RS=V19;
if((RS==68)) goto l14;
if((RS!=67)) goto l17;
x[jvj+29]=134 ;z[jvj+29]=134;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+16; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+29,jvj+16,jvj+30)*/
pile[v[22]]=248; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(248,jvj+30,jvj+31)*/
l20:if((x[jvj+31]<=0)) goto l22;
x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
pile[v[22]]=122; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(122,jvj+32,jvj+33)*/
if((x[jvj+33]!=x[jvj+29])) goto l21;
pile[v[22]]=161; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(161,jvj+32,jvj+34)*/
if((x[jvj+34]!=x[jvj+16])) goto l21;
V48=x[jvj+32];
pile[v[22]]=248; pile[WZ1]=jvj+30; pile[WZ2]=V48; 
(*f[134])( );     /*OTA0(248,jvj+30,V48)*/
l21:x[jvj+31]=t[x[jvj+31]];
goto l20;
l22:pile[v[22]]=jvj+29; pile[WZ1]=jvj+16; 
(*f[71])( );     /*ENLV0(jvj+29,jvj+16)*/
goto l17;
}
