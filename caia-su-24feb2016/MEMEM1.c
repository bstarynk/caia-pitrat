#include "dx.h"
void MEMEM1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V13=0,V53=0,V21=0,V55=0,V24=0,V34=0,V43=0,A=0,B=0,S=0,V47=0,V48=0,V52=0,V51=0;
int X1,X2,T;
int RES;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=37;
if(v[0]>99700) (*f[6])( );

X1=pile[v[22]]; X2=pile[v[22]+1]; T=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RES]=A=B=incon;
if((x[X1]==x[X2])) goto l2;
pile[v[22]]=100; pile[WZ1]=X1; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,X1,jvj+6)*/
pile[WZ1]=X2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,X2,jvj+7)*/
if((x[jvj+6]!=x[jvj+7])) goto l3;
l4:x[jvj+34]=w[x[jvj+6]][8];
x[jvj+33]=x[jvj+34] ;z[jvj+33]=z[jvj+34];
l5:if((x[jvj+33]<=0)) goto l6;
x[jvj+8]=s[x[jvj+33]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+33];
pile[v[22]]=jvj+8; pile[WZ1]=X1; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(jvj+8,X1,jvj+9)*/
for(i=x[jvj+9],V11=0;i>0;i=t[i],V11++)  ;
pile[WZ1]=X2; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(jvj+8,X2,jvj+10)*/
for(i=x[jvj+10],V13=0;i>0;i=t[i],V13++)  ;
if((V11!=V13)) goto l3;
x[jvj+33]=t[x[jvj+33]];
goto l5;
l2:x[RES]=135 ;z[RES]=135;
l11:pile[v[22]]=100; pile[WZ1]=X1; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,X1,jvj+15)*/
if((x[jvj+15]!=22)) goto l12;
pile[WZ1]=X2; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,X2,jvj+16)*/
if((x[jvj+16]!=22)) goto l12;
pile[v[22]]=102; pile[WZ1]=X1; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X1,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+17,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X2; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X2,jvj+18)*/
pile[v[22]]=140; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+18,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X1; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,X1,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+19,jvj+20)*/
if(x[jvj+20]!=650&&x[jvj+20]!=649&&x[jvj+20]!=651&&x[jvj+20]!=654) goto l12;
pile[v[22]]=111; pile[WZ1]=X2; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,X2,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+20]!=x[jvj+22])) goto l12;
A=V34;
B=V43;
S=68;
pile[v[22]]=110; pile[WZ1]=B; pile[WZ2]=140; pile[WZ3]=A; pile[WZ4]=jvj+23; 
(*f[1385])( );     /*QUADRI16(110,B,140,A,jvj+23)*/
pile[v[22]]=T; pile[WZ1]=159; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(T,159,jvj+23)*/
l13:if(x[RES]==incon) goto l14;
l27:v[0]=jvj; v[22]-=4; return;
l3:x[RES]=134 ;z[RES]=134;
goto l11;
l7:x[jvj+1]=s[x[jvj+34]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+34];
pile[v[22]]=jvj+1; pile[WZ1]=X1; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(jvj+1,X1,jvj+11)*/
x[jvj+35]=x[jvj+11] ;z[jvj+35]=z[jvj+11];
l8:if((x[jvj+35]>0)) goto l9;
x[jvj+34]=t[x[jvj+34]];
l6:if((x[jvj+34]>0)) goto l7;
if((x[jvj+12]=w[x[jvj+6]][3])==incon) goto l11;
pile[v[22]]=X1; pile[WZ1]=jvj+12; pile[WZ3]=jvj+13; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(X1,jvj+12,V53,jvj+13)*/
V53=pile[WZ2]; 
V21=V53;
pile[v[22]]=X2; pile[WZ3]=jvj+14; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(X2,jvj+12,V55,jvj+14)*/
V55=pile[WZ2]; 
V24=V55;
if((V21!=V24)) goto l3;
goto l11;
l9:x[jvj+3]=s[x[jvj+35]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+35];
pile[v[22]]=jvj+1; pile[WZ1]=X2; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(jvj+1,X2,jvj+2)*/
x[jvj+32]=x[jvj+2] ;z[jvj+32]=z[jvj+2];
l1:if((x[jvj+32]<=0)) goto l3;
x[jvj+4]=s[x[jvj+32]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+32];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=T; pile[WZ3]=jvj+5; 
(*f[2222])( );     /*MEMEM1(jvj+3,jvj+4,T,jvj+5)*/
if((x[jvj+5]==135)) goto l10;
x[jvj+32]=t[x[jvj+32]];
goto l1;
l10:x[jvj+35]=t[x[jvj+35]];
goto l8;
l12:S=67;
goto l13;
l14:if(A!=incon) goto l15;
l22:pile[v[22]]=100; pile[WZ1]=X1; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,X1,jvj+27)*/
x[jvj+37]=w[x[jvj+27]][9];
l23:if((x[jvj+37]<=0)) goto l26;
x[jvj+28]=s[x[jvj+37]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+37];
if((S!=68)) goto l25;
if((x[jvj+28]==102)) goto l24;
l25:pile[v[22]]=jvj+28; pile[WZ1]=X1; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+28,X1,jvj+29)*/
pile[WZ1]=X2; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+28,X2,jvj+30)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=T; pile[WZ3]=jvj+31; 
(*f[2222])( );     /*MEMEM1(jvj+29,jvj+30,T,jvj+31)*/
if((x[jvj+31]==134)) goto l19;
l24:x[jvj+37]=t[x[jvj+37]];
goto l23;
l15:if(B!=incon) goto l16;
goto l22;
l16:pile[v[22]]=159; pile[WZ1]=T; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(159,T,jvj+24)*/
x[jvj+36]=x[jvj+24] ;z[jvj+36]=z[jvj+24];
l17:if((x[jvj+36]<=0)) goto l20;
x[jvj+25]=s[x[jvj+36]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+36];
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+25,V47)*/
V47=pile[WZ2]; 
if((V47!=A)) goto l18;
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(110,jvj+25,V48)*/
V48=pile[WZ2]; 
if((V48!=B)) goto l19;
l18:x[jvj+36]=t[x[jvj+36]];
goto l17;
l19:x[RES]=134 ;z[RES]=134;
goto l27;
l26:x[RES]=135 ;z[RES]=135;
goto l27;
l20:if((x[jvj+24]<=0)) goto l22;
x[jvj+26]=s[x[jvj+24]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+24];
pile[v[22]]=110; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(110,jvj+26,V52)*/
V52=pile[WZ2]; 
if((V52!=B)) goto l21;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+26,V51)*/
V51=pile[WZ2]; 
if((V51!=A)) goto l19;
l21:x[jvj+24]=t[x[jvj+24]];
goto l20;
}
