#include "dx.h"
void ATOME159T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Y=0,E=0,V14=0,V17=0,V8=0,V39=0,V40=0,V41=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=20159;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3643&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,R,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=408)) goto l3;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,R,jvj+9)*/
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+9,V14)*/
V14=pile[WZ2]; 
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+10,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=jvj+27; 
(*f[1007])( );if(v[102]) goto l3;     /*DECFACTPREM0(V14,jvj+27)*/
x[jvj+29]=0 ;z[jvj+29]=0;
l4:if((x[jvj+27]>0)) goto l5;
E=x[jvj+29];
for(i=E,V8=0;i>0;i=t[i],V8++)  ;
if((V8<=1)) goto l3;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,R,jvj+2)*/
x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
x[jvj+4]=d[76];z[jvj+4]=0;
l1:if((E>0)) goto l2;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+11; 
(*f[299])( );     /*COPEL0(jvj+6,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+11; pile[WZ2]=107; pile[WZ3]=jvj+17; 
(*f[301])( );     /*TRI11(jvj+16,jvj+11,107,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+17,22,100,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[799])( );if(v[102]) goto l3;     /*NORME0(jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+25)*/
pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+26)*/
pile[v[22]]=V17; pile[WZ1]=858; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(V17,858,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,v[13],642,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=3643; pile[WZ2]=246; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,3643,246,jvj+24)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20159; pile[WZ4]=jvj+24; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(158,1,218,20159,jvj+24,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=159; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+14,159,jvj+25)*/
pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+14,159,jvj+26)*/
pile[v[22]]=R; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[1558])( );     /*RESTAURE0(R,jvj+13,jvj+14)*/
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:Y=s[E];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+18)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=Y; pile[WZ4]=jvj+21; 
(*f[192])( );     /*QUADRI4(100,41,130,Y,jvj+21)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+3; pile[WZ2]=103; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+19,jvj+3,103,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+21,jvj+20,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[196])( );     /*PLUF0(jvj+4,jvj+5,jvj+6)*/
E=t[E];
goto l1;
l5:x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=515; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(515,jvj+28,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(510,jvj+28,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=V40; 
(*f[1006])( );if(v[102]) goto l6;     /*POWER0(V39,V40,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=jvj+29; pile[WZ1]=V41; 
(*f[207])( );     /*PLUE2(jvj+29,V41)*/
l6:x[jvj+27]=t[x[jvj+27]];
goto l4;
}
