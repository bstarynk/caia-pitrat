#include "dx.h"
void EVENEMENT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int HIST,A,B;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=10931;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1047&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=1418; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1418,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l1;
if((x[jvj+3]==67)) goto l2;
if((x[jvj+3]==67)) goto l5;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=HIST; 
(*f[1366])( );     /*EVENEMENTBIS0(A,B,HIST)*/
goto l11;
l2:x[jvj+4]=vo[16];z[jvj+4]=vz[16];
pile[v[22]]=1087; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1087,jvj+4,jvj+5)*/
l3:if((x[jvj+5]<=0)) goto l5;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=158; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(158,jvj+6,jvj+7)*/
if((x[jvj+7]!=x[A])) goto l4;
x[jvj+9]=x[jvj+6] ;z[jvj+9]=z[jvj+6];
l9:pile[v[22]]=B; pile[WZ1]=971; pile[WZ2]=A; 
(*f[36])( );     /*PLUSC0(B,971,A)*/
if(x[A]!=27&&x[A]!=29&&x[A]!=1289) goto l8;
pile[v[22]]=jvj+9; pile[WZ1]=892; pile[WZ2]=B; 
(*f[36])( );     /*PLUSC0(jvj+9,892,B)*/
l8:if(x[A]!=25&&x[A]!=1347) goto l10;
pile[v[22]]=509; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(509,jvj+9,jvj+10)*/
l6:if((x[jvj+10]>0)) goto l7;
pile[v[22]]=B; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(B,jvj+13)*/
pile[v[22]]=jvj+9; pile[WZ1]=509; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+9,509,jvj+13)*/
l10:pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(A,B,HIST)*/
goto l11;
l4:x[jvj+5]=t[x[jvj+5]];
goto l3;
l5:x[jvj+8]=vo[16];z[jvj+8]=vz[16];
pile[v[22]]=A; pile[WZ1]=158; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(A,158,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=1087; 
(*f[36])( );     /*PLUSC0(jvj+8,1087,jvj+9)*/
pile[WZ1]=1088; pile[WZ2]=A; 
(*f[36])( );     /*PLUSC0(jvj+8,1088,A)*/
goto l9;
l7:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=B; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[760])( );     /*MEMEX0(B,jvj+11,jvj+12)*/
if((x[jvj+12]==135)) goto l10;
x[jvj+10]=t[x[jvj+10]];
goto l6;
}
