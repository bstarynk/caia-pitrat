#include "dx.h"
void CRESPOSA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NN,N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=20;
if(v[0]>99700) (*f[6])( );

NN=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=184; pile[WZ1]=NN; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(184,NN,jvj+4)*/
pile[v[22]]=1456; pile[WZ1]=1447; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1456,1447,jvj+5)*/
x[jvj+16]=x[jvj+4] ;z[jvj+16]=z[jvj+4];
l4:if((x[jvj+16]<=0)) goto l10;
x[jvj+6]=s[x[jvj+16]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+16];
pile[v[22]]=105; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(105,jvj+6,jvj+7)*/
x[jvj+17]=x[jvj+7] ;z[jvj+17]=z[jvj+7];
l5:if((x[jvj+17]>0)) goto l6;
x[jvj+16]=t[x[jvj+16]];
goto l4;
l2:if(x[jvj+18]==incon) goto l3;
l8:x[jvj+11]=x[jvj+18] ;z[jvj+11]=z[jvj+18];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==x[jvj+11]) goto l9;
l7:x[jvj+17]=t[x[jvj+17]];
goto l5;
l3:x[jvj+18]=x[jvj+20] ;z[jvj+18]=z[jvj+20];
goto l8;
l6:x[jvj+1]=s[x[jvj+17]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+17];
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+1,jvj+8)*/
if((x[jvj+8]!=73)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+1,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+9,jvj+10)*/
x[jvj+20]=x[jvj+10] ;z[jvj+20]=z[jvj+10];
x[jvj+18]=incon;
if((x[jvj+20]!=1290)) goto l1;
x[jvj+18]=576 ;z[jvj+18]=576;
l1:if(x[jvj+20]!=262&&x[jvj+20]!=902) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+2,jvj+3)*/
x[jvj+18]=x[jvj+3] ;z[jvj+18]=z[jvj+3];
goto l8;
l9:pile[v[22]]=N; pile[WZ1]=1467; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(N,1467,jvj+11)*/
goto l7;
l11:x[jvj+12]=s[x[jvj+4]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+4];
pile[v[22]]=105; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(105,jvj+12,jvj+13)*/
x[jvj+19]=x[jvj+13] ;z[jvj+19]=z[jvj+13];
l12:if((x[jvj+19]>0)) goto l13;
x[jvj+4]=t[x[jvj+4]];
l10:if((x[jvj+4]>0)) goto l11;
v[0]=jvj; v[22]-=2; return;
l13:x[jvj+14]=s[x[jvj+19]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+19];
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=47)) goto l14;
pile[v[22]]=jvj+14; pile[WZ1]=N; 
(*f[814])( );     /*CRESPOSA1(jvj+14,N)*/
l14:x[jvj+19]=t[x[jvj+19]];
goto l12;
}
