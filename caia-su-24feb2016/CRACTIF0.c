#include "dx.h"
void CRACTIF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V2=0,V3=0,V6=0,F=0,V33=0,V31=0,V32=0,V35=0,V53=0,V51=0,V52=0,V55=0,V43=0,V38=0;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=37;
x[jvj+1]=10610;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==453&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(1484,854,V4)*/
V4=pile[WZ2]; 
V2=sepfacts+1;
V3=sepfacts+V4;
l1:if((V2>V3)) goto l12;
V6=r[V2];
if((V6!=1)) goto l2;
x[jvj+2]=V2 ;z[jvj+2]=(V2<=sepcte) ? V2 : 0;
pile[v[22]]=963; pile[WZ1]=jvj+2; 
(*f[71])( );     /*ENLV0(963,jvj+2)*/
l2:V2++;
goto l1;
l4:x[jvj+5]=s[x[jvj+32]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+32];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=42)) goto l5;
pile[v[22]]=105; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(105,jvj+5,jvj+7)*/
x[jvj+33]=x[jvj+7] ;z[jvj+33]=z[jvj+7];
l6:if((x[jvj+33]<=0)) goto l5;
x[jvj+8]=s[x[jvj+33]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+33];
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=73)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+8,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+10,jvj+11)*/
F=x[jvj+11];
if(F==580||F==576) goto l15;
l7:x[jvj+33]=t[x[jvj+33]];
goto l6;
l5:x[jvj+32]=t[x[jvj+32]];
l3:if((x[jvj+32]>0)) goto l4;
pile[v[22]]=184; pile[WZ1]=jvj+3; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(184,jvj+3,jvj+12)*/
x[jvj+34]=x[jvj+12] ;z[jvj+34]=z[jvj+12];
l8:if((x[jvj+34]<=0)) goto l14;
x[jvj+13]=s[x[jvj+34]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+34];
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=42)) goto l9;
pile[v[22]]=105; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(105,jvj+13,jvj+15)*/
x[jvj+35]=x[jvj+15] ;z[jvj+35]=z[jvj+15];
l10:if((x[jvj+35]<=0)) goto l9;
x[jvj+16]=s[x[jvj+35]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+35];
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=73)) goto l11;
pile[v[22]]=102; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+16,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=489)) goto l11;
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+16,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]==902)) goto l15;
l11:x[jvj+35]=t[x[jvj+35]];
goto l10;
l9:x[jvj+34]=t[x[jvj+34]];
goto l8;
l12:pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(1484,854,V33)*/
V33=pile[WZ2]; 
V31=sepfacts+1;
V32=sepfacts+V33;
l13:if((V31>V32)) goto l16;
V35=r[V31];
if((V35!=1)) goto l14;
x[jvj+3]=V31 ;z[jvj+3]=(V31<=sepcte) ? V31 : 0;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+22; 
(*f[813])( );     /*FACILE0(jvj+3,jvj+22)*/
if((x[jvj+22]==134)) goto l15;
pile[v[22]]=184; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(184,jvj+3,jvj+4)*/
x[jvj+32]=x[jvj+4] ;z[jvj+32]=z[jvj+4];
goto l3;
l15:pile[v[22]]=jvj+3; pile[WZ1]=963; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+3,963,68)*/
l14:V31++;
goto l13;
l16:pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(1484,854,V53)*/
V53=pile[WZ2]; 
V51=sepfacts+1;
V52=sepfacts+V53;
l17:if((V51>V52)) goto l23;
V55=r[V51];
if((V55!=1)) goto l18;
x[jvj+23]=V51 ;z[jvj+23]=(V51<=sepcte) ? V51 : 0;
pile[v[22]]=184; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(184,jvj+23,jvj+24)*/
x[jvj+36]=x[jvj+24] ;z[jvj+36]=z[jvj+24];
l19:if((x[jvj+36]<=0)) goto l18;
x[jvj+25]=s[x[jvj+36]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+36];
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]!=42)) goto l20;
pile[v[22]]=105; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(105,jvj+25,jvj+27)*/
for(i=x[jvj+27],V43=0;i>0;i=t[i],V43++)  ;
if((V43!=1)) goto l20;
x[jvj+37]=x[jvj+27] ;z[jvj+37]=z[jvj+27];
l21:if((x[jvj+37]<=0)) goto l20;
x[jvj+28]=s[x[jvj+37]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+37];
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+28,jvj+29)*/
if((x[jvj+29]!=73)) goto l22;
pile[v[22]]=111; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+28,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+30,jvj+31)*/
V38=x[jvj+31];
if(V38!=634&&V38!=906&&V38!=1086) goto l22;
pile[v[22]]=jvj+23; pile[WZ1]=963; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+23,963,67)*/
l22:x[jvj+37]=t[x[jvj+37]];
goto l21;
l18:V51++;
goto l17;
l20:x[jvj+36]=t[x[jvj+36]];
goto l19;
l23:x[jvj+1]=incon; v[0]=jvj; return;
}
