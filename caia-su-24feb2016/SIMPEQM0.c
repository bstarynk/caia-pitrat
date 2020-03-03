#include "dx.h"
void SIMPEQM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V10=0,V11=0,V12=0,N=0,V23=0,P=0,V28=0,V24=0;
int R;
int RT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=11510;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1154&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RT=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,R,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=625)) goto l16;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(160,R,jvj+10)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+10,P)*/
P=pile[WZ2]; 
pile[v[22]]=P; pile[WZ1]=jvj+11; 
(*f[992])( );if(v[102]) goto l16;     /*FACTPREM0(P,jvj+11)*/
x[jvj+12]=d[20];z[jvj+12]=0;
l9:if((x[jvj+12]<=0)) goto l16;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+13,R,jvj+2)*/
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+2,V9)*/
V9=pile[WZ2]; 
if((V9==0)) goto l10;
l11:pile[v[22]]=268; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(268,jvj+13,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+14,R,jvj+5)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+15; 
(*f[1455])( );if(v[102]) goto l10;     /*SIMPRODA0(jvj+2,jvj+15)*/
V28=x[jvj+11];
l12:if((V28<=0)) goto l10;
N=s[V28];
x[jvj+28]=x[jvj+15] ;z[jvj+28]=z[jvj+15];
l1:if((x[jvj+28]<=0)) goto l13;
x[jvj+3]=s[x[jvj+28]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+28];
pile[v[22]]=510; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,jvj+3,V10)*/
V10=pile[WZ2]; 
if((V10!=N)) goto l2;
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+5,V12)*/
V12=pile[WZ2]; 
if((V12==0)) goto l14;
l5:pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[1455])( );if(v[102]) goto l13;     /*SIMPRODA0(jvj+5,jvj+6)*/
x[jvj+29]=x[jvj+6] ;z[jvj+29]=z[jvj+6];
l3:if((x[jvj+29]<=0)) goto l13;
x[jvj+4]=s[x[jvj+29]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+29];
pile[v[22]]=510; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(510,jvj+4,V11)*/
V11=pile[WZ2]; 
if((V11==N)) goto l14;
l4:x[jvj+29]=t[x[jvj+29]];
goto l3;
l2:x[jvj+28]=t[x[jvj+28]];
goto l1;
l7:if(x[jvj+22]==incon) goto l8;
l15:if((x[jvj+22]==(-99999998))) goto l13;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
V24=P/N;
x[jvj+18]=x[jvj+22] ;z[jvj+18]=z[jvj+22];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+25)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V24; pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,V24,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=160; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,160,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=111; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+24,jvj+25,111,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+19; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+26,jvj+19,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+27; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+17,jvj+27,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[799])( );if(v[102]) goto l13;     /*NORME0(jvj+20,jvj+21)*/
x[RT]=x[jvj+21] ;z[RT]=z[jvj+21];
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l8:x[jvj+22]=(-99999998);
l13:V28=t[V28];
goto l12;
l10:x[jvj+12]=t[x[jvj+12]];
goto l9;
l14:pile[v[22]]=N; pile[WZ1]=1; pile[WZ2]=jvj+2; pile[WZ3]=jvj+16; 
(*f[1456])( );if(v[102]) goto l13;     /*SIMPRODEL0(N,1,jvj+2,jvj+16)*/
x[jvj+22]=incon;
pile[WZ2]=jvj+5; pile[WZ3]=jvj+7; 
(*f[1456])( );if(v[102]) goto l6;     /*SIMPRODEL0(N,1,jvj+5,jvj+7)*/
x[jvj+22]=x[jvj+7] ;z[jvj+22]=z[jvj+7];
l6:pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+5,V23)*/
V23=pile[WZ2]; 
if((V23!=0)) goto l7;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+22)*/
goto l15;
l16:x[RT]=x[R] ;z[RT]=z[R];
goto l17;
}
