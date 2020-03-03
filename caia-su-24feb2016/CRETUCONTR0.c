#include "dx.h"
void CRETUCONTR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int ND=0;
int RRRT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=11482;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1554&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RRRT=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[12];z[jvj+2]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(683,jvj+2,ND)*/
ND=pile[WZ2]; 
if((ND==5)) goto l1;
if((ND==6)) goto l2;
if((ND==7)) goto l3;
if((ND==8)) goto l4;
if((ND==9)) goto l5;
if((ND==10)) goto l6;
if((ND==11)) goto l7;
if((ND!=12)) goto l8;
pile[v[22]]=RRRT; 
(*f[1750])( );     /*CRT12Z0(RRRT)*/
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:pile[v[22]]=RRRT; 
(*f[1743])( );     /*CRT5Z0(RRRT)*/
goto l8;
l2:pile[v[22]]=RRRT; 
(*f[1744])( );     /*CRT6Z0(RRRT)*/
goto l8;
l3:pile[v[22]]=RRRT; 
(*f[1745])( );     /*CRT7Z0(RRRT)*/
goto l8;
l4:pile[v[22]]=RRRT; 
(*f[1746])( );     /*CRT8Z0(RRRT)*/
goto l8;
l5:pile[v[22]]=RRRT; 
(*f[1747])( );     /*CRT9Z0(RRRT)*/
goto l8;
l6:pile[v[22]]=RRRT; 
(*f[1748])( );     /*CRT10Z0(RRRT)*/
goto l8;
l7:pile[v[22]]=RRRT; 
(*f[1749])( );     /*CRT11Z0(RRRT)*/
goto l8;
}
