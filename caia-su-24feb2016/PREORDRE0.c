#include "dx.h"
void PREORDRE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int AT=0,V40=0,T=0,V41=0,V27=0,V37=0,V39=0,V32=0,V33=0,V34=0,V35=0,V36=0,V38=0,V26=0;
int E;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=10792;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1091&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+19]=x[E] ;z[jvj+19]=z[E];
l11:if((x[jvj+19]>0)) goto l12;
x[jvj+21]=x[E] ;z[jvj+21]=z[E];
l23:if((x[jvj+21]>0)) goto l24;
l29:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==859) goto l18;
l8:pile[v[22]]=159; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(159,jvj+2,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==680) goto l9;
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==681) goto l9;
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==859) goto l9;
l3:pile[v[22]]=159; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(159,jvj+2,jvj+5)*/
V40=x[jvj+12];
l4:if((V40>0)) goto l5;
pile[v[22]]=159; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(159,jvj+7,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==576) goto l10;
l6:pile[v[22]]=1184; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1184,jvj+2,jvj+6)*/
pile[v[22]]=1183; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1183,jvj+7,jvj+8)*/
V41=x[jvj+6];
l7:if((V41<=0)) goto l15;
T=s[V41];
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==T) goto l18;
V41=t[V41];
goto l7;
l5:AT=s[V40];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==AT) goto l18;
V40=t[V40];
goto l4;
l9:for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==875) goto l18;
goto l3;
l10:pile[v[22]]=159; pile[WZ1]=jvj+2; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(159,jvj+2,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==509) goto l18;
goto l6;
l12:x[jvj+7]=s[x[jvj+19]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+19];
pile[v[22]]=258; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(258,jvj+7,jvj+12)*/
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==229) goto l13;
x[jvj+20]=x[E] ;z[jvj+20]=z[E];
l14:if((x[jvj+20]<=0)) goto l13;
x[jvj+2]=s[x[jvj+20]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+20];
if((x[jvj+7]==x[jvj+2])) goto l15;
pile[v[22]]=258; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(258,jvj+2,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==229) goto l16;
l17:for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==229) goto l15;
if((x[jvj+12]==0)) goto l1;
pile[v[22]]=159; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,jvj+2,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==576) goto l18;
l1:pile[v[22]]=159; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(159,jvj+2,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==680) goto l2;
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==681) goto l2;
goto l8;
l13:x[jvj+19]=t[x[jvj+19]];
goto l11;
l16:pile[v[22]]=jvj+2; pile[WZ1]=248; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+2,248,jvj+7)*/
goto l17;
l18:pile[v[22]]=jvj+2; pile[WZ1]=248; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+2,248,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=226; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+7,226,jvj+2)*/
l15:x[jvj+20]=t[x[jvj+20]];
goto l14;
l20:if((V26<4)) goto l21;
l27:x[jvj+22]=t[x[jvj+22]];
l25:if((x[jvj+22]>0)) goto l26;
x[jvj+21]=t[x[jvj+21]];
goto l23;
l21:V37=x[jvj+14];
V39=x[jvj+15];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V32; pile[WZ2]=10792; 
(*f[98])( );     /*SRA3(135,V32,10792,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V33,125,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=16; pile[WZ1]=V34; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(16,V34,126,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V37; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(20,V37,V35,V36)*/
V36=pile[WZ3]; 
pile[WZ1]=V39; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(20,V39,V36,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; 
(*f[40])( );     /*SLG0(V38)*/
if((V26!=2)) goto l27;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l27;
l22:V26=g[482];
if((V26<=0)) goto l27;
V27=vg[482];
if((V27!=0)) goto l19;
if((V26<3)) goto l21;
l19:pile[v[22]]=482; pile[WZ1]=10792; pile[WZ2]=0; pile[WZ3]=22; pile[WZ4]=jvj+14; pile[WZ5]=23; pile[v[22]+6]=jvj+15; pile[v[22]+7]=jvj+16; 
(*f[187])( );     /*INTERP0(482,10792,0,22,jvj+14,23,jvj+15,jvj+16)*/
if((x[jvj+16]==135)) goto l20;
goto l27;
l24:x[jvj+14]=s[x[jvj+21]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+21];
pile[v[22]]=248; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(248,jvj+14,jvj+17)*/
x[jvj+22]=x[E] ;z[jvj+22]=z[E];
goto l25;
l26:x[jvj+15]=s[x[jvj+22]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+22];
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==x[jvj+15]) goto l28;
goto l27;
l28:pile[v[22]]=248; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(248,jvj+15,jvj+18)*/
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l22;
goto l27;
}
