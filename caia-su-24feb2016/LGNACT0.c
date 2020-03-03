#include "dx.h"
void LGNACT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,DB=0,V5=0,DC=0,V18=0,V11=0;
int DR;
int EX,DY;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=11753;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==668&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
DR=pile[v[22]]; EX=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=DR; 
(*f[667])( );if(v[102]) goto l11;     /*CRK0(DR,V2)*/
V2=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+2; 
(*f[666])( );if(v[102]) goto l11;     /*SMA3(DR,64,66,jvj+2)*/
pile[v[22]]=1671; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1671,jvj+2,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==1718) goto l1;
l11:x[EX]=DY=incon;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l1:x[jvj+4]=x[jvj+2] ;z[jvj+4]=z[jvj+2];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+18)*/
pile[WZ1]=1718; pile[WZ2]=111; pile[WZ3]=jvj+18; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,1718,111,jvj+18,EX)*/
DB=V2;
pile[v[22]]=1678; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1678,jvj+4,jvj+5)*/
pile[v[22]]=DB; 
(*f[667])( );if(v[102]) goto l3;     /*CRK0(DB,V5)*/
V5=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+6; 
(*f[666])( );if(v[102]) goto l3;     /*SMA3(DB,64,66,jvj+6)*/
if((x[jvj+6]!=x[jvj+5])) goto l3;
pile[v[22]]=1673; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1673,jvj+4,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==1678) goto l2;
l3:DC=DB;
l5:pile[v[22]]=1679; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1679,jvj+4,jvj+10)*/
pile[v[22]]=1664; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1664,jvj+4,jvj+11)*/
if((x[jvj+11]!=1736)) goto l4;
pile[v[22]]=DC; 
(*f[667])( );if(v[102]) goto l4;     /*CRK0(DC,V18)*/
V18=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+12; 
(*f[666])( );if(v[102]) goto l4;     /*SMA3(DC,64,66,jvj+12)*/
if((x[jvj+12]!=x[jvj+10])) goto l4;
pile[v[22]]=1673; pile[WZ1]=jvj+4; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1673,jvj+4,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==1679) goto l6;
l4:pile[v[22]]=1664; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1664,jvj+4,jvj+9)*/
if((x[jvj+9]==1736)) goto l9;
l7:pile[v[22]]=DC; 
(*f[667])( );if(v[102]) goto l9;     /*CRK0(DC,V11)*/
V11=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+15; 
(*f[666])( );if(v[102]) goto l9;     /*SMA3(DC,64,66,jvj+15)*/
if((x[jvj+15]!=x[jvj+10])) goto l9;
pile[v[22]]=1673; pile[WZ1]=jvj+4; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1673,jvj+4,jvj+16)*/
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==1679) goto l8;
l9:DY=DC;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=DY; v[102]=0;return;
l2:pile[v[22]]=V5; pile[WZ1]=jvj+8; 
(*f[1057])( );if(v[102]) goto l3;     /*LELT0(V5,jvj+8,DC)*/
DC=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=1678; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(EX,1678,jvj+8)*/
goto l5;
l6:pile[v[22]]=V18; pile[WZ1]=jvj+14; 
(*f[1058])( );if(v[102]) goto l4;     /*LFACT0(V18,jvj+14,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=1679; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(EX,1679,jvj+14)*/
goto l12;
l8:pile[v[22]]=V11; pile[WZ1]=jvj+17; 
(*f[1057])( );if(v[102]) goto l9;     /*LELT0(V11,jvj+17,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=1679; pile[WZ2]=jvj+17; 
(*f[35])( );     /*CHGC1(EX,1679,jvj+17)*/
goto l12;
}
