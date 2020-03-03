#include "dx.h"
void ESSAIAZERO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V44=0,V31=0,V29=0,V30=0,V33=0,V24=0,V34=0,V25=0,V26=0,V38=0,V35=0,V2=0,V3=0,V4=0,V5=0,V6=0,V7=0,V8=0,V9=0,V10=0,V11=0,V12=0,V13=0,V14=0,V15=0,V16=0,V17=0,V18=0,V19=0,V37=0,V39=0;
int N,UR,NR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=11131;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==399&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; UR=pile[v[22]+1]; NR=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((NR==0)) goto l1;
if((NR<=0)) goto l24;
pile[v[22]]=41; pile[WZ1]=NR; pile[WZ2]=jvj+5; 
(*f[445])( );     /*TRI15(41,NR,jvj+5)*/
l22:pile[v[22]]=983; pile[WZ1]=N; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(983,N,jvj+18)*/
pile[v[22]]=878; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(878,jvj+18,jvj+19)*/
l23:if((x[jvj+19]<=0)) goto l24;
x[jvj+6]=s[x[jvj+19]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+19];
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(1484,854,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=944; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(944,jvj+6,jvj+7)*/
V29=sepfacts+1;
V30=sepfacts+V31;
l5:if((V29>V30)) goto l14;
V33=r[V29];
if((V33!=1)) goto l6;
x[jvj+8]=V29 ;z[jvj+8]=(V29<=sepcte) ? V29 : 0;
pile[v[22]]=983; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(983,jvj+8,jvj+9)*/
x[jvj+10]=x[jvj+9] ;z[jvj+10]=z[jvj+9];
pile[v[22]]=1001; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1001,jvj+10,jvj+11)*/
x[jvj+20]=x[jvj+11] ;z[jvj+20]=z[jvj+11];
l7:if((x[jvj+20]<=0)) goto l6;
x[jvj+12]=s[x[jvj+20]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+20];
pile[v[22]]=117; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+12,V24)*/
V24=pile[WZ2]; 
V34=x[jvj+12];
x[jvj+21]=x[jvj+7] ;z[jvj+21]=z[jvj+7];
l9:if((x[jvj+21]<=0)) goto l8;
x[jvj+13]=s[x[jvj+21]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+21];
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+13,V25)*/
V25=pile[WZ2]; 
if((V24!=V25)) goto l10;
if((UR!=85)) goto l11;
if((V25==NR)) goto l11;
l10:x[jvj+21]=t[x[jvj+21]];
goto l9;
l1:x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(645,597,jvj+2)*/
l2:if((x[jvj+2]>0)) goto l3;
x[jvj+5]=x[jvj+4] ;z[jvj+5]=z[jvj+4];
goto l22;
l3:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(683,jvj+3,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=V44; 
(*f[207])( );     /*PLUE2(jvj+4,V44)*/
l4:x[jvj+2]=t[x[jvj+2]];
goto l2;
l6:V29++;
goto l5;
l8:x[jvj+20]=t[x[jvj+20]];
goto l7;
l11:pile[v[22]]=683; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(683,jvj+13,V26)*/
V26=pile[WZ2]; 
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V26) goto l12;
goto l10;
l12:pile[v[22]]=1001; pile[WZ1]=jvj+10; pile[WZ2]=V34; 
(*f[134])( );     /*OTA0(1001,jvj+10,V34)*/
goto l10;
l13:if((UR!=85)) goto l21;
pile[v[22]]=117; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,jvj+14,V38)*/
V38=pile[WZ2]; 
if((V38==NR)) goto l21;
l20:x[jvj+22]=t[x[jvj+22]];
l18:if((x[jvj+22]>0)) goto l19;
x[jvj+15]=t[x[jvj+15]];
l15:if((x[jvj+15]>0)) goto l16;
x[jvj+19]=t[x[jvj+19]];
goto l23;
l14:if((UR!=84)) goto l17;
V35=x[jvj+6];
pile[v[22]]=jvj+6; pile[WZ1]=0; pile[WZ2]=V35; pile[WZ3]=493; 
(*f[285])( );     /*ENLY0(jvj+6,0,V35,493,V2,V3)*/
V2=pile[WZ4]; V3=pile[WZ5]; 
pile[WZ1]=V3; pile[WZ2]=V2; pile[WZ3]=718; 
(*f[285])( );     /*ENLY0(jvj+6,V3,V2,718,V4,V5)*/
V4=pile[WZ4]; V5=pile[WZ5]; 
pile[WZ1]=V5; pile[WZ2]=V4; pile[WZ3]=844; 
(*f[285])( );     /*ENLY0(jvj+6,V5,V4,844,V6,V7)*/
V6=pile[WZ4]; V7=pile[WZ5]; 
pile[WZ1]=V7; pile[WZ2]=V6; pile[WZ3]=1081; 
(*f[285])( );     /*ENLY0(jvj+6,V7,V6,1081,V8,V9)*/
V8=pile[WZ4]; V9=pile[WZ5]; 
pile[WZ1]=V9; pile[WZ2]=V8; pile[WZ3]=1179; 
(*f[285])( );     /*ENLY0(jvj+6,V9,V8,1179,V10,V11)*/
V10=pile[WZ4]; V11=pile[WZ5]; 
pile[WZ1]=V11; pile[WZ2]=V10; pile[WZ3]=1180; 
(*f[285])( );     /*ENLY0(jvj+6,V11,V10,1180,V12,V13)*/
V12=pile[WZ4]; V13=pile[WZ5]; 
pile[WZ1]=V13; pile[WZ2]=V12; pile[WZ3]=1190; 
(*f[285])( );     /*ENLY0(jvj+6,V13,V12,1190,V14,V15)*/
V14=pile[WZ4]; V15=pile[WZ5]; 
pile[WZ1]=V15; pile[WZ2]=V14; pile[WZ3]=1209; 
(*f[285])( );     /*ENLY0(jvj+6,V15,V14,1209,V16,V17)*/
V16=pile[WZ4]; V17=pile[WZ5]; 
pile[WZ1]=V17; pile[WZ2]=V16; pile[WZ3]=1364; 
(*f[285])( );     /*ENLY0(jvj+6,V17,V16,1364,V18,V19)*/
V18=pile[WZ4]; V19=pile[WZ5]; 
l17:x[jvj+15]=d[39];z[jvj+15]=0;
goto l15;
l16:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+6; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(jvj+16,jvj+6,jvj+17)*/
x[jvj+22]=x[jvj+17] ;z[jvj+22]=z[jvj+17];
goto l18;
l19:x[jvj+14]=s[x[jvj+22]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+22];
pile[v[22]]=683; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(683,jvj+14,V37)*/
V37=pile[WZ2]; 
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V37) goto l13;
goto l20;
l21:V39=x[jvj+14];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+6; pile[WZ2]=V39; 
(*f[134])( );     /*OTA0(jvj+16,jvj+6,V39)*/
goto l20;
l24:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
}
