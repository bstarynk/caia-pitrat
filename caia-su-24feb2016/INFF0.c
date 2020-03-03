#include "dx.h"
void INFF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V23=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=11488;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3525&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,A,K)*/
K=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,K,R)*/
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+2]=s[x[jvj+17]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+17];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[3525])( );     /*INFF0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+3)*/
x[jvj+17]=t[x[jvj+17]];
l1:if((x[jvj+17]>0)) goto l2;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+18; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+18; pile[WZ2]=107; pile[WZ3]=jvj+25; 
(*f[301])( );     /*TRI11(jvj+24,jvj+18,107,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+25,22,100,R)*/
goto l13;
l4:x[jvj+5]=s[x[jvj+29]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+29];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[1353])( );     /*POSOUNUL0(jvj+5,jvj+6)*/
if((x[jvj+6]==135)) goto l5;
l12:pile[v[22]]=A; pile[WZ1]=R; 
(*f[255])( );     /*COPEXP0(A,R)*/
goto l13;
l5:x[jvj+29]=t[x[jvj+29]];
l3:if((x[jvj+29]>0)) goto l4;
x[jvj+9]=0 ;z[jvj+9]=0;
l6:if((x[jvj+19]>0)) goto l7;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+20; 
(*f[299])( );     /*COPEL0(jvj+9,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+20; pile[WZ2]=107; pile[WZ3]=jvj+28; 
(*f[301])( );     /*TRI11(jvj+27,jvj+20,107,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+28,22,100,R)*/
goto l13;
l7:x[jvj+7]=s[x[jvj+19]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+19];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[3525])( );     /*INFF0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+8)*/
x[jvj+19]=t[x[jvj+19]];
goto l6;
l8:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,A,jvj+10)*/
if((x[jvj+10]!=484)) goto l9;
pile[v[22]]=A; pile[WZ1]=jvj+11; 
(*f[200])( );if(v[102]) goto l9;     /*NDD0(A,jvj+11)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(280,jvj+11,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V23; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V23,R)*/
goto l13;
l9:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,A,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]==52)) goto l10;
if((x[jvj+13]==485)) goto l11;
if((x[jvj+13]!=486)) goto l12;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,A,jvj+19)*/
x[jvj+29]=x[jvj+19] ;z[jvj+29]=z[jvj+19];
goto l3;
l10:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,A,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[3526])( );     /*SUPF0(jvj+14,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+22; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+16,jvj+22,R)*/
goto l13;
l11:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,A,jvj+17)*/
x[jvj+4]=0 ;z[jvj+4]=0;
goto l1;
}
