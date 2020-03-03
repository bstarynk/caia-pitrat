#include "dx.h"
void CRESPENS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,NK=0,V9=0,V17=0,V28=0,T=0,V42=0,V27=0,V36=0;
int P,A,MM,G;
int S;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=11442;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3636&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; A=pile[v[22]+1]; MM=pile[v[22]+2]; G=pile[v[22]+3]; S=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=A; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(A,jvj+2)*/
x[jvj+3]=d[126];z[jvj+3]=0;
l1:if((x[jvj+2]>0)) goto l2;
x[jvj+36]=x[jvj+10] ;z[jvj+36]=z[jvj+10];
if((x[jvj+36]!=0)) goto l6;
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,A,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=A; pile[WZ4]=jvj+15; 
(*f[567])( );     /*QUADRI11(117,1,218,A,jvj+15)*/
pile[v[22]]=20; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[409])( );     /*TRI14(20,jvj+15,jvj+16)*/
l19:if((G>0)) goto l15;
if((G==0)) goto l10;
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l2:x[jvj+4]=s[x[jvj+2]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+2];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[1290])( );if(v[102]) goto l3;     /*DEPEXP0(jvj+4,jvj+5)*/
x[jvj+6]=x[jvj+5] ;z[jvj+6]=z[jvj+5];
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+7,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+6,jvj+8)*/
pile[v[22]]=A; pile[WZ1]=V5; 
(*f[3719])( );if(v[102]) goto l3;     /*CPTOCCURVAR0(A,V5,jvj+8,NK)*/
NK=pile[WZ3]; 
pile[v[22]]=117; pile[WZ1]=NK; pile[WZ2]=218; pile[WZ3]=jvj+6; pile[WZ4]=jvj+9; 
(*f[567])( );     /*QUADRI11(117,NK,218,jvj+6,jvj+9)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[196])( );     /*PLUF0(jvj+3,jvj+9,jvj+10)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+14]=s[x[jvj+35]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+35];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+14)*/
x[jvj+35]=t[x[jvj+35]];
l4:if((x[jvj+35]>0)) goto l5;
x[jvj+16]=x[jvj+13] ;z[jvj+16]=z[jvj+13];
goto l19;
l6:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,A,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=486)) goto l9;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,A,jvj+19)*/
l7:if((x[jvj+19]<=0)) goto l9;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+20,V17)*/
V17=pile[WZ2]; 
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+11]=d[126];z[jvj+11]=0;
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=jvj+20; pile[WZ4]=jvj+12; 
(*f[567])( );     /*QUADRI11(117,1,218,jvj+20,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[196])( );     /*PLUF0(jvj+11,jvj+12,jvj+13)*/
x[jvj+35]=x[jvj+36] ;z[jvj+35]=z[jvj+36];
goto l4;
l8:x[jvj+19]=t[x[jvj+19]];
goto l7;
l9:x[jvj+16]=x[jvj+36] ;z[jvj+16]=z[jvj+36];
goto l19;
l10:x[jvj+25]=0 ;z[jvj+25]=0;
x[jvj+37]=x[jvj+16] ;z[jvj+37]=z[jvj+16];
l12:if((x[jvj+37]>0)) goto l13;
x[S]=x[jvj+25] ;z[S]=z[jvj+25];
l20:pile[v[22]]=S; 
(*f[1809])( );     /*NUMEROTENS3(S)*/
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
l13:x[jvj+21]=s[x[jvj+37]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+37];
pile[v[22]]=218; pile[WZ1]=jvj+21; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(218,jvj+21,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=P; pile[WZ2]=MM; pile[WZ3]=jvj+24; 
(*f[4009])( );if(v[102]) goto l14;     /*FACTELT0(jvj+23,P,MM,jvj+24)*/
x[jvj+22]=0 ;z[jvj+22]=0;
pile[v[22]]=117; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(117,jvj+21,V28)*/
V28=pile[WZ2]; 
V42=x[jvj+24];
l11:if((V42<=0)) goto l23;
T=s[V42];
V27=V28*T;
pile[v[22]]=jvj+22; pile[WZ1]=V27; 
(*f[207])( );     /*PLUE2(jvj+22,V27)*/
V42=t[V42];
goto l11;
l15:x[jvj+30]=0 ;z[jvj+30]=0;
x[jvj+38]=x[jvj+16] ;z[jvj+38]=z[jvj+16];
l16:if((x[jvj+38]>0)) goto l17;
x[S]=x[jvj+30] ;z[S]=z[jvj+30];
goto l20;
l17:x[jvj+27]=s[x[jvj+38]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+38];
pile[v[22]]=117; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(117,jvj+27,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(218,jvj+27,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=P; pile[WZ2]=MM; pile[WZ3]=jvj+29; 
(*f[4009])( );if(v[102]) goto l18;     /*FACTELT0(jvj+28,P,MM,jvj+29)*/
pile[WZ1]=218; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+28,218,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+29; pile[WZ2]=195; pile[WZ3]=jvj+34; 
(*f[301])( );     /*TRI11(jvj+33,jvj+29,195,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=V36; pile[WZ2]=117; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+34,V36,117,jvj+31)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[68])( );     /*PLUE0(jvj+30,jvj+31)*/
l18:x[jvj+38]=t[x[jvj+38]];
goto l16;
l23:pile[v[22]]=jvj+23; pile[WZ1]=218; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+23,218,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+22; pile[WZ2]=195; pile[WZ3]=jvj+26; 
(*f[301])( );     /*TRI11(jvj+32,jvj+22,195,jvj+26)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+26)*/
l14:x[jvj+37]=t[x[jvj+37]];
goto l12;
}
