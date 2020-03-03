#include "dx.h"
void ATOME71T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V10=0,V3=0,V15=0,V22=0,V26=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=20071;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3058&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+20]=vo[14];z[jvj+20]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+20,V26)*/
V26=pile[WZ2]; 
V1=(-999999);
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[1969])( );     /*FNDEND0(509,jvj+2,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
if((V1<=5)) goto l12;
if((V1==(-999999))) goto l12;
V3=incon;
if((V1>8)) goto l4;
V3=6;
l5:x[jvj+12]=0 ;z[jvj+12]=0;
x[jvj+7]=vo[16];z[jvj+7]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[1969])( );     /*FNDEND0(509,jvj+7,jvj+8)*/
l6:if((x[jvj+8]<=0)) goto l11;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=301; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(301,jvj+9,jvj+10)*/
if((x[jvj+10]!=68)) goto l7;
pile[v[22]]=1070; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1070,jvj+9,jvj+11)*/
if((x[jvj+11]!=68)) goto l7;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(870,jvj+9,V15)*/
V15=pile[WZ2]; 
if((V15<V3)) goto l7;
pile[v[22]]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+9)*/
l7:x[jvj+8]=t[x[jvj+8]];
goto l6;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=301; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(301,jvj+4,jvj+5)*/
if((x[jvj+5]!=68)) goto l3;
pile[v[22]]=1070; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1070,jvj+4,jvj+6)*/
if((x[jvj+6]!=68)) goto l3;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(870,jvj+4,V2)*/
V2=pile[WZ2]; 
if(V2>V1) V1=V2;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:V10=V1-2;
V3=V10;
goto l5;
l9:x[jvj+9]=s[x[jvj+28]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+28];
if((x[jvj+9]==x[jvj+27])) goto l10;
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+9,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=25)) goto l10;
pile[v[22]]=1070; pile[WZ1]=jvj+9; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1070,jvj+9,jvj+17)*/
if((x[jvj+17]!=68)) goto l10;
pile[v[22]]=1142; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1142,jvj+9,jvj+18)*/
if((x[jvj+18]!=68)) goto l10;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(870,jvj+9,V22)*/
V22=pile[WZ2]; 
if((V22<2)) goto l10;
pile[v[22]]=jvj+19; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+9)*/
l10:x[jvj+28]=t[x[jvj+28]];
l8:if((x[jvj+28]>0)) goto l9;
pile[v[22]]=V26; pile[WZ1]=858; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(V26,858,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,v[13],642,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=3058; pile[WZ2]=246; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,3058,246,jvj+25)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20071; pile[WZ4]=jvj+25; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(158,1,218,20071,jvj+25,jvj+21)*/
pile[v[22]]=jvj+19; pile[WZ1]=1081; pile[WZ2]=jvj+26; 
(*f[300])( );     /*TRI10(jvj+19,1081,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; pile[WZ2]=208; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+26,jvj+27,208,jvj+22)*/
pile[v[22]]=jvj+21; pile[WZ1]=301; pile[WZ2]=jvj+22; 
(*f[1047])( );     /*EVENEMENT0(jvj+21,301,jvj+22)*/
x[jvj+12]=t[x[jvj+12]];
l11:if((x[jvj+12]<=0)) goto l12;
x[jvj+27]=s[x[jvj+12]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+12];
x[jvj+19]=0 ;z[jvj+19]=0;
x[jvj+13]=vo[16];z[jvj+13]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[1969])( );     /*FNDEND0(509,jvj+13,jvj+14)*/
x[jvj+28]=x[jvj+14] ;z[jvj+28]=z[jvj+14];
goto l8;
l12:x[jvj+1]=incon; v[0]=jvj; return;
}
