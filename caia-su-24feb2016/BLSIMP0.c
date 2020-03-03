#include "dx.h"
void BLSIMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V69=0,V64=0;
int Q,T,N;
int EA;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=49;
x[jvj+1]=10142;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==770&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Q=pile[v[22]]; T=pile[v[22]+1]; N=pile[v[22]+2]; EA=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+47]=0 ;z[jvj+47]=0;
x[EA]=x[jvj+47] ;z[EA]=z[jvj+47];
pile[v[22]]=270; pile[WZ1]=T; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(270,T,jvj+34)*/
if((x[jvj+34]==20)) goto l25;
if((x[jvj+34]!=41)) goto l1;
pile[v[22]]=100; pile[WZ1]=Q; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,Q,jvj+43)*/
if((x[jvj+43]!=73)) goto l1;
pile[v[22]]=103; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,Q,jvj+44)*/
pile[v[22]]=130; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,jvj+44,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(218,N,jvj+27)*/
x[jvj+31]=incon;
pile[v[22]]=159; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(159,jvj+27,jvj+28)*/
l19:if((x[jvj+28]>0)) goto l20;
pile[v[22]]=117; pile[WZ1]=V64; pile[WZ2]=218; pile[WZ3]=T; pile[WZ4]=jvj+31; 
(*f[567])( );     /*QUADRI11(117,V64,218,T,jvj+31)*/
l22:x[jvj+33]=incon;
pile[v[22]]=109; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(109,jvj+31,jvj+32)*/
l24:pile[v[22]]=109; pile[WZ1]=jvj+31; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(109,jvj+31,jvj+33)*/
l32:pile[v[22]]=EA; pile[WZ1]=jvj+33; 
(*f[68])( );     /*PLUE0(EA,jvj+33)*/
pile[v[22]]=jvj+31; pile[WZ1]=109; pile[WZ2]=jvj+33; 
(*f[35])( );     /*CHGC1(jvj+31,109,jvj+33)*/
pile[v[22]]=jvj+27; pile[WZ1]=159; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+27,159,jvj+31)*/
l1:pile[v[22]]=270; pile[WZ1]=T; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(270,T,jvj+2)*/
l35:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l3:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=218; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,jvj+5,jvj+6)*/
if((x[jvj+6]!=x[T])) goto l4;
x[jvj+7]=x[jvj+5] ;z[jvj+7]=z[jvj+5];
l5:x[jvj+9]=incon;
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,jvj+7,jvj+8)*/
l7:pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(109,jvj+7,jvj+9)*/
l34:pile[v[22]]=EA; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(EA,jvj+9)*/
pile[v[22]]=jvj+7; pile[WZ1]=109; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(jvj+7,109,jvj+9)*/
pile[v[22]]=jvj+3; pile[WZ1]=159; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+3,159,jvj+7)*/
goto l35;
l4:x[jvj+4]=t[x[jvj+4]];
l2:if((x[jvj+4]>0)) goto l3;
pile[v[22]]=T; pile[WZ1]=218; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(T,218,jvj+7)*/
goto l5;
l6:pile[v[22]]=68; pile[WZ1]=jvj+9; 
(*f[1125])( );if(v[102]) goto l7;     /*NOUB1(68,jvj+9)*/
goto l34;
l9:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=218; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(218,jvj+12,jvj+13)*/
if((x[jvj+13]!=x[T])) goto l10;
pile[v[22]]=242; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(242,jvj+12,jvj+14)*/
if((x[jvj+14]!=x[jvj+37])) goto l10;
x[jvj+15]=x[jvj+12] ;z[jvj+15]=z[jvj+12];
l11:x[jvj+17]=incon;
pile[v[22]]=109; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(109,jvj+15,jvj+16)*/
l13:pile[v[22]]=109; pile[WZ1]=jvj+15; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(109,jvj+15,jvj+17)*/
l26:pile[v[22]]=EA; pile[WZ1]=jvj+17; 
(*f[68])( );     /*PLUE0(EA,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=109; pile[WZ2]=jvj+17; 
(*f[35])( );     /*CHGC1(jvj+15,109,jvj+17)*/
pile[v[22]]=jvj+10; pile[WZ1]=159; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+10,159,jvj+15)*/
l27:pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+36,jvj+38)*/
if((x[jvj+38]!=128)) goto l1;
pile[v[22]]=128; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(128,jvj+36,jvj+39)*/
pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(218,N,jvj+18)*/
l28:if((x[jvj+39]<=0)) goto l1;
x[jvj+40]=s[x[jvj+39]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+39];
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+40,jvj+41)*/
x[jvj+45]=x[jvj+41] ;z[jvj+45]=z[jvj+41];
x[jvj+46]=incon;
pile[v[22]]=159; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(159,jvj+18,jvj+19)*/
x[jvj+48]=x[jvj+19] ;z[jvj+48]=z[jvj+19];
l14:if((x[jvj+48]>0)) goto l15;
pile[v[22]]=218; pile[WZ1]=T; pile[WZ2]=242; pile[WZ3]=jvj+45; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(218,T,242,jvj+45,jvj+46)*/
l30:x[jvj+23]=x[jvj+46] ;z[jvj+23]=z[jvj+46];
x[jvj+49]=incon;
pile[v[22]]=109; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(109,jvj+23,jvj+24)*/
l18:pile[v[22]]=109; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(109,jvj+23,jvj+26)*/
x[jvj+49]=x[jvj+26] ;z[jvj+49]=z[jvj+26];
l31:x[jvj+42]=x[jvj+49] ;z[jvj+42]=z[jvj+49];
pile[v[22]]=EA; pile[WZ1]=jvj+42; 
(*f[68])( );     /*PLUE0(EA,jvj+42)*/
pile[v[22]]=jvj+23; pile[WZ1]=109; pile[WZ2]=jvj+42; 
(*f[35])( );     /*CHGC1(jvj+23,109,jvj+42)*/
pile[v[22]]=jvj+18; pile[WZ1]=159; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+23)*/
l29:x[jvj+39]=t[x[jvj+39]];
goto l28;
l10:x[jvj+11]=t[x[jvj+11]];
l8:if((x[jvj+11]>0)) goto l9;
pile[v[22]]=218; pile[WZ1]=T; pile[WZ2]=242; pile[WZ3]=jvj+37; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(218,T,242,jvj+37,jvj+15)*/
goto l11;
l12:pile[v[22]]=68; pile[WZ1]=jvj+17; 
(*f[1125])( );if(v[102]) goto l13;     /*NOUB1(68,jvj+17)*/
goto l26;
l15:x[jvj+20]=s[x[jvj+48]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+48];
pile[v[22]]=218; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(218,jvj+20,jvj+21)*/
if((x[jvj+21]!=x[T])) goto l16;
pile[v[22]]=242; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(242,jvj+20,jvj+22)*/
if((x[jvj+22]!=x[jvj+45])) goto l16;
x[jvj+46]=x[jvj+20] ;z[jvj+46]=z[jvj+20];
goto l30;
l16:x[jvj+48]=t[x[jvj+48]];
goto l14;
l17:pile[v[22]]=68; pile[WZ1]=jvj+25; 
(*f[1125])( );if(v[102]) goto l18;     /*NOUB1(68,jvj+25)*/
x[jvj+49]=x[jvj+25] ;z[jvj+49]=z[jvj+25];
goto l31;
l20:x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=117; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+29,V69)*/
V69=pile[WZ2]; 
if((V69!=V64)) goto l21;
pile[v[22]]=218; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(218,jvj+29,jvj+30)*/
if((x[jvj+30]!=x[T])) goto l21;
x[jvj+31]=x[jvj+29] ;z[jvj+31]=z[jvj+29];
goto l22;
l21:x[jvj+28]=t[x[jvj+28]];
goto l19;
l23:pile[v[22]]=68; pile[WZ1]=jvj+33; 
(*f[1125])( );if(v[102]) goto l24;     /*NOUB1(68,jvj+33)*/
goto l32;
l25:pile[v[22]]=100; pile[WZ1]=Q; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,Q,jvj+35)*/
if((x[jvj+35]!=73)) goto l1;
pile[v[22]]=103; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,Q,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+36,jvj+37)*/
pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(218,N,jvj+10)*/
x[jvj+15]=incon;
pile[v[22]]=159; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(159,jvj+10,jvj+11)*/
goto l8;
l33:pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(218,N,jvj+3)*/
x[jvj+7]=incon;
pile[v[22]]=159; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,jvj+3,jvj+4)*/
goto l2;
}
