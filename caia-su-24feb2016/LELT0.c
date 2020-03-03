#include "dx.h"
void LELT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DYY=0,V6=0,DT=0,DB=0,V9=0,V11=0;
int DR;
int EX,DY;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=11752;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1057&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
DR=pile[v[22]]; EX=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=DR; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+6; 
(*f[666])( );if(v[102]) goto l1;     /*SMA3(DR,64,66,jvj+6)*/
pile[WZ1]=jvj+7; 
(*f[668])( );if(v[102]) goto l4;     /*LGNACT0(DR,jvj+7,DYY)*/
DYY=pile[WZ2]; 
pile[v[22]]=1671; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1671,jvj+6,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==1718) goto l3;
l4:pile[v[22]]=DR; 
(*f[667])( );if(v[102]) goto l1;     /*CRK0(DR,V6)*/
V6=pile[WZ1]; 
pile[v[22]]=1671; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1671,jvj+6,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==1726) goto l5;
l1:pile[v[22]]=DR; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+2; 
(*f[666])( );if(v[102]) goto l2;     /*SMA3(DR,64,66,jvj+2)*/
pile[v[22]]=1671; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1671,jvj+2,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==1726) goto l8;
l2:pile[v[22]]=DR; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+4; 
(*f[666])( );if(v[102]) goto l6;     /*SMA3(DR,64,66,jvj+4)*/
pile[v[22]]=1671; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1671,jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==1718) goto l8;
l6:pile[v[22]]=DR; pile[WZ2]=EX; 
(*f[267])( );if(v[102]) goto l8;     /*LEXP1(DR,DY,EX)*/
DY=pile[WZ1]; 
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=DY; v[102]=0;return;
l3:x[EX]=x[jvj+7] ;z[EX]=z[jvj+7];
DY=DYY;
goto l9;
l5:for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==209) goto l10;
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==129) goto l11;
goto l1;
l8:x[EX]=DY=incon;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l10:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+6; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+6,jvj+12)*/
pile[WZ1]=1726; pile[WZ2]=111; pile[WZ3]=jvj+12; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,1726,111,jvj+12,EX)*/
pile[v[22]]=V6; pile[WZ1]=jvj+10; 
(*f[668])( );if(v[102]) goto l8;     /*LGNACT0(V6,jvj+10,DT)*/
DT=pile[WZ2]; 
pile[v[22]]=DT; pile[WZ1]=EX; 
(*f[1370])( );if(v[102]) goto l8;     /*LTAKING0(DT,EX,DB)*/
DB=pile[WZ2]; 
pile[v[22]]=DB; 
(*f[1371])( );if(v[102]) goto l8;     /*LASLONGAS0(DB,EX,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=102; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(EX,102,jvj+10)*/
goto l9;
l11:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+6; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+6,jvj+13)*/
pile[WZ1]=1726; pile[WZ2]=111; pile[WZ3]=jvj+13; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,1726,111,jvj+13,EX)*/
pile[v[22]]=V6; pile[WZ2]=jvj+11; 
(*f[267])( );if(v[102]) goto l8;     /*LEXP1(V6,V9,jvj+11)*/
V9=pile[WZ1]; 
pile[v[22]]=V9; pile[WZ1]=EX; 
(*f[1370])( );if(v[102]) goto l8;     /*LTAKING0(V9,EX,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; 
(*f[1371])( );if(v[102]) goto l8;     /*LASLONGAS0(V11,EX,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=102; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(EX,102,jvj+11)*/
goto l9;
}
