#include "dx.h"
void LOGIGRAPHE4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V39=0,V13=0,V40=0,V41=0,V42=0,V38=0,V44=0,I=0,V43=0,A=0,V31=0,B=0,V24=0,V23=0,V22=0,V33=0,V32=0,C=0,V27=0,V26=0,V25=0,V36=0,V35=0,V34=0,D=0,V30=0,V29=0,V28=0,V20=0,J=0,V4=0,V5=0,NU=0,V6=0,NV=0,V7=0,NW=0,V8=0,NX=0,V19=0,V18=0,V17=0,V16=0,V15=0;
int H,V;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=26114;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2672&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; V=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=0 ;z[jvj+8]=0;
V20=V-1;
J=0;
l17:if((J<=V20)) goto l19;
x[NNNE]=x[jvj+8] ;z[NNNE]=z[jvj+8];
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:V13=incon;
if((I<A)) goto l2;
V39=A+NU;
if((I>=V39)) goto l2;
V13=1;
l2:if((I<V22)) goto l3;
V40=V22+NV;
if((I>=V40)) goto l3;
V13=1;
l3:if((I<V25)) goto l4;
V41=V25+NW;
if((I>=V41)) goto l4;
V13=1;
l4:if((I<V28)) goto l5;
V42=V28+NX;
if((I>=V42)) goto l5;
V13=1;
l8:V43=I+V44;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+10)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V43; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,V43,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+17,jvj+16,jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V13; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,V13,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=111; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+10,111,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+11,jvj+12,103,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+13,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
I++;
l7:if((I<=V38)) goto l1;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+20; 
(*f[301])( );     /*TRI11(jvj+19,jvj+4,107,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+20,22,100,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+6)*/
D++;
l15:if((D<=V34)) goto l16;
C++;
l13:if((C<=V32)) goto l14;
B++;
l11:if((B<=V31)) goto l12;
A++;
l9:if((A<=V15)) goto l10;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+7; 
(*f[299])( );     /*COPEL0(jvj+5,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+7; pile[WZ2]=107; pile[WZ3]=jvj+23; 
(*f[301])( );     /*TRI11(jvj+22,jvj+7,107,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+23,22,100,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[522])( );     /*PLUB2(jvj+8,jvj+9)*/
l18:J++;
goto l17;
l5:if(V13==incon) goto l6;
goto l8;
l6:V13=0;
goto l8;
l10:V31=V15-A;
B=0;
goto l11;
l12:V24=NU+B;
V23=A+V24;
V22=V23+1;
V33=A+B;
V32=V15-V33;
C=0;
goto l13;
l14:V27=NV+C;
V26=V22+V27;
V25=V26+1;
V36=B+C;
V35=A+V36;
V34=V15-V35;
D=0;
goto l15;
l16:V30=NW+D;
V29=V25+V30;
V28=V29+1;
x[jvj+2]=0 ;z[jvj+2]=0;
V38=H-1;
V44=J*H;
I=0;
goto l7;
l19:pile[v[22]]=J; pile[WZ1]=(-1859); 
(*f[3979])( );if(v[102]) goto l18;     /*LONGUEUR0(J,(-1859),V4)*/
V4=pile[WZ2]; 
if((V4!=4)) goto l18;
pile[v[22]]=1; pile[WZ1]=J; pile[WZ2]=(-1859); 
(*f[203])( );if(v[102]) goto l18;     /*FTAB0(1,J,(-1859),V5)*/
V5=pile[WZ3]; 
NU=V5;
pile[v[22]]=2; 
(*f[203])( );if(v[102]) goto l18;     /*FTAB0(2,J,(-1859),V6)*/
V6=pile[WZ3]; 
NV=V6;
pile[v[22]]=3; 
(*f[203])( );if(v[102]) goto l18;     /*FTAB0(3,J,(-1859),V7)*/
V7=pile[WZ3]; 
NW=V7;
pile[v[22]]=4; 
(*f[203])( );if(v[102]) goto l18;     /*FTAB0(4,J,(-1859),V8)*/
V8=pile[WZ3]; 
NX=V8;
V19=NW+NX;
V18=NV+V19;
V17=NU+V18;
V16=3+V17;
V15=H-V16;
x[jvj+5]=0 ;z[jvj+5]=0;
A=0;
goto l9;
}
