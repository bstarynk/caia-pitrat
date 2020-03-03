#include "dx.h"
void SUPERVISE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V1=0,V2=0,V4=0,V6=0,V7=0,V5=0,V9=0,V10=0,V14=0,V11=0,V13=0;
int SG,PB;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=11070;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==604&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
SG=pile[v[22]]; PB=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l20:x[jvj+5]=x[PB]=x[SG]=x[jvj+9]=incon;
pile[v[22]]=1058; pile[WZ1]=994; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(1058,994,V6)*/
V6=pile[WZ2]; 
V7=(time(tzt)-inccc);
V5=V6-V7;
x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=993; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(993,994,V3)*/
V3=pile[WZ2]; 
if((V3!=5)) goto l1;
pile[v[22]]=1242; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1242,994,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=1167; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1167,994,V2)*/
V2=pile[WZ2]; 
if((V1<=V2)) goto l1;
pile[v[22]]=1221; pile[WZ1]=1167; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1221,1167,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=994; pile[WZ2]=V4; 
(*f[186])( );     /*BTC0(994,1167,V4)*/
pile[v[22]]=68; 
(*f[880])( );     /*ADVISER0(68)*/
l1:pile[v[22]]=V5; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; pile[WZ3]=jvj+4; 
(*f[950])( );if(v[102]) goto l17;     /*TROUVESSAI0(V5,jvj+2,jvj+3,jvj+4)*/
V9=x[jvj+3];
vv[24]=V9;
if((x[jvj+3]==1055)) goto l2;
if((x[jvj+3]!=966)) goto l4;
pile[v[22]]=jvj+4; 
(*f[951])( );     /*PREPBILAN0(jvj+4)*/
x[SG]=80 ;z[SG]=80;
l18:x[PB]=250 ;z[PB]=250;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:pile[v[22]]=913; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(913,jvj+4,jvj+5)*/
l4:if(x[jvj+3]!=983&&x[jvj+3]!=844&&x[jvj+3]!=978) goto l5;
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+4,V10)*/
V10=pile[WZ2]; 
x[SG]=80 ;z[SG]=80;
x[PB]=x[jvj+4] ;z[PB]=z[jvj+4];
vv[30]=V10;
l10:if(x[jvj+5]!=incon) goto l11;
l13:if(x[PB]==incon) goto l14;
if(x[SG]==incon) goto l17;
goto l19;
l3:pile[v[22]]=1078; pile[WZ1]=jvj+4; pile[WZ2]=PB; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1078,jvj+4,PB)*/
x[SG]=80 ;z[SG]=80;
goto l19;
l5:if((x[jvj+3]==1097)) goto l6;
if((x[jvj+3]==1243)) goto l7;
if((x[jvj+3]!=1136)) goto l8;
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+4,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+4,jvj+8)*/
V13=x[jvj+4];
vv[30]=V11;
vv[31]=1136;
pile[v[22]]=324; pile[WZ1]=jvj+8; 
(*f[451])( );     /*COMPRIMEJGT0(324,jvj+8)*/
x[SG]=80 ;z[SG]=80;
pile[v[22]]=1136; pile[WZ1]=924; pile[WZ2]=V13; 
(*f[134])( );     /*OTA0(1136,924,V13)*/
goto l10;
l6:V14=vv[17];
if((V14!=0)) goto l8;
x[jvj+6]=vo[11];z[jvj+6]=vz[11];
x[PB]=x[jvj+4] ;z[PB]=z[jvj+4];
pile[v[22]]=109; pile[WZ1]=PB; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,PB,jvj+7)*/
x[SG]=80 ;z[SG]=80;
pile[v[22]]=jvj+6; pile[WZ1]=109; 
(*f[35])( );     /*CHGC1(jvj+6,109,jvj+7)*/
goto l10;
l7:pile[v[22]]=jvj+4; 
(*f[952])( );     /*ANACREUSE0(jvj+4)*/
pile[v[22]]=SG; pile[WZ1]=PB; 
(*f[604])( );     /*SUPERVISE0(SG,PB)*/
goto l10;
l8:if(x[jvj+5]!=incon) goto l9;
goto l13;
l9:if((x[jvj+5]!=493)) goto l12;
pile[v[22]]=jvj+4; 
(*f[954])( );     /*MULTSOL0(jvj+4)*/
x[SG]=80 ;z[SG]=80;
goto l13;
l11:if((x[jvj+5]!=493)) goto l12;
goto l13;
l12:pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=jvj+9; 
(*f[953])( );     /*CREUSE0(jvj+4,jvj+5,jvj+9)*/
goto l13;
l14:if(x[SG]==incon) goto l15;
goto l18;
l15:if(x[jvj+9]!=incon) goto l16;
l17:x[SG]=12 ;z[SG]=12;
if(x[PB]==incon) goto l18;
goto l19;
l16:if((x[jvj+9]==120)) goto l20;
x[PB]=x[jvj+9] ;z[PB]=z[jvj+9];
x[SG]=80 ;z[SG]=80;
goto l19;
}
