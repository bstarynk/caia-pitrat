#include "dx.h"
void ZEUS0(int sign)
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V106=0,V112=0,V145=0,V146=0,V147=0,V148=0,V149=0,V150=0,V151=0,V152=0,V108=0,V167=0,V168=0,V171=0,V170=0,V156=0,V154=0,V157=0,V158=0,V159=0,V160=0,V161=0,V155=0,V169=0,V153=0,V172=0,V173=0,V174=0,V115=0,V117=0,V116=0,V110=0,V144=0,V142=0,V125=0,V140=0,V126=0,V138=0,V127=0,V136=0,V128=0,V134=0,V129=0,V132=0,V122=0,V131=0,V124=0,V130=0,V121=0,V120=0,V119=0,V118=0,V192=0,V190=0,V188=0,V186=0,V187=0,V184=0,V182=0,V163=0,V180=0,V164=0,V178=0,V165=0,V176=0,V166=0,V175=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=10900;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==7&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
v[22]+=100; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=vv[195];
if((V1==0)) goto l2;
if((V1<=0)) goto l1;
alarm((3<600) ? 3 : 600);
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=100; return;
l2:V106=vv[15];
if((V106==3)) goto l17;
if((V106!=2)) goto l9;
if((v[90]!=0)) goto l9;
V112=vv[184];
if((V112!=0)) goto l9;
V146=V110=incon;
V145=vv[38];
V146=V145;
V147=vv[28];
V148=V147;
V149=vv[181];
V150=V149;
V151=vv[179];
V152=V151;
V108=60;
V167=(time(tzt)-inccc);
V168=V167;
V171=vv[48];
V170=V168-V171;
V156=V170;
V154=vv[39];
if((V146!=V154)) goto l19;
V157=vv[196];
if((V157!=1)) goto l19;
V158=vv[37];
if((V148!=V158)) goto l19;
V159=vv[197];
if((V159!=0)) goto l19;
V160=vv[180];
if((V150!=V160)) goto l19;
V161=vv[178];
if((V152!=V161)) goto l19;
if((V146<0)) goto l3;
if((V156<=30)) goto l3;
V155=vv[46];
if((V155!=287)) goto l20;
if((V156>600)) goto l20;
l3:V169=vv[39];
if((V146==V169)) goto l4;
vv[48]=V168;
l4:if(V110==incon) goto l18;
l5:V153=vv[39];
vv[38]=V153;
V172=vv[37];
vv[28]=V172;
V173=vv[180];
vv[181]=V173;
V174=vv[178];
vv[179]=V174;
l6:if((V110!=12)) goto l8;
l7:V115=(time(tzt)-inccc);
vv[52]=V115;
V117=vv[53];
V116=V117+1;
vv[53]=V116;
if((V110!=12)) goto l1;
vv[0]=21;
pile[v[22]]=372; 
(*f[14])( );     /*SORTA0(372)*/
(*f[17])( );     /*FERMER0()*/
goto l1;
l9:V110=68;
V108=60;
l8:alarm((V108<600) ? V108 : 600);
goto l7;
l10:V110=68;
goto l6;
l11:V124=vv[26];
if((V124!=0)) goto l10;
if((V122==0)) goto l10;
if((V122==2)) goto l10;
V125=vv[36];
V126=vv[35];
V127=vv[31];
V128=vv[30];
V129=vv[44];
V110=12;
pile[v[22]]=20; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(20,0,126,V131)*/
V131=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V131; 
(*f[39])( );     /*SDX0(41,2,V131,V132)*/
V132=pile[WZ3]; 
pile[WZ1]=V122; pile[WZ2]=V132; 
(*f[39])( );     /*SDX0(41,V122,V132,V134)*/
V134=pile[WZ3]; 
pile[WZ1]=V129; pile[WZ2]=V134; 
(*f[39])( );     /*SDX0(41,V129,V134,V136)*/
V136=pile[WZ3]; 
pile[WZ1]=V128; pile[WZ2]=V136; 
(*f[39])( );     /*SDX0(41,V128,V136,V138)*/
V138=pile[WZ3]; 
pile[WZ1]=V127; pile[WZ2]=V138; 
(*f[39])( );     /*SDX0(41,V127,V138,V140)*/
V140=pile[WZ3]; 
pile[WZ1]=V126; pile[WZ2]=V140; 
(*f[39])( );     /*SDX0(41,V126,V140,V142)*/
V142=pile[WZ3]; 
pile[WZ1]=V125; pile[WZ2]=V142; 
(*f[39])( );     /*SDX0(41,V125,V142,V144)*/
V144=pile[WZ3]; 
pile[v[22]]=V144; 
(*f[40])( );     /*SLG0(V144)*/
goto l6;
l13:vv[43]=1;
l12:if(V110==incon) goto l11;
goto l6;
l15:V108=3;
l14:v[73]=1;
V130=vv[7];
vv[6]=V130;
V122=vv[43];
if((V122==0)) goto l13;
if((V122==2)) goto l13;
goto l12;
l17:V110=incon;
V118=vv[7];
V119=vv[6];
if((V118<=V119)) goto l16;
V110=68;
l16:V120=vv[44];
if((V120<3)) goto l15;
V121=vv[44];
V108=V121;
goto l14;
l19:if(V146!=incon) goto l3;
l18:V110=68;
goto l5;
l20:V163=vv[36];
V164=vv[35];
V165=vv[31];
V166=vv[30];
V187=v[50];
V110=12;
pile[v[22]]=20; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(20,0,126,V175)*/
V175=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V175; 
(*f[39])( );     /*SDX0(41,1,V175,V176)*/
V176=pile[WZ3]; 
pile[WZ1]=V166; pile[WZ2]=V176; 
(*f[39])( );     /*SDX0(41,V166,V176,V178)*/
V178=pile[WZ3]; 
pile[WZ1]=V165; pile[WZ2]=V178; 
(*f[39])( );     /*SDX0(41,V165,V178,V180)*/
V180=pile[WZ3]; 
pile[WZ1]=V164; pile[WZ2]=V180; 
(*f[39])( );     /*SDX0(41,V164,V180,V182)*/
V182=pile[WZ3]; 
pile[WZ1]=V163; pile[WZ2]=V182; 
(*f[39])( );     /*SDX0(41,V163,V182,V184)*/
V184=pile[WZ3]; 
pile[WZ1]=V146; pile[WZ2]=V184; 
(*f[39])( );     /*SDX0(41,V146,V184,V186)*/
V186=pile[WZ3]; 
pile[WZ1]=V187; pile[WZ2]=V186; 
(*f[39])( );     /*SDX0(41,V187,V186,V188)*/
V188=pile[WZ3]; 
pile[WZ1]=V168; pile[WZ2]=V188; 
(*f[39])( );     /*SDX0(41,V168,V188,V190)*/
V190=pile[WZ3]; 
pile[WZ1]=V171; pile[WZ2]=V190; 
(*f[39])( );     /*SDX0(41,V171,V190,V192)*/
V192=pile[WZ3]; 
pile[v[22]]=V192; 
(*f[40])( );     /*SLG0(V192)*/
fflush(stdout);
goto l3;
}
