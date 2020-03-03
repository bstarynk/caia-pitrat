#include "dx.h"
void GEREDB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V14=0,V15=0,V25=0,V26=0,V10=0,V11=0,V12=0,V13=0,V3=0,V4=0,V1=0,V2=0,V23=0,V24=0,V21=0,V22=0;
int NA,NB,XA,XB,ZA,ZB,Y;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=11672;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1683&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NA=pile[v[22]]; NB=pile[v[22]+1]; XA=pile[v[22]+2]; XB=pile[v[22]+3]; ZA=pile[v[22]+4]; ZB=pile[v[22]+5]; Y=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1335; pile[WZ1]=ZA; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1335,ZA,V14)*/
V14=pile[WZ2]; 
if((V14>0)) goto l6;
l1:pile[v[22]]=1335; pile[WZ1]=ZB; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1335,ZB,V15)*/
V15=pile[WZ2]; 
if((V15>0)) goto l6;
l4:pile[v[22]]=493; pile[WZ1]=ZA; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(493,ZA,V10)*/
V10=pile[WZ2]; 
pile[WZ1]=ZB; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(493,ZB,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=1005; pile[WZ1]=ZA; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1005,ZA,V12)*/
V12=pile[WZ2]; 
pile[WZ1]=ZB; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1005,ZB,V13)*/
V13=pile[WZ2]; 
if(V10<((V11*9)/10)-2) goto l5;
l6:pile[v[22]]=1005; pile[WZ1]=ZA; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(1005,ZA,V3)*/
V3=pile[WZ2]; 
pile[WZ1]=ZB; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(1005,ZB,V4)*/
V4=pile[WZ2]; 
if(V3>((V4*11)/10)+2) goto l8;
l2:pile[v[22]]=1335; pile[WZ1]=ZA; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(1335,ZA,V25)*/
V25=pile[WZ2]; 
if((V25>0)) goto l15;
l3:pile[v[22]]=1335; pile[WZ1]=ZB; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(1335,ZB,V26)*/
V26=pile[WZ2]; 
if((V26>0)) goto l15;
l11:pile[v[22]]=936; pile[WZ1]=ZA; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(936,ZA,V23)*/
V23=pile[WZ2]; 
pile[WZ1]=ZB; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(936,ZB,V24)*/
V24=pile[WZ2]; 
if(V23>((V24*11)/10)+2) goto l13;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; return;
l5:if(V12>((V13*11)/10)+2) goto l16;
goto l6;
l8:x[jvj+3]=d[189];z[jvj+3]=0;
l7:if((x[jvj+3]<=0)) goto l2;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
if(x[jvj+4]!=876&&x[jvj+4]!=936) goto l10;
pile[v[22]]=1335; pile[WZ1]=ZA; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(1335,ZA,V5)*/
V5=pile[WZ2]; 
if((V5>0)) goto l9;
l10:pile[v[22]]=jvj+4; pile[WZ1]=ZA; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(jvj+4,ZA,V1)*/
V1=pile[WZ2]; 
pile[WZ1]=ZB; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(jvj+4,ZB,V2)*/
V2=pile[WZ2]; 
if(V1<((V2*9)/10)-2) goto l17;
l9:x[jvj+3]=t[x[jvj+3]];
goto l7;
l13:x[jvj+6]=d[190];z[jvj+6]=0;
l12:if((x[jvj+6]<=0)) goto l15;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=ZA; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(jvj+7,ZA,V21)*/
V21=pile[WZ2]; 
pile[WZ1]=ZB; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(jvj+7,ZB,V22)*/
V22=pile[WZ2]; 
if(V21<((V22*9)/10)-2) goto l18;
l14:x[jvj+6]=t[x[jvj+6]];
goto l12;
l16:pile[v[22]]=V13; pile[WZ1]=1469; pile[WZ2]=jvj+9; 
(*f[46])( );     /*TRI0(V13,1469,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=V12; pile[WZ2]=1468; pile[WZ3]=jvj+10; 
(*f[189])( );     /*TRI4(jvj+9,V12,1468,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=V11; pile[WZ2]=610; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,V11,610,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=V10; pile[WZ2]=609; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,V10,609,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=NB; pile[WZ2]=515; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,NB,515,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=NA; pile[WZ2]=510; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,NA,510,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=Y; pile[WZ2]=447; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+14,Y,447,jvj+15)*/
pile[v[22]]=158; pile[WZ1]=493; pile[WZ2]=218; pile[WZ3]=1005; pile[WZ4]=jvj+15; pile[WZ5]=jvj+2; 
(*f[269])( );     /*QUADRI6(158,493,218,1005,jvj+15,jvj+2)*/
pile[v[22]]=XB; pile[WZ1]=763; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(XB,763,jvj+2)*/
goto l6;
l17:pile[v[22]]=V4; pile[WZ1]=1469; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(V4,1469,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=V3; pile[WZ2]=1468; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,V3,1468,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=V2; pile[WZ2]=610; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,V2,610,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=V1; pile[WZ2]=609; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,V1,609,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=NB; pile[WZ2]=515; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,NB,515,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=NA; pile[WZ2]=510; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,NA,510,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=Y; pile[WZ2]=447; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,Y,447,jvj+22)*/
pile[v[22]]=158; pile[WZ1]=jvj+4; pile[WZ2]=218; pile[WZ3]=1005; pile[WZ4]=jvj+22; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(158,jvj+4,218,1005,jvj+22,jvj+5)*/
pile[v[22]]=XA; pile[WZ1]=763; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(XA,763,jvj+5)*/
goto l9;
l18:pile[v[22]]=V24; pile[WZ1]=1469; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(V24,1469,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=V23; pile[WZ2]=1468; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,V23,1468,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=V22; pile[WZ2]=610; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,V22,610,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=V21; pile[WZ2]=609; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,V21,609,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=NB; pile[WZ2]=515; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,NB,515,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=NA; pile[WZ2]=510; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,NA,510,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=Y; pile[WZ2]=447; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+28,Y,447,jvj+29)*/
pile[v[22]]=158; pile[WZ1]=jvj+7; pile[WZ2]=218; pile[WZ3]=936; pile[WZ4]=jvj+29; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(158,jvj+7,218,936,jvj+29,jvj+8)*/
pile[v[22]]=XB; pile[WZ1]=763; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(XB,763,jvj+8)*/
goto l14;
}
