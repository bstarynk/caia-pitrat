#include "dx.h"
void CALF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,I=0,V6=0,J=0,V5=0,V1=0,V2=0,N=0,V9=0,X=0,XX=0,V10=0,V40=0,V45=0,V57=0,V58=0,V56=0,V59=0,V60=0,V50=0,V51=0,V49=0,V52=0,V53=0,V41=0,V46=0,V34=0;
int V,H;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=11260;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==4056&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; H=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V3=H-1;
V4=V-1;
I=0;
l1:if((I<=V3)) goto l2;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:V6=I*V;
J=0;
l3:if((J<=V4)) goto l5;
I++;
goto l1;
l4:J++;
goto l3;
l5:V5=J+V6;
pile[v[22]]=V5; pile[WZ1]=(-2241); 
(*f[1020])( );if(v[102]) goto l4;     /*VALTAB0(V5,(-2241),V1)*/
V1=pile[WZ2]; 
pile[WZ1]=(-662); 
(*f[1020])( );if(v[102]) goto l4;     /*VALTAB0(V5,(-662),V2)*/
V2=pile[WZ2]; 
N=V2;
if((N<=0)) goto l4;
V9=N-1;
X=V1;
XX=0;
l6:if((XX>V9)) goto l4;
V10=X+XX;
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=1068; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1068,jvj+2,jvj+3)*/
l9:if((x[jvj+3]>0)) goto l24;
x[jvj+4]=vo[16];z[jvj+4]=vz[16];
pile[v[22]]=V10; pile[WZ1]=117; pile[WZ2]=jvj+5; 
(*f[46])( );     /*TRI0(V10,117,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=1068; 
(*f[36])( );     /*PLUSC0(jvj+4,1068,jvj+5)*/
l10:V40=I+1;
pile[v[22]]=763; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(763,jvj+5,jvj+6)*/
l11:if((x[jvj+6]>0)) goto l20;
V45=I-1;
pile[v[22]]=763; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(763,jvj+5,jvj+7)*/
l12:if((x[jvj+7]>0)) goto l22;
pile[v[22]]=510; pile[WZ1]=I; pile[WZ2]=515; pile[WZ3]=I; pile[WZ4]=jvj+8; 
(*f[391])( );     /*QUADRI10(510,I,515,I,jvj+8)*/
pile[v[22]]=jvj+5; pile[WZ1]=763; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+5,763,jvj+8)*/
l7:XX++;
goto l6;
l13:pile[v[22]]=515; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(515,jvj+9,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=763; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(763,jvj+5,jvj+10)*/
l14:if((x[jvj+10]<=0)) goto l7;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
if((x[jvj+11]==x[jvj+9])) goto l15;
pile[v[22]]=510; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(510,jvj+11,V58)*/
V58=pile[WZ2]; 
V56=V58-1;
if((V57!=V56)) goto l15;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(515,jvj+11,V59)*/
V59=pile[WZ2]; 
V60=x[jvj+11];
pile[v[22]]=763; pile[WZ1]=jvj+5; pile[WZ2]=V60; 
(*f[134])( );     /*OTA0(763,jvj+5,V60)*/
pile[v[22]]=jvj+9; pile[WZ1]=515; pile[WZ2]=V59; 
(*f[43])( );     /*CHGC2(jvj+9,515,V59)*/
l15:x[jvj+10]=t[x[jvj+10]];
goto l14;
l19:x[jvj+6]=t[x[jvj+6]];
goto l11;
l20:x[jvj+14]=s[x[jvj+6]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+6];
pile[v[22]]=510; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(510,jvj+14,V41)*/
V41=pile[WZ2]; 
if((V41!=V40)) goto l19;
x[jvj+9]=x[jvj+14] ;z[jvj+9]=z[jvj+14];
pile[v[22]]=jvj+14; pile[WZ1]=510; pile[WZ2]=I; 
(*f[43])( );     /*CHGC2(jvj+14,510,I)*/
l16:pile[v[22]]=510; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(510,jvj+9,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=763; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(763,jvj+5,jvj+12)*/
l17:if((x[jvj+12]<=0)) goto l13;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
if((x[jvj+13]==x[jvj+9])) goto l18;
pile[v[22]]=515; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(515,jvj+13,V51)*/
V51=pile[WZ2]; 
V49=V51+1;
if((V50!=V49)) goto l18;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(510,jvj+13,V52)*/
V52=pile[WZ2]; 
V53=x[jvj+13];
pile[v[22]]=763; pile[WZ1]=jvj+5; pile[WZ2]=V53; 
(*f[134])( );     /*OTA0(763,jvj+5,V53)*/
pile[v[22]]=jvj+9; pile[WZ1]=510; pile[WZ2]=V52; 
(*f[43])( );     /*CHGC2(jvj+9,510,V52)*/
l18:x[jvj+12]=t[x[jvj+12]];
goto l17;
l21:x[jvj+7]=t[x[jvj+7]];
goto l12;
l22:x[jvj+15]=s[x[jvj+7]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+7];
pile[v[22]]=515; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(515,jvj+15,V46)*/
V46=pile[WZ2]; 
if((V46!=V45)) goto l21;
x[jvj+9]=x[jvj+15] ;z[jvj+9]=z[jvj+15];
pile[v[22]]=jvj+15; pile[WZ1]=515; pile[WZ2]=I; 
(*f[43])( );     /*CHGC2(jvj+15,515,I)*/
goto l16;
l23:x[jvj+3]=t[x[jvj+3]];
goto l9;
l24:x[jvj+16]=s[x[jvj+3]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+3];
pile[v[22]]=117; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(117,jvj+16,V34)*/
V34=pile[WZ2]; 
if((V34!=V10)) goto l23;
x[jvj+5]=x[jvj+16] ;z[jvj+5]=z[jvj+16];
goto l10;
}
