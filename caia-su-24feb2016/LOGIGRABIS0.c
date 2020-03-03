#include "dx.h"
void LOGIGRABIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V6=0,II=0,V7=0,V17=0,V4=0,V19=0,JJ=0,V20=0,V16=0,V8=0,V3=0,N=0,V15=0,V14=0,V13=0,V23=0,J=0,V22=0;
int H,V,MH;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=26165;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2682&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; V=pile[v[22]+1]; MH=pile[v[22]+2]; NNNE=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=0 ;z[jvj+6]=0;
V16=H-1;
I=0;
l8:if((I<=V16)) goto l10;
x[NNNE]=x[jvj+6] ;z[NNNE]=z[jvj+6];
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l3:pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+2,V17)*/
V17=pile[WZ2]; 
V4=V17;
V14=V15+V4;
V13=V-V14;
V23=I*MH;
J=0;
l11:if((J>N)) goto l9;
x[jvj+16]=incon;
if((J==N)) goto l7;
x[jvj+16]=30 ;z[jvj+16]=30;
l4:x[jvj+3]=0 ;z[jvj+3]=0;
V19=J-1;
JJ=0;
l5:if((JJ<=V19)) goto l6;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+5; 
(*f[299])( );     /*COPEL0(jvj+3,jvj+5)*/
V22=J+V23;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+16; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+16,jvj+11)*/
pile[WZ3]=485; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+17)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8635); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8635),jvj+20)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V22; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,V22,jvj+22)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+22,jvj+21,jvj+18)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+5; pile[WZ2]=107; pile[WZ3]=jvj+25; 
(*f[301])( );     /*TRI11(jvj+24,jvj+5,107,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+25,22,100,jvj+19)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+17; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+17,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=107; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+15,107,jvj+18)*/
pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+15,107,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V13; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,V13,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=111; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,111,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+12,jvj+13,103,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+14; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+14,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[522])( );     /*PLUB2(jvj+6,jvj+7)*/
J++;
goto l11;
l6:V20=JJ+V23;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8635); pile[WZ4]=jvj+8; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8635),jvj+8)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V20; pile[WZ4]=jvj+10; 
(*f[192])( );     /*QUADRI4(100,41,130,V20,jvj+10)*/
pile[v[22]]=jvj+8; pile[WZ1]=111; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+8,111,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+9; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+10,jvj+9,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[522])( );     /*PLUB2(jvj+3,jvj+4)*/
JJ++;
goto l5;
l7:x[jvj+16]=25 ;z[jvj+16]=25;
goto l4;
l9:I++;
goto l8;
l10:pile[v[22]]=1; pile[WZ1]=I; pile[WZ2]=(-8615); 
(*f[203])( );if(v[102]) goto l9;     /*FTAB0(1,I,(-8615),V8)*/
V8=pile[WZ3]; 
if((V8<=0)) goto l9;
pile[v[22]]=I; pile[WZ1]=(-8615); 
(*f[3979])( );if(v[102]) goto l9;     /*LONGUEUR0(I,(-8615),V3)*/
V3=pile[WZ2]; 
N=V3;
V15=N-1;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(0,117,jvj+2)*/
pile[v[22]]=I; pile[WZ1]=(-8615); 
(*f[3979])( );if(v[102]) goto l3;     /*LONGUEUR0(I,(-8615),V6)*/
V6=pile[WZ2]; 
II=1;
l1:if((II>V6)) goto l3;
pile[v[22]]=II; pile[WZ1]=I; pile[WZ2]=(-8615); 
(*f[203])( );if(v[102]) goto l2;     /*FTAB0(II,I,(-8615),V7)*/
V7=pile[WZ3]; 
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=V7; 
(*f[186])( );     /*BTC0(jvj+2,117,V7)*/
l2:II++;
goto l1;
}
