#include "dx.h"
void ATOME524T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V29=0,V23=0,V9=0,V30=0,V10=0,V31=0,V27=0,V12=0;
int RA;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=20524;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3935&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RA=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RA; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,RA,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=25)) goto l15;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(642,jvj+6,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=RA; pile[WZ1]=jvj+12; 
(*f[1361])( );     /*VAROBJ0(RA,jvj+12)*/
pile[WZ1]=jvj+13; 
(*f[1945])( );if(v[102]) goto l15;     /*DEGREE0(RA,jvj+13)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+13,V12)*/
V12=pile[WZ2]; 
if((V12==1)) goto l10;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:V6=s[V29];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==V6) goto l4;
l3:V29=t[V29];
l1:if((V29>0)) goto l2;
if((x[jvj+5]!=0)) goto l13;
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=929; pile[WZ1]=jvj+6; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(929,jvj+6,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=V23; 
(*f[207])( );     /*PLUE2(jvj+7,V23)*/
l5:pile[v[22]]=1006; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1006,jvj+2,jvj+8)*/
V30=x[jvj+8];
l6:if((V30>0)) goto l7;
pile[v[22]]=1006; pile[WZ1]=RA; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1006,RA,jvj+9)*/
V31=x[jvj+9];
l8:if((V31>0)) goto l9;
pile[v[22]]=RA; pile[WZ1]=jvj+2; pile[WZ2]=jvj+19; 
(*f[760])( );     /*MEMEX0(RA,jvj+2,jvj+19)*/
if((x[jvj+19]==134)) goto l14;
l13:x[jvj+29]=t[x[jvj+29]];
l12:if((x[jvj+29]<=0)) goto l11;
x[jvj+2]=s[x[jvj+29]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+29];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+2,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=25)) goto l13;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=1006; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1006,jvj+2,jvj+3)*/
pile[WZ1]=RA; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,RA,jvj+4)*/
V29=x[jvj+3];
goto l1;
l4:pile[v[22]]=jvj+5; pile[WZ1]=V6; 
(*f[207])( );     /*PLUE2(jvj+5,V6)*/
goto l3;
l7:V9=s[V30];
pile[v[22]]=jvj+7; pile[WZ1]=V9; 
(*f[207])( );     /*PLUE2(jvj+7,V9)*/
V30=t[V30];
goto l6;
l9:V10=s[V31];
pile[v[22]]=jvj+7; pile[WZ1]=V10; 
(*f[207])( );     /*PLUE2(jvj+7,V10)*/
V31=t[V31];
goto l8;
l11:x[jvj+12]=t[x[jvj+12]];
l10:if((x[jvj+12]<=0)) goto l15;
x[jvj+14]=s[x[jvj+12]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+12];
pile[v[22]]=509; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[1969])( );     /*FNDEND0(509,jvj+14,jvj+15)*/
pile[v[22]]=RA; pile[WZ2]=jvj+16; 
(*f[1028])( );if(v[102]) goto l11;     /*ISOLE0(RA,jvj+14,jvj+16)*/
x[jvj+20]=x[jvj+16] ;z[jvj+20]=z[jvj+16];
x[jvj+29]=x[jvj+15] ;z[jvj+29]=z[jvj+15];
goto l12;
l14:pile[v[22]]=jvj+14; pile[WZ1]=jvj+20; pile[WZ2]=jvj+2; pile[WZ3]=jvj+21; 
(*f[1719])( );     /*SUBSTITUTES0(jvj+14,jvj+20,jvj+2,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=1006; pile[WZ2]=jvj+7; 
(*f[34])( );     /*CHGC0(jvj+21,1006,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=RA; pile[WZ2]=110; pile[WZ3]=(-6216); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,RA,110,(-6216),jvj+27)*/
pile[v[22]]=V27; pile[WZ1]=858; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(V27,858,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,v[13],642,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=3935; pile[WZ2]=246; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,3935,246,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=20524; pile[WZ2]=218; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+25,20524,218,jvj+26)*/
pile[v[22]]=jvj+27; pile[WZ1]=(-20); pile[WZ2]=jvj+26; pile[WZ3]=159; pile[WZ4]=jvj+28; 
(*f[298])( );     /*TRIENS1(jvj+27,(-20),jvj+26,159,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+28,1,158,jvj+22)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[1296])( );     /*NOUVCONTR0(jvj+21,jvj+22)*/
goto l13;
}
