#include "dx.h"
void SUBSTFP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V17=0,N=0,V16=0;
int C,B,A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=11910;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3919&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
C=pile[v[22]]; B=pile[v[22]+1]; A=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,A,jvj+2)*/
if((x[jvj+2]==20)) goto l4;
if((x[jvj+2]==41)) goto l5;
if((x[jvj+2]!=484)) goto l21;
pile[v[22]]=763; pile[WZ1]=B; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(763,B,jvj+6)*/
l6:if((x[jvj+6]<=0)) goto l21;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+7,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,jvj+7,jvj+8)*/
pile[v[22]]=A; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[760])( );     /*MEMEX0(A,jvj+8,jvj+9)*/
if((x[jvj+9]==135)) goto l20;
l7:x[jvj+6]=t[x[jvj+6]];
goto l6;
l2:x[jvj+5]=t[x[jvj+5]];
l1:if((x[jvj+5]<=0)) goto l3;
x[jvj+3]=s[x[jvj+5]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+5];
pile[v[22]]=510; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,jvj+3,V19)*/
V19=pile[WZ2]; 
if((V19!=C)) goto l2;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(515,jvj+3,V17)*/
V17=pile[WZ2]; 
l19:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V17; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V17,R)*/
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l3:V17=0;
goto l19;
l4:pile[v[22]]=101; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,A,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+4; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+4,R)*/
goto l18;
l5:pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,A,N)*/
N=pile[WZ2]; 
if((N==0)) goto l21;
pile[v[22]]=N; pile[WZ1]=jvj+5; 
(*f[1007])( );if(v[102]) goto l21;     /*DECFACTPREM0(N,jvj+5)*/
V17=incon;
goto l1;
l8:pile[v[22]]=C; pile[WZ1]=B; pile[WZ2]=jvj+12; pile[WZ3]=jvj+13; 
(*f[3919])( );if(v[102]) goto l11;     /*SUBSTFP0(C,B,jvj+12,jvj+13)*/
x[jvj+16]=x[jvj+13] ;z[jvj+16]=z[jvj+13];
l12:pile[v[22]]=R; pile[WZ1]=jvj+14; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(R,jvj+14,jvj+16)*/
l11:x[jvj+21]=t[x[jvj+21]];
l9:if((x[jvj+21]>0)) goto l10;
x[jvj+22]=w[x[jvj+2]][8];
l13:if((x[jvj+22]<=0)) goto l18;
x[jvj+17]=s[x[jvj+22]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+22];
pile[v[22]]=jvj+17; pile[WZ1]=A; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(jvj+17,A,jvj+18)*/
x[jvj+23]=x[jvj+18] ;z[jvj+23]=z[jvj+18];
l14:if((x[jvj+23]>0)) goto l15;
x[jvj+22]=t[x[jvj+22]];
goto l13;
l10:x[jvj+14]=s[x[jvj+21]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+21];
pile[v[22]]=jvj+14; pile[WZ1]=A; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+14,A,jvj+15)*/
x[jvj+12]=x[jvj+15] ;z[jvj+12]=z[jvj+15];
x[jvj+16]=incon;
if((x[jvj+14]!=103)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,A,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=596)) goto l8;
x[jvj+16]=x[jvj+12] ;z[jvj+16]=z[jvj+12];
goto l12;
l15:x[jvj+19]=s[x[jvj+23]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+23];
pile[v[22]]=C; pile[WZ1]=B; pile[WZ2]=jvj+19; pile[WZ3]=jvj+20; 
(*f[3919])( );if(v[102]) goto l16;     /*SUBSTFP0(C,B,jvj+19,jvj+20)*/
pile[v[22]]=R; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(R,jvj+17,jvj+20)*/
l16:x[jvj+23]=t[x[jvj+23]];
goto l14;
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l20:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V16; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V16,R)*/
goto l18;
l21:pile[v[22]]=jvj+2; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(jvj+2,100,R)*/
x[jvj+21]=w[x[jvj+2]][9];
goto l9;
}
