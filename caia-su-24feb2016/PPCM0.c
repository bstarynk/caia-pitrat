#include "dx.h"
void PPCM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V9=0,V11=0,V10=0,AA=0,V4=0,V13=0,V12=0,BB=0,V5=0,V6=0,XX=0,SA=0,SB=0,I=0,V2=0;
int B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=11060;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1021&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=A; pile[WZ1]=jvj+8; 
(*f[1359])( );if(v[102]) goto l21;     /*DECPREM0(A,jvj+8)*/
pile[v[22]]=B; pile[WZ1]=jvj+9; 
(*f[1359])( );if(v[102]) goto l21;     /*DECPREM0(B,jvj+9)*/
x[jvj+3]=0 ;z[jvj+3]=0;
x[jvj+10]=x[jvj+8] ;z[jvj+10]=z[jvj+8];
l1:if((x[jvj+10]>0)) goto l2;
x[jvj+11]=x[jvj+9] ;z[jvj+11]=z[jvj+9];
l4:if((x[jvj+11]>0)) goto l5;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(1,117,jvj+7)*/
l14:if((x[jvj+3]>0)) goto l15;
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+7,V2)*/
V2=pile[WZ2]; 
if((V2>999999999)) goto l21;
if((V2<=0)) goto l21;
R=V2;
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=R; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+10]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+10];
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+2,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V8; 
(*f[207])( );     /*PLUE2(jvj+3,V8)*/
l3:x[jvj+10]=t[x[jvj+10]];
goto l1;
l5:x[jvj+4]=s[x[jvj+11]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+11];
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+4,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V9; 
(*f[207])( );     /*PLUE2(jvj+3,V9)*/
l6:x[jvj+11]=t[x[jvj+11]];
goto l4;
l8:x[jvj+5]=s[x[jvj+12]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+12];
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+5,V11)*/
V11=pile[WZ2]; 
if((V11!=XX)) goto l9;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(510,jvj+5,V10)*/
V10=pile[WZ2]; 
AA=V10;
V4=AA;
l16:SA=V4;
V5=incon;
x[jvj+13]=x[jvj+9] ;z[jvj+13]=z[jvj+9];
l10:if((x[jvj+13]>0)) goto l11;
V5=0;
l17:SB=V5;
V6=incon;
if((SA>=SB)) goto l13;
V6=SB;
l19:I=1;
l18:if((I<=V6)) goto l20;
x[jvj+3]=t[x[jvj+3]];
goto l14;
l9:x[jvj+12]=t[x[jvj+12]];
l7:if((x[jvj+12]>0)) goto l8;
V4=0;
goto l16;
l11:x[jvj+6]=s[x[jvj+13]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+13];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+6,V13)*/
V13=pile[WZ2]; 
if((V13!=XX)) goto l12;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(510,jvj+6,V12)*/
V12=pile[WZ2]; 
BB=V12;
V5=BB;
goto l17;
l12:x[jvj+13]=t[x[jvj+13]];
goto l10;
l13:V6=SA;
goto l19;
l15:XX=s[x[jvj+3]];
V4=incon;
x[jvj+12]=x[jvj+8] ;z[jvj+12]=z[jvj+8];
goto l7;
l20:pile[v[22]]=jvj+7; pile[WZ1]=117; pile[WZ2]=XX; 
(*f[818])( );     /*MTC0(jvj+7,117,XX)*/
I++;
goto l18;
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
