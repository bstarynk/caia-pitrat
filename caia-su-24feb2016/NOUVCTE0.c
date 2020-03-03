#include "dx.h"
void NOUVCTE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V=0,V9=0,V18=0,V19=0,V20=0,V8=0,V15=0;
int HIST,A,B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=10285;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3027&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((v[111]!=0)) goto l1;
pile[v[22]]=875; pile[WZ1]=HIST; pile[WZ2]=B; 
(*f[1320])( );     /*ARCHIVE1(875,HIST,B)*/
l1:pile[v[22]]=B; pile[WZ1]=130; pile[WZ2]=A; 
(*f[43])( );     /*CHGC2(B,130,A)*/
pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,B,jvj+2)*/
if((x[jvj+2]!=448)) goto l9;
pile[v[22]]=436; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(436,B,jvj+3)*/
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+3,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,B,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=451)) goto l9;
V=V6;
x[jvj+7]=vo[16];z[jvj+7]=vz[16];
pile[v[22]]=128; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(128,jvj+7,jvj+8)*/
l5:if((x[jvj+8]>0)) goto l6;
x[jvj+10]=vo[16];z[jvj+10]=vz[16];
pile[v[22]]=(-200); pile[WZ1]=416; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0((-200),416,jvj+12)*/
pile[v[22]]=140; pile[WZ1]=V; pile[WZ2]=158; pile[WZ3]=41; pile[WZ4]=jvj+12; pile[WZ5]=jvj+11; 
(*f[48])( );     /*QUADRI1(140,V,158,41,jvj+12,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=128; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+10,128,jvj+11)*/
l8:pile[v[22]]=jvj+11; pile[WZ1]=130; pile[WZ2]=A; 
(*f[43])( );     /*CHGC2(jvj+11,130,A)*/
V8=g[619];
if((V8<=0)) goto l9;
V9=vg[619];
if((V9!=0)) goto l2;
if((V8<3)) goto l4;
l2:pile[v[22]]=619; pile[WZ1]=10285; pile[WZ2]=0; pile[WZ3]=(-611); pile[WZ4]=V; pile[WZ5]=(-598); pile[v[22]+6]=A; pile[v[22]+7]=jvj+6; 
(*f[3982])( );     /*INTERP26(619,10285,0,(-611),V,(-598),A,jvj+6)*/
if((x[jvj+6]==135)) goto l3;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:if((V8<4)) goto l4;
goto l9;
l4:pile[v[22]]=0; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(0,V,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V18,61,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=A; pile[WZ2]=V19; 
(*f[39])( );     /*SDX0(41,A,V19,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; 
(*f[40])( );     /*SLG0(V20)*/
if((V8!=2)) goto l9;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l9;
l6:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+9,V15)*/
V15=pile[WZ2]; 
if((V15!=V)) goto l7;
x[jvj+11]=x[jvj+9] ;z[jvj+11]=z[jvj+9];
goto l8;
l7:x[jvj+8]=t[x[jvj+8]];
goto l5;
}
