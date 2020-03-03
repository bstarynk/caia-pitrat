#include "dx.h"
void ATOME85T9(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V21=0,D=0,V25=0;
int R,X,DX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=20085;z[jvj+1]=(-100);
x[jvj+2]=9;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3365&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; X=pile[v[22]+1]; DX=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,R,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=25)) goto l8;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(870,R,V8)*/
V8=pile[WZ2]; 
if((V8<=2)) goto l8;
x[jvj+11]=vo[16];z[jvj+11]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[1948])( );if(v[102]) goto l8;     /*FNDOND0(498,jvj+11,jvj+12)*/
pile[v[22]]=1182; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1182,jvj+12,jvj+13)*/
if((68!=x[jvj+13])) goto l8;
pile[v[22]]=R; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(R,jvj+14)*/
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==x[DX]) goto l3;
l8:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+8]=s[x[jvj+6]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+8)*/
x[jvj+6]=t[x[jvj+6]];
l1:if((x[jvj+6]>0)) goto l2;
pile[v[22]]=DX; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[3108])( );if(v[102]) goto l8;     /*SUPG0(DX,X,jvj+16)*/
x[jvj+17]=d[20];z[jvj+17]=0;
l4:if((x[jvj+17]<=0)) goto l8;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=jvj+18; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+18,R,jvj+19)*/
if((x[X]!=x[jvj+19])) goto l5;
pile[v[22]]=268; pile[WZ1]=jvj+18; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+18,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+20,R,jvj+4)*/
pile[v[22]]=DX; pile[WZ1]=jvj+4; pile[WZ2]=jvj+21; 
(*f[3109])( );if(v[102]) goto l5;     /*INFG0(DX,jvj+4,jvj+21)*/
V25=x[jvj+7];
l6:if((V25<=0)) goto l5;
D=s[V25];
if((x[DX]==D)) goto l7;
pile[v[22]]=869; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(869,R,jvj+3)*/
if((x[jvj+3]!=769)) goto l9;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==D) goto l9;
l7:V25=t[V25];
goto l6;
l3:x[jvj+15]=vo[14];z[jvj+15]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+15,V21)*/
V21=pile[WZ2]; 
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=R; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(R,jvj+6)*/
goto l1;
l5:x[jvj+17]=t[x[jvj+17]];
goto l4;
l9:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+27)*/
pile[WZ1]=X; pile[WZ3]=(-596); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(101,X,110,(-596),jvj+28)*/
pile[WZ1]=DX; pile[WZ3]=(-637); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(101,DX,110,(-637),jvj+29)*/
pile[v[22]]=V21; pile[WZ1]=858; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0(V21,858,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,v[13],642,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=3365; pile[WZ2]=246; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,3365,246,jvj+26)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20085; pile[WZ4]=jvj+26; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(158,1,218,20085,jvj+26,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=159; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+22,159,jvj+27)*/
pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+22,159,jvj+28)*/
pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+22,159,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=28; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,28,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+31,jvj+21,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+32; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+16,jvj+32,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+22; 
(*f[1296])( );     /*NOUVCONTR0(jvj+23,jvj+22)*/
goto l7;
}
