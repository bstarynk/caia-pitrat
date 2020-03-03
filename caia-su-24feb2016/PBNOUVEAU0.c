#include "dx.h"
void PBNOUVEAU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V8=0,V7=0,V10=0,V13=0,RES=0;
int B;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=10849;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==609&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1078; pile[WZ1]=B; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1078,B,jvj+9)*/
pile[v[22]]=109; pile[WZ1]=jvj+9; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(109,jvj+9,jvj+2)*/
pile[v[22]]=878; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(878,jvj+2,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l14;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(163,jvj+4,V5)*/
V5=pile[WZ2]; 
if((V5!=(-7141))) goto l2;
x[jvj+5]=vo[12];z[jvj+5]=vz[12];
pile[v[22]]=1173; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(1173,jvj+5,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=878; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(878,jvj+2,jvj+6)*/
l3:if((x[jvj+6]<=0)) goto l5;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
if((x[jvj+7]==x[jvj+4])) goto l4;
pile[v[22]]=897; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(897,jvj+7,V7)*/
V7=pile[WZ2]; 
if((V7!=V8)) goto l4;
pile[v[22]]=jvj+4; pile[WZ2]=jvj+8; 
(*f[974])( );     /*NOUVEAUTE0(jvj+4,jvj+7,jvj+8)*/
if((x[jvj+8]==134)) goto l14;
l4:x[jvj+6]=t[x[jvj+6]];
goto l3;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+11]=x[jvj+2] ;z[jvj+11]=z[jvj+2];
x[jvj+18]=x[jvj+4] ;z[jvj+18]=z[jvj+4];
x[jvj+10]=vo[12];z[jvj+10]=vz[12];
pile[v[22]]=1173; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(1173,jvj+10,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=V10; pile[WZ2]=jvj+12; pile[WZ3]=jvj+13; 
(*f[767])( );if(v[102]) goto l14;     /*ETATCREF1(jvj+11,V10,jvj+12,jvj+13)*/
pile[v[22]]=B; pile[WZ1]=jvj+12; pile[WZ2]=jvj+14; 
(*f[765])( );     /*EVALNOUVPB0(B,jvj+12,jvj+14)*/
pile[v[22]]=jvj+14; 
(*f[766])( );if(v[102]) goto l8;     /*VALGLO0(jvj+14,V13)*/
V13=pile[WZ1]; 
pile[v[22]]=B; pile[WZ1]=741; pile[WZ2]=V13; 
(*f[43])( );     /*CHGC2(B,741,V13)*/
l8:x[jvj+21]=x[jvj+13] ;z[jvj+21]=z[jvj+13];
l6:if((x[jvj+21]>0)) goto l7;
x[jvj+20]=vo[12];z[jvj+20]=vz[12];
pile[v[22]]=jvj+11; pile[WZ1]=B; pile[WZ2]=jvj+13; pile[WZ3]=jvj+17; 
(*f[975])( );     /*ELIMPARNOUVPB1(jvj+11,B,jvj+13,jvj+17)*/
if((x[jvj+17]==67)) goto l10;
l13:x[jvj+22]=x[jvj+13] ;z[jvj+22]=z[jvj+13];
l11:if((x[jvj+22]>0)) goto l12;
pile[v[22]]=jvj+20; 
(*f[183])( );     /*ENLEVENATTENTE0(jvj+20)*/
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l7:x[jvj+15]=s[x[jvj+21]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+21];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[765])( );     /*EVALNOUVPB0(jvj+15,jvj+12,jvj+16)*/
pile[v[22]]=jvj+16; 
(*f[766])( );if(v[102]) goto l9;     /*VALGLO0(jvj+16,RES)*/
RES=pile[WZ1]; 
pile[v[22]]=jvj+15; pile[WZ1]=741; pile[WZ2]=RES; 
(*f[43])( );     /*CHGC2(jvj+15,741,RES)*/
l9:x[jvj+21]=t[x[jvj+21]];
goto l6;
l10:pile[v[22]]=jvj+18; pile[WZ1]=jvj+11; 
(*f[976])( );     /*STOCKNOUVPB0(jvj+18,jvj+11)*/
goto l13;
l12:x[jvj+19]=s[x[jvj+22]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+22];
pile[v[22]]=741; pile[WZ1]=jvj+19; 
(*f[71])( );     /*ENLV0(741,jvj+19)*/
x[jvj+22]=t[x[jvj+22]];
goto l11;
}
