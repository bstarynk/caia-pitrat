#include "dx.h"
void SCHUTZ1X0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V5=0,V7=0,V14=0,V13=0,I=0,V4=0,V12=0,V11=0,V10=0,V6=0,V15=0,V9=0,V19=0,V18=0,V17=0,V8=0,V22=0,V16=0,V26=0,V25=0,V24=0,V29=0,V23=0;
int N;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=26015;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2254&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V3=N-3;
V5=N-2;
V7=N-1;
V14=2*N;
V13=V14-1;
I=1;
l1:if((I<=V3)) goto l2;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:V4=I+1;
V12=V13-I;
V11=V12*I;
V10=V11/2;
l3:if((V4<=V5)) goto l4;
I++;
goto l1;
l4:V6=V4+1;
V15=V4-N;
V9=V10+V15;
V19=V13-V4;
V18=V19*V4;
V17=V18/2;
l5:if((V6<=V7)) goto l6;
V4++;
goto l3;
l6:V8=V6+1;
V22=V6-N;
V16=V17+V22;
V26=V13-V6;
V25=V26*V6;
V24=V25/2;
l7:if((V8<=N)) goto l8;
V6++;
goto l5;
l8:V29=V8-N;
V23=V24+V29;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+4)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-600); pile[WZ4]=jvj+8; 
(*f[270])( );     /*QUADRI7(100,21,140,(-600),jvj+8)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+10; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+10)*/
pile[v[22]]=jvj+8; pile[WZ1]=111; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+8,111,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+9; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+10,jvj+9,jvj+5)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-600); pile[WZ4]=jvj+11; 
(*f[270])( );     /*QUADRI7(100,21,140,(-600),jvj+11)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V16; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,V16,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=111; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,111,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+12; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+13,jvj+12,jvj+6)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-600); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(100,21,140,(-600),jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V23; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,V23,jvj+16)*/
pile[v[22]]=jvj+14; pile[WZ1]=111; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,111,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+15; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+16,jvj+15,jvj+7)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+4; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+4,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+5)*/
pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+6)*/
pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+7)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
V8++;
goto l7;
}
