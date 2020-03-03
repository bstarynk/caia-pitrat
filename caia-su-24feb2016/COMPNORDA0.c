#include "dx.h"
void COMPNORDA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,L=0,K=0,V19=0;
int Q,A,B,T,Y;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=11135;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==845&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Q=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; T=pile[v[22]+3]; Y=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
K=L=x[jvj+25]=x[jvj+26]=x[jvj+27]=incon;
pile[v[22]]=158; pile[WZ1]=Q; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(158,Q,jvj+2)*/
pile[v[22]]=288; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(288,Q,jvj+10)*/
if((x[jvj+10]==167)) goto l4;
if((x[jvj+10]!=684)) goto l6;
x[jvj+28]=incon;
pile[v[22]]=jvj+2; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(jvj+2,A,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=Q; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,Q,jvj+4)*/
if((x[jvj+3]!=x[jvj+4])) goto l1;
x[jvj+28]=68 ;z[jvj+28]=68;
l2:x[jvj+29]=incon;
pile[v[22]]=jvj+2; pile[WZ1]=B; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+2,B,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=Q; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,Q,jvj+6)*/
if((x[jvj+5]!=x[jvj+6])) goto l3;
x[jvj+29]=68 ;z[jvj+29]=68;
l5:x[jvj+25]=x[jvj+28] ;z[jvj+25]=z[jvj+28];
x[jvj+26]=x[jvj+29] ;z[jvj+26]=z[jvj+29];
l6:pile[v[22]]=226; pile[WZ1]=T; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(226,T,jvj+11)*/
l7:if((x[jvj+11]>0)) goto l8;
pile[v[22]]=jvj+2; pile[WZ1]=122; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+2,122,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=Q; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,Q,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=101; 
(*f[35])( );     /*CHGC1(jvj+14,101,jvj+13)*/
l11:pile[v[22]]=T; pile[WZ1]=226; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(T,226,jvj+14)*/
l12:if(K!=incon) goto l13;
l21:if(x[jvj+25]!=incon) goto l22;
l28:if(x[jvj+27]!=incon) goto l32;
l31:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l1:x[jvj+28]=67 ;z[jvj+28]=67;
goto l2;
l3:x[jvj+29]=67 ;z[jvj+29]=67;
goto l5;
l4:pile[v[22]]=jvj+2; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(jvj+2,A,V10)*/
V10=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(jvj+2,B,L)*/
L=pile[WZ2]; 
K=V10;
goto l6;
l8:x[jvj+7]=s[x[jvj+11]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+11];
pile[v[22]]=122; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(122,jvj+7,jvj+12)*/
if((x[jvj+12]!=x[jvj+2])) goto l9;
pile[v[22]]=101; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+7,jvj+8)*/
pile[WZ1]=Q; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,Q,jvj+9)*/
if((x[jvj+8]!=x[jvj+9])) goto l9;
l10:x[jvj+14]=x[jvj+7] ;z[jvj+14]=z[jvj+7];
goto l12;
l9:x[jvj+11]=t[x[jvj+11]];
goto l7;
l13:if(L!=incon) goto l14;
l17:x[jvj+27]=1012 ;z[jvj+27]=1012;
l18:pile[v[22]]=256; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(256,jvj+14,jvj+15)*/
l19:if((x[jvj+15]<=0)) goto l21;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=145; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(145,jvj+16,jvj+17)*/
if((x[jvj+17]!=x[jvj+27])) goto l20;
x[jvj+22]=x[jvj+16] ;z[jvj+22]=z[jvj+16];
l29:pile[v[22]]=Q; pile[WZ1]=A; pile[WZ2]=B; pile[WZ3]=Y; pile[WZ4]=jvj+22; 
(*f[1173])( );     /*COMPNORD1(Q,A,B,Y,jvj+22)*/
pile[v[22]]=109; pile[WZ1]=Y; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(109,Y,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=109; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+24,109,jvj+23)*/
pile[v[22]]=163; pile[WZ1]=Y; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(163,Y,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=jvj+23; pile[WZ1]=163; pile[WZ2]=V19; 
(*f[177])( );     /*CHGC4(jvj+23,163,V19)*/
l30:pile[v[22]]=jvj+22; pile[WZ1]=898; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+22,898,jvj+23)*/
pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+22,117,1)*/
goto l31;
l14:if(K>((L*11)/10)+2) goto l15;
if(K<((L*9)/10)-2) goto l16;
goto l17;
l15:x[jvj+27]=995 ;z[jvj+27]=995;
goto l18;
l16:x[jvj+27]=996 ;z[jvj+27]=996;
goto l18;
l20:x[jvj+15]=t[x[jvj+15]];
goto l19;
l22:if(x[jvj+26]!=incon) goto l23;
goto l28;
l23:pile[v[22]]=256; pile[WZ1]=jvj+14; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(256,jvj+14,jvj+18)*/
l24:if((x[jvj+18]>0)) goto l25;
pile[v[22]]=447; pile[WZ1]=jvj+25; pile[WZ2]=459; pile[WZ3]=jvj+26; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(447,jvj+25,459,jvj+26,jvj+22)*/
l27:pile[v[22]]=jvj+14; pile[WZ1]=256; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+14,256,jvj+22)*/
goto l29;
l25:x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=447; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(447,jvj+19,jvj+20)*/
if((x[jvj+20]!=x[jvj+25])) goto l26;
pile[v[22]]=459; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(459,jvj+19,jvj+21)*/
if((x[jvj+21]!=x[jvj+26])) goto l26;
x[jvj+22]=x[jvj+19] ;z[jvj+22]=z[jvj+19];
goto l29;
l26:x[jvj+18]=t[x[jvj+18]];
goto l24;
l32:pile[v[22]]=jvj+27; pile[WZ1]=145; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+27,145,jvj+22)*/
goto l27;
}
