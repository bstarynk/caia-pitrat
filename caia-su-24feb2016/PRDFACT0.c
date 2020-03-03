#include "dx.h"
void PRDFACT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V5=0,I=0,V3=0,V25=0,V26=0,V18=0,V30=0,V31=0,V32=0,V21=0,V16=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=31;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+25]=0 ;z[jvj+25]=0;
x[jvj+3]=x[jvj+25] ;z[jvj+3]=z[jvj+25];
x[jvj+26]=x[A] ;z[jvj+26]=z[A];
l2:if((x[jvj+26]>0)) goto l3;
x[jvj+14]=0 ;z[jvj+14]=0;
x[jvj+27]=x[jvj+3] ;z[jvj+27]=z[jvj+3];
l8:if((x[jvj+27]>0)) goto l9;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(1,117,jvj+16)*/
x[jvj+29]=x[jvj+3] ;z[jvj+29]=z[jvj+3];
l13:if((x[jvj+29]>0)) goto l14;
pile[v[22]]=117; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(117,jvj+16,V18)*/
V18=pile[WZ2]; 
x[jvj+22]=0 ;z[jvj+22]=0;
x[jvj+20]=d[64];z[jvj+20]=0;
l21:if((x[jvj+14]>0)) goto l22;
pile[v[22]]=jvj+22; pile[WZ1]=1260; pile[WZ2]=jvj+23; 
(*f[300])( );     /*TRI10(jvj+22,1260,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=V18; pile[WZ2]=510; pile[WZ3]=R; 
(*f[189])( );     /*TRI4(jvj+23,V18,510,R)*/
v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:V2=1;
l5:V3=abs(I);
pile[v[22]]=V3; pile[WZ1]=jvj+2; 
(*f[1007])( );if(v[102]) goto l6;     /*DECFACTPREM0(V3,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=1260; pile[WZ2]=jvj+24; 
(*f[300])( );     /*TRI10(jvj+2,1260,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=V2; pile[WZ2]=510; pile[WZ3]=jvj+4; 
(*f[189])( );     /*TRI4(jvj+24,V2,510,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+4)*/
l6:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+1,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==485)) goto l7;
if((x[jvj+6]!=486)) goto l4;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[1680])( );if(v[102]) goto l4;     /*PRDFACT0(jvj+9,jvj+10)*/
pile[v[22]]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+10)*/
l4:x[jvj+26]=t[x[jvj+26]];
goto l2;
l3:x[jvj+1]=s[x[jvj+26]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+26];
pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+1,V5)*/
V5=pile[WZ2]; 
I=V5;
V2=incon;
if((I>=0)) goto l1;
V2=(-1);
goto l5;
l7:pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1681])( );if(v[102]) goto l4;     /*SOMFACT0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+8)*/
goto l4;
l9:x[jvj+11]=s[x[jvj+27]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+27];
pile[v[22]]=1260; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1260,jvj+11,jvj+12)*/
x[jvj+28]=x[jvj+12] ;z[jvj+28]=z[jvj+12];
l10:if((x[jvj+28]>0)) goto l11;
x[jvj+27]=t[x[jvj+27]];
goto l8;
l11:x[jvj+13]=s[x[jvj+28]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+28];
pile[v[22]]=510; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(510,jvj+13,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=V25; 
(*f[207])( );     /*PLUE2(jvj+14,V25)*/
l12:x[jvj+28]=t[x[jvj+28]];
goto l10;
l14:x[jvj+15]=s[x[jvj+29]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+29];
pile[v[22]]=510; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(510,jvj+15,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=jvj+16; pile[WZ1]=117; pile[WZ2]=V26; 
(*f[818])( );     /*MTC0(jvj+16,117,V26)*/
l15:x[jvj+29]=t[x[jvj+29]];
goto l13;
l17:x[jvj+11]=s[x[jvj+30]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+30];
pile[v[22]]=1260; pile[WZ1]=jvj+11; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1260,jvj+11,jvj+17)*/
x[jvj+31]=x[jvj+17] ;z[jvj+31]=z[jvj+17];
l18:if((x[jvj+31]>0)) goto l19;
x[jvj+30]=t[x[jvj+30]];
l16:if((x[jvj+30]>0)) goto l17;
pile[v[22]]=117; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(117,jvj+19,V32)*/
V32=pile[WZ2]; 
V21=V32;
pile[v[22]]=510; pile[WZ1]=V16; pile[WZ2]=515; pile[WZ3]=V21; pile[WZ4]=jvj+21; 
(*f[391])( );     /*QUADRI10(510,V16,515,V21,jvj+21)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[196])( );     /*PLUF0(jvj+20,jvj+21,jvj+22)*/
l23:x[jvj+14]=t[x[jvj+14]];
goto l21;
l19:x[jvj+18]=s[x[jvj+31]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+31];
pile[v[22]]=510; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(510,jvj+18,V30)*/
V30=pile[WZ2]; 
if((V30!=V16)) goto l20;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(515,jvj+18,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=jvj+19; pile[WZ1]=117; pile[WZ2]=V31; 
(*f[186])( );     /*BTC0(jvj+19,117,V31)*/
l20:x[jvj+31]=t[x[jvj+31]];
goto l18;
l22:V16=s[x[jvj+14]];
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(0,117,jvj+19)*/
x[jvj+30]=x[jvj+3] ;z[jvj+30]=z[jvj+3];
goto l16;
l24:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
