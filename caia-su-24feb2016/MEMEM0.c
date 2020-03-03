#include "dx.h"
void MEMEM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V13=0,V53=0,V21=0,V55=0,V24=0,V34=0,V43=0,A=0,B=0,S=0,V47=0,V48=0,V52=0,V51=0;
int X2,X1;
int RES;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=39;
if(v[0]>99700) (*f[6])( );

X2=pile[v[22]]; X1=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RES]=A=B=incon;
if((x[X1]==x[X2])) goto l1;
pile[v[22]]=100; pile[WZ1]=X1; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,X1,jvj+1)*/
pile[WZ1]=X2; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,X2,jvj+2)*/
if((x[jvj+1]!=x[jvj+2])) goto l5;
l2:x[jvj+34]=w[x[jvj+1]][8];
l3:if((x[jvj+34]>0)) goto l4;
if((x[jvj+6]=w[x[jvj+1]][3])==incon) goto l28;
pile[v[22]]=X1; pile[WZ1]=jvj+6; pile[WZ3]=jvj+7; 
(*f[45])( );if(v[102]) goto l28;     /*FNDZ0(X1,jvj+6,V53,jvj+7)*/
V53=pile[WZ2]; 
V21=V53;
pile[v[22]]=X2; pile[WZ3]=jvj+8; 
(*f[45])( );if(v[102]) goto l28;     /*FNDZ0(X2,jvj+6,V55,jvj+8)*/
V55=pile[WZ2]; 
V24=V55;
if((V21!=V24)) goto l5;
l28:pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(250,158,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=X1; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,X1,jvj+15)*/
if((x[jvj+15]!=22)) goto l7;
pile[WZ1]=X2; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,X2,jvj+16)*/
if((x[jvj+16]!=22)) goto l7;
pile[v[22]]=102; pile[WZ1]=X1; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,X1,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+17,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X2; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,X2,jvj+18)*/
pile[v[22]]=140; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+18,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X1; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,X1,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+19,jvj+20)*/
if(x[jvj+20]!=650&&x[jvj+20]!=649&&x[jvj+20]!=651&&x[jvj+20]!=654) goto l7;
pile[v[22]]=111; pile[WZ1]=X2; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,X2,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+20]!=x[jvj+22])) goto l7;
A=V34;
B=V43;
S=68;
pile[v[22]]=110; pile[WZ1]=B; pile[WZ2]=140; pile[WZ3]=A; pile[WZ4]=jvj+23; 
(*f[1385])( );     /*QUADRI16(110,B,140,A,jvj+23)*/
pile[v[22]]=jvj+13; pile[WZ1]=159; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+13,159,jvj+23)*/
l8:if(x[RES]==incon) goto l9;
l27:v[0]=jvj; v[22]-=3; return;
l1:x[RES]=135 ;z[RES]=135;
goto l28;
l4:x[jvj+3]=s[x[jvj+34]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+34];
pile[v[22]]=jvj+3; pile[WZ1]=X1; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(jvj+3,X1,jvj+4)*/
for(i=x[jvj+4],V11=0;i>0;i=t[i],V11++)  ;
pile[WZ1]=X2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(jvj+3,X2,jvj+5)*/
for(i=x[jvj+5],V13=0;i>0;i=t[i],V13++)  ;
if((V11!=V13)) goto l5;
x[jvj+34]=t[x[jvj+34]];
goto l3;
l5:x[RES]=134 ;z[RES]=134;
goto l28;
l7:S=67;
goto l8;
l9:if(A!=incon) goto l10;
l17:pile[v[22]]=100; pile[WZ1]=X1; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,X1,jvj+27)*/
x[jvj+37]=w[x[jvj+27]][9];
l18:if((x[jvj+37]<=0)) goto l21;
x[jvj+28]=s[x[jvj+37]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+37];
if((S!=68)) goto l20;
if((x[jvj+28]==102)) goto l19;
l20:pile[v[22]]=jvj+28; pile[WZ1]=X1; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+28,X1,jvj+29)*/
pile[WZ1]=X2; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+28,X2,jvj+30)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=jvj+13; pile[WZ3]=jvj+31; 
(*f[2222])( );     /*MEMEM1(jvj+29,jvj+30,jvj+13,jvj+31)*/
if((x[jvj+31]==134)) goto l14;
l19:x[jvj+37]=t[x[jvj+37]];
goto l18;
l10:if(B!=incon) goto l11;
goto l17;
l11:pile[v[22]]=159; pile[WZ1]=jvj+13; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(159,jvj+13,jvj+24)*/
x[jvj+36]=x[jvj+24] ;z[jvj+36]=z[jvj+24];
l12:if((x[jvj+36]<=0)) goto l15;
x[jvj+25]=s[x[jvj+36]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+36];
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+25,V47)*/
V47=pile[WZ2]; 
if((V47!=A)) goto l13;
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(110,jvj+25,V48)*/
V48=pile[WZ2]; 
if((V48!=B)) goto l14;
l13:x[jvj+36]=t[x[jvj+36]];
goto l12;
l14:x[RES]=134 ;z[RES]=134;
goto l27;
l21:pile[v[22]]=100; pile[WZ1]=X1; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,X1,jvj+32)*/
x[jvj+38]=w[x[jvj+32]][8];
l22:if((x[jvj+38]<=0)) goto l26;
x[jvj+9]=s[x[jvj+38]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+38];
pile[v[22]]=jvj+9; pile[WZ1]=X1; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(jvj+9,X1,jvj+33)*/
x[jvj+39]=x[jvj+33] ;z[jvj+39]=z[jvj+33];
l23:if((x[jvj+39]>0)) goto l24;
x[jvj+38]=t[x[jvj+38]];
goto l22;
l24:x[jvj+11]=s[x[jvj+39]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+39];
pile[v[22]]=jvj+9; pile[WZ1]=X2; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(jvj+9,X2,jvj+10)*/
x[jvj+35]=x[jvj+10] ;z[jvj+35]=z[jvj+10];
l6:if((x[jvj+35]<=0)) goto l14;
x[jvj+12]=s[x[jvj+35]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+35];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; pile[WZ3]=jvj+14; 
(*f[2222])( );     /*MEMEM1(jvj+11,jvj+12,jvj+13,jvj+14)*/
if((x[jvj+14]==135)) goto l25;
x[jvj+35]=t[x[jvj+35]];
goto l6;
l25:x[jvj+39]=t[x[jvj+39]];
goto l23;
l26:x[RES]=135 ;z[RES]=135;
goto l27;
l15:if((x[jvj+24]<=0)) goto l17;
x[jvj+26]=s[x[jvj+24]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+24];
pile[v[22]]=110; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(110,jvj+26,V52)*/
V52=pile[WZ2]; 
if((V52!=B)) goto l16;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+26,V51)*/
V51=pile[WZ2]; 
if((V51!=A)) goto l14;
l16:x[jvj+24]=t[x[jvj+24]];
goto l15;
}
