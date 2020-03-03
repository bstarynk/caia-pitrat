#include "dx.h"
void PLUSTARD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V5=0,V6=0,V11=0,V12=0,V19=0,V20=0;
int A,B;
int R;
int WZ1,WZ2;

A=pile[v[22]]; B=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=941; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(941,A,V1)*/
V1=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(941,B,V2)*/
V2=pile[WZ2]; 
if((V1>V2)) goto l1;
if((V1!=V2)) goto l2;
pile[v[22]]=942; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(942,A,V5)*/
V5=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(942,B,V6)*/
V6=pile[WZ2]; 
if((V5>V6)) goto l1;
if((V5!=V6)) goto l2;
pile[v[22]]=943; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(943,A,V11)*/
V11=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(943,B,V12)*/
V12=pile[WZ2]; 
if((V11>V12)) goto l1;
if((V11!=V12)) goto l2;
pile[v[22]]=938; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(938,A,V19)*/
V19=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(938,B,V20)*/
V20=pile[WZ2]; 
if((V19>V20)) goto l1;
l2:x[R]=134 ;z[R]=134;
l3:v[22]-=3; return;
l1:x[R]=135 ;z[R]=135;
goto l3;
}
