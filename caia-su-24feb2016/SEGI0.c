#include "dx.h"
void SEGI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V1=0,V16=0,V31=0,V23=0,V27=0,V25=0,V20=0,V30=0;
int BL,Q,LIM,EH;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=11882;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1629&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; Q=pile[v[22]+1]; LIM=pile[v[22]+2]; EH=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l6:pile[v[22]]=1913; pile[WZ1]=BL; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1913,BL,jvj+6)*/
x[jvj+14]=x[EH] ;z[jvj+14]=z[EH];
l7:if((x[jvj+14]>0)) goto l10;
pile[v[22]]=jvj+5; 
(*f[1071])( );if(v[102]) goto l5;     /*NOUB0(jvj+5)*/
l8:pile[v[22]]=184; pile[WZ1]=jvj+5; 
(*f[71])( );     /*ENLV0(184,jvj+5)*/
pile[v[22]]=BL; pile[WZ1]=1913; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(BL,1913,jvj+5)*/
V16=0;
V31=V16;
l11:x[jvj+12]=0 ;z[jvj+12]=0;
V30=incon;
pile[v[22]]=184; pile[WZ1]=Q; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(184,Q,jvj+7)*/
l12:if((x[jvj+7]>0)) goto l13;
if((x[jvj+12]<=0)) goto l4;
x[jvj+8]=s[x[jvj+12]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+12];
V23=x[jvj+8];
x[jvj+10]=x[jvj+8] ;z[jvj+10]=z[jvj+8];
pile[v[22]]=565; pile[WZ1]=BL; pile[WZ2]=V23; 
(*f[134])( );     /*OTA0(565,BL,V23)*/
pile[v[22]]=184; pile[WZ1]=Q; 
(*f[134])( );     /*OTA0(184,Q,V23)*/
pile[v[22]]=jvj+5; pile[WZ1]=184; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+5,184,jvj+8)*/
pile[v[22]]=565; pile[WZ1]=BL; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(565,BL,jvj+9)*/
if((x[jvj+9]==0)) goto l4;
pile[v[22]]=jvj+10; 
(*f[302])( );if(v[102]) goto l4;     /*NBT0(jvj+10,V27)*/
V27=pile[WZ1]; 
V25=V31+V27;
if((V25>=LIM)) goto l4;
V31=V25;
goto l11;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+3,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=117; pile[WZ2]=V4; 
(*f[186])( );     /*BTC0(jvj+4,117,V4)*/
l3:x[jvj+2]=t[x[jvj+2]];
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+4,V1)*/
V1=pile[WZ2]; 
if((V1>1500)) goto l6;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l4:pile[v[22]]=Q; pile[WZ1]=jvj+5; pile[WZ2]=67; pile[WZ3]=BL; 
(*f[1816])( );     /*SEGD0(Q,jvj+5,67,BL)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(0,117,jvj+4)*/
pile[v[22]]=184; pile[WZ1]=Q; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(184,Q,jvj+2)*/
goto l1;
l9:x[jvj+14]=t[x[jvj+14]];
goto l7;
l10:x[jvj+13]=s[x[jvj+14]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+14];
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[jvj+13]) goto l9;
x[jvj+5]=x[jvj+13] ;z[jvj+5]=z[jvj+13];
goto l8;
l13:x[jvj+11]=s[x[jvj+7]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+7];
pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(117,jvj+11,V20)*/
V20=pile[WZ2]; 
if(V30==incon) goto l16;
if((V20==V30)) goto l15;
if((V20>=V30)) goto l16;
l14:x[jvj+7]=t[x[jvj+7]];
goto l12;
l16:V30=V20;
x[jvj+12]=0 ;z[jvj+12]=0;
l15:pile[v[22]]=jvj+12; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+11)*/
goto l14;
}
