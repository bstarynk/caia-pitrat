#include "dx.h"
void COMBDIV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V10=0,V16=0,EX=0,V19=0;
int B,A;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=11909;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3921&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+18]=0 ;z[jvj+18]=0;
x[R]=x[jvj+18] ;z[R]=z[jvj+18];
x[jvj+12]=0 ;z[jvj+12]=0;
pile[v[22]]=A; pile[WZ1]=jvj+9; 
(*f[887])( );     /*VARND0(A,jvj+9)*/
l7:if((x[jvj+9]>0)) goto l8;
EX=x[jvj+12];
V19=EX;
x[jvj+14]=0 ;z[jvj+14]=0;
pile[v[22]]=V19; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[4037])( );     /*COMBDIVA0(V19,R,jvj+14)*/
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+17]=t[x[jvj+17]];
l1:if((x[jvj+17]<=0)) goto l6;
x[jvj+5]=s[x[jvj+17]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+17];
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+5,V15)*/
V15=pile[WZ2]; 
if((V15!=B)) goto l2;
pile[v[22]]=195; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(195,jvj+5,jvj+7)*/
l10:pile[v[22]]=jvj+3; pile[WZ1]=jvj+11; 
(*f[1290])( );if(v[102]) goto l9;     /*DEPEXP0(jvj+3,jvj+11)*/
x[jvj+16]=x[jvj+7] ;z[jvj+16]=z[jvj+7];
pile[v[22]]=jvj+11; pile[WZ1]=218; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+11,218,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=195; pile[WZ3]=jvj+13; 
(*f[301])( );     /*TRI11(jvj+15,jvj+16,195,jvj+13)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+13)*/
l9:x[jvj+9]=t[x[jvj+9]];
goto l7;
l3:pile[v[22]]=131; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(131,jvj+3,jvj+6)*/
if((x[jvj+6]!=68)) goto l4;
x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=jvj+2; pile[WZ1]=0; 
(*f[207])( );     /*PLUE2(jvj+2,0)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+2,1)*/
x[jvj+7]=x[jvj+2] ;z[jvj+7]=z[jvj+2];
l4:pile[v[22]]=280; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(280,jvj+3,V16)*/
V16=pile[WZ2]; 
if((V16<=0)) goto l6;
pile[v[22]]=1310; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1310,jvj+3,jvj+4)*/
x[jvj+17]=x[jvj+4] ;z[jvj+17]=z[jvj+4];
goto l1;
l5:x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=jvj+8; pile[WZ1]=0; 
(*f[207])( );     /*PLUE2(jvj+8,0)*/
pile[WZ1]=(-1); 
(*f[207])( );     /*PLUE2(jvj+8,(-1))*/
x[jvj+7]=x[jvj+8] ;z[jvj+7]=z[jvj+8];
goto l10;
l6:if(x[jvj+7]==incon) goto l5;
goto l10;
l8:x[jvj+3]=s[x[jvj+9]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+9];
pile[v[22]]=1287; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1287,jvj+3,jvj+10)*/
x[jvj+7]=incon;
if((x[jvj+10]==0)) goto l3;
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==B) goto l4;
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(280,jvj+3,V10)*/
V10=pile[WZ2]; 
if((V10<=0)) goto l4;
pile[v[22]]=41; pile[WZ1]=0; pile[WZ2]=jvj+7; 
(*f[445])( );     /*TRI15(41,0,jvj+7)*/
goto l4;
}
