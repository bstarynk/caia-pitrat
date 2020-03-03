#include "dx.h"
void LOGIGRAPHE13(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V58=0,V15=0,V59=0,V60=0,V61=0,V62=0,V63=0,V57=0,J=0,V65=0,V64=0,A=0,V41=0,B=0,V28=0,V27=0,V26=0,V43=0,V42=0,C=0,V31=0,V30=0,V29=0,V46=0,V45=0,V44=0,D=0,V34=0,V33=0,V32=0,V50=0,V49=0,V48=0,V47=0,E=0,V37=0,V36=0,V35=0,V55=0,V54=0,V53=0,V52=0,V51=0,F=0,V40=0,V39=0,V38=0,V24=0,I=0,V4=0,V5=0,NU=0,V6=0,NV=0,V7=0,NW=0,V8=0,NX=0,V9=0,NY=0,V10=0,NZ=0,V23=0,V22=0,V21=0,V20=0,V19=0,V18=0,V17=0;
int H,V;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=26114;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2681&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; V=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=0 ;z[jvj+8]=0;
V24=H-1;
I=0;
l23:if((I<=V24)) goto l25;
x[NNNE]=x[jvj+8] ;z[NNNE]=z[jvj+8];
l26:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:V15=incon;
if((J<A)) goto l2;
V58=A+NU;
if((J>=V58)) goto l2;
V15=1;
l2:if((J<V26)) goto l3;
V59=V26+NV;
if((J>=V59)) goto l3;
V15=1;
l3:if((J<V29)) goto l4;
V60=V29+NW;
if((J>=V60)) goto l4;
V15=1;
l4:if((J<V32)) goto l5;
V61=V32+NX;
if((J>=V61)) goto l5;
V15=1;
l5:if((J<V35)) goto l6;
V62=V35+NY;
if((J>=V62)) goto l6;
V15=1;
l6:if((J<V38)) goto l7;
V63=V38+NZ;
if((J>=V63)) goto l7;
V15=1;
l10:V65=J*H;
V64=I+V65;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+10)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V64; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,V64,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+17,jvj+16,jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V15; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,V15,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=111; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+10,111,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+11,jvj+12,103,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+13,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
J++;
l9:if((J<=V57)) goto l1;
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
F++;
l21:if((F<=V51)) goto l22;
E++;
l19:if((E<=V47)) goto l20;
D++;
l17:if((D<=V44)) goto l18;
C++;
l15:if((C<=V42)) goto l16;
B++;
l13:if((B<=V41)) goto l14;
A++;
l11:if((A<=V17)) goto l12;
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
l24:I++;
goto l23;
l7:if(V15==incon) goto l8;
goto l10;
l8:V15=0;
goto l10;
l12:V41=V17-A;
B=0;
goto l13;
l14:V28=NU+B;
V27=A+V28;
V26=V27+1;
V43=A+B;
V42=V17-V43;
C=0;
goto l15;
l16:V31=NV+C;
V30=V26+V31;
V29=V30+1;
V46=B+C;
V45=A+V46;
V44=V17-V45;
D=0;
goto l17;
l18:V34=NW+D;
V33=V29+V34;
V32=V33+1;
V50=C+D;
V49=B+V50;
V48=A+V49;
V47=V17-V48;
E=0;
goto l19;
l20:V37=NX+E;
V36=V32+V37;
V35=V36+1;
V55=D+E;
V54=C+V55;
V53=B+V54;
V52=A+V53;
V51=V17-V52;
F=0;
goto l21;
l22:V40=NY+F;
V39=V35+V40;
V38=V39+1;
x[jvj+2]=0 ;z[jvj+2]=0;
V57=V-1;
J=0;
goto l9;
l25:pile[v[22]]=I; pile[WZ1]=(-8615); 
(*f[3979])( );if(v[102]) goto l24;     /*LONGUEUR0(I,(-8615),V4)*/
V4=pile[WZ2]; 
if((V4!=6)) goto l24;
pile[v[22]]=1; pile[WZ1]=I; pile[WZ2]=(-8615); 
(*f[203])( );if(v[102]) goto l24;     /*FTAB0(1,I,(-8615),V5)*/
V5=pile[WZ3]; 
NU=V5;
pile[v[22]]=2; 
(*f[203])( );if(v[102]) goto l24;     /*FTAB0(2,I,(-8615),V6)*/
V6=pile[WZ3]; 
NV=V6;
pile[v[22]]=3; 
(*f[203])( );if(v[102]) goto l24;     /*FTAB0(3,I,(-8615),V7)*/
V7=pile[WZ3]; 
NW=V7;
pile[v[22]]=4; 
(*f[203])( );if(v[102]) goto l24;     /*FTAB0(4,I,(-8615),V8)*/
V8=pile[WZ3]; 
NX=V8;
pile[v[22]]=5; 
(*f[203])( );if(v[102]) goto l24;     /*FTAB0(5,I,(-8615),V9)*/
V9=pile[WZ3]; 
NY=V9;
pile[v[22]]=6; 
(*f[203])( );if(v[102]) goto l24;     /*FTAB0(6,I,(-8615),V10)*/
V10=pile[WZ3]; 
NZ=V10;
V23=NY+NZ;
V22=NX+V23;
V21=NW+V22;
V20=NV+V21;
V19=NU+V20;
V18=5+V19;
V17=V-V18;
x[jvj+5]=0 ;z[jvj+5]=0;
A=0;
goto l11;
}
