#include "dx.h"
void MMM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V2=0,V5=0,V4=0,V1=0,V7=0,V8=0,V14=0,V10=0,V9=0,V12=0,V15=0,V6=0,RR=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=10052;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
c[4][0]=100;
c[4][1]=97;
c[4][2]=0;
if((fx[9]=fopen(c[4],"r"))==NULL) ERR0();v[17]=9;
fread(sw,sizeof(char),4,fx[9]);
V3=(sw[0]<<8)|(sw[0+1]&0xff);
V2=V3<<16;
V5=(sw[2]<<8)|(sw[2+1]&0xff);
V4=V5&65535;
V1=V2|V4;
fread(&sw[4],sizeof(char),V1-4,fx[9]);
pile[v[22]]=9; pile[WZ1]=68; 
(*f[18])( );     /*SPZ0(9,68)*/
(*f[19])( );     /*MMP0()*/
V6=(sw[4]<<8)|(sw[4+1]&0xff);
pile[v[22]]=6; pile[WZ1]=V6; pile[WZ2]=0; 
(*f[21])( );     /*BOUTV0(6,V6,0,RR)*/
RR=pile[WZ3]; 
pile[v[22]]=RR; 
(*f[20])( );     /*BOUTE0(RR)*/
(*f[22])( );     /*INT0()*/
V7=vv[0];
if((V7<=0)) goto l1;
V8=vv[26];
if((V8>0)) goto l1;
l2:V10=vv[26];
if((V10!=0)) goto l4;
V9=vv[0];
if((V9<=0)) goto l4;
pile[v[22]]=117; pile[WZ1]=1152; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,1152,V12)*/
V12=pile[WZ2]; 
if((V9==V12)) goto l4;
V15=(time(tzt)-inccc);
pile[WZ1]=547; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,547,V14)*/
V14=pile[WZ2]; 
if((V9==V14)) goto l3;
(*f[24])( );     /*STOBUG0()*/
l3:v[47]=V15;
vv[0]=0;
(*f[25])( );     /*FAIREXP0()*/
l4:x[jvj+1]=incon; v[0]=jvj; return;
l1:pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l2;
}
