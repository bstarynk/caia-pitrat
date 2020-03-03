#include "dx.h"
void GEREDA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NA=0,NB=0,V6=0,V7=0,V21=0,V22=0,V38=0,V39=0,V4=0,V5=0,V2=0,V3=0,V34=0,V35=0,V19=0,V17=0,V18=0;
int ZA,ZB,XA,XB,RW,Y;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=11669;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1469&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
ZA=pile[v[22]]; ZB=pile[v[22]+1]; XA=pile[v[22]+2]; XB=pile[v[22]+3]; RW=pile[v[22]+4]; Y=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
NA=NB=incon;
pile[v[22]]=642; pile[WZ1]=ZA; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,ZA,NA)*/
NA=pile[WZ2]; 
l1:pile[v[22]]=642; pile[WZ1]=ZB; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(642,ZB,NB)*/
NB=pile[WZ2]; 
l17:if(NA!=incon) goto l18;
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; return;
l2:pile[v[22]]=1335; pile[WZ1]=ZA; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(1335,ZA,V6)*/
V6=pile[WZ2]; 
if((V6>0)) goto l22;
l3:pile[v[22]]=1335; pile[WZ1]=ZB; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(1335,ZB,V7)*/
V7=pile[WZ2]; 
if((V7>0)) goto l22;
l21:pile[v[22]]=493; pile[WZ1]=ZA; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(493,ZA,V2)*/
V2=pile[WZ2]; 
pile[WZ1]=ZB; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(493,ZB,V3)*/
V3=pile[WZ2]; 
if((V2==V3)) goto l22;
x[jvj+11]=incon;
pile[v[22]]=1579; pile[WZ1]=RW; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1579,RW,jvj+2)*/
l4:if((x[jvj+2]>0)) goto l5;
pile[v[22]]=1028; pile[WZ1]=218; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(1028,218,jvj+11)*/
l23:pile[v[22]]=V4; pile[WZ1]=1469; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(V4,1469,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=V5; pile[WZ2]=1468; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,V5,1468,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=V3; pile[WZ2]=610; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,V3,610,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=V2; pile[WZ2]=609; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,V2,609,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=NB; pile[WZ2]=515; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,NB,515,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=NA; pile[WZ2]=510; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,NA,510,jvj+22)*/
pile[v[22]]=158; pile[WZ1]=493; pile[WZ2]=447; pile[WZ3]=Y; pile[WZ4]=jvj+22; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(158,493,447,Y,jvj+22,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=763; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+11,763,jvj+12)*/
pile[v[22]]=RW; pile[WZ1]=1579; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(RW,1579,jvj+11)*/
goto l22;
l5:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(218,jvj+3,jvj+4)*/
if((x[jvj+4]!=1028)) goto l6;
x[jvj+11]=x[jvj+3] ;z[jvj+11]=z[jvj+3];
goto l23;
l6:x[jvj+2]=t[x[jvj+2]];
goto l4;
l10:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=218; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(218,jvj+6,jvj+7)*/
if((x[jvj+7]!=1028)) goto l11;
x[jvj+15]=x[jvj+6] ;z[jvj+15]=z[jvj+6];
l25:pile[v[22]]=V4; pile[WZ1]=1469; pile[WZ2]=jvj+29; 
(*f[46])( );     /*TRI0(V4,1469,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=V19; pile[WZ2]=1468; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,V19,1468,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=V18; pile[WZ2]=610; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,V18,610,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=V17; pile[WZ2]=609; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,V17,609,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=NB; pile[WZ2]=515; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,NB,515,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=NA; pile[WZ2]=510; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,NA,510,jvj+34)*/
pile[v[22]]=158; pile[WZ1]=493; pile[WZ2]=447; pile[WZ3]=Y; pile[WZ4]=jvj+34; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(158,493,447,Y,jvj+34,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=763; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+15,763,jvj+16)*/
pile[v[22]]=RW; pile[WZ1]=1579; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(RW,1579,jvj+15)*/
goto l22;
l11:x[jvj+5]=t[x[jvj+5]];
l9:if((x[jvj+5]>0)) goto l10;
pile[v[22]]=1028; pile[WZ1]=218; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(1028,218,jvj+15)*/
goto l25;
l15:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=218; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(218,jvj+9,jvj+10)*/
if((x[jvj+10]!=1028)) goto l16;
x[jvj+13]=x[jvj+9] ;z[jvj+13]=z[jvj+9];
l24:pile[v[22]]=V5; pile[WZ1]=1469; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(V5,1469,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=V4; pile[WZ2]=1468; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,V4,1468,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=V35; pile[WZ2]=610; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,V35,610,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=V34; pile[WZ2]=609; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,V34,609,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=NA; pile[WZ2]=515; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,NA,515,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=NB; pile[WZ2]=510; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,NB,510,jvj+28)*/
pile[v[22]]=158; pile[WZ1]=493; pile[WZ2]=447; pile[WZ3]=Y; pile[WZ4]=jvj+28; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(158,493,447,Y,jvj+28,jvj+14)*/
pile[v[22]]=jvj+13; pile[WZ1]=763; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+13,763,jvj+14)*/
pile[v[22]]=RW; pile[WZ1]=1579; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(RW,1579,jvj+13)*/
goto l22;
l16:x[jvj+8]=t[x[jvj+8]];
l14:if((x[jvj+8]>0)) goto l15;
pile[v[22]]=1028; pile[WZ1]=218; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(1028,218,jvj+13)*/
goto l24;
l18:if(NB!=incon) goto l19;
goto l22;
l19:pile[v[22]]=NA; pile[WZ1]=NB; pile[WZ2]=XA; pile[WZ3]=XB; pile[WZ4]=ZA; pile[WZ5]=ZB; pile[v[22]+6]=Y; 
(*f[1683])( );     /*GEREDB0(NA,NB,XA,XB,ZA,ZB,Y)*/
pile[v[22]]=NB; pile[WZ1]=NA; pile[WZ2]=XB; pile[WZ3]=XA; pile[WZ4]=ZB; pile[WZ5]=ZA; 
(*f[1683])( );     /*GEREDB0(NB,NA,XB,XA,ZB,ZA,Y)*/
pile[v[22]]=1005; pile[WZ1]=ZB; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(1005,ZB,V4)*/
V4=pile[WZ2]; 
if((V4==1000)) goto l20;
if((V4>=1000)) goto l22;
pile[WZ1]=ZA; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(1005,ZA,V19)*/
V19=pile[WZ2]; 
if((V19!=1000)) goto l22;
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(493,ZA,V17)*/
V17=pile[WZ2]; 
pile[WZ1]=ZB; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(493,ZB,V18)*/
V18=pile[WZ2]; 
if((V17>=V18)) goto l22;
pile[v[22]]=1335; pile[WZ1]=ZA; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1335,ZA,V21)*/
V21=pile[WZ2]; 
if((V21>0)) goto l22;
l7:pile[v[22]]=1335; pile[WZ1]=ZB; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(1335,ZB,V22)*/
V22=pile[WZ2]; 
if((V22>0)) goto l22;
l8:x[jvj+15]=incon;
pile[v[22]]=1579; pile[WZ1]=RW; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1579,RW,jvj+5)*/
goto l9;
l20:pile[v[22]]=1005; pile[WZ1]=ZA; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(1005,ZA,V5)*/
V5=pile[WZ2]; 
if((V5==1000)) goto l2;
if((V5>=1000)) goto l22;
pile[v[22]]=493; pile[WZ1]=ZB; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(493,ZB,V34)*/
V34=pile[WZ2]; 
pile[WZ1]=ZA; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(493,ZA,V35)*/
V35=pile[WZ2]; 
if((V34>=V35)) goto l22;
pile[v[22]]=1335; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(1335,ZA,V38)*/
V38=pile[WZ2]; 
if((V38>0)) goto l22;
l12:pile[v[22]]=1335; pile[WZ1]=ZB; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(1335,ZB,V39)*/
V39=pile[WZ2]; 
if((V39>0)) goto l22;
l13:x[jvj+13]=incon;
pile[v[22]]=1579; pile[WZ1]=RW; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1579,RW,jvj+8)*/
goto l14;
}
