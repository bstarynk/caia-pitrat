#include "dx.h"
void DOMINOSA2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V26=0,V5=0,V6=0,V27=0,V21=0,C=0,V18=0,V17=0,XA=0,V20=0,V19=0,V23=0,V22=0,YA=0,V25=0,V24=0,V9=0,V8=0,V14=0,V13=0,I=0,V11=0,V12=0,R=0,V7=0,V47=0,V48=0,V50=0,V51=0,V54=0,V56=0,V55=0,V52=0,V60=0,V64=0,V62=0,V65=0,V63=0,V61=0,V58=0,V59=0,V57=0;
int M,N;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=26254;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2987&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; N=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=0 ;z[jvj+7]=0;
V14=M*N;
V13=V14-1;
I=0;
l9:if((I<=V13)) goto l10;
x[NNNE]=x[jvj+7] ;z[NNNE]=z[jvj+7];
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:V26=V17+1;
V5=V26;
l6:XA=V5;
pile[v[22]]=515; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(515,jvj+3,V20)*/
V20=pile[WZ2]; 
V19=V12+V20;
V23=V19*M;
V22=V17+V23;
V6=incon;
if((C==0)) goto l2;
V27=V19+1;
V6=V27;
l7:YA=V6;
V25=YA*M;
V24=XA+V25;
if((C==0)) goto l16;
if((C<=0)) goto l5;
if((V17>=M)) goto l5;
if((V17<0)) goto l5;
if((V19<0)) goto l5;
V60=N-1;
if((V19>=V60)) goto l5;
V64=M-1;
V62=V64*N;
V65=V19*M;
V63=V17+V65;
V61=V62+V63;
R=V61;
l8:pile[v[22]]=V22; pile[WZ1]=(-598); 
(*f[201])( );if(v[102]) goto l5;     /*FCOEFF0(V22,(-598),V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V24; 
(*f[201])( );if(v[102]) goto l5;     /*FCOEFF0(V24,(-598),V8)*/
V8=pile[WZ2]; 
if((V9>V8)) goto l15;
V47=V9;
V48=V8;
l12:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+25; 
(*f[46])( );     /*TRI0(0,117,jvj+25)*/
V50=V47-1;
V51=0;
l13:if((V51<=V50)) goto l14;
pile[v[22]]=117; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+25,V54)*/
V54=pile[WZ2]; 
V56=V48-V47;
V55=V56+V54;
V7=V55;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+9)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=R; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,R,jvj+16)*/
pile[v[22]]=jvj+14; pile[WZ1]=111; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,111,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+15; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+16,jvj+15,jvj+13)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=111; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(jvj+9,111,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; pile[WZ2]=103; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+10,jvj+11,103,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+12; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+12,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+5)*/
l5:x[jvj+26]=t[x[jvj+26]];
l3:if((x[jvj+26]>0)) goto l4;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+6; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+17)*/
pile[WZ3]=1215; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=111; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,111,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+6; pile[WZ2]=107; pile[WZ3]=jvj+24; 
(*f[301])( );     /*TRI11(jvj+23,jvj+6,107,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+24,22,100,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+19; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+19)*/
pile[v[22]]=jvj+17; pile[WZ1]=111; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,111,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=103; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+18,jvj+19,103,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+21,jvj+20,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[522])( );     /*PLUB2(jvj+7,jvj+8)*/
I++;
goto l9;
l2:V6=V19;
goto l7;
l4:x[jvj+3]=s[x[jvj+26]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+26];
pile[v[22]]=609; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(609,jvj+3,V21)*/
V21=pile[WZ2]; 
C=V21;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(510,jvj+3,V18)*/
V18=pile[WZ2]; 
V17=V11+V18;
V5=incon;
if((C==0)) goto l1;
V5=V17;
goto l6;
l10:V11=I%M;
V12=I/M;
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=1481; pile[WZ1]=1560; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1481,1560,jvj+2)*/
x[jvj+26]=x[jvj+2] ;z[jvj+26]=z[jvj+2];
goto l3;
l14:V52=N-V51;
pile[v[22]]=jvj+25; pile[WZ1]=117; pile[WZ2]=V52; 
(*f[186])( );     /*BTC0(jvj+25,117,V52)*/
V51++;
goto l13;
l15:V47=V8;
V48=V9;
goto l12;
l16:if((V19>=N)) goto l5;
if((V17<0)) goto l5;
if((V19<0)) goto l5;
V57=M-1;
if((V17>=V57)) goto l5;
V59=V19*V57;
V58=V17+V59;
R=V58;
goto l8;
}
