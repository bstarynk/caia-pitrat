#include "dx.h"
void EVCONTAINS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V35=0,V37=0,V33=0,V34=0,V36=0,V40=0,V42=0,V38=0,V39=0,V41=0,V21=0,V31=0;
int A,B,ND;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=11806;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==702&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; ND=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=184; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(184,A,jvj+2)*/
if((x[jvj+2]<=0)) goto l10;
x[jvj+25]=s[x[jvj+2]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+2];
x[jvj+6]=x[jvj+25] ;z[jvj+6]=z[jvj+25];
pile[v[22]]=101; pile[WZ1]=B; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,B,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[492])( );     /*FIGURE0(jvj+8,jvj+6,jvj+9)*/
if((x[jvj+9]==135)) goto l9;
l4:pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,B,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]==1790)) goto l5;
if((x[jvj+11]!=1795)) goto l10;
pile[v[22]]=107; pile[WZ1]=B; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,B,jvj+17)*/
l1:if((x[jvj+17]>0)) goto l2;
V40=x[B];
V42=x[A];
pile[v[22]]=20; pile[WZ1]=11806; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11806,0,V38)*/
V38=pile[WZ3]; 
pile[WZ1]=V40; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(20,V40,V38,V39)*/
V39=pile[WZ3]; 
pile[WZ1]=V42; pile[WZ2]=V39; 
(*f[39])( );     /*SDX0(20,V42,V39,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; 
(*f[40])( );     /*SLG0(V41)*/
l9:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,A,jvj+18)*/
pile[v[22]]=108; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(108,jvj+18,jvj+19)*/
for(i=x[jvj+19],V21=0;i>0;i=t[i],V21++)  ;
if((V21!=1)) goto l10;
if((x[jvj+19]<=0)) goto l10;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=108)) goto l10;
pile[v[22]]=103; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+20,jvj+22)*/
pile[v[22]]=140; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+22,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+20,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=576)) goto l10;
R=V31;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=R; v[102]=0;return;
l2:x[jvj+3]=s[x[jvj+17]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+17];
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+3,jvj+4)*/
x[jvj+5]=x[jvj+4] ;z[jvj+5]=z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[492])( );     /*FIGURE0(jvj+5,jvj+6,jvj+7)*/
if((x[jvj+7]==134)) goto l10;
l3:x[jvj+17]=t[x[jvj+17]];
goto l1;
l5:pile[v[22]]=107; pile[WZ1]=B; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,B,jvj+12)*/
V35=x[B];
V37=x[A];
l6:if((x[jvj+12]<=0)) goto l10;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+13,jvj+14)*/
x[jvj+15]=x[jvj+14] ;z[jvj+15]=z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+6; pile[WZ2]=jvj+16; 
(*f[492])( );     /*FIGURE0(jvj+15,jvj+6,jvj+16)*/
if((x[jvj+16]==135)) goto l8;
l7:x[jvj+12]=t[x[jvj+12]];
goto l6;
l8:pile[v[22]]=20; pile[WZ1]=11806; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11806,0,V33)*/
V33=pile[WZ3]; 
pile[WZ1]=V35; pile[WZ2]=V33; 
(*f[39])( );     /*SDX0(20,V35,V33,V34)*/
V34=pile[WZ3]; 
pile[WZ1]=V37; pile[WZ2]=V34; 
(*f[39])( );     /*SDX0(20,V37,V34,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=V36; 
(*f[40])( );     /*SLG0(V36)*/
goto l9;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
}
