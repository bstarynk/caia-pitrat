#include "dx.h"
void ATOME580T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V32=0,V7=0,V35=0,V16=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=20580;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3834&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,NNNI,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=25)) goto l12;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+6,V35)*/
V35=pile[WZ2]; 
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=929; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(929,jvj+6,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=V32; 
(*f[207])( );     /*PLUE2(jvj+7,V32)*/
l5:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+8)*/
l6:if((x[jvj+8]>0)) goto l7;
x[jvj+11]=d[20];z[jvj+11]=0;
l8:if((x[jvj+11]<=0)) goto l12;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=NNNI; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+12,NNNI,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=1215)) goto l9;
pile[v[22]]=268; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(268,jvj+12,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=NNNI; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+16,NNNI,jvj+17)*/
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+17,V16)*/
V16=pile[WZ2]; 
if((V16!=0)) goto l9;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+18)*/
x[jvj+30]=x[jvj+18] ;z[jvj+30]=z[jvj+18];
l10:if((x[jvj+30]<=0)) goto l9;
x[jvj+19]=s[x[jvj+30]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+30];
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+29]=x[jvj+18] ;z[jvj+29]=z[jvj+18];
l1:if((x[jvj+29]>0)) goto l2;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[987])( );if(v[102]) goto l11;     /*NEGEXP0(jvj+19,jvj+20)*/
x[jvj+21]=x[jvj+20] ;z[jvj+21]=z[jvj+20];
pile[v[22]]=jvj+21; pile[WZ1]=1006; pile[WZ2]=jvj+7; 
(*f[34])( );     /*CHGC0(jvj+21,1006,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+27)*/
pile[v[22]]=V35; pile[WZ1]=858; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(V35,858,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,v[13],642,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=3834; pile[WZ2]=246; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,3834,246,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=20580; pile[WZ2]=218; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+25,20580,218,jvj+26)*/
pile[v[22]]=jvj+27; pile[WZ1]=(-20); pile[WZ2]=jvj+26; pile[WZ3]=159; pile[WZ4]=jvj+28; 
(*f[298])( );     /*TRIENS1(jvj+27,(-20),jvj+26,159,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+28,1,158,jvj+22)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[1296])( );     /*NOUVCONTR0(jvj+21,jvj+22)*/
l11:x[jvj+30]=t[x[jvj+30]];
goto l10;
l2:x[jvj+2]=s[x[jvj+29]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+29];
if((x[jvj+2]==x[jvj+19])) goto l3;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==649)) goto l3;
l4:pile[v[22]]=jvj+5; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+2)*/
l3:x[jvj+29]=t[x[jvj+29]];
goto l1;
l7:V7=s[x[jvj+8]];
pile[v[22]]=jvj+7; pile[WZ1]=V7; 
(*f[207])( );     /*PLUE2(jvj+7,V7)*/
x[jvj+8]=t[x[jvj+8]];
goto l6;
l9:x[jvj+11]=t[x[jvj+11]];
goto l8;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
