#include "dx.h"
void TRPREM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Q=0,V18=0,V12=0,K=0,N=0,V20=0,V14=0,NN=0;
int A;
int EP;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=11309;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3633&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; EP=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,A,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=486)) goto l1;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,A,jvj+4)*/
l5:x[jvj+16]=x[jvj+4] ;z[jvj+16]=z[jvj+4];
l3:if((x[jvj+16]>0)) goto l4;
x[jvj+12]=0 ;z[jvj+12]=0;
x[jvj+17]=x[jvj+4] ;z[jvj+17]=z[jvj+4];
l9:if((x[jvj+17]>0)) goto l10;
x[EP]=x[jvj+12] ;z[EP]=z[jvj+12];
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:pile[v[22]]=20; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[409])( );     /*TRI14(20,A,jvj+4)*/
goto l5;
l4:x[jvj+5]=s[x[jvj+16]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+16];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]==41)) goto l6;
l2:pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+5,jvj+7)*/
if((x[jvj+7]==484)) goto l6;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l6:x[jvj+16]=t[x[jvj+16]];
goto l3;
l8:Q=s[V18];
if((Q<0)) goto l15;
V18=t[V18];
l7:if((V18>0)) goto l8;
NN=V14;
pile[v[22]]=jvj+12; pile[WZ1]=NN; 
(*f[207])( );     /*PLUE2(jvj+12,NN)*/
l15:x[jvj+18]=t[x[jvj+18]];
l14:if((x[jvj+18]<=0)) goto l11;
x[jvj+8]=s[x[jvj+18]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+18];
pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(117,jvj+8,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=195; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(195,jvj+8,jvj+9)*/
V18=x[jvj+9];
goto l7;
l10:x[jvj+10]=s[x[jvj+17]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+17];
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+10,V12)*/
V12=pile[WZ2]; 
K=V12;
if((K==0)) goto l13;
pile[v[22]]=K; pile[WZ1]=jvj+11; 
(*f[992])( );if(v[102]) goto l13;     /*FACTPREM0(K,jvj+11)*/
V20=x[jvj+11];
l12:if((V20<=0)) goto l13;
N=s[V20];
pile[v[22]]=jvj+12; pile[WZ1]=N; 
(*f[207])( );     /*PLUE2(jvj+12,N)*/
V20=t[V20];
goto l12;
l11:x[jvj+17]=t[x[jvj+17]];
goto l9;
l13:pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+10,jvj+13)*/
if((x[jvj+13]!=484)) goto l11;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+14; 
(*f[200])( );if(v[102]) goto l11;     /*NDD0(jvj+10,jvj+14)*/
pile[v[22]]=1310; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1310,jvj+14,jvj+15)*/
x[jvj+18]=x[jvj+15] ;z[jvj+18]=z[jvj+15];
goto l14;
}
