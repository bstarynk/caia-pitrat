#include "dx.h"
void TROPDESOLUTIONS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int AA=0,V1=0,V35=0,V37=0,V23=0,V31=0,V30=0,V19=0,V24=0,V27=0,V28=0,V25=0,V26=0,V29=0;
int SM;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=10906;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==603&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
SM=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=jvj+2; 
(*f[948])( );     /*PCTREUSSI0(jvj+2,AA)*/
AA=pile[WZ1]; 
x[jvj+3]=vo[12];z[jvj+3]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(860,jvj+3,jvj+4)*/
if((x[jvj+4]!=530)) goto l2;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+3,V1)*/
V1=pile[WZ2]; 
if((V1==(-7141))) goto l2;
l4:x[jvj+6]=vo[12];z[jvj+6]=vz[12];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+5; 
(*f[378])( );     /*CPI0(jvj+6,jvj+5)*/
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
x[jvj+8]=d[65];z[jvj+8]=0;
l5:if((x[jvj+8]>0)) goto l6;
x[jvj+9]=vo[12];z[jvj+9]=vz[12];
pile[v[22]]=163; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(163,jvj+9,V35)*/
V35=pile[WZ2]; 
if((V35!=(-7141))) goto l1;
pile[v[22]]=1038; pile[WZ1]=493; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1038,493,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ2]=V37; 
(*f[43])( );     /*CHGC2(jvj+5,493,V37)*/
l1:pile[v[22]]=jvj+5; pile[WZ1]=AA; pile[WZ2]=SM; 
(*f[947])( );     /*STOPOUENCORE0(jvj+5,AA,SM)*/
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[SM]=12 ;z[SM]=12;
goto l3;
l6:x[jvj+11]=s[x[jvj+8]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+8];
if((x[jvj+11]!=936)) goto l7;
pile[v[22]]=1056; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1056,jvj+6,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==1060) goto l10;
l7:pile[v[22]]=jvj+11; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(jvj+11,jvj+6,V23)*/
V23=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(jvj+11,jvj+7,V31)*/
V31=pile[WZ2]; 
V30=V31*1400;
V19=V30/AA;
V24=V23;
V25=incon;
pile[v[22]]=1038; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(1038,jvj+11,V27)*/
V27=pile[WZ2]; 
V28=V27;
if((V28<V24)) goto l12;
V25=V28;
l8:V26=V25;
V29=incon;
if((V19<=V26)) goto l11;
V29=V19;
l9:pile[v[22]]=jvj+5; pile[WZ1]=jvj+11; pile[WZ2]=V29; 
(*f[43])( );     /*CHGC2(jvj+5,jvj+11,V29)*/
l10:x[jvj+8]=t[x[jvj+8]];
goto l5;
l11:V29=V26;
goto l9;
l12:V25=V24;
goto l8;
}
