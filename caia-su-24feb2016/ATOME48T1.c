#include "dx.h"
void ATOME48T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V35=0,V26=0,V29=0,V16=0,V46=0,V38=0,V39=0,V40=0,V23=0,V41=0,V43=0,V44=0,V45=0,V28=0,V21=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=20048;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3474&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=N; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,N,jvj+11)*/
if((x[jvj+11]!=454)) goto l13;
pile[v[22]]=436; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(436,N,jvj+12)*/
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+12,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=N; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(160,N,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=128)) goto l13;
pile[v[22]]=128; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(128,jvj+13,jvj+15)*/
pile[v[22]]=480; pile[WZ1]=N; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(480,N,jvj+16)*/
pile[v[22]]=766; pile[WZ2]=jvj+17; 
(*f[3042])( );if(v[102]) goto l13;     /*DIFFERE0(766,N,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=477)) goto l13;
pile[v[22]]=436; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(436,jvj+17,jvj+19)*/
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+19,V21)*/
V21=pile[WZ2]; 
if((V16!=V21)) goto l13;
x[jvj+20]=vo[16];z[jvj+20]=vz[16];
l8:if((x[jvj+15]<=0)) goto l13;
x[jvj+21]=s[x[jvj+15]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+15];
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=766)) goto l9;
x[jvj+25]=x[jvj+16] ;z[jvj+25]=z[jvj+16];
l10:if((x[jvj+25]<=0)) goto l9;
x[jvj+7]=s[x[jvj+25]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+25];
pile[v[22]]=158; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(158,jvj+7,jvj+10)*/
if((x[jvj+4]=w[x[jvj+10]][3])==incon) goto l11;
pile[v[22]]=jvj+4; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(jvj+4,jvj+7,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=jvj+17; pile[WZ2]=jvj+23; 
(*f[3029])( );if(v[102]) goto l11;     /*EXECUTE1(V23,jvj+17,jvj+23)*/
x[jvj+8]=x[jvj+23] ;z[jvj+8]=z[jvj+23];
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+24]=x[jvj+16] ;z[jvj+24]=z[jvj+16];
l1:if((x[jvj+24]>0)) goto l2;
V28=g[614];
if((V28<=0)) goto l12;
V29=vg[614];
if((V29!=0)) goto l5;
if((V28<3)) goto l7;
l5:pile[v[22]]=614; pile[WZ1]=20048; pile[WZ2]=1; pile[WZ3]=(-611); pile[WZ4]=V16; pile[WZ5]=(-595); pile[v[22]+6]=jvj+7; pile[v[22]+7]=(-620); pile[v[22]+8]=jvj+4; pile[v[22]+9]=(-697); pile[v[22]+10]=jvj+8; pile[v[22]+11]=jvj+9; 
(*f[3051])( );     /*INTERP25(614,20048,1,(-611),V16,(-595),jvj+7,(-620),jvj+4,(-697),jvj+8,jvj+9)*/
if((x[jvj+9]==135)) goto l6;
l12:pile[v[22]]=jvj+7; pile[WZ1]=843; pile[WZ2]=jvj+6; 
(*f[34])( );     /*CHGC0(jvj+7,843,jvj+6)*/
pile[v[22]]=jvj+20; pile[WZ1]=1208; pile[WZ2]=766; 
(*f[35])( );     /*CHGC1(jvj+20,1208,766)*/
l11:x[jvj+25]=t[x[jvj+25]];
goto l10;
l2:x[jvj+3]=s[x[jvj+24]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+24];
if((x[jvj+3]==x[jvj+7])) goto l3;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ3]=jvj+5; 
(*f[45])( );if(v[102]) goto l3;     /*FNDZ0(jvj+3,jvj+4,V35,jvj+5)*/
V35=pile[WZ2]; 
V26=V35;
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==V26) goto l4;
l3:x[jvj+24]=t[x[jvj+24]];
goto l1;
l4:pile[v[22]]=jvj+6; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+3)*/
goto l3;
l6:if((V28<4)) goto l7;
goto l12;
l7:V46=x[jvj+8];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=477; 
(*f[42])( );     /*SRA1(135,0,477,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; pile[WZ1]=V16; 
(*f[37])( );     /*SRA0(V38,V16,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V39,123,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=V23; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(jvj+10,V23,V40,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V41,125,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V43,61,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V46; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(23,V46,V44,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; 
(*f[40])( );     /*SLG0(V45)*/
if((V28!=2)) goto l12;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l12;
l9:x[jvj+15]=t[x[jvj+15]];
goto l8;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
