#include "dx.h"
void MONTECONTR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V25=0,N=0,V23=0,KK=0,V1=0,M=0,V2=0,NT=0,V3=0,V6=0,V4=0,V7=0,V10=0,V8=0,V11=0,V14=0,V12=0,V15=0,V18=0,V16=0,V19=0,V22=0,V20=0,V26=0,V27=0,V31=0,V32=0,V36=0,V37=0,V41=0,V42=0,V46=0,V47=0,V49=0;
int K,T;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=10;
if(v[0]>99700) (*f[6])( );

K=pile[v[22]]; T=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V25=tt[K];
if((x[T]!=68)) goto l11;
N=999999;
V23=tu[K];
if((V23!=0)) goto l11;
tu[K]=N;
KK=K;
V1=tm[KK];
M=V1;
if((M>0)) goto l1;
if((M!=0)) goto l10;
V26=ta1[KK];
if((V26<=sepcte)) goto l6;
x[jvj+6]=V26 ;z[jvj+6]=(V26<=sepcte) ? V26 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+6,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=KK; 
(*f[1581])( );     /*MONTECONTR1(V27,KK)*/
l6:V31=ta2[KK];
if((V31<=sepcte)) goto l7;
x[jvj+7]=V31 ;z[jvj+7]=(V31<=sepcte) ? V31 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+7,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=KK; 
(*f[1581])( );     /*MONTECONTR1(V32,KK)*/
l7:V36=ta3[KK];
if((V36<=sepcte)) goto l8;
x[jvj+8]=V36 ;z[jvj+8]=(V36<=sepcte) ? V36 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+8,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=KK; 
(*f[1581])( );     /*MONTECONTR1(V37,KK)*/
l8:V41=ta4[KK];
if((V41<=sepcte)) goto l9;
x[jvj+9]=V41 ;z[jvj+9]=(V41<=sepcte) ? V41 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+9,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=KK; 
(*f[1581])( );     /*MONTECONTR1(V42,KK)*/
l9:V46=ta5[KK];
if((V46<=sepcte)) goto l10;
x[jvj+10]=V46 ;z[jvj+10]=(V46<=sepcte) ? V46 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+10,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=KK; 
(*f[1581])( );     /*MONTECONTR1(V47,KK)*/
l10:V49=tn[KK];
if((V49<=0)) goto l11;
pile[v[22]]=V49; pile[WZ1]=KK; 
(*f[1581])( );     /*MONTECONTR1(V49,KK)*/
l11:v[0]=jvj; v[22]-=2; return;
l1:V2=knd[M];
NT=V2;
V3=tnd[M][0];
if((V3!=20)) goto l2;
if((NT<=0)) goto l2;
V6=ta1[KK];
x[jvj+1]=V6 ;z[jvj+1]=(V6<=sepcte) ? V6 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(642,jvj+1,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=KK; 
(*f[1581])( );     /*MONTECONTR1(V4,KK)*/
l2:V7=tnd[M][1];
if((V7!=20)) goto l3;
if((NT<=1)) goto l3;
V10=ta2[KK];
x[jvj+2]=V10 ;z[jvj+2]=(V10<=sepcte) ? V10 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+2,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=KK; 
(*f[1581])( );     /*MONTECONTR1(V8,KK)*/
l3:V11=tnd[M][2];
if((V11!=20)) goto l4;
if((NT<=2)) goto l4;
V14=ta3[KK];
x[jvj+3]=V14 ;z[jvj+3]=(V14<=sepcte) ? V14 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+3,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=KK; 
(*f[1581])( );     /*MONTECONTR1(V12,KK)*/
l4:V15=tnd[M][3];
if((V15!=20)) goto l5;
if((NT<=3)) goto l5;
V18=ta4[KK];
x[jvj+4]=V18 ;z[jvj+4]=(V18<=sepcte) ? V18 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,jvj+4,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=KK; 
(*f[1581])( );     /*MONTECONTR1(V16,KK)*/
l5:V19=tnd[M][4];
if((V19!=20)) goto l10;
if((NT<=4)) goto l10;
V22=ta5[KK];
x[jvj+5]=V22 ;z[jvj+5]=(V22<=sepcte) ? V22 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+5,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=KK; 
(*f[1581])( );     /*MONTECONTR1(V20,KK)*/
goto l10;
}
