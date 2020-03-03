#include "dx.h"
void MATCH1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int J=0,I=0,V6=0,JJ=0,V10=0,V11=0;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=26005;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2234&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=0 ;z[jvj+8]=0;
I=1;
l6:pile[v[22]]=I; pile[WZ1]=(-611); 
(*f[201])( );if(v[102]) goto l5;     /*FCOEFF0(I,(-611),V11)*/
V11=pile[WZ2]; 
x[jvj+2]=0 ;z[jvj+2]=0;
J=1;
l2:pile[v[22]]=J; pile[WZ1]=I; pile[WZ2]=(-598); 
(*f[202])( );if(v[102]) goto l1;     /*FMATRICE0(J,I,(-598),V6)*/
V6=pile[WZ3]; 
if((V6==88)) goto l1;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+10; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+10)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V6; pile[WZ4]=jvj+12; 
(*f[272])( );     /*QUADRI9(100,89,162,V6,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=111; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+10,111,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+11; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+12,jvj+11,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l1:J++;
if((J<=4)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+6; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+6)*/
x[jvj+4]=0 ;z[jvj+4]=0;
JJ=1;
l4:pile[v[22]]=JJ; pile[WZ1]=I; pile[WZ2]=(-598); 
(*f[202])( );if(v[102]) goto l3;     /*FMATRICE0(JJ,I,(-598),V10)*/
V10=pile[WZ3]; 
if((V10!=88)) goto l3;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+13)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+15)*/
pile[v[22]]=jvj+13; pile[WZ1]=111; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,111,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+14; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+15,jvj+14,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+5)*/
l3:JJ++;
if((JJ<=4)) goto l4;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+7; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+7)*/
x[jvj+26]=x[jvj+6] ;z[jvj+26]=z[jvj+6];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+16)*/
pile[WZ3]=485; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+21)*/
pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=107; pile[WZ3]=jvj+27; 
(*f[301])( );     /*TRI11(jvj+25,jvj+26,107,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+27,22,100,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+7; pile[WZ2]=107; pile[WZ3]=jvj+30; 
(*f[301])( );     /*TRI11(jvj+29,jvj+7,107,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+30,22,100,jvj+23)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+21,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=107; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+20,107,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+20,107,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V11; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,V11,jvj+18)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+17,jvj+18,103,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+19,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[522])( );     /*PLUB2(jvj+8,jvj+9)*/
l5:I++;
if((I<=4)) goto l6;
x[NNNE]=x[jvj+8] ;z[NNNE]=z[jvj+8];
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
