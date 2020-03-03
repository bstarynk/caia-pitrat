#include "dx.h"
void CA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V14=0,V3=0,V4=0,WW=0;
int TL,BL,R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=10207;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1423&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; BL=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=188; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(188,R,jvj+6)*/
l5:if((x[jvj+6]>0)) goto l6;
pile[v[22]]=535; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(535,R,jvj+8)*/
l7:if((x[jvj+8]>0)) goto l8;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=147; pile[WZ1]=BL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(147,BL,jvj+2)*/
pile[v[22]]=330; pile[WZ1]=TL; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(330,TL,jvj+3)*/
V14=x[jvj+7];
l1:if((V14>0)) goto l2;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(250,158,jvj+10)*/
pile[v[22]]=68; pile[WZ1]=R; pile[WZ2]=357; pile[WZ3]=TL; pile[WZ4]=jvj+5; pile[WZ5]=jvj+10; pile[v[22]+6]=R; pile[v[22]+7]=250; 
(*f[1632])( );     /*COPA0(68,R,357,TL,jvj+5,jvj+10,R,250)*/
pile[v[22]]=TL; pile[WZ1]=357; pile[WZ2]=R; pile[WZ3]=jvj+10; pile[WZ4]=TL; pile[WZ5]=0; 
(*f[1633])( );     /*COPTT0(TL,357,R,jvj+10,TL,0)*/
pile[v[22]]=147; pile[WZ1]=BL; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(147,BL,jvj+9)*/
l9:if((x[jvj+7]>0)) goto l10;
pile[v[22]]=jvj+10; 
(*f[1634])( );     /*COPU0(jvj+10)*/
pile[v[22]]=147; pile[WZ1]=BL; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(147,BL,jvj+11)*/
pile[v[22]]=20; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[409])( );     /*TRI14(20,R,jvj+12)*/
pile[v[22]]=R; pile[WZ1]=357; pile[WZ2]=TL; pile[WZ3]=R; 
(*f[1635])( );     /*COPT0(R,357,TL,R)*/
pile[WZ1]=BL; pile[WZ2]=jvj+11; pile[WZ3]=jvj+12; 
(*f[1636])( );     /*CBX0(R,BL,jvj+11,jvj+12)*/
(*f[1637])( );     /*CBR0(R)*/
pile[WZ1]=67; pile[WZ2]=R; 
(*f[1638])( );     /*DEKB0(R,67,R)*/
pile[v[22]]=67; pile[WZ1]=415; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(67,415,jvj+13)*/
pile[v[22]]=R; pile[WZ1]=jvj+13; pile[WZ2]=68; 
(*f[1639])( );     /*DOUB0(R,jvj+13,68)*/
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:V=s[V14];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==V) goto l4;
l3:V14=t[V14];
goto l1;
l4:for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==V) goto l3;
pile[v[22]]=V; pile[WZ1]=TL; pile[WZ2]=jvj+4; 
(*f[1631])( );     /*NOUV1(V,TL,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+4)*/
goto l3;
l6:V3=s[x[jvj+6]];
pile[v[22]]=jvj+7; pile[WZ1]=V3; 
(*f[331])( );     /*PLUE3(jvj+7,V3)*/
x[jvj+6]=t[x[jvj+6]];
goto l5;
l8:V4=s[x[jvj+8]];
pile[v[22]]=jvj+7; pile[WZ1]=V4; 
(*f[331])( );     /*PLUE3(jvj+7,V4)*/
x[jvj+8]=t[x[jvj+8]];
goto l7;
l10:WW=s[x[jvj+7]];
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==WW) goto l11;
pile[v[22]]=TL; pile[WZ1]=330; pile[WZ2]=WW; 
(*f[735])( );     /*PLUSC4(TL,330,WW)*/
l11:x[jvj+7]=t[x[jvj+7]];
goto l9;
}
