#include "dx.h"
void PRIOMIN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V7=0,V12=0,V10=0,V11=0,V2=0,K=0,V16=0,V5=0,V4=0,V25=0,V22=0,V23=0,V24=0,V26=0,V15=0,V14=0,V3=0;
int B;
int C,P;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=10632;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1226&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; P=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=90; 
(*f[1487])( );     /*SORES1(90)*/
x[jvj+4]=0 ;z[jvj+4]=0;
V3=incon;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,jvj+2,V12)*/
V12=pile[WZ2]; 
I=0;
l3:if((I>V12)) goto l1;
V10=tu[I];
if((V10==0)) goto l4;
V11=tp[I];
if((V11==0)) goto l4;
x[jvj+3]=V11 ;z[jvj+3]=(V11<=sepcte) ? V11 : 0;
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+3,V2)*/
V2=pile[WZ2]; 
if(V3==incon) goto l15;
if((V2==V3)) goto l5;
if((V2<=V3)) goto l15;
l4:I++;
goto l3;
l1:if((x[jvj+4]>0)) goto l2;
C=x[P]=incon;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l2:I=s[x[jvj+4]];
V7=tp[I];
x[jvj+5]=V7 ;z[jvj+5]=(V7<=sepcte) ? V7 : 0;
for(i=x[jvj+4],V14=0;i>0;i=t[i],V14++)  ;
x[P]=x[jvj+5] ;z[P]=z[jvj+5];
C=V14;
V15=g[374];
if((V15<=0)) goto l6;
V16=vg[374];
if((V16!=0)) goto l8;
if((V15<3)) goto l11;
l8:pile[v[22]]=374; pile[WZ1]=10632; pile[WZ2]=0; pile[WZ3]=(-632); pile[WZ4]=C; pile[WZ5]=(-702); pile[v[22]+6]=jvj+5; pile[v[22]+7]=jvj+6; 
(*f[353])( );     /*INTERP7(374,10632,0,(-632),C,(-702),jvj+5,jvj+6)*/
if((x[jvj+6]==135)) goto l10;
l6:if((C>=20)) goto l14;
if((v[113]>0)) goto l7;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+1]=C; v[102]=0;return;
l9:pile[v[22]]=V5; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V5,83,V4)*/
V4=pile[WZ2]; 
l12:pile[v[22]]=V4; 
(*f[40])( );     /*SLG0(V4)*/
if((V15!=2)) goto l6;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l6;
l10:if((V15<4)) goto l11;
goto l6;
l11:V25=x[jvj+5];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=337; 
(*f[42])( );     /*SRA1(135,0,337,V22)*/
V22=pile[WZ3]; 
pile[WZ1]=V22; pile[WZ2]=491; 
(*f[42])( );     /*SRA1(135,V22,491,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V25; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(20,V25,V23,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=C; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(41,C,V24,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V26,(-4670),V5)*/
V5=pile[WZ2]; 
V4=incon;
if((C>1)) goto l9;
V4=V5;
goto l12;
l15:V3=V2;
x[jvj+4]=0 ;z[jvj+4]=0;
l5:pile[v[22]]=jvj+4; pile[WZ1]=I; 
(*f[207])( );     /*PLUE2(jvj+4,I)*/
goto l4;
l7:if((x[jvj+4]<=0)) goto l14;
K=s[x[jvj+4]];
pile[v[22]]=K; 
(*f[1187])( );     /*SORELT0(K)*/
x[jvj+4]=t[x[jvj+4]];
goto l7;
}
