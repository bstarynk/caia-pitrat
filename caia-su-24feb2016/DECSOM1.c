#include "dx.h"
void DECSOM1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,V7=0,V28=0,V27=0,V29=0;
int R,E,H;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=21;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; E=pile[v[22]+1]; H=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,R,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=485)) goto l3;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,R,jvj+6)*/
l2:if((x[jvj+6]<=0)) goto l3;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=H; pile[WZ2]=jvj+8; 
(*f[1667])( );     /*DECOMP0(jvj+7,H,jvj+8,N)*/
N=pile[WZ3]; 
pile[v[22]]=117; pile[WZ1]=N; pile[WZ2]=218; pile[WZ3]=jvj+8; pile[WZ4]=jvj+9; 
(*f[567])( );     /*QUADRI11(117,N,218,jvj+8,jvj+9)*/
pile[v[22]]=E; pile[WZ1]=jvj+9; 
(*f[522])( );     /*PLUB2(E,jvj+9)*/
x[jvj+6]=t[x[jvj+6]];
goto l2;
l3:if(x[jvj+5]!=25&&x[jvj+5]!=26&&x[jvj+5]!=29&&x[jvj+5]!=30&&x[jvj+5]!=27&&x[jvj+5]!=28&&x[jvj+5]!=625) goto l1;
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,R,jvj+10)*/
if((x[jvj+10]!=22)) goto l1;
pile[v[22]]=102; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,R,jvj+11)*/
pile[v[22]]=103; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,R,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=E; pile[WZ2]=H; 
(*f[1668])( );     /*DECSOM1(jvj+11,E,H)*/
pile[v[22]]=jvj+12; 
(*f[1668])( );     /*DECSOM1(jvj+12,E,H)*/
l1:pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,R,jvj+1)*/
if((x[jvj+1]!=22)) goto l4;
pile[v[22]]=111; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+2,jvj+3)*/
if(x[jvj+3]==25||x[jvj+3]==26||x[jvj+3]==29||x[jvj+3]==30||x[jvj+3]==27||x[jvj+3]==28||x[jvj+3]==625||x[jvj+3]==485) goto l5;
l4:pile[v[22]]=R; pile[WZ1]=H; pile[WZ2]=jvj+13; 
(*f[1667])( );     /*DECOMP0(R,H,jvj+13,V7)*/
V7=pile[WZ3]; 
pile[v[22]]=117; pile[WZ1]=V7; pile[WZ2]=218; pile[WZ3]=jvj+13; pile[WZ4]=jvj+14; 
(*f[567])( );     /*QUADRI11(117,V7,218,jvj+13,jvj+14)*/
pile[v[22]]=E; pile[WZ1]=jvj+14; 
(*f[522])( );     /*PLUB2(E,jvj+14)*/
l5:x[jvj+20]=x[E] ;z[jvj+20]=z[E];
l6:if((x[jvj+20]>0)) goto l7;
v[0]=jvj; v[22]-=3; return;
l7:x[jvj+15]=s[x[jvj+20]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+20];
pile[v[22]]=117; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+15,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(218,jvj+15,jvj+16)*/
x[jvj+21]=t[x[jvj+20]];
l8:if((x[jvj+21]<=0)) goto l11;
x[jvj+17]=s[x[jvj+21]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+21];
pile[v[22]]=117; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+17,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=V28; 
(*f[1025])( );if(v[102]) goto l9;     /*POSOM0(V27,V28,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=218; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(218,jvj+17,jvj+18)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[760])( );     /*MEMEX0(jvj+16,jvj+18,jvj+19)*/
if((x[jvj+19]==135)) goto l10;
l9:x[jvj+21]=t[x[jvj+21]];
goto l8;
l10:pile[v[22]]=E; pile[WZ1]=jvj+17; 
(*f[1670])( );     /*OUTER3(E,jvj+17)*/
pile[v[22]]=H; pile[WZ1]=447; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(H,447,68)*/
pile[v[22]]=jvj+15; pile[WZ1]=117; pile[WZ2]=V29; 
(*f[43])( );     /*CHGC2(jvj+15,117,V29)*/
goto l5;
l11:x[jvj+20]=t[x[jvj+20]];
goto l6;
}
