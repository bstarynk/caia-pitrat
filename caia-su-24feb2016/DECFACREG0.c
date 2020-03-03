#include "dx.h"
void DECFACREG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V3=0,V1=0,V17=0,V12=0,V18=0,N=0,Q=0;
int EV,P,R;
int EX;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=11399;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3670&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
EV=pile[v[22]]; P=pile[v[22]+1]; R=pile[v[22]+2]; EX=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+21]=0 ;z[jvj+21]=0;
x[EX]=x[jvj+21] ;z[EX]=z[jvj+21];
pile[v[22]]=R; pile[WZ1]=jvj+9; 
(*f[4010])( );     /*ENSNBRES0(R,jvj+9)*/
l10:if((x[jvj+9]>0)) goto l11;
x[jvj+24]=x[EV] ;z[jvj+24]=z[EV];
l14:if((x[jvj+24]>0)) goto l15;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l2:x[jvj+22]=t[x[jvj+22]];
l1:if((x[jvj+22]<=0)) goto l3;
x[jvj+2]=s[x[jvj+22]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+22];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,jvj+2,V2)*/
V2=pile[WZ2]; 
if((V2!=P)) goto l2;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(515,jvj+2,V3)*/
V3=pile[WZ2]; 
V1=V3;
l13:Q=V1;
pile[v[22]]=41; pile[WZ1]=Q; pile[WZ2]=jvj+11; 
(*f[445])( );     /*TRI15(41,Q,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=N; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,N,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=218; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,218,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+11; pile[WZ2]=195; pile[WZ3]=jvj+12; 
(*f[301])( );     /*TRI11(jvj+18,jvj+11,195,jvj+12)*/
pile[v[22]]=EX; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(EX,jvj+12)*/
l12:x[jvj+9]=t[x[jvj+9]];
goto l10;
l3:V1=0;
goto l13;
l5:x[jvj+23]=t[x[jvj+23]];
l4:if((x[jvj+23]<=0)) goto l9;
x[jvj+4]=s[x[jvj+23]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+23];
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+4,V17)*/
V17=pile[WZ2]; 
if((V17!=P)) goto l5;
pile[v[22]]=195; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(195,jvj+4,jvj+7)*/
l17:pile[v[22]]=jvj+5; pile[WZ1]=jvj+15; 
(*f[1290])( );if(v[102]) goto l16;     /*DEPEXP0(jvj+5,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=218; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+15,218,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+7; pile[WZ2]=195; pile[WZ3]=jvj+20; 
(*f[301])( );     /*TRI11(jvj+19,jvj+7,195,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+5; pile[WZ2]=161; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+20,jvj+5,161,jvj+16)*/
pile[v[22]]=EX; pile[WZ1]=jvj+16; 
(*f[68])( );     /*PLUE0(EX,jvj+16)*/
l16:x[jvj+24]=t[x[jvj+24]];
goto l14;
l6:pile[v[22]]=131; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(131,jvj+5,jvj+6)*/
if((x[jvj+6]!=68)) goto l7;
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=jvj+3; pile[WZ1]=0; 
(*f[207])( );     /*PLUE2(jvj+3,0)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+3,1)*/
x[jvj+7]=x[jvj+3] ;z[jvj+7]=z[jvj+3];
l7:pile[v[22]]=280; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(280,jvj+5,V18)*/
V18=pile[WZ2]; 
if((V18<=0)) goto l9;
x[jvj+23]=x[jvj+14] ;z[jvj+23]=z[jvj+14];
goto l4;
l8:x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=jvj+8; pile[WZ1]=0; 
(*f[207])( );     /*PLUE2(jvj+8,0)*/
pile[WZ1]=(-1); 
(*f[207])( );     /*PLUE2(jvj+8,(-1))*/
x[jvj+7]=x[jvj+8] ;z[jvj+7]=z[jvj+8];
goto l17;
l9:if(x[jvj+7]==incon) goto l8;
goto l17;
l11:N=s[x[jvj+9]];
if((N==0)) goto l12;
pile[v[22]]=N; pile[WZ1]=jvj+10; 
(*f[1007])( );if(v[102]) goto l12;     /*DECFACTPREM0(N,jvj+10)*/
V1=incon;
x[jvj+22]=x[jvj+10] ;z[jvj+22]=z[jvj+10];
goto l1;
l15:x[jvj+5]=s[x[jvj+24]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+24];
pile[v[22]]=1287; pile[WZ1]=jvj+5; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1287,jvj+5,jvj+13)*/
pile[v[22]]=1310; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1310,jvj+5,jvj+14)*/
x[jvj+7]=incon;
if((x[jvj+13]==0)) goto l6;
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==P) goto l7;
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(280,jvj+5,V12)*/
V12=pile[WZ2]; 
if((V12<=0)) goto l7;
pile[v[22]]=41; pile[WZ1]=0; pile[WZ2]=jvj+7; 
(*f[445])( );     /*TRI15(41,0,jvj+7)*/
goto l7;
}
