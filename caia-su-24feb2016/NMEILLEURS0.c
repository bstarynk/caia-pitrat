#include "dx.h"
void NMEILLEURS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int R=0,V7=0,V5=0,P=0,V4=0,V10=0,V12=0,V13=0,V19=0,V14=0,I=0;
int N,AT,E,EE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=25;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; AT=pile[v[22]+1]; E=pile[v[22]+2]; EE=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=0 ;z[jvj+3]=0;
x[jvj+19]=x[EE] ;z[jvj+19]=z[EE];
l3:if((x[jvj+19]>0)) goto l4;
x[jvj+25]=x[jvj+3] ;z[jvj+25]=z[jvj+3];
x[jvj+21]=x[jvj+25] ;z[jvj+21]=z[jvj+25];
l9:if((x[jvj+21]>0)) goto l10;
V12=(-999999);
x[jvj+23]=x[jvj+25] ;z[jvj+23]=z[jvj+25];
l15:if((x[jvj+23]>0)) goto l16;
if((V12==(-999999))) goto l24;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(0,117,jvj+10)*/
x[jvj+22]=x[jvj+25] ;z[jvj+22]=z[jvj+25];
l12:if((x[jvj+22]>0)) goto l13;
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(117,jvj+10,V10)*/
V10=pile[WZ2]; 
V14=N-V10;
if((V14<=0)) goto l24;
I=1;
l22:if((I>V14)) goto l24;
x[jvj+24]=x[jvj+25] ;z[jvj+24]=z[jvj+25];
l19:if((x[jvj+24]<=0)) goto l23;
x[jvj+13]=s[x[jvj+24]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+24];
pile[v[22]]=AT; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(AT,jvj+13,V19)*/
V19=pile[WZ2]; 
if((V19!=V12)) goto l20;
pile[v[22]]=191; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(191,jvj+13,jvj+14)*/
if((x[jvj+14]==68)) goto l20;
l21:pile[v[22]]=jvj+13; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+13,191,68)*/
l23:I++;
goto l22;
l2:x[jvj+2]=s[x[jvj+18]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+18];
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(0,416,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=20; pile[WZ2]=158; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+16,20,158,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=140; pile[WZ3]=(-7886); pile[WZ4]=jvj+17; pile[WZ5]=jvj+15; 
(*f[599])( );     /*QUADRI12(101,jvj+4,140,(-7886),jvj+17,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=(-20); pile[WZ2]=128; pile[WZ3]=jvj+1; 
(*f[180])( );     /*TRIENS0(jvj+15,(-20),128,jvj+1)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+1; 
(*f[30])( );if(v[102]) goto l5;     /*EVL0(jvj+2,jvj+1,R)*/
R=pile[WZ2]; 
if((R==135)) goto l5;
x[jvj+18]=t[x[jvj+18]];
l1:if((x[jvj+18]>0)) goto l2;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+4)*/
l5:x[jvj+19]=t[x[jvj+19]];
goto l3;
l4:x[jvj+4]=s[x[jvj+19]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+19];
x[jvj+18]=x[E] ;z[jvj+18]=z[E];
goto l1;
l7:x[jvj+5]=s[x[jvj+20]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+20];
pile[v[22]]=AT; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(AT,jvj+5,V7)*/
V7=pile[WZ2]; 
if((V7<P)) goto l8;
pile[v[22]]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+5)*/
l8:x[jvj+20]=t[x[jvj+20]];
l6:if((x[jvj+20]>0)) goto l7;
for(i=x[jvj+6],V4=0;i>0;i=t[i],V4++)  ;
if((V4>=N)) goto l11;
pile[v[22]]=jvj+7; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+7,191,68)*/
l11:x[jvj+21]=t[x[jvj+21]];
goto l9;
l10:x[jvj+7]=s[x[jvj+21]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+21];
pile[v[22]]=AT; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(AT,jvj+7,V5)*/
V5=pile[WZ2]; 
P=V5;
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+20]=x[jvj+25] ;z[jvj+20]=z[jvj+25];
goto l6;
l13:x[jvj+8]=s[x[jvj+22]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+22];
pile[v[22]]=191; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(191,jvj+8,jvj+9)*/
if((x[jvj+9]!=68)) goto l14;
pile[v[22]]=jvj+10; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+10,117,1)*/
l14:x[jvj+22]=t[x[jvj+22]];
goto l12;
l16:x[jvj+11]=s[x[jvj+23]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+23];
pile[v[22]]=191; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(191,jvj+11,jvj+12)*/
if((x[jvj+12]==68)) goto l17;
l18:pile[v[22]]=AT; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(AT,jvj+11,V13)*/
V13=pile[WZ2]; 
if(V13>V12) V12=V13;
l17:x[jvj+23]=t[x[jvj+23]];
goto l15;
l20:x[jvj+24]=t[x[jvj+24]];
goto l19;
l24:v[0]=jvj; v[22]-=4; return;
}
