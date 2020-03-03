#include "dx.h"
void MEMEX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V25=0,V15=0,V27=0,V18=0,V10=0,V12=0,V23=0,V45=0,V28=0,V47=0,V30=0;
int A,B;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=42;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=x[jvj+1]=incon;
if((x[A]!=x[B])) goto l1;
x[R]=135 ;z[R]=135;
l1:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,A,jvj+1)*/
l11:if(x[R]==incon) goto l12;
l28:v[0]=jvj; v[22]-=3; return;
l3:x[jvj+8]=s[x[jvj+37]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+37];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[760])( );     /*MEMEX0(jvj+7,jvj+8,jvj+9)*/
if((x[jvj+9]==135)) goto l5;
l4:x[jvj+37]=t[x[jvj+37]];
l2:if((x[jvj+37]>0)) goto l3;
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+10,V25)*/
V25=pile[WZ2]; 
V15=V25;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+13; 
(*f[46])( );     /*TRI0(0,117,jvj+13)*/
x[jvj+38]=x[jvj+26] ;z[jvj+38]=z[jvj+26];
l6:if((x[jvj+38]>0)) goto l7;
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+13,V27)*/
V27=pile[WZ2]; 
V18=V27;
V23=V18+1;
if((V15!=V23)) goto l14;
l21:x[jvj+41]=t[x[jvj+41]];
l19:if((x[jvj+41]>0)) goto l20;
x[jvj+40]=t[x[jvj+40]];
l17:if((x[jvj+40]>0)) goto l18;
if((x[jvj+27]=w[x[jvj+1]][3])==incon) goto l22;
pile[v[22]]=A; pile[WZ1]=jvj+27; pile[WZ3]=jvj+28; 
(*f[45])( );if(v[102]) goto l22;     /*FNDZ0(A,jvj+27,V45,jvj+28)*/
V45=pile[WZ2]; 
V28=V45;
pile[v[22]]=B; pile[WZ3]=jvj+29; 
(*f[45])( );if(v[102]) goto l22;     /*FNDZ0(B,jvj+27,V47,jvj+29)*/
V47=pile[WZ2]; 
V30=V47;
if((V28!=V30)) goto l14;
l22:x[jvj+42]=w[x[jvj+1]][9];
l23:if((x[jvj+42]>0)) goto l24;
if((x[jvj+1]!=22)) goto l27;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,A,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+34,jvj+35)*/
pile[v[22]]=418; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(418,jvj+35,jvj+36)*/
if((x[jvj+36]!=68)) goto l27;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,A,jvj+14)*/
pile[v[22]]=103; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(103,A,jvj+17)*/
pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,B,jvj+15)*/
pile[v[22]]=103; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(103,B,jvj+18)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[760])( );     /*MEMEX0(jvj+14,jvj+15,jvj+16)*/
if((x[jvj+16]==134)) goto l10;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[760])( );     /*MEMEX0(jvj+17,jvj+18,jvj+19)*/
if((x[jvj+19]==134)) goto l10;
l27:x[R]=135 ;z[R]=135;
goto l28;
l5:pile[v[22]]=jvj+10; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+10,117,1)*/
goto l4;
l7:x[jvj+11]=s[x[jvj+38]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+38];
if((x[jvj+11]==x[jvj+7])) goto l8;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[760])( );     /*MEMEX0(jvj+7,jvj+11,jvj+12)*/
if((x[jvj+12]==135)) goto l9;
l8:x[jvj+38]=t[x[jvj+38]];
goto l6;
l9:pile[v[22]]=jvj+13; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+13,117,1)*/
goto l8;
l10:pile[v[22]]=jvj+14; pile[WZ1]=jvj+18; pile[WZ2]=jvj+20; 
(*f[760])( );     /*MEMEX0(jvj+14,jvj+18,jvj+20)*/
if((x[jvj+20]==134)) goto l14;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+15; pile[WZ2]=jvj+21; 
(*f[760])( );     /*MEMEX0(jvj+17,jvj+15,jvj+21)*/
if((x[jvj+21]==134)) goto l14;
goto l27;
l12:if(x[jvj+1]!=incon) goto l13;
goto l27;
l13:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,B,jvj+22)*/
if((x[jvj+1]!=x[jvj+22])) goto l14;
l15:x[jvj+40]=w[x[jvj+1]][8];
x[jvj+39]=x[jvj+40] ;z[jvj+39]=z[jvj+40];
l16:if((x[jvj+39]<=0)) goto l17;
x[jvj+23]=s[x[jvj+39]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+39];
pile[v[22]]=jvj+23; pile[WZ1]=A; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(jvj+23,A,jvj+24)*/
for(i=x[jvj+24],V10=0;i>0;i=t[i],V10++)  ;
pile[WZ1]=B; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(jvj+23,B,jvj+25)*/
for(i=x[jvj+25],V12=0;i>0;i=t[i],V12++)  ;
if((V10!=V12)) goto l14;
x[jvj+39]=t[x[jvj+39]];
goto l16;
l14:x[R]=134 ;z[R]=134;
goto l28;
l18:x[jvj+5]=s[x[jvj+40]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+40];
pile[v[22]]=jvj+5; pile[WZ1]=A; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(jvj+5,A,jvj+26)*/
x[jvj+41]=x[jvj+26] ;z[jvj+41]=z[jvj+26];
goto l19;
l20:x[jvj+7]=s[x[jvj+41]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+41];
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(0,117,jvj+10)*/
pile[v[22]]=jvj+5; pile[WZ1]=B; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(jvj+5,B,jvj+6)*/
x[jvj+37]=x[jvj+6] ;z[jvj+37]=z[jvj+6];
goto l2;
l24:x[jvj+30]=s[x[jvj+42]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+42];
if((x[jvj+1]!=22)) goto l26;
if(x[jvj+30]!=102&&x[jvj+30]!=103) goto l26;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,A,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+2,jvj+3)*/
pile[v[22]]=418; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(418,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l25;
l26:pile[v[22]]=jvj+30; pile[WZ1]=A; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+30,A,jvj+31)*/
pile[WZ1]=B; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+30,B,jvj+32)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[760])( );     /*MEMEX0(jvj+31,jvj+32,jvj+33)*/
if((x[jvj+33]==134)) goto l14;
l25:x[jvj+42]=t[x[jvj+42]];
goto l23;
}
