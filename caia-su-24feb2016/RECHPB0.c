#include "dx.h"
void RECHPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V3=0,KR=0,UR=0,S=0,T=0,V12=0,NR=0;
int Q;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=10805;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==422&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Q=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l31:x[jvj+11]=incon;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
V1=bh[v[1]][0];
V2=bh[v[1]][1];
V3=bh[v[1]][2];
KR=V1;
UR=V2;
S=V3;
if((UR==61)) goto l1;
if((UR==62)) goto l2;
if((UR==60)) goto l4;
if((UR==126)) goto l5;
if((UR==35)) goto l6;
if((UR==43)) goto l7;
if((UR==45)) goto l8;
if((UR!=33)) goto l12;
x[jvj+11]=44 ;z[jvj+11]=44;
l12:if(S==61||S==33) goto l13;
T=2;
l22:if(x[jvj+11]!=incon) goto l23;
l29:if((KR!=83)) goto l31;
l30:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:x[jvj+11]=25 ;z[jvj+11]=25;
goto l12;
l2:if((S!=61)) goto l3;
x[jvj+11]=28 ;z[jvj+11]=28;
goto l12;
l3:x[jvj+11]=27 ;z[jvj+11]=27;
goto l12;
l4:if((S==61)) goto l12;
x[jvj+11]=29 ;z[jvj+11]=29;
goto l12;
l5:if((S!=33)) goto l12;
x[jvj+11]=45 ;z[jvj+11]=45;
goto l12;
l6:x[jvj+11]=26 ;z[jvj+11]=26;
goto l12;
l7:x[jvj+11]=490 ;z[jvj+11]=490;
goto l12;
l8:x[jvj+11]=491 ;z[jvj+11]=491;
goto l12;
l10:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(158,jvj+3,jvj+4)*/
if((x[jvj+4]!=901)) goto l11;
pile[v[22]]=145; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(145,jvj+3,jvj+5)*/
if((x[jvj+5]!=x[jvj+11])) goto l11;
x[jvj+10]=x[jvj+3] ;z[jvj+10]=z[jvj+3];
l28:pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+9; 
(*f[78])( );if(v[102]) goto l31;     /*SMA0(1,36,67,jvj+9)*/
pile[v[22]]=Q; pile[WZ1]=159; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(Q,159,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=972; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+10,972,jvj+9)*/
goto l31;
l11:x[jvj+2]=t[x[jvj+2]];
l9:if((x[jvj+2]>0)) goto l10;
pile[v[22]]=145; pile[WZ1]=jvj+11; pile[WZ2]=158; pile[WZ3]=901; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(145,jvj+11,158,901,jvj+10)*/
goto l28;
l13:T=3;
goto l22;
l14:x[jvj+14]=493 ;z[jvj+14]=493;
l26:pile[v[22]]=T; 
(*f[135])( );     /*LND3(T,NR)*/
NR=pile[WZ1]; 
pile[v[22]]=jvj+14; pile[WZ1]=158; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,158,jvj+15)*/
pile[v[22]]=117; pile[WZ1]=NR; pile[WZ2]=145; pile[WZ3]=jvj+11; pile[WZ4]=jvj+15; pile[WZ5]=jvj+8; 
(*f[725])( );     /*QUADRI14(117,NR,145,jvj+11,jvj+15,jvj+8)*/
pile[v[22]]=Q; pile[WZ1]=159; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(Q,159,jvj+8)*/
l27:if((KR!=73)) goto l29;
x[jvj+10]=incon;
pile[v[22]]=159; pile[WZ1]=Q; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(159,Q,jvj+2)*/
goto l9;
l15:x[jvj+14]=876 ;z[jvj+14]=876;
goto l26;
l16:x[jvj+14]=927 ;z[jvj+14]=927;
goto l26;
l17:x[jvj+14]=1037 ;z[jvj+14]=1037;
goto l26;
l18:x[jvj+14]=936 ;z[jvj+14]=936;
goto l26;
l19:x[jvj+13]=715 ;z[jvj+13]=715;
l24:V12=T-1;
pile[v[22]]=V12; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+6; 
(*f[78])( );if(v[102]) goto l25;     /*SMA0(V12,64,67,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=218; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+6,218,jvj+12)*/
pile[v[22]]=145; pile[WZ1]=jvj+11; pile[WZ2]=158; pile[WZ3]=jvj+13; pile[WZ4]=jvj+12; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(145,jvj+11,158,jvj+13,jvj+12,jvj+7)*/
pile[v[22]]=Q; pile[WZ1]=159; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(Q,159,jvj+7)*/
l25:if(KR!=69&&KR!=67&&KR!=75&&KR!=84&&KR!=76&&KR!=66) goto l27;
x[jvj+14]=incon;
if((KR==76)) goto l14;
if((KR==69)) goto l15;
if((KR==67)) goto l16;
if((KR==75)) goto l17;
if((KR==84)) goto l18;
if((KR!=66)) goto l27;
x[jvj+14]=977 ;z[jvj+14]=977;
goto l26;
l20:x[jvj+13]=935 ;z[jvj+13]=935;
goto l24;
l21:x[jvj+13]=860 ;z[jvj+13]=860;
goto l24;
l23:if(KR!=80&&KR!=77&&KR!=85&&KR!=81) goto l25;
if(x[jvj+11]!=27&&x[jvj+11]!=28&&x[jvj+11]!=29&&x[jvj+11]!=30&&x[jvj+11]!=25&&x[jvj+11]!=26) goto l25;
x[jvj+13]=incon;
if((KR==80)) goto l19;
if((KR==85)) goto l20;
if((KR==81)) goto l21;
x[jvj+13]=948 ;z[jvj+13]=948;
goto l24;
}
