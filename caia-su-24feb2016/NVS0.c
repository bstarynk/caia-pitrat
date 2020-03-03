#include "dx.h"
void NVS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V24=0,V23=0,V18=0,V14=0,V15=0,V37=0,V25=0,V26=0,V33=0,V29=0,V28=0,V34=0,V32=0;
int I;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=d[211];z[jvj+1]=0;
l1:if((x[jvj+1]<=0)) goto l5;
x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
V12=8192;
V24=V12;
V23=I;
x[jvj+8]=x[jvj+2] ;z[jvj+8]=z[jvj+2];
l6:if((V24==1)) goto l8;
if((V24<=1)) goto l2;
if((V23>=V24)) goto l9;
pile[v[22]]=134; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(134,jvj+8,jvj+9)*/
V18=V24/2;
x[jvj+8]=x[jvj+9] ;z[jvj+8]=z[jvj+9];
V23=V23;
V24=V18;
goto l6;
l2:x[jvj+1]=t[x[jvj+1]];
goto l1;
l4:pile[v[22]]=101; pile[WZ1]=jvj+5; 
(*f[71])( );     /*ENLV0(101,jvj+5)*/
pile[v[22]]=130; 
(*f[71])( );     /*ENLV0(130,jvj+5)*/
pile[v[22]]=163; 
(*f[71])( );     /*ENLV0(163,jvj+5)*/
l5:v[0]=jvj; v[22]-=1; return;
l7:pile[v[22]]=135; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(135,jvj+8,jvj+10)*/
l3:pile[v[22]]=jvj+2; pile[WZ1]=8192; pile[WZ2]=I; pile[WZ3]=jvj+3; pile[WZ4]=jvj+4; pile[WZ5]=jvj+5; 
(*f[351])( );if(v[102]) goto l5;     /*NVW0(jvj+2,8192,I,jvj+3,jvj+4,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+3; 
(*f[71])( );     /*ENLV0(jvj+4,jvj+3)*/
pile[v[22]]=226; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(226,jvj+5,jvj+6)*/
if((x[jvj+6]!=0)) goto l4;
pile[v[22]]=153; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(153,jvj+5,jvj+7)*/
x[jvj+12]=x[jvj+7] ;z[jvj+12]=z[jvj+7];
V37=x[jvj+5];
l10:pile[v[22]]=163; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(163,jvj+12,V25)*/
V25=pile[WZ2]; 
V26=V37;
pile[v[22]]=226; pile[WZ2]=V26; 
(*f[134])( );     /*OTA0(226,jvj+12,V26)*/
l11:pile[v[22]]=163; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(163,jvj+12,V33)*/
V33=pile[WZ2]; 
l12:pile[v[22]]=163; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(163,jvj+12,V29)*/
V29=pile[WZ2]; 
goto l5;
l8:if((V23==1)) goto l7;
if((V23!=0)) goto l2;
pile[v[22]]=134; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(134,jvj+8,jvj+10)*/
goto l3;
l9:pile[v[22]]=135; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(135,jvj+8,jvj+11)*/
V14=V23-V24;
V15=V24/2;
x[jvj+8]=x[jvj+11] ;z[jvj+8]=z[jvj+11];
V23=V14;
V24=V15;
goto l6;
l14:V28=s[x[jvj+14]];
if((V28!=V37)) goto l5;
x[jvj+14]=t[x[jvj+14]];
l13:if((x[jvj+14]>0)) goto l14;
pile[v[22]]=153; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(153,jvj+12,jvj+13)*/
V37=x[jvj+12];
x[jvj+12]=x[jvj+13] ;z[jvj+12]=z[jvj+13];
goto l10;
l15:pile[v[22]]=226; pile[WZ1]=jvj+12; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(226,jvj+12,jvj+14)*/
goto l13;
l16:V34=V37;
pile[v[22]]=226; pile[WZ1]=jvj+12; pile[WZ2]=V34; 
(*f[134])( );     /*OTA0(226,jvj+12,V34)*/
goto l12;
l18:pile[v[22]]=226; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(226,jvj+12,jvj+15)*/
l17:if((x[jvj+15]<=0)) goto l12;
V32=s[x[jvj+15]];
if((V32!=V37)) goto l16;
x[jvj+15]=t[x[jvj+15]];
goto l17;
}
