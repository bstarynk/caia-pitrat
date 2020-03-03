#include "dx.h"
void PROGRES0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V16=0,V17=0,V7=0,V6=0,V12=0,V9=0,V28=0,V20=0,V21=0,V23=0,V24=0,V26=0,V27=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=10929;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1308&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+7]=x[jvj+13] ;z[jvj+7]=z[jvj+13];
x[jvj+2]=vo[12];z[jvj+2]=vz[12];
pile[v[22]]=658; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(658,jvj+2,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
if((x[jvj+7]!=0)) goto l5;
x[jvj+12]=1041 ;z[jvj+12]=1041;
l7:x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=jvj+11; pile[WZ1]=935; pile[WZ2]=jvj+12; 
(*f[35])( );     /*CHGC1(jvj+11,935,jvj+12)*/
pile[WZ1]=1124; 
(*f[35])( );     /*CHGC1(jvj+11,1124,jvj+12)*/
l8:x[jvj+1]=incon; v[0]=jvj; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(jvj+4,jvj+5)*/
pile[v[22]]=489; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(489,jvj+5,jvj+6)*/
if((x[jvj+6]==0)) goto l3;
V18=x[jvj+4];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=664; 
(*f[42])( );     /*SRA1(135,0,664,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V18; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(20,V18,V16,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=V17; 
(*f[40])( );     /*SLG0(V17)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+4)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:pile[v[22]]=V7; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V7,83,V6)*/
V6=pile[WZ2]; 
l6:pile[v[22]]=V6; pile[WZ1]=(-6980); 
(*f[37])( );     /*SRA0(V6,(-6980),V23)*/
V23=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V9; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(41,V9,V23,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=V24; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V24,58,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V28; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(23,V28,V26,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; 
(*f[40])( );     /*SLG0(V27)*/
pile[v[22]]=jvj+9; pile[WZ1]=1120; pile[WZ2]=jvj+7; 
(*f[34])( );     /*CHGC0(jvj+9,1120,jvj+7)*/
goto l7;
l5:for(i=x[jvj+7],V12=0;i>0;i=t[i],V12++)  ;
x[jvj+8]=vo[12];z[jvj+8]=vz[12];
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=658; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(658,jvj+8,jvj+10)*/
for(i=x[jvj+10],V9=0;i>0;i=t[i],V9++)  ;
V28=x[jvj+7];
x[jvj+12]=1000 ;z[jvj+12]=1000;
pile[v[22]]=15; pile[WZ1]=0; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(15,0,35,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V12; pile[WZ2]=V20; 
(*f[39])( );     /*SDX0(41,V12,V20,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=V21; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V21,(-4670),V7)*/
V7=pile[WZ2]; 
V6=incon;
if((V12>1)) goto l4;
V6=V7;
goto l6;
}
