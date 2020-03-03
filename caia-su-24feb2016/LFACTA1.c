#include "dx.h"
void LFACTA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,DC=0,V23=0,V24=0,V6=0,V15=0,DD=0,D=0;
int DB,EZ;
int EX,DY;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=11692;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1373&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
DB=pile[v[22]]; EZ=pile[v[22]+1]; EX=pile[v[22]+2]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1736; pile[WZ1]=100; pile[WZ2]=EX; 
(*f[54])( );     /*TRI1(1736,100,EX)*/
pile[v[22]]=DB; 
(*f[667])( );if(v[102]) goto l2;     /*CRK0(DB,V2)*/
V2=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+3; 
(*f[666])( );if(v[102]) goto l2;     /*SMA3(DB,64,66,jvj+3)*/
pile[v[22]]=1671; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1671,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==145) goto l1;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==1647) goto l1;
l2:pile[v[22]]=DB; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+6; 
(*f[666])( );if(v[102]) goto l3;     /*SMA3(DB,64,66,jvj+6)*/
if((145!=x[jvj+6])) goto l3;
x[jvj+12]=25 ;z[jvj+12]=25;
pile[WZ2]=jvj+7; 
(*f[267])( );if(v[102]) goto l13;     /*LEXP1(DB,DC,jvj+7)*/
DC=pile[WZ1]; 
pile[v[22]]=EX; pile[WZ1]=102; pile[WZ2]=EZ; 
(*f[35])( );     /*CHGC1(EX,102,EZ)*/
pile[WZ1]=111; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(EX,111,jvj+7)*/
l5:pile[v[22]]=1673; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1673,jvj+12,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==1683) goto l6;
l8:DD=DC;
l9:pile[v[22]]=1673; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1673,jvj+12,jvj+16)*/
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==1678) goto l10;
DY=DD;
l14:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=DY; v[102]=0;return;
l1:x[jvj+12]=x[jvj+3] ;z[jvj+12]=z[jvj+3];
DC=V2;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+3; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+3,jvj+5)*/
pile[v[22]]=EX; pile[WZ1]=111; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(EX,111,jvj+5)*/
pile[WZ1]=102; pile[WZ2]=EZ; 
(*f[35])( );     /*CHGC1(EX,102,EZ)*/
goto l5;
l3:V23=bh[v[1]][DB];
if((V23!=42)) goto l13;
V24=DB+1;
pile[v[22]]=V24; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+8; 
(*f[666])( );if(v[102]) goto l13;     /*SMA3(V24,64,66,jvj+8)*/
if((145!=x[jvj+8])) goto l13;
x[jvj+12]=25 ;z[jvj+12]=25;
pile[WZ2]=jvj+9; 
(*f[267])( );if(v[102]) goto l13;     /*LEXP1(V24,DC,jvj+9)*/
DC=pile[WZ1]; 
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=EX; pile[WZ1]=102; pile[WZ2]=EZ; 
(*f[35])( );     /*CHGC1(EX,102,EZ)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=651; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,651,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+20; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+10,jvj+20,jvj+11)*/
pile[v[22]]=EX; pile[WZ1]=111; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(EX,111,jvj+11)*/
goto l5;
l6:V15=w[x[jvj+12]][8];
for(a=V15;a>0;a=t[a]) if(s[a]==1736) goto l7;
l4:V6=w[x[jvj+12]][8];
for(a=V6;a>0;a=t[a]) if(s[a]==1736) goto l8;
pile[v[22]]=DC; pile[WZ1]=jvj+15; 
(*f[1057])( );if(v[102]) goto l8;     /*LELT0(DC,jvj+15,DD)*/
DD=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=103; pile[WZ2]=jvj+15; 
(*f[35])( );     /*CHGC1(EX,103,jvj+15)*/
goto l9;
l7:pile[v[22]]=DC; pile[WZ1]=jvj+14; 
(*f[1058])( );if(v[102]) goto l4;     /*LFACT0(DC,jvj+14,DD)*/
DD=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=103; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(EX,103,jvj+14)*/
goto l9;
l10:for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==1678) goto l11;
l13:x[EX]=DY=incon;
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l11:pile[v[22]]=1678; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1678,jvj+12,jvj+17)*/
pile[v[22]]=DD; pile[WZ1]=jvj+17; 
(*f[266])( );if(v[102]) goto l13;     /*FOBJ0(DD,jvj+17,D)*/
D=pile[WZ2]; 
pile[v[22]]=D; pile[WZ1]=jvj+18; 
(*f[1057])( );if(v[102]) goto l13;     /*LELT0(D,jvj+18,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=1678; pile[WZ2]=jvj+18; 
(*f[35])( );     /*CHGC1(EX,1678,jvj+18)*/
goto l14;
}
