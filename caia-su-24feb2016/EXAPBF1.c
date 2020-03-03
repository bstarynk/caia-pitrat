#include "dx.h"
void EXAPBF1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V9=0,V17=0,V4=0,V14=0,V13=0,V21=0,V24=0,C=0,V32=0,V31=0;
int E,EC,T;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=11228;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1196&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; EC=pile[v[22]+1]; T=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+22]=0 ;z[jvj+22]=0;
x[jvj+17]=x[jvj+22] ;z[jvj+17]=z[jvj+22];
x[jvj+24]=x[E] ;z[jvj+24]=z[E];
l4:if((x[jvj+24]>0)) goto l5;
pile[v[22]]=jvj+17; pile[WZ1]=978; pile[WZ2]=1085; pile[WZ3]=T; pile[WZ4]=76; 
(*f[848])( );     /*EXAPBMSG0(jvj+17,978,1085,T,76)*/
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l3:V4=42;
l10:pile[v[22]]=683; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(683,jvj+12,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+12,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=1048; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1048,jvj+12,jvj+15)*/
pile[v[22]]=jvj+12; pile[WZ1]=EC; pile[WZ2]=jvj+16; 
(*f[505])( );     /*EVCOND0(jvj+12,EC,jvj+16)*/
if((x[jvj+16]==135)) goto l11;
l9:x[jvj+26]=t[x[jvj+26]];
l8:if((x[jvj+26]<=0)) goto l6;
x[jvj+12]=s[x[jvj+26]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+26];
pile[v[22]]=860; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(860,jvj+12,jvj+13)*/
if((x[jvj+13]!=1085)) goto l9;
pile[v[22]]=935; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(935,jvj+12,jvj+14)*/
if((x[jvj+14]!=547)) goto l9;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(876,jvj+12,V13)*/
V13=pile[WZ2]; 
if((V13>=V14)) goto l9;
V4=incon;
V17=V14/2;
if((V13<=V17)) goto l3;
V4=32;
goto l10;
l5:x[jvj+10]=s[x[jvj+24]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+24];
pile[v[22]]=109; pile[WZ1]=jvj+10; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,jvj+10,jvj+18)*/
pile[v[22]]=983; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(983,jvj+18,jvj+19)*/
pile[v[22]]=878; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(878,jvj+19,jvj+20)*/
l13:if((x[jvj+20]<=0)) goto l6;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=163; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(163,jvj+21,V32)*/
V32=pile[WZ2]; 
pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(163,jvj+10,V31)*/
V31=pile[WZ2]; 
if((V32==V31)) goto l14;
x[jvj+20]=t[x[jvj+20]];
goto l13;
l6:x[jvj+24]=t[x[jvj+24]];
goto l4;
l7:pile[v[22]]=876; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(876,jvj+4,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=1048; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1048,jvj+4,jvj+9)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[378])( );     /*CPI0(jvj+10,jvj+11)*/
x[jvj+26]=x[jvj+8] ;z[jvj+26]=z[jvj+8];
goto l8;
l11:C=V4;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=876; pile[WZ2]=V13; 
(*f[43])( );     /*CHGC2(jvj+11,876,V13)*/
pile[WZ1]=510; pile[WZ2]=V14; 
(*f[43])( );     /*CHGC2(jvj+11,510,V14)*/
pile[WZ1]=683; pile[WZ2]=V21; 
(*f[43])( );     /*CHGC2(jvj+11,683,V21)*/
pile[WZ1]=1048; pile[WZ2]=jvj+15; 
(*f[35])( );     /*CHGC1(jvj+11,1048,jvj+15)*/
pile[WZ1]=447; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(jvj+11,447,jvj+9)*/
pile[WZ1]=117; pile[WZ2]=V24; 
(*f[43])( );     /*CHGC2(jvj+11,117,V24)*/
pile[WZ1]=331; pile[WZ2]=C; 
(*f[69])( );     /*CHGC3(jvj+11,331,C)*/
goto l9;
l14:x[jvj+25]=x[jvj+21] ;z[jvj+25]=z[jvj+21];
x[jvj+3]=x[jvj+25] ;z[jvj+3]=z[jvj+25];
pile[v[22]]=944; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(944,jvj+3,jvj+8)*/
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(876,jvj+3,V10)*/
V10=pile[WZ2]; 
x[jvj+23]=x[jvj+8] ;z[jvj+23]=z[jvj+8];
l1:if((x[jvj+23]<=0)) goto l6;
x[jvj+4]=s[x[jvj+23]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+23];
pile[v[22]]=935; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(935,jvj+4,jvj+5)*/
if((x[jvj+5]!=547)) goto l2;
pile[v[22]]=860; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(860,jvj+4,jvj+6)*/
if((x[jvj+6]!=530)) goto l2;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(876,jvj+4,V9)*/
V9=pile[WZ2]; 
if((V9<=V10)) goto l2;
pile[v[22]]=jvj+4; pile[WZ1]=EC; pile[WZ2]=jvj+7; 
(*f[505])( );     /*EVCOND0(jvj+4,EC,jvj+7)*/
if((x[jvj+7]==135)) goto l7;
l2:x[jvj+23]=t[x[jvj+23]];
goto l1;
}
