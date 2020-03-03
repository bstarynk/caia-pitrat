#include "dx.h"
void STEQM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V4=0,V3=0,V9=0,V16=0,V14=0,V15=0,V17=0,V19=0,V21=0,V8=0;
int I,P,D,HIST,RN;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=11430;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1934&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; P=pile[v[22]+1]; D=pile[v[22]+2]; HIST=pile[v[22]+3]; RN=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1474; pile[WZ1]=D; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1474,D,jvj+2)*/
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(510,jvj+2,V1)*/
V1=pile[WZ2]; 
if((V1!=I)) goto l9;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+2,V4)*/
V4=pile[WZ2]; 
V3=V4%P;
if((V3==0)) goto l8;
l9:pile[v[22]]=117; pile[WZ1]=P; pile[WZ2]=510; pile[WZ3]=I; pile[WZ4]=jvj+6; 
(*f[391])( );     /*QUADRI10(117,P,510,I,jvj+6)*/
pile[v[22]]=D; pile[WZ1]=1474; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(D,1474,jvj+6)*/
pile[WZ1]=1603; pile[WZ2]=RN; 
(*f[35])( );     /*CHGC1(D,1603,RN)*/
if((v[111]!=0)) goto l5;
pile[v[22]]=1367; pile[WZ1]=HIST; pile[WZ2]=D; 
(*f[1320])( );     /*ARCHIVE1(1367,HIST,D)*/
l5:x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=1418; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1418,jvj+4,jvj+5)*/
if((x[jvj+5]!=68)) goto l6;
pile[v[22]]=D; 
(*f[1595])( );     /*CRETUND0(D)*/
l6:V8=g[604];
if((V8<=0)) goto l7;
V9=vg[604];
if((V9!=0)) goto l1;
if((V8<3)) goto l3;
l1:pile[v[22]]=604; pile[WZ1]=11430; pile[WZ2]=0; pile[WZ3]=(-656); pile[WZ4]=D; pile[WZ5]=(-6231); pile[v[22]+6]=HIST; pile[v[22]+7]=(-592); pile[v[22]+8]=I; pile[v[22]+9]=(-624); pile[v[22]+10]=P; pile[v[22]+11]=jvj+3; 
(*f[1257])( );     /*INTERP13(604,11430,0,(-656),D,(-6231),HIST,(-592),I,(-624),P,jvj+3)*/
if((x[jvj+3]==135)) goto l2;
l7:pile[v[22]]=1367; pile[WZ1]=D; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(1367,D,HIST)*/
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l2:if((V8<4)) goto l3;
goto l7;
l3:V16=x[D];
pile[v[22]]=20; pile[WZ1]=625; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,625,0,V14)*/
V14=pile[WZ3]; 
pile[WZ1]=V16; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(20,V16,V14,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=I; pile[WZ2]=V15; 
(*f[39])( );     /*SDX0(41,I,V15,V17)*/
V17=pile[WZ3]; 
pile[WZ1]=P; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(41,P,V17,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l4;     /*SORHIST1(V19,HIST,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; 
(*f[40])( );     /*SLG0(V21)*/
l4:if((V8!=2)) goto l7;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l7;
}
