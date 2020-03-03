#include "dx.h"
void ETATCREE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V54=0,V48=0,V49=0,V55=0,V73=0,V67=0,V68=0,V74=0;
int Q;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=10842;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1723&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
Q=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=Q; 
(*f[54])( );     /*TRI1(250,158,Q)*/
V1=vv[5];
if((V1>0)) goto l1;
if((V1!=0)) goto l4;
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(457,324,jvj+3)*/
l2:if((x[jvj+3]<=0)) goto l4;
x[jvj+16]=s[x[jvj+3]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+3];
V73=vv[54];
pile[v[22]]=1054; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(1054,jvj+16,jvj+17)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l2;
l1:x[jvj+4]=V1 ;z[jvj+4]=(V1<=sepcte) ? V1 : 0;
V54=vv[54];
pile[v[22]]=1054; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1054,jvj+4,jvj+5)*/
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l9:x[jvj+9]=s[x[jvj+28]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+28];
pile[v[22]]=163; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(163,jvj+9,V48)*/
V48=pile[WZ2]; 
V49=V48;
if((V54==0)) goto l12;
V55=V54;
if((V49==V55)) goto l12;
l10:x[jvj+28]=t[x[jvj+28]];
l8:if((x[jvj+28]>0)) goto l9;
x[jvj+8]=t[x[jvj+8]];
l7:if((x[jvj+8]<=0)) goto l4;
x[jvj+10]=s[x[jvj+8]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+8];
x[jvj+28]=x[jvj+6] ;z[jvj+28]=z[jvj+6];
goto l8;
l11:pile[v[22]]=V49; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[764])( );     /*ETATCREF0(V49,jvj+10,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=109; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+11,109,jvj+4)*/
pile[WZ1]=449; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(jvj+11,449,jvj+10)*/
pile[WZ1]=163; pile[WZ2]=V49; 
(*f[177])( );     /*CHGC4(jvj+11,163,V49)*/
pile[v[22]]=Q; pile[WZ1]=159; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(Q,159,jvj+11)*/
goto l10;
l12:pile[v[22]]=896; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(896,jvj+9,jvj+12)*/
if((x[jvj+12]==0)) goto l11;
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==x[jvj+10]) goto l11;
goto l10;
l13:x[jvj+7]=x[jvj+13] ;z[jvj+7]=z[jvj+13];
l6:pile[v[22]]=896; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(896,jvj+7,jvj+8)*/
goto l7;
l14:x[jvj+13]=s[x[jvj+15]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+15];
pile[v[22]]=896; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(896,jvj+13,jvj+14)*/
if((x[jvj+14]!=0)) goto l13;
x[jvj+15]=t[x[jvj+15]];
l5:if((x[jvj+15]>0)) goto l14;
x[jvj+7]=x[jvj+4] ;z[jvj+7]=z[jvj+4];
goto l6;
l15:pile[v[22]]=896; pile[WZ1]=jvj+4; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(896,jvj+4,jvj+15)*/
if((x[jvj+15]==0)) goto l4;
pile[v[22]]=878; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(878,jvj+4,jvj+6)*/
x[jvj+7]=incon;
goto l5;
l20:x[jvj+21]=s[x[jvj+29]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+29];
pile[v[22]]=163; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(163,jvj+21,V67)*/
V67=pile[WZ2]; 
V68=V67;
if((V73==0)) goto l23;
V74=V73;
if((V68==V74)) goto l23;
l21:x[jvj+29]=t[x[jvj+29]];
l19:if((x[jvj+29]>0)) goto l20;
x[jvj+20]=t[x[jvj+20]];
l18:if((x[jvj+20]<=0)) goto l3;
x[jvj+22]=s[x[jvj+20]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+20];
x[jvj+29]=x[jvj+18] ;z[jvj+29]=z[jvj+18];
goto l19;
l22:pile[v[22]]=V68; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[764])( );     /*ETATCREF0(V68,jvj+22,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=109; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(jvj+23,109,jvj+16)*/
pile[WZ1]=449; pile[WZ2]=jvj+22; 
(*f[35])( );     /*CHGC1(jvj+23,449,jvj+22)*/
pile[WZ1]=163; pile[WZ2]=V68; 
(*f[177])( );     /*CHGC4(jvj+23,163,V68)*/
pile[v[22]]=Q; pile[WZ1]=159; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(Q,159,jvj+23)*/
goto l21;
l23:pile[v[22]]=896; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(896,jvj+21,jvj+24)*/
if((x[jvj+24]==0)) goto l22;
for(a=x[jvj+24];a>0;a=t[a]) if(s[a]==x[jvj+22]) goto l22;
goto l21;
l24:x[jvj+19]=x[jvj+25] ;z[jvj+19]=z[jvj+25];
l17:pile[v[22]]=896; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(896,jvj+19,jvj+20)*/
goto l18;
l25:x[jvj+25]=s[x[jvj+27]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+27];
pile[v[22]]=896; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(896,jvj+25,jvj+26)*/
if((x[jvj+26]!=0)) goto l24;
x[jvj+27]=t[x[jvj+27]];
l16:if((x[jvj+27]>0)) goto l25;
x[jvj+19]=x[jvj+16] ;z[jvj+19]=z[jvj+16];
goto l17;
l26:pile[v[22]]=896; pile[WZ1]=jvj+16; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(896,jvj+16,jvj+27)*/
if((x[jvj+27]==0)) goto l3;
pile[v[22]]=878; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(878,jvj+16,jvj+18)*/
x[jvj+19]=incon;
goto l16;
}
