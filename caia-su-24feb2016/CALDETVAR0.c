#include "dx.h"
void CALDETVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V9=0,K=0,V16=0,V15=0,V27=0,V22=0,V34=0;
int E;
int DD;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=38;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; DD=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+31]=0 ;z[jvj+31]=0;
x[DD]=x[jvj+31] ;z[DD]=z[jvj+31];
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+1]=d[77];z[jvj+1]=0;
x[jvj+28]=x[E] ;z[jvj+28]=z[E];
l1:if((x[jvj+28]>0)) goto l2;
x[jvj+38]=x[jvj+10] ;z[jvj+38]=z[jvj+10];
x[jvj+34]=x[jvj+38] ;z[jvj+34]=z[jvj+38];
l10:if((x[jvj+34]<=0)) goto l20;
x[jvj+11]=s[x[jvj+34]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+34];
pile[v[22]]=510; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(510,jvj+11,V16)*/
V16=pile[WZ2]; 
x[jvj+33]=x[jvj+38] ;z[jvj+33]=z[jvj+38];
l8:if((x[jvj+33]<=0)) goto l11;
x[jvj+12]=s[x[jvj+33]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+33];
if((x[jvj+12]==x[jvj+11])) goto l9;
pile[v[22]]=510; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(510,jvj+12,V15)*/
V15=pile[WZ2]; 
if((V15<V16)) goto l9;
x[jvj+34]=t[x[jvj+34]];
goto l10;
l2:x[jvj+2]=s[x[jvj+28]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+28];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=486)) goto l3;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+5)*/
for(i=x[jvj+5],V6=0;i>0;i=t[i],V6++)  ;
if((V6!=2)) goto l3;
x[jvj+29]=x[jvj+5] ;z[jvj+29]=z[jvj+5];
l4:if((x[jvj+29]<=0)) goto l3;
x[jvj+6]=s[x[jvj+29]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+29];
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+6,V9)*/
V9=pile[WZ2]; 
K=V9;
x[jvj+30]=x[jvj+5] ;z[jvj+30]=z[jvj+5];
l6:if((x[jvj+30]<=0)) goto l5;
x[jvj+7]=s[x[jvj+30]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+30];
if((x[jvj+6]==x[jvj+7])) goto l7;
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=484)) goto l7;
pile[v[22]]=447; pile[WZ1]=jvj+2; pile[WZ2]=510; pile[WZ3]=K; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(447,jvj+2,510,K,jvj+9)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[196])( );     /*PLUF0(jvj+1,jvj+9,jvj+10)*/
l7:x[jvj+30]=t[x[jvj+30]];
goto l6;
l3:x[jvj+28]=t[x[jvj+28]];
goto l1;
l5:x[jvj+29]=t[x[jvj+29]];
goto l4;
l9:x[jvj+33]=t[x[jvj+33]];
goto l8;
l11:x[jvj+20]=x[jvj+11] ;z[jvj+20]=z[jvj+11];
pile[v[22]]=510; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(510,jvj+20,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=447; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(447,jvj+20,jvj+21)*/
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+35]=x[E] ;z[jvj+35]=z[E];
l12:if((x[jvj+35]>0)) goto l13;
x[jvj+18]=0 ;z[jvj+18]=0;
x[jvj+37]=x[jvj+38] ;z[jvj+37]=z[jvj+38];
l17:if((x[jvj+37]>0)) goto l18;
x[jvj+17]=0 ;z[jvj+17]=0;
x[jvj+36]=x[jvj+13] ;z[jvj+36]=z[jvj+13];
l15:if((x[jvj+36]>0)) goto l16;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+17; pile[WZ2]=107; pile[WZ3]=jvj+27; 
(*f[301])( );     /*TRI11(jvj+26,jvj+17,107,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+27,22,100,jvj+22)*/
pile[v[22]]=jvj+22; 
(*f[1160])( );if(v[102]) goto l20;     /*SUP0(jvj+22,V22)*/
V22=pile[WZ1]; 
if((V22>=V27)) goto l20;
pile[v[22]]=DD; pile[WZ1]=jvj+21; 
(*f[68])( );     /*PLUE0(DD,jvj+21)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+13; pile[WZ2]=DD; 
(*f[1208])( );     /*CALDETVAR1(jvj+18,jvj+13,DD)*/
l20:for(i=x[E],V34=0;i>0;i=t[i],V34++)  ;
if((V34!=1)) goto l21;
x[jvj+32]=x[E] ;z[jvj+32]=z[E];
if((x[jvj+32]<=0)) goto l21;
x[jvj+23]=s[x[jvj+32]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+32];
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=484)) goto l21;
pile[v[22]]=DD; 
(*f[68])( );     /*PLUE0(DD,jvj+23)*/
l21:v[0]=jvj; v[22]-=2; return;
l13:x[jvj+14]=s[x[jvj+35]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+35];
if((x[jvj+14]==x[jvj+21])) goto l14;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+14)*/
l14:x[jvj+35]=t[x[jvj+35]];
goto l12;
l16:x[jvj+15]=s[x[jvj+36]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+36];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+16)*/
pile[v[22]]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+16)*/
x[jvj+36]=t[x[jvj+36]];
goto l15;
l18:x[jvj+19]=s[x[jvj+37]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+37];
if((x[jvj+19]==x[jvj+20])) goto l19;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+19)*/
l19:x[jvj+37]=t[x[jvj+37]];
goto l17;
}
