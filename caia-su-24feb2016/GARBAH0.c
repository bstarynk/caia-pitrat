#include "dx.h"
void GARBAH0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V7=0,V4=0,V1=0,V2=0,BL=0,V23=0,V22=0,V21=0,V34=0,V39=0,V38=0,V51=0,V48=0,V47=0,V49=0,V50=0,V63=0,V60=0,V59=0,V61=0,V62=0;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );


WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=vo[36];z[jvj+1]=vz[36];
V7=s[x[jvj+1]];
if((V7==68)) goto l2;
if((V7!=67)) goto l3;
if((x[jvj+1]==250)) goto l3;
s[x[jvj+1]]=144;
l3:v[5]=1;
V4=sepcte+1;
l4:if((V4<=v[0])) goto l6;
x[jvj+2]=vo[20];z[jvj+2]=vz[20];
pile[v[22]]=252; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(252,jvj+2,jvj+3)*/
l7:if((x[jvj+3]>0)) goto l8;
V23=sepbase+1;
l9:if((V23<=sepcte)) goto l11;
V34=1;
l13:if((V34<=sepcte)) goto l15;
v[5]=0;
v[0]=jvj; return;
l1:s[V2]=230;
l5:V4++;
goto l4;
l2:if((x[jvj+1]==250)) goto l3;
s[x[jvj+1]]=230;
goto l3;
l6:V1=x[V4];
if((V1<=sepbase)) goto l5;
V2=z[V4];
if((V2<=sepbase)) goto l5;
V5=s[V2];
if((V5==68)) goto l1;
if((V5!=67)) goto l5;
s[V2]=144;
goto l5;
l8:BL=s[x[jvj+3]];
s[BL]=230;
x[jvj+3]=t[x[jvj+3]];
goto l7;
l11:V22=r[V23];
if((V22!=1)) goto l10;
x[jvj+6]=V23 ;z[jvj+6]=(V23<=sepcte) ? V23 : 0;
V21=s[x[jvj+6]];
if((V21==67)) goto l17;
if((V21!=68)) goto l10;
if(x[jvj+6]==10547||x[jvj+6]==10169) goto l10;
x[jvj+4]=vo[20];z[jvj+4]=vz[20];
pile[v[22]]=301; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(301,jvj+4,jvj+5)*/
if((x[jvj+5]!=68)) goto l10;
pile[v[22]]=jvj+6; 
(*f[670])( );     /*STR0(jvj+6)*/
s[x[jvj+6]]=66;
V63=t[x[jvj+6]];
V60=r[V63];
if((V60==2)) goto l21;
if((V60!=3)) goto l10;
t[V63]=0;
l10:V23++;
goto l9;
l15:V39=r[V34];
if((V39!=1)) goto l14;
V38=s[V34];
if((V38==230)) goto l16;
if((V38!=144)) goto l14;
s[V34]=67;
l14:V34++;
goto l13;
l16:s[V34]=68;
goto l14;
l17:V51=t[x[jvj+6]];
V48=r[V51];
if((V48==2)) goto l19;
if((V48!=3)) goto l12;
t[V51]=0;
l12:s[x[jvj+6]]=66;
goto l10;
l18:t[V49]=0;
goto l12;
l19:V50=t[V51];
V49=t[V50];
V47=r[V49];
if((V47==4)) goto l18;
t[V50]=0;
goto l12;
l20:t[V61]=0;
goto l10;
l21:V62=t[V63];
V61=t[V62];
V59=r[V61];
if((V59==4)) goto l20;
t[V62]=0;
goto l10;
}
