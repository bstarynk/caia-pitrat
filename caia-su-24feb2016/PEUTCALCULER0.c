#include "dx.h"
void PEUTCALCULER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,VV=0,V48=0,V19=0,V50=0,V35=0,V17=0,V8=0,V38=0;
int Q,E;
int RES;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=35;
if(v[0]>99700) (*f[6])( );

Q=pile[v[22]]; E=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RES]=x[jvj+6]=x[jvj+19]=x[jvj+5]=incon;
pile[v[22]]=Q; pile[WZ1]=jvj+1; 
(*f[703])( );     /*USW0(Q,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
x[RES]=135 ;z[RES]=135;
l4:pile[v[22]]=100; pile[WZ1]=Q; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,Q,jvj+2)*/
if((x[jvj+2]!=22)) goto l14;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,Q,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+3,jvj+4)*/
if(x[jvj+4]!=267&&x[jvj+4]!=1272&&x[jvj+4]!=156) goto l14;
pile[v[22]]=E; pile[WZ1]=jvj+5; 
(*f[195])( );     /*CPE0(E,jvj+5)*/
x[jvj+31]=0 ;z[jvj+31]=0;
pile[v[22]]=107; pile[WZ1]=Q; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,Q,jvj+6)*/
x[jvj+19]=x[jvj+31] ;z[jvj+19]=z[jvj+31];
l14:if(x[RES]==incon) goto l15;
l28:v[0]=jvj; v[22]-=3; return;
l2:V21=s[x[jvj+1]];
for(a=x[E];a>0;a=t[a]) if(s[a]==V21) goto l3;
goto l4;
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
l6:VV=s[V48];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==VV) goto l7;
l24:x[jvj+34]=t[x[jvj+34]];
l22:if((x[jvj+34]>0)) goto l23;
x[jvj+30]=0 ;z[jvj+30]=0;
x[jvj+35]=x[jvj+6] ;z[jvj+35]=z[jvj+6];
l25:if((x[jvj+35]<=0)) goto l27;
x[jvj+25]=s[x[jvj+35]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+35];
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==x[jvj+25]) goto l26;
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]!=22)) goto l26;
pile[v[22]]=111; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+25,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+27,jvj+28)*/
V38=x[jvj+28];
if(V38!=50&&V38!=55&&V38!=48) goto l26;
pile[v[22]]=107; pile[WZ1]=jvj+25; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(107,jvj+25,jvj+29)*/
pile[v[22]]=jvj+19; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+25)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=jvj+5; pile[WZ3]=RES; 
(*f[1812])( );     /*PEUTCALCULER1(jvj+29,jvj+30,jvj+5,RES)*/
goto l28;
l7:V48=t[V48];
l5:if((V48>0)) goto l6;
pile[v[22]]=jvj+5; pile[WZ1]=V17; 
(*f[331])( );     /*PLUE3(jvj+5,V17)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+20)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+19; pile[WZ2]=jvj+5; pile[WZ3]=RES; 
(*f[1812])( );     /*PEUTCALCULER1(jvj+6,jvj+19,jvj+5,RES)*/
goto l28;
l9:x[jvj+9]=s[x[jvj+32]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+32];
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l11;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[703])( );     /*USW0(jvj+9,jvj+10)*/
V50=x[jvj+10];
l12:if((V50<=0)) goto l11;
V19=s[V50];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V19) goto l13;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+11; 
(*f[195])( );     /*CPE0(jvj+5,jvj+11)*/
x[jvj+17]=0 ;z[jvj+17]=0;
x[jvj+33]=x[jvj+6] ;z[jvj+33]=z[jvj+6];
l18:if((x[jvj+33]>0)) goto l19;
x[jvj+34]=x[jvj+6] ;z[jvj+34]=z[jvj+6];
goto l22;
l10:x[jvj+32]=x[jvj+6] ;z[jvj+32]=z[jvj+6];
l8:if((x[jvj+32]>0)) goto l9;
x[RES]=135 ;z[RES]=135;
goto l28;
l11:x[jvj+32]=t[x[jvj+32]];
goto l8;
l13:V50=t[V50];
goto l12;
l15:if(x[jvj+6]!=incon) goto l16;
l27:x[RES]=134 ;z[RES]=134;
goto l28;
l16:if(x[jvj+19]!=incon) goto l17;
goto l27;
l17:if(x[jvj+5]!=incon) goto l10;
goto l27;
l19:x[jvj+12]=s[x[jvj+33]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+33];
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==x[jvj+12]) goto l20;
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=54)) goto l20;
pile[v[22]]=436; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(436,jvj+12,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+15,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; pile[WZ2]=jvj+11; pile[WZ3]=jvj+18; 
(*f[1812])( );     /*PEUTCALCULER1(jvj+16,jvj+17,jvj+11,jvj+18)*/
if((x[jvj+18]==135)) goto l21;
l20:x[jvj+33]=t[x[jvj+33]];
goto l18;
l21:pile[v[22]]=jvj+5; pile[WZ1]=V35; 
(*f[331])( );     /*PLUE3(jvj+5,V35)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+12)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+19; pile[WZ2]=jvj+5; pile[WZ3]=RES; 
(*f[1812])( );     /*PEUTCALCULER1(jvj+6,jvj+19,jvj+5,RES)*/
goto l28;
l23:x[jvj+20]=s[x[jvj+34]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+34];
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==x[jvj+20]) goto l24;
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=22)) goto l24;
pile[v[22]]=102; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,jvj+20,jvj+22)*/
pile[v[22]]=140; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(140,jvj+22,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+20,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+23,jvj+24)*/
V8=x[jvj+24];
if(V8!=25&&V8!=44) goto l24;
pile[v[22]]=103; pile[WZ1]=jvj+20; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(103,jvj+20,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[703])( );     /*USW0(jvj+7,jvj+8)*/
V48=x[jvj+8];
goto l5;
l26:x[jvj+35]=t[x[jvj+35]];
goto l25;
}
