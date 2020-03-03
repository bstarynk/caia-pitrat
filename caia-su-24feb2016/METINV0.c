#include "dx.h"
void METINV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V1=0,V2=0,V3=0,V4=0,V5=0,V6=0,V7=0,V8=0,V9=0,V10=0,V28=0,V16=0,V17=0,V18=0,V19=0,V20=0,V21=0,V22=0,V23=0,V24=0,V25=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=191; pile[WZ1]=R; 
(*f[71])( );     /*ENLV0(191,R)*/
x[jvj+1]=d[6];z[jvj+1]=0;
l1:if((x[jvj+1]>0)) goto l2;
x[jvj+6]=d[87];z[jvj+6]=0;
l4:if((x[jvj+6]>0)) goto l5;
v[0]=jvj; v[22]-=1; return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=jvj+2; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+2,R,jvj+3)*/
pile[v[22]]=514; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(514,jvj+2,jvj+4)*/
x[jvj+5]=x[jvj+3] ;z[jvj+5]=z[jvj+3];
V13=x[jvj+5];
pile[v[22]]=jvj+5; pile[WZ1]=0; pile[WZ2]=V13; pile[WZ3]=538; 
(*f[285])( );     /*ENLY0(jvj+5,0,V13,538,V1,V2)*/
V1=pile[WZ4]; V2=pile[WZ5]; 
pile[WZ1]=V2; pile[WZ2]=V1; pile[WZ3]=539; 
(*f[285])( );     /*ENLY0(jvj+5,V2,V1,539,V3,V4)*/
V3=pile[WZ4]; V4=pile[WZ5]; 
pile[WZ1]=V4; pile[WZ2]=V3; pile[WZ3]=541; 
(*f[285])( );     /*ENLY0(jvj+5,V4,V3,541,V5,V6)*/
V5=pile[WZ4]; V6=pile[WZ5]; 
pile[WZ1]=V6; pile[WZ2]=V5; pile[WZ3]=543; 
(*f[285])( );     /*ENLY0(jvj+5,V6,V5,543,V7,V8)*/
V7=pile[WZ4]; V8=pile[WZ5]; 
pile[WZ1]=V8; pile[WZ2]=V7; pile[WZ3]=1174; 
(*f[285])( );     /*ENLY0(jvj+5,V8,V7,1174,V9,V10)*/
V9=pile[WZ4]; V10=pile[WZ5]; 
pile[WZ1]=jvj+4; pile[WZ2]=R; 
(*f[35])( );     /*CHGC1(jvj+5,jvj+4,R)*/
(*f[1148])( );     /*METINV0(jvj+5)*/
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
l5:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,R,jvj+8)*/
pile[v[22]]=514; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(514,jvj+7,jvj+9)*/
x[jvj+11]=x[jvj+8] ;z[jvj+11]=z[jvj+8];
l7:if((x[jvj+11]<=0)) goto l6;
x[jvj+10]=s[x[jvj+11]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+11];
V28=x[jvj+10];
pile[v[22]]=jvj+10; pile[WZ1]=0; pile[WZ2]=V28; pile[WZ3]=538; 
(*f[285])( );     /*ENLY0(jvj+10,0,V28,538,V16,V17)*/
V16=pile[WZ4]; V17=pile[WZ5]; 
pile[WZ1]=V17; pile[WZ2]=V16; pile[WZ3]=539; 
(*f[285])( );     /*ENLY0(jvj+10,V17,V16,539,V18,V19)*/
V18=pile[WZ4]; V19=pile[WZ5]; 
pile[WZ1]=V19; pile[WZ2]=V18; pile[WZ3]=541; 
(*f[285])( );     /*ENLY0(jvj+10,V19,V18,541,V20,V21)*/
V20=pile[WZ4]; V21=pile[WZ5]; 
pile[WZ1]=V21; pile[WZ2]=V20; pile[WZ3]=543; 
(*f[285])( );     /*ENLY0(jvj+10,V21,V20,543,V22,V23)*/
V22=pile[WZ4]; V23=pile[WZ5]; 
pile[WZ1]=V23; pile[WZ2]=V22; pile[WZ3]=1174; 
(*f[285])( );     /*ENLY0(jvj+10,V23,V22,1174,V24,V25)*/
V24=pile[WZ4]; V25=pile[WZ5]; 
pile[WZ1]=jvj+9; pile[WZ2]=R; 
(*f[35])( );     /*CHGC1(jvj+10,jvj+9,R)*/
(*f[1148])( );     /*METINV0(jvj+10)*/
x[jvj+11]=t[x[jvj+11]];
goto l7;
l6:x[jvj+6]=t[x[jvj+6]];
goto l4;
}
