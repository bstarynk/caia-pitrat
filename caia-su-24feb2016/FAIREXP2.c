#include "dx.h"
void FAIREXP2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0;
int ST,NM;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=10791;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1178&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
ST=pile[v[22]]; NM=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=vo[20];z[jvj+4]=vz[20];
pile[v[22]]=68; 
(*f[88])( );     /*DATE0(68)*/
v[106]=1;
depuis=vv[52]+600-(time(tzt)-inccc);ensuite=depuis+60;alarm((depuis>=0) ? 1 : (ensuite>0) ? ensuite : 60);
vv[15]=4;
vv[19]=1;
v[14]=0;
pile[v[22]]=1099; pile[WZ1]=158; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(1099,158,jvj+6)*/
vo[11]=x[jvj+6];vz[11]=0;
pile[v[22]]=jvj+4; pile[WZ1]=1099; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+4,1099,68)*/
if((x[ST]!=1455)) goto l3;
x[jvj+3]=vo[11];z[jvj+3]=vz[11];
pile[v[22]]=jvj+3; pile[WZ1]=1455; 
(*f[35])( );     /*CHGC1(jvj+3,1455,68)*/
pile[WZ1]=642; pile[WZ2]=NM; 
(*f[43])( );     /*CHGC2(jvj+3,642,NM)*/
l3:pile[v[22]]=158; pile[WZ1]=ST; pile[WZ2]=642; pile[WZ3]=NM; pile[WZ4]=jvj+5; 
(*f[192])( );     /*QUADRI4(158,ST,642,NM,jvj+5)*/
pile[v[22]]=jvj+5; 
(*f[191])( );     /*MANAGER0(jvj+5)*/
if((x[ST]==1455)) goto l1;
pile[v[22]]=117; pile[WZ1]=1152; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(117,1152,V4)*/
V4=pile[WZ2]; 
vv[0]=V4;
(*f[17])( );     /*FERMER0()*/
l1:vv[20]=0;
pile[v[22]]=68; 
(*f[88])( );     /*DATE0(68)*/
v[106]=0;
depuis=vv[52]+600-(time(tzt)-inccc);ensuite=depuis+600;alarm((depuis>=0) ? 1 : (ensuite>0) ? ensuite : 600);
vv[15]=1;
l2:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
