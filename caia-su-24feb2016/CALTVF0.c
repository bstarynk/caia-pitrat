#include "dx.h"
void CALTVF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V12=0,V3=0,V7=0,V15=0,V16=0,V14=0,V13=0;
int B,A,V,H;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=11259;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3980&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; V=pile[v[22]+2]; H=pile[v[22]+3]; v[22]+=5; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=1068; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1068,jvj+2,jvj+3)*/
if((x[jvj+3]!=0)) goto l4;
pile[v[22]]=V; pile[WZ1]=H; 
(*f[4056])( );     /*CALF0(V,H)*/
l4:x[jvj+6]=vo[16];z[jvj+6]=vz[16];
pile[v[22]]=1068; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1068,jvj+6,jvj+7)*/
l5:if((x[jvj+7]>0)) goto l6;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l2:x[jvj+4]=s[x[jvj+11]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+11];
pile[v[22]]=510; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(510,jvj+4,V10)*/
V10=pile[WZ2]; 
if((V10>=V16)) goto l3;
pile[v[22]]=jvj+5; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+5,117,1)*/
l3:x[jvj+11]=t[x[jvj+11]];
l1:if((x[jvj+11]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+5,V12)*/
V12=pile[WZ2]; 
V3=V12;
if((V3!=B)) goto l9;
V14=V15-V16;
V13=V14+1;
R=V13;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; pile[v[22]+4]=R; v[102]=0;return;
l6:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+8,V7)*/
V7=pile[WZ2]; 
if((V7!=A)) goto l7;
pile[v[22]]=763; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(763,jvj+8,jvj+9)*/
x[jvj+12]=x[jvj+9] ;z[jvj+12]=z[jvj+9];
l8:if((x[jvj+12]<=0)) goto l7;
x[jvj+10]=s[x[jvj+12]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+12];
pile[v[22]]=515; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(515,jvj+10,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(510,jvj+10,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+5; 
(*f[46])( );     /*TRI0(0,117,jvj+5)*/
x[jvj+11]=x[jvj+9] ;z[jvj+11]=z[jvj+9];
goto l1;
l7:x[jvj+7]=t[x[jvj+7]];
goto l5;
l9:x[jvj+12]=t[x[jvj+12]];
goto l8;
}
