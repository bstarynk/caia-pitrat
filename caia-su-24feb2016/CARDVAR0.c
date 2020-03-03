#include "dx.h"
void CARDVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RR=0,V2=0,RT=0,V13=0,V19=0,V23=0,V22=0,V29=0,V33=0,V35=0,V37=0;
int X;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=10007;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==459&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=x[X] ;z[jvj+4]=z[X];
l3:pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]==484)) goto l4;
if((x[jvj+5]==455)) goto l5;
if((x[jvj+5]==531)) goto l6;
if((x[jvj+5]==22)) goto l7;
if((x[jvj+5]!=453)) goto l10;
pile[v[22]]=102; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+4,jvj+15)*/
pile[v[22]]=jvj+15; 
(*f[459])( );     /*CARDVAR0(jvj+15,V33)*/
V33=pile[WZ1]; 
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+4,jvj+16)*/
pile[v[22]]=jvj+16; 
(*f[459])( );     /*CARDVAR0(jvj+16,V35)*/
V35=pile[WZ1]; 
V37=V33+V35;
R=V37;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; return;
l2:x[jvj+2]=s[x[jvj+10]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+10];
pile[v[22]]=jvj+2; 
(*f[459])( );     /*CARDVAR0(jvj+2,RR)*/
RR=pile[WZ1]; 
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=RR; 
(*f[186])( );     /*BTC0(jvj+3,117,RR)*/
x[jvj+10]=t[x[jvj+10]];
l1:if((x[jvj+10]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+3,V2)*/
V2=pile[WZ2]; 
R=V2;
goto l11;
l4:R=1;
goto l11;
l5:pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+4,jvj+6)*/
x[jvj+4]=x[jvj+6] ;z[jvj+4]=z[jvj+6];
goto l3;
l6:pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+4,jvj+7)*/
x[jvj+4]=x[jvj+7] ;z[jvj+4]=z[jvj+7];
goto l3;
l7:pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+4,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+8,jvj+9)*/
if(x[jvj+9]!=485&&x[jvj+9]!=486) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+10)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
goto l1;
l8:if(x[jvj+9]!=614&&x[jvj+9]!=1162) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+4,jvj+11)*/
pile[v[22]]=jvj+11; 
(*f[459])( );     /*CARDVAR0(jvj+11,RT)*/
RT=pile[WZ1]; 
(*f[457])( );if(v[102]) goto l9;     /*CARDENS0(jvj+11,V13)*/
V13=pile[WZ1]; 
V19=RT*V13;
pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+12)*/
R=V19;
goto l11;
l9:if(x[jvj+9]!=25&&x[jvj+9]!=26&&x[jvj+9]!=27&&x[jvj+9]!=28&&x[jvj+9]!=29&&x[jvj+9]!=30) goto l10;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+4,jvj+13)*/
pile[v[22]]=jvj+13; 
(*f[459])( );     /*CARDVAR0(jvj+13,V23)*/
V23=pile[WZ1]; 
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+4,jvj+14)*/
pile[v[22]]=jvj+14; 
(*f[459])( );     /*CARDVAR0(jvj+14,V22)*/
V22=pile[WZ1]; 
V29=V22+V23;
R=V29;
goto l11;
l10:R=0;
goto l11;
}
