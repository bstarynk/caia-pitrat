#include "dx.h"
void MONIT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V5=0,V2=0,V1=0,V19=0,V7=0,V8=0,V9=0,V10=0,V24=0,V28=0,V33=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=10398;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1694&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l4:if((v[138]<=0)) goto l5;
v[138]=0;
pile[v[22]]=936; pile[WZ1]=158; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(936,158,jvj+5)*/
pile[v[22]]=jvj+5; 
(*f[605])( );     /*MONITEUR0(jvj+5)*/
l5:x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=220; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(220,jvj+6,V2)*/
V2=pile[WZ2]; 
V1=V2+1;
vv[39]=V1;
if((V1==v[201])) goto l1;
if((v[205]>0)) goto l1;
l6:pile[v[22]]=jvj+6; pile[WZ1]=220; pile[WZ2]=V1; 
(*f[43])( );     /*CHGC2(jvj+6,220,V1)*/
V6=vv[41];
V5=V1%V6;
if((V5!=0)) goto l7;
pile[v[22]]=865; pile[WZ1]=158; pile[WZ2]=jvj+2; 
(*f[54])( );     /*TRI1(865,158,jvj+2)*/
pile[v[22]]=jvj+2; 
(*f[605])( );     /*MONITEUR0(jvj+2)*/
l7:pile[v[22]]=893; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(893,jvj+6,jvj+7)*/
if(x[jvj+7]!=580&&x[jvj+7]!=493&&x[jvj+7]!=1336) goto l9;
pile[v[22]]=865; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(865,jvj+6,jvj+8)*/
x[jvj+9]=incon;
if((x[jvj+7]==580)) goto l2;
if((x[jvj+7]!=493)) goto l3;
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(498,jvj+3,jvj+4)*/
if((x[jvj+4]!=26098)) goto l3;
x[jvj+9]=366 ;z[jvj+9]=366;
l8:V19=x[jvj+6];
pile[v[22]]=jvj+6; pile[WZ1]=0; pile[WZ2]=V19; pile[WZ3]=893; 
(*f[285])( );     /*ENLY0(jvj+6,0,V19,893,V7,V8)*/
V7=pile[WZ4]; V8=pile[WZ5]; 
pile[WZ1]=V8; pile[WZ2]=V7; pile[WZ3]=935; 
(*f[285])( );     /*ENLY0(jvj+6,V8,V7,935,V9,V10)*/
V9=pile[WZ4]; V10=pile[WZ5]; 
pile[v[22]]=jvj+9; pile[WZ1]=jvj+8; 
(*f[1570])( );     /*BACKTRACK1(jvj+9,jvj+8)*/
l9:x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=893; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(893,jvj+10,jvj+11)*/
if((x[jvj+11]==12)) goto l13;
l10:x[jvj+12]=vo[13];z[jvj+12]=vz[13];
pile[v[22]]=120; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(120,jvj+12,jvj+13)*/
pile[v[22]]=jvj+13; 
(*f[1910])( );     /*PREPARER0(jvj+13)*/
goto l4;
l1:
(*f[962])( );     /*APPLIREG0()*/
goto l6;
l2:x[jvj+9]=876 ;z[jvj+9]=876;
goto l8;
l3:x[jvj+9]=x[jvj+7] ;z[jvj+9]=z[jvj+7];
goto l8;
l11:x[jvj+14]=vo[13];z[jvj+14]=vz[13];
pile[v[22]]=717; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(717,jvj+14,jvj+15)*/
pile[v[22]]=715; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(715,jvj+15,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+16,V24)*/
V24=pile[WZ2]; 
if((V24>=v[95])) goto l13;
l14:pile[v[22]]=84; pile[WZ1]=158; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(84,158,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[1908])( );if(v[102]) goto l4;     /*MONITEUR2(jvj+24,jvj+25)*/
if((x[jvj+25]!=1336)) goto l4;
x[jvj+17]=vo[14];z[jvj+17]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+17,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=858; pile[WZ2]=jvj+26; 
(*f[46])( );     /*TRI0(V28,858,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,v[13],642,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=1694; pile[WZ2]=246; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,1694,246,jvj+28)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10398; pile[WZ4]=jvj+28; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(158,1,218,10398,jvj+28,jvj+18)*/
pile[v[22]]=jvj+18; 
(*f[1909])( );     /*INDETERMINE0(jvj+18)*/
goto l4;
l12:x[jvj+19]=vo[13];z[jvj+19]=vz[13];
pile[v[22]]=717; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(717,jvj+19,jvj+20)*/
pile[v[22]]=715; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(715,jvj+20,jvj+21)*/
pile[v[22]]=130; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+21,V33)*/
V33=pile[WZ2]; 
if((V33<v[95])) goto l11;
pile[v[22]]=718; pile[WZ1]=jvj+20; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(718,jvj+20,jvj+22)*/
if((x[jvj+22]<=0)) goto l11;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=jvj+23; 
(*f[545])( );     /*AGIR0(jvj+23)*/
(*f[824])( );     /*ENLISENV0(jvj+23)*/
goto l4;
l13:x[jvj+1]=incon; v[0]=jvj; return;
}
