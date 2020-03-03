#include "dx.h"
void DVY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V54=0,V71=0,V80=0,V45=0,V38=0,V19=0,P=0,V65=0;
int X,V,R,M;
int TY;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=51;
x[jvj+1]=10338;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1978&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; V=pile[v[22]+1]; R=pile[v[22]+2]; M=pile[v[22]+3]; TY=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=x[M] ;z[jvj+6]=z[M];
x[jvj+10]=x[X] ;z[jvj+10]=z[X];
V80=V;
l7:pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+10,jvj+11)*/
x[jvj+45]=w[x[jvj+11]][9];
l8:if((x[jvj+45]>0)) goto l9;
x[jvj+46]=w[x[jvj+11]][8];
l11:if((x[jvj+46]<=0)) goto l15;
x[jvj+15]=s[x[jvj+46]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+46];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+10; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(jvj+15,jvj+10,jvj+16)*/
x[jvj+47]=x[jvj+16] ;z[jvj+47]=z[jvj+16];
l12:if((x[jvj+47]>0)) goto l13;
x[jvj+46]=t[x[jvj+46]];
goto l11;
l2:x[jvj+2]=s[x[jvj+43]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+43];
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+2,jvj+3)*/
if((V11=w[x[jvj+3]][1])==incon) goto l3;
if((V11!=x[jvj+49])) goto l19;
l3:x[jvj+43]=t[x[jvj+43]];
l1:if((x[jvj+43]>0)) goto l2;
x[TY]=x[jvj+49] ;z[TY]=z[jvj+49];
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
l5:x[jvj+4]=s[x[jvj+44]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+44];
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+4,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+6; pile[WZ3]=jvj+9; 
(*f[45])( );if(v[102]) goto l21;     /*FNDZ0(jvj+8,jvj+6,V71,jvj+9)*/
V71=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+6,jvj+5,jvj+7)*/
if((V54=w[x[jvj+7]][1])==incon) goto l6;
if((V54!=x[jvj+51])) goto l21;
l6:x[jvj+44]=t[x[jvj+44]];
l4:if((x[jvj+44]>0)) goto l5;
x[TY]=x[jvj+51] ;z[TY]=z[jvj+51];
goto l23;
l9:x[jvj+12]=s[x[jvj+45]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+45];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+12,jvj+10,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=V80; pile[WZ2]=R; pile[WZ3]=jvj+6; pile[WZ4]=jvj+14; 
(*f[1978])( );if(v[102]) goto l10;     /*DVY0(jvj+13,V80,R,jvj+6,jvj+14)*/
x[TY]=x[jvj+14] ;z[TY]=z[jvj+14];
goto l23;
l10:x[jvj+45]=t[x[jvj+45]];
goto l8;
l13:x[jvj+17]=s[x[jvj+47]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+47];
pile[v[22]]=jvj+17; pile[WZ1]=V80; pile[WZ2]=R; pile[WZ3]=jvj+6; pile[WZ4]=jvj+18; 
(*f[1978])( );if(v[102]) goto l14;     /*DVY0(jvj+17,V80,R,jvj+6,jvj+18)*/
x[TY]=x[jvj+18] ;z[TY]=z[jvj+18];
goto l23;
l14:x[jvj+47]=t[x[jvj+47]];
goto l12;
l15:if((x[jvj+6]==250)) goto l16;
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+10,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=44)) goto l22;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+10,jvj+35)*/
pile[v[22]]=140; pile[WZ1]=jvj+35; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+35,V65)*/
V65=pile[WZ2]; 
if((V80!=V65)) goto l22;
pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+10,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+36,jvj+37)*/
if((x[jvj+37]!=128)) goto l22;
pile[v[22]]=128; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(128,jvj+36,jvj+38)*/
x[jvj+50]=x[jvj+38] ;z[jvj+50]=z[jvj+38];
l20:if((x[jvj+50]<=0)) goto l22;
x[jvj+39]=s[x[jvj+50]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+50];
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+39,jvj+40)*/
x[jvj+41]=x[jvj+40] ;z[jvj+41]=z[jvj+40];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(jvj+6,jvj+41,jvj+42)*/
if((x[jvj+51]=w[x[jvj+42]][1])==incon) goto l21;
x[jvj+44]=x[jvj+38] ;z[jvj+44]=z[jvj+38];
goto l4;
l16:pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+10,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]==179)) goto l17;
if((x[jvj+20]!=44)) goto l22;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+10,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+27,V19)*/
V19=pile[WZ2]; 
if((V80!=V19)) goto l22;
pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+10,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+28,jvj+29)*/
if((x[jvj+29]!=128)) goto l22;
pile[v[22]]=128; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(128,jvj+28,jvj+30)*/
x[jvj+48]=x[jvj+30] ;z[jvj+48]=z[jvj+30];
l18:if((x[jvj+48]<=0)) goto l22;
x[jvj+31]=s[x[jvj+48]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+48];
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+31,jvj+32)*/
P=x[jvj+32];
if((x[jvj+49]=w[P][1])==incon) goto l19;
x[jvj+43]=x[jvj+30] ;z[jvj+43]=z[jvj+30];
goto l1;
l17:pile[v[22]]=436; pile[WZ1]=jvj+10; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(436,jvj+10,jvj+21)*/
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+21,V45)*/
V45=pile[WZ2]; 
if((V80!=V45)) goto l22;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+10,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=43)) goto l22;
pile[v[22]]=103; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+22,jvj+24)*/
pile[v[22]]=140; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+24,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+22,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+25,jvj+26)*/
V80=V38;
x[jvj+10]=x[R] ;z[jvj+10]=z[R];
x[jvj+6]=x[jvj+26] ;z[jvj+6]=z[jvj+26];
goto l7;
l19:x[jvj+48]=t[x[jvj+48]];
goto l18;
l21:x[jvj+50]=t[x[jvj+50]];
goto l20;
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
}
