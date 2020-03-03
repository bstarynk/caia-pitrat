#include "dx.h"
void MONITBIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V7=0,V44=0,V42=0,V43=0,V4=0,V3=0,V21=0,V9=0,V10=0,V11=0,V12=0,V24=0,V28=0,V34=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=11573;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1695&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l1:if((v[138]<=0)) goto l2;
v[138]=0;
pile[v[22]]=936; pile[WZ1]=158; pile[WZ2]=jvj+2; 
(*f[54])( );     /*TRI1(936,158,jvj+2)*/
pile[v[22]]=jvj+2; 
(*f[605])( );     /*MONITEUR0(jvj+2)*/
l2:x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=893; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(893,jvj+3,jvj+4)*/
if((x[jvj+4]==12)) goto l17;
l6:x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=220; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(220,jvj+8,V4)*/
V4=pile[WZ2]; 
V3=V4+1;
vv[39]=V3;
if((V3==v[201])) goto l3;
if((v[205]>0)) goto l3;
l7:pile[v[22]]=jvj+8; pile[WZ1]=220; pile[WZ2]=V3; 
(*f[43])( );     /*CHGC2(jvj+8,220,V3)*/
V8=vv[41];
V7=V3%V8;
if((V7!=0)) goto l8;
pile[v[22]]=865; pile[WZ1]=158; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(865,158,jvj+5)*/
pile[v[22]]=jvj+5; 
(*f[605])( );     /*MONITEUR0(jvj+5)*/
l8:pile[v[22]]=893; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(893,jvj+8,jvj+9)*/
if(x[jvj+9]!=580&&x[jvj+9]!=493&&x[jvj+9]!=1336) goto l11;
pile[v[22]]=865; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(865,jvj+8,jvj+10)*/
x[jvj+11]=incon;
if((x[jvj+9]==580)) goto l4;
if((x[jvj+9]!=493)) goto l5;
x[jvj+6]=vo[16];z[jvj+6]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(498,jvj+6,jvj+7)*/
if((x[jvj+7]!=26098)) goto l5;
x[jvj+11]=366 ;z[jvj+11]=366;
l9:V21=x[jvj+8];
if((v[228]!=0)) goto l10;
V44=x[jvj+9];
pile[v[22]]=20; pile[WZ1]=11573; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11573,0,V42)*/
V42=pile[WZ3]; 
pile[WZ1]=V44; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(20,V44,V42,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=V43; 
(*f[40])( );     /*SLG0(V43)*/
l10:pile[v[22]]=jvj+8; pile[WZ1]=0; pile[WZ2]=V21; pile[WZ3]=893; 
(*f[285])( );     /*ENLY0(jvj+8,0,V21,893,V9,V10)*/
V9=pile[WZ4]; V10=pile[WZ5]; 
pile[WZ1]=V10; pile[WZ2]=V9; pile[WZ3]=935; 
(*f[285])( );     /*ENLY0(jvj+8,V10,V9,935,V11,V12)*/
V11=pile[WZ4]; V12=pile[WZ5]; 
pile[v[22]]=jvj+11; pile[WZ1]=jvj+10; 
(*f[1570])( );     /*BACKTRACK1(jvj+11,jvj+10)*/
l11:x[jvj+12]=vo[14];z[jvj+12]=vz[14];
pile[v[22]]=893; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(893,jvj+12,jvj+13)*/
if((x[jvj+13]==12)) goto l17;
l12:x[jvj+14]=vo[13];z[jvj+14]=vz[13];
pile[v[22]]=120; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(120,jvj+14,jvj+15)*/
pile[v[22]]=jvj+15; 
(*f[1912])( );     /*PREPARERBIS0(jvj+15)*/
goto l1;
l3:
(*f[962])( );     /*APPLIREG0()*/
goto l7;
l4:x[jvj+11]=876 ;z[jvj+11]=876;
goto l9;
l5:x[jvj+11]=x[jvj+9] ;z[jvj+11]=z[jvj+9];
goto l9;
l13:x[jvj+16]=vo[13];z[jvj+16]=vz[13];
pile[v[22]]=717; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(717,jvj+16,jvj+17)*/
pile[v[22]]=715; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(715,jvj+17,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+18,V24)*/
V24=pile[WZ2]; 
if((V24>=v[95])) goto l17;
l18:pile[v[22]]=84; pile[WZ1]=158; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(84,158,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[1908])( );if(v[102]) goto l1;     /*MONITEUR2(jvj+30,jvj+31)*/
if((x[jvj+31]!=1336)) goto l1;
x[jvj+19]=vo[14];z[jvj+19]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,jvj+19,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=858; pile[WZ2]=jvj+32; 
(*f[46])( );     /*TRI0(V28,858,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,v[13],642,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=1695; pile[WZ2]=246; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,1695,246,jvj+34)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=11573; pile[WZ4]=jvj+34; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(158,1,218,11573,jvj+34,jvj+20)*/
pile[v[22]]=jvj+20; 
(*f[1909])( );     /*INDETERMINE0(jvj+20)*/
goto l1;
l14:x[jvj+25]=x[jvj+21] ;z[jvj+25]=z[jvj+21];
l16:pile[v[22]]=jvj+25; 
(*f[545])( );     /*AGIR0(jvj+25)*/
(*f[824])( );     /*ENLISENV0(jvj+25)*/
goto l1;
l15:x[jvj+26]=vo[13];z[jvj+26]=vz[13];
pile[v[22]]=717; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(717,jvj+26,jvj+27)*/
pile[v[22]]=715; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(715,jvj+27,jvj+28)*/
pile[v[22]]=130; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+28,V34)*/
V34=pile[WZ2]; 
if((V34<v[95])) goto l13;
pile[v[22]]=718; pile[WZ1]=jvj+27; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(718,jvj+27,jvj+29)*/
if((x[jvj+29]<=0)) goto l13;
x[jvj+21]=s[x[jvj+29]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+29];
x[jvj+25]=incon;
pile[v[22]]=218; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(218,jvj+21,jvj+22)*/
pile[v[22]]=1600; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1600,jvj+22,jvj+23)*/
if((x[jvj+23]!=68)) goto l14;
pile[WZ1]=158; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(1600,158,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[1911])( );if(v[102]) goto l14;     /*MONITEUR3(jvj+24,jvj+25)*/
goto l16;
l17:x[jvj+1]=incon; v[0]=jvj; return;
}
