#include "dx.h"
void ANOSOL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int S=0,V7=0,V12=0,V19=0,V16=0,V17=0,V29=0,V28=0;
int B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=11056;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1543&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=incon;
pile[v[22]]=1078; pile[WZ1]=B; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1078,B,jvj+2)*/
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(109,jvj+2,jvj+21)*/
pile[v[22]]=983; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(983,jvj+21,jvj+22)*/
pile[v[22]]=878; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(878,jvj+22,jvj+23)*/
l11:if((x[jvj+23]<=0)) goto l1;
x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=163; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(163,jvj+24,V29)*/
V29=pile[WZ2]; 
pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(163,jvj+2,V28)*/
V28=pile[WZ2]; 
if((V29==V28)) goto l12;
x[jvj+23]=t[x[jvj+23]];
goto l11;
l2:pile[v[22]]=944; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(944,jvj+4,jvj+5)*/
l3:if((x[jvj+5]>0)) goto l4;
pile[v[22]]=944; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(944,jvj+4,jvj+9)*/
l6:if((x[jvj+9]<=0)) goto l10;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=935; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(935,jvj+10,jvj+11)*/
if((x[jvj+11]!=325)) goto l7;
pile[v[22]]=860; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(860,jvj+10,jvj+12)*/
if((x[jvj+12]!=954)) goto l7;
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(493,jvj+10,V12)*/
V12=pile[WZ2]; 
if((V12==S)) goto l7;
x[jvj+16]=x[jvj+10] ;z[jvj+16]=z[jvj+10];
l8:pile[v[22]]=1078; pile[WZ1]=B; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1078,B,jvj+14)*/
pile[v[22]]=109; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(109,jvj+14,jvj+15)*/
pile[v[22]]=117; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,B,V16)*/
V16=pile[WZ2]; 
pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+16,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=1078; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+14,1078,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=289; pile[WZ2]=935; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+17,289,935,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=493; pile[WZ2]=913; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+18,493,913,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=V17; pile[WZ2]=515; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,V17,515,jvj+20)*/
pile[v[22]]=109; pile[WZ1]=jvj+15; pile[WZ2]=510; pile[WZ3]=V16; pile[WZ4]=jvj+20; pile[WZ5]=jvj+13; 
(*f[47])( );     /*QUADRI0(109,jvj+15,510,V16,jvj+20,jvj+13)*/
pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,jvj+4,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=jvj+13; pile[WZ1]=163; pile[WZ2]=V19; 
(*f[177])( );     /*CHGC4(jvj+13,163,V19)*/
l9:pile[v[22]]=1243; pile[WZ1]=1051; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(1243,1051,jvj+13)*/
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=935; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(935,jvj+6,jvj+7)*/
if((x[jvj+7]!=547)) goto l5;
pile[v[22]]=860; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(860,jvj+6,jvj+8)*/
if((x[jvj+8]!=530)) goto l5;
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(493,jvj+6,V7)*/
V7=pile[WZ2]; 
if((V7==S)) goto l5;
x[jvj+16]=x[jvj+6] ;z[jvj+16]=z[jvj+6];
goto l8;
l5:x[jvj+5]=t[x[jvj+5]];
goto l3;
l7:x[jvj+9]=t[x[jvj+9]];
goto l6;
l12:x[jvj+4]=x[jvj+24] ;z[jvj+4]=z[jvj+24];
l1:pile[v[22]]=860; pile[WZ1]=B; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(860,B,jvj+3)*/
if(x[jvj+3]!=530&&x[jvj+3]!=954&&x[jvj+3]!=301&&x[jvj+3]!=1085&&x[jvj+3]!=1102) goto l10;
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(493,B,S)*/
S=pile[WZ2]; 
if(x[jvj+4]!=incon) goto l2;
goto l10;
}
