#include "dx.h"
void DIAM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,R=0,DX=0,DY=0,V10=0,V11=0,V48=0,V20=0,V27=0,V26=0,V28=0,V31=0,V32=0,V36=0,V23=0,V24=0;
int X;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=10167;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==323&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l1:
(*f[74])( );     /*LK0()*/
V1=bh[v[1]][0];
if((V1==84)) goto l5;
if((V1==65)) goto l2;
if((V1==65)) goto l6;
if((V1==70)) goto l7;
if((V1!=86)) goto l9;
pile[v[22]]=1; 
(*f[131])( );     /*SMV0(1,R,DX)*/
R=pile[WZ1]; DX=pile[WZ2]; 
pile[v[22]]=DX; pile[WZ1]=jvj+8; 
(*f[79])( );if(v[102]) goto l9;     /*LEXP0(DX,jvj+8,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=110; pile[WZ1]=R; pile[WZ2]=129; pile[WZ3]=jvj+8; pile[WZ4]=jvj+9; 
(*f[692])( );     /*QUADRI13(110,R,129,jvj+8,jvj+9)*/
pile[v[22]]=X; pile[WZ1]=258; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(X,258,jvj+9)*/
l9:V11=bh[v[1]][0];
if(V11!=70&&V11!=90) goto l1;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:pile[v[22]]=159; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(159,X,jvj+2)*/
pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+3; 
(*f[78])( );if(v[102]) goto l6;     /*SMA0(1,64,67,jvj+3)*/
l3:if((x[jvj+2]<=0)) goto l6;
x[jvj+4]=s[x[jvj+2]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+2];
pile[v[22]]=122; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(122,jvj+4,jvj+5)*/
if((x[jvj+5]!=x[jvj+3])) goto l4;
x[jvj+7]=x[jvj+4] ;z[jvj+7]=z[jvj+4];
l8:pile[v[22]]=1; 
(*f[107])( );     /*CRC0(1,V10)*/
V10=pile[WZ1]; 
V48=V10;
l11:V26=x[jvj+12]=V31=incon;
pile[v[22]]=V48; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+10; 
(*f[78])( );if(v[102]) goto l9;     /*SMA0(V48,64,67,jvj+10)*/
(*f[107])( );     /*CRC0(V48,V20)*/
V20=pile[WZ1]; 
V27=bh[v[1]][V20];
if((V27!=32)) goto l23;
if(x[jvj+10]!=521&&x[jvj+10]!=530) goto l23;
V26=V20;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+11)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(jvj+7,jvj+10,jvj+11)*/
l12:if((x[jvj+10]!=120)) goto l13;
pile[v[22]]=V20; 
(*f[131])( );     /*SMV0(V20,V28,V31)*/
V28=pile[WZ1]; V31=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=110; pile[WZ2]=jvj+12; 
(*f[329])( );     /*TRI13(V28,110,jvj+12)*/
pile[v[22]]=jvj+7; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+7,120,jvj+12)*/
l13:if(V26==incon) goto l20;
l14:V48=V26;
goto l11;
l4:x[jvj+2]=t[x[jvj+2]];
goto l3;
l5:pile[v[22]]=X; pile[WZ1]=301; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(X,301,68)*/
goto l9;
l6:pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+6; 
(*f[78])( );if(v[102]) goto l9;     /*SMA0(1,64,67,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=122; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(jvj+6,122,jvj+7)*/
pile[v[22]]=X; pile[WZ1]=159; 
(*f[36])( );     /*PLUSC0(X,159,jvj+7)*/
goto l8;
l7:
(*f[104])( );     /*DIAL0()*/
goto l9;
l15:x[jvj+18]=t[x[jvj+18]];
l16:if((x[jvj+18]<=0)) goto l9;
x[jvj+14]=s[x[jvj+18]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+18];
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+14,jvj+15)*/
V26=V36;
pile[v[22]]=jvj+7; pile[WZ1]=613; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(jvj+7,613,jvj+13)*/
goto l14;
l17:if(V31!=incon) goto l18;
goto l9;
l18:V32=bh[v[1]][V31];
if((V32!=58)) goto l19;
pile[v[22]]=V31; pile[WZ1]=jvj+16; 
(*f[79])( );if(v[102]) goto l19;     /*LEXP0(V31,jvj+16,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=129; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(jvj+12,129,jvj+16)*/
goto l14;
l19:V26=V31;
goto l14;
l20:if(x[jvj+12]!=incon) goto l17;
if(V31!=incon) goto l19;
goto l9;
l21:if(x[jvj+10]==280||x[jvj+10]==164) goto l22;
if((x[jvj+10]!=128)) goto l12;
pile[v[22]]=V20; pile[WZ1]=jvj+13; 
(*f[79])( );if(v[102]) goto l9;     /*LEXP0(V20,jvj+13,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=100; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+13,jvj+17)*/
if((x[jvj+17]!=128)) goto l9;
pile[v[22]]=128; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(128,jvj+13,jvj+18)*/
goto l16;
l22:V23=V20+1;
pile[v[22]]=V23; 
(*f[126])( );     /*LND2(V23,V24,V26)*/
V24=pile[WZ1]; V26=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=jvj+10; pile[WZ2]=V24; 
(*f[43])( );     /*CHGC2(jvj+7,jvj+10,V24)*/
goto l12;
l23:if(x[jvj+10]!=521&&x[jvj+10]!=530) goto l21;
if((V27==32)) goto l21;
pile[v[22]]=V20; pile[WZ1]=jvj+19; 
(*f[335])( );if(v[102]) goto l21;     /*LANT0(V20,jvj+19,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=jvj+10; pile[WZ2]=jvj+19; 
(*f[35])( );     /*CHGC1(jvj+7,jvj+10,jvj+19)*/
goto l12;
}
