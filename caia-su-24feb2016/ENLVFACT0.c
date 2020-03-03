#include "dx.h"
void ENLVFACT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A,B;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=11641;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1458&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,A,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==486)) goto l4;
if((x[jvj+6]==52)) goto l5;
if((x[jvj+6]!=485)) goto l6;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,A,jvj+13)*/
x[jvj+4]=0 ;z[jvj+4]=0;
l1:if((x[jvj+13]>0)) goto l2;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+14; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+14; pile[WZ2]=107; pile[WZ3]=jvj+23; 
(*f[301])( );     /*TRI11(jvj+22,jvj+14,107,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+23,22,100,R)*/
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+13]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+13];
pile[v[22]]=jvj+2; pile[WZ1]=B; pile[WZ2]=jvj+3; 
(*f[1458])( );if(v[102]) goto l3;     /*ENLVFACT0(jvj+2,B,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+3)*/
l3:x[jvj+13]=t[x[jvj+13]];
goto l1;
l4:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,A,jvj+7)*/
x[jvj+28]=x[jvj+7] ;z[jvj+28]=z[jvj+7];
l10:if((x[jvj+28]>0)) goto l11;
l6:pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=jvj+15; 
(*f[760])( );     /*MEMEX0(A,B,jvj+15)*/
if((x[jvj+15]==135)) goto l9;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l5:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,A,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=B; pile[WZ2]=jvj+11; 
(*f[1458])( );if(v[102]) goto l6;     /*ENLVFACT0(jvj+10,B,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+20; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+12,jvj+20,R)*/
goto l8;
l9:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,1,R)*/
goto l8;
l11:x[jvj+24]=s[x[jvj+28]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+28];
pile[v[22]]=jvj+24; pile[WZ1]=B; pile[WZ2]=jvj+25; 
(*f[760])( );     /*MEMEX0(jvj+24,B,jvj+25)*/
if((x[jvj+25]==135)) goto l12;
x[jvj+28]=t[x[jvj+28]];
goto l10;
l12:x[jvj+26]=0 ;z[jvj+26]=0;
x[jvj+29]=x[jvj+7] ;z[jvj+29]=z[jvj+7];
l13:if((x[jvj+29]>0)) goto l14;
x[jvj+8]=x[jvj+26] ;z[jvj+8]=z[jvj+26];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[299])( );     /*COPEL0(jvj+8,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+9; pile[WZ2]=107; pile[WZ3]=jvj+18; 
(*f[301])( );     /*TRI11(jvj+17,jvj+9,107,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+18,22,100,R)*/
goto l8;
l14:x[jvj+27]=s[x[jvj+29]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+29];
if((x[jvj+27]==x[jvj+24])) goto l15;
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[68])( );     /*PLUE0(jvj+26,jvj+27)*/
l15:x[jvj+29]=t[x[jvj+29]];
goto l13;
}
