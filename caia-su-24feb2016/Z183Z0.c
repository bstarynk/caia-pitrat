#include "dx.h"
void Z183Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int T=0,V27=0,V49=0,V53=0,V58=0,V36=0,V38=0,V40=0,V41=0,V61=0,V62=0,V1=0,V3=0,V5=0,V6=0,V11=0,V12=0,V13=0,V44=0,V388=0,V389=0,V390=0,V391=0,V392=0,V393=0,V394=0,V395=0,V341=0,V337=0,V338=0,V339=0,V340=0,V51=0,V402=0,V403=0,V404=0,V405=0,V56=0,V412=0,V413=0,V414=0,V415=0,V28=0,V358=0,V354=0,V355=0,V356=0,V357=0,V363=0,V359=0,V360=0,V361=0,V362=0,V102=0,NNNX=0,V458=0,V99=0,V97=0,V98=0,V100=0,V101=0,V103=0,V104=0,V105=0,V106=0,V107=0,V109=0,V110=0,V111=0,V112=0,V113=0,V115=0,V116=0,V117=0,V118=0,V119=0,V133=0,V134=0,V135=0,V136=0,V137=0,V145=0,V146=0,V147=0,V148=0,V149=0,V151=0,V152=0,V153=0,V154=0,V155=0,V157=0,V158=0,V159=0,V160=0,V161=0,V199=0,V200=0,V201=0,V202=0,V203=0,V217=0,V218=0,V219=0,V220=0,V221=0,V223=0,V224=0,V225=0,V226=0,V227=0,V229=0,V230=0,V231=0,V232=0,V233=0,V235=0,V236=0,V237=0,V238=0,V239=0,V241=0,V242=0,V243=0,V244=0,V245=0,V247=0,V248=0,V249=0,V250=0,V251=0,V253=0,V254=0,V255=0,V256=0,V257=0,V259=0,V260=0,V261=0,V262=0,V263=0,V265=0,V266=0,V267=0,V268=0,V269=0,V271=0,V272=0,V273=0,V274=0,V275=0,V277=0,V278=0,V279=0,V280=0,V281=0,V283=0,V284=0,V285=0,V286=0,V287=0,V289=0,V290=0,V291=0,V292=0,V293=0,V301=0,V302=0,V303=0,V304=0,V305=0,V307=0,V308=0,V309=0,V310=0,V311=0,V313=0,V314=0,V315=0,V316=0,V317=0,V319=0,V320=0,V321=0,V322=0,V323=0,V325=0,V326=0,V327=0,V328=0,V329=0,V331=0,V332=0,V333=0,V334=0,V335=0,V169=0,V170=0,V171=0,V172=0,V173=0,V175=0,V176=0,V177=0,V178=0,V179=0,V295=0,V296=0,V297=0,V298=0,V299=0,V205=0,V206=0,V207=0,V208=0,V209=0,V181=0,V182=0,V183=0,V184=0,V185=0,V211=0,V212=0,V213=0,V214=0,V215=0,V193=0,V194=0,V195=0,V196=0,V197=0,V187=0,V188=0,V189=0,V190=0,V191=0,V163=0,V164=0,V165=0,V166=0,V167=0,V127=0,V128=0,V129=0,V130=0,V131=0,V121=0,V122=0,V123=0,V124=0,V125=0,V139=0,V140=0,V141=0,V142=0,V143=0,V347=0,V342=0,V343=0,V344=0,V345=0,V346=0,V369=0,V364=0,V365=0,V366=0,V367=0,V368=0,V445=0,V440=0,V441=0,V442=0,V443=0,V444=0,V451=0,V446=0,V447=0,V448=0,V449=0,V450=0,V457=0,V452=0,V453=0,V454=0,V455=0,V456=0,V387=0,V382=0,V383=0,V384=0,V385=0,V386=0,V353=0,V348=0,V349=0,V350=0,V351=0,V352=0,V401=0,V396=0,V397=0,V398=0,V399=0,V400=0,V411=0,V406=0,V407=0,V408=0,V409=0,V410=0,V421=0,V416=0,V417=0,V418=0,V419=0,V420=0,V427=0,V422=0,V423=0,V424=0,V425=0,V426=0,V433=0,V428=0,V429=0,V430=0,V431=0,V432=0,V381=0,V376=0,V377=0,V378=0,V379=0,V380=0,V375=0,V370=0,V371=0,V372=0,V373=0,V374=0,V439=0,V434=0,V435=0,V436=0,V437=0,V438=0;
int SUJ;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=62;
if(v[0]>99700) (*f[6])( );

SUJ=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=SUJ; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,SUJ,jvj+2)*/
T=x[jvj+2];
l9:pile[v[22]]=111; pile[WZ1]=SUJ; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,SUJ,jvj+8)*/
x[jvj+9]=x[jvj+8] ;z[jvj+9]=z[jvj+8];
l12:pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+9,jvj+12)*/
x[jvj+13]=x[jvj+12] ;z[jvj+13]=z[jvj+12];
l28:pile[v[22]]=SUJ; pile[WZ1]=jvj+19; 
(*f[4086])( );     /*ENSATT0(SUJ,jvj+19)*/
pile[v[22]]=162; pile[WZ1]=SUJ; 
(*f[219])( );if(v[102]) goto l62;     /*FNDC2(162,SUJ,V44)*/
V44=pile[WZ2]; 
if((V44<=supcar)) goto l61;
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V388)*/
V388=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V388; pile[WZ2]=164; 
(*f[42])( );     /*SRA1(135,V388,164,V389)*/
V389=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=162; pile[WZ2]=V389; 
(*f[39])( );     /*SDX0(20,162,V389,V390)*/
V390=pile[WZ3]; 
pile[v[22]]=V390; pile[WZ1]=V44; 
(*f[38])( );     /*SPC0(V390,V44,V391)*/
V391=pile[WZ2]; 
pile[v[22]]=V391; 
(*f[40])( );     /*SLG0(V391)*/
l61:if((V44>debcar)) goto l62;
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V392)*/
V392=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V392; pile[WZ2]=280; 
(*f[42])( );     /*SRA1(135,V392,280,V393)*/
V393=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=162; pile[WZ2]=V393; 
(*f[39])( );     /*SDX0(20,162,V393,V394)*/
V394=pile[WZ3]; 
pile[v[22]]=V394; pile[WZ1]=V44; 
(*f[38])( );     /*SPC0(V394,V44,V395)*/
V395=pile[WZ2]; 
pile[v[22]]=V395; 
(*f[40])( );     /*SLG0(V395)*/
l62:pile[v[22]]=100; pile[WZ1]=SUJ; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(100,SUJ,jvj+31)*/
if(x[jvj+31]==20||x[jvj+31]==89||x[jvj+31]==41||x[jvj+31]==96||x[jvj+31]==21||x[jvj+31]==22||x[jvj+31]==73||x[jvj+31]==39||x[jvj+31]==114||x[jvj+31]==113||x[jvj+31]==102||x[jvj+31]==103||x[jvj+31]==160||x[jvj+31]==111||x[jvj+31]==42||x[jvj+31]==47||x[jvj+31]==43||x[jvj+31]==61||x[jvj+31]==69||x[jvj+31]==108||x[jvj+31]==128||x[jvj+31]==120||x[jvj+31]==185||x[jvj+31]==452||x[jvj+31]==646||x[jvj+31]==435||x[jvj+31]==85||x[jvj+31]==86||x[jvj+31]==484||x[jvj+31]==453||x[jvj+31]==531||x[jvj+31]==455||x[jvj+31]==448||x[jvj+31]==178||x[jvj+31]==454||x[jvj+31]==477||x[jvj+31]==492||x[jvj+31]==209||x[jvj+31]==315||x[jvj+31]==212||x[jvj+31]==600||x[jvj+31]==611||x[jvj+31]==711||x[jvj+31]==570||x[jvj+31]==566||x[jvj+31]==854||x[jvj+31]==895||x[jvj+31]==927||x[jvj+31]==537||x[jvj+31]==979||x[jvj+31]==1027||x[jvj+31]==984||x[jvj+31]==1050||x[jvj+31]==284||x[jvj+31]==1659||x[jvj+31]==1736||x[jvj+31]==1764||x[jvj+31]==1617||x[jvj+31]==1718||x[jvj+31]==1716||x[jvj+31]==1726||x[jvj+31]==1908) goto l63;
V341=x[jvj+31];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V337)*/
V337=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V337; pile[WZ2]=100; 
(*f[42])( );     /*SRA1(135,V337,100,V338)*/
V338=pile[WZ3]; 
pile[v[22]]=V338; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V338,(-4390),V339)*/
V339=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V341; pile[WZ2]=V339; 
(*f[39])( );     /*SDX0(20,V341,V339,V340)*/
V340=pile[WZ3]; 
pile[v[22]]=V340; 
(*f[40])( );     /*SLG0(V340)*/
l63:pile[v[22]]=163; pile[WZ1]=SUJ; 
(*f[44])( );if(v[102]) goto l64;     /*FNDC1(163,SUJ,V51)*/
V51=pile[WZ2]; 
if((V51<=supvar)) goto l64;
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V402)*/
V402=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V402; pile[WZ2]=164; 
(*f[42])( );     /*SRA1(135,V402,164,V403)*/
V403=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=163; pile[WZ2]=V403; 
(*f[39])( );     /*SDX0(20,163,V403,V404)*/
V404=pile[WZ3]; 
pile[v[22]]=V404; pile[WZ1]=V51; 
(*f[37])( );     /*SRA0(V404,V51,V405)*/
V405=pile[WZ2]; 
pile[v[22]]=V405; 
(*f[40])( );     /*SLG0(V405)*/
l64:pile[v[22]]=140; pile[WZ1]=SUJ; 
(*f[44])( );if(v[102]) goto l65;     /*FNDC1(140,SUJ,V56)*/
V56=pile[WZ2]; 
if((V56<=supvar)) goto l65;
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V412)*/
V412=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V412; pile[WZ2]=164; 
(*f[42])( );     /*SRA1(135,V412,164,V413)*/
V413=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=140; pile[WZ2]=V413; 
(*f[39])( );     /*SDX0(20,140,V413,V414)*/
V414=pile[WZ3]; 
pile[v[22]]=V414; pile[WZ1]=V56; 
(*f[37])( );     /*SRA0(V414,V56,V415)*/
V415=pile[WZ2]; 
pile[v[22]]=V415; 
(*f[40])( );     /*SLG0(V415)*/
l65:pile[v[22]]=101; pile[WZ1]=SUJ; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(101,SUJ,jvj+32)*/
V28=x[jvj+32];
if((V28<=sepcte)) goto l66;
V358=x[jvj+32];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V354)*/
V354=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V354; pile[WZ2]=164; 
(*f[42])( );     /*SRA1(135,V354,164,V355)*/
V355=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=101; pile[WZ2]=V355; 
(*f[39])( );     /*SDX0(20,101,V355,V356)*/
V356=pile[WZ3]; 
pile[WZ1]=V358; pile[WZ2]=V356; 
(*f[39])( );     /*SDX0(20,V358,V356,V357)*/
V357=pile[WZ3]; 
pile[v[22]]=V357; 
(*f[40])( );     /*SLG0(V357)*/
l66:if((V28>debobj)) goto l67;
V363=x[jvj+32];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V359)*/
V359=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V359; pile[WZ2]=280; 
(*f[42])( );     /*SRA1(135,V359,280,V360)*/
V360=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=101; pile[WZ2]=V360; 
(*f[39])( );     /*SDX0(20,101,V360,V361)*/
V361=pile[WZ3]; 
pile[WZ1]=V363; pile[WZ2]=V361; 
(*f[39])( );     /*SDX0(20,V363,V361,V362)*/
V362=pile[WZ3]; 
pile[v[22]]=V362; 
(*f[40])( );     /*SLG0(V362)*/
l67:V102=x[SUJ];
V458=x[jvj+19];
l68:if((V458>0)) goto l69;
if((T==41)) goto l73;
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==130) goto l71;
l72:if((T!=20)) goto l73;
l76:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==114) goto l77;
l78:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==113) goto l79;
l80:if((T!=89)) goto l81;
l84:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==163) goto l85;
l86:if((T!=21)) goto l87;
l90:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==108) goto l91;
l92:if((T!=455)) goto l93;
l96:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==600) goto l97;
l98:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==611) goto l99;
l100:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==712) goto l101;
l102:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==713) goto l103;
l104:if((T!=600)) goto l105;
l110:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==18) goto l111;
l112:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==637) goto l113;
l114:if((T!=566)) goto l115;
l120:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==1219) goto l121;
l122:if((T!=22)) goto l123;
l126:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==1662) goto l127;
l128:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==1743) goto l129;
l130:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==1742) goto l131;
l132:if((T==1718)) goto l137;
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==1678) goto l133;
l134:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==1679) goto l135;
l136:if((T!=1726)) goto l137;
l44:if(T==42||T==178||T==1659) goto l45;
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==105) goto l139;
l45:if(T==435||T==39||T==73||T==42||T==47||T==492) goto l60;
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==337) goto l140;
l60:if(T==1736||T==1716||T==1726) goto l56;
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==1592) goto l141;
l56:if((T==73)) goto l57;
if((T==128)) goto l49;
l142:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==128) goto l143;
l48:if((T!=73)) goto l49;
if((x[jvj+13]==735)) goto l59;
l49:if(T==47||T==178) goto l59;
if((T==22)) goto l46;
if((T!=73)) goto l47;
if((x[jvj+13]==1479)) goto l59;
l47:if(T==435||T==448||T==454||T==477||T==492) goto l59;
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==436) goto l144;
l59:if(T==47||T==178||T==209||T==854) goto l54;
if((T!=22)) goto l145;
if((x[jvj+13]==434)) goto l55;
pile[v[22]]=155; pile[WZ1]=jvj+13; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(155,jvj+13,jvj+29)*/
if((x[jvj+29]==336)) goto l55;
l58:pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l145;     /*FNDO0(100,jvj+9,jvj+30)*/
if((x[jvj+30]!=20)) goto l55;
l145:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==184) goto l146;
l54:if((T!=73)) goto l55;
if(x[jvj+13]==33||x[jvj+13]==722||x[jvj+13]==853||x[jvj+13]==1479) goto l52;
l55:if(T==185||T==120||T==1659) goto l52;
if(T!=22&&T!=73) goto l53;
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(100,jvj+9,jvj+28)*/
if((x[jvj+28]!=20)) goto l52;
l53:if((T!=600)) goto l147;
pile[v[22]]=735; pile[WZ1]=jvj+9; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l147;     /*FNDO0(735,jvj+9,jvj+27)*/
l52:if(T==448||T==454||T==600||T==984||T==1659||T==1736) goto l43;
if(T!=22&&T!=73) goto l51;
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(100,jvj+9,jvj+26)*/
if((x[jvj+26]!=20)) goto l43;
l51:if(T==185||T==209||T==315||T==537||T==895) goto l43;
if((T==22)) goto l50;
if((T!=73)) goto l149;
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l149;     /*FNDC0(117,jvj+13,V13)*/
V13=pile[WZ2]; 
if((V13>=3)) goto l43;
l149:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==160) goto l150;
l43:if(T==42||T==452||T==455||T==178||T==600||T==611||T==711||T==646||T==854||T==895||T==537||T==1659) goto l38;
if((T==185)) goto l42;
if((T!=22)) goto l151;
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+9,jvj+24)*/
if((x[jvj+24]!=20)) goto l39;
l41:pile[v[22]]=155; pile[WZ1]=jvj+13; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l151;     /*FNDO0(155,jvj+13,jvj+23)*/
if(x[jvj+23]==68||x[jvj+23]==336) goto l39;
l151:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==107) goto l152;
l38:if((T!=73)) goto l39;
if(x[jvj+13]==722||x[jvj+13]==735||x[jvj+13]==576) goto l33;
l39:if(T==185||T==448||T==454||T==477||T==854||T==1736) goto l32;
if(T!=22&&T!=73) goto l36;
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+9,jvj+22)*/
if((x[jvj+22]!=20)) goto l32;
l36:if((T!=477)) goto l37;
if(x[jvj+13]==464||x[jvj+13]==463) goto l34;
l37:if(T==43||T==114||T==113||T==61||T==108||T==453||T==492||T==209||T==315||T==212||T==600||T==611||T==566||T==570||T==927||T==537||T==895||T==979||T==1027||T==984||T==1659||T==1716||T==1908) goto l32;
if((T==73)) goto l35;
if((T!=22)) goto l153;
pile[v[22]]=118; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l153;     /*FNDC0(118,jvj+13,V5)*/
V5=pile[WZ2]; 
if((V5>=2)) goto l34;
l153:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==103) goto l154;
l32:if((T==73)) goto l33;
l34:if(T==448||T==454||T==178||T==854||T==21||T==1736) goto l40;
if(T!=22&&T!=73&&T!=1764) goto l31;
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+9,jvj+21)*/
if((x[jvj+21]!=20)) goto l40;
l31:if(T==43||T==114||T==113||T==61||T==435||T==185||T==108||T==452||T==646||T==120||T==484||T==453||T==531||T==455||T==477||T==492||T==209||T==315||T==212||T==600||T==611||T==570||T==566||T==895||T==927||T==537||T==979||T==1027||T==984||T==1050||T==284||T==1659||T==1617||T==1726||T==1716||T==1908) goto l40;
if((T==73)) goto l30;
if((T!=22)) goto l155;
pile[v[22]]=118; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(118,jvj+13,V1)*/
V1=pile[WZ2]; 
if((V1>=1)) goto l40;
l29:pile[v[22]]=155; pile[WZ1]=jvj+13; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l155;     /*FNDO0(155,jvj+13,jvj+20)*/
if((x[jvj+20]==120)) goto l40;
l155:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==102) goto l156;
l40:if(T==39||T==22||T==73||T==435||T==484||T==453||T==531||T==448||T==454||T==477||T==492||T==600||T==895||T==979||T==611||T==1027||T==1050||T==284||T==1736||T==1764||T==1617||T==1718||T==1726) goto l158;
if((T==611)) goto l158;
if((T==185)) goto l158;
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==111) goto l157;
l158:pile[v[22]]=102; pile[WZ1]=SUJ; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l159;     /*FNDO0(102,SUJ,jvj+33)*/
pile[v[22]]=jvj+33; 
(*f[4041])( );     /*Z183Z0(jvj+33)*/
l159:pile[v[22]]=103; pile[WZ1]=SUJ; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l160;     /*FNDO0(103,SUJ,jvj+34)*/
pile[v[22]]=jvj+34; 
(*f[4041])( );     /*Z183Z0(jvj+34)*/
l160:pile[v[22]]=111; pile[WZ1]=SUJ; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l161;     /*FNDO0(111,SUJ,jvj+35)*/
pile[v[22]]=jvj+35; 
(*f[4041])( );     /*Z183Z0(jvj+35)*/
l161:pile[v[22]]=337; pile[WZ1]=SUJ; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l162;     /*FNDO0(337,SUJ,jvj+36)*/
pile[v[22]]=jvj+36; 
(*f[4041])( );     /*Z183Z0(jvj+36)*/
l162:pile[v[22]]=436; pile[WZ1]=SUJ; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l163;     /*FNDO0(436,SUJ,jvj+37)*/
pile[v[22]]=jvj+37; 
(*f[4041])( );     /*Z183Z0(jvj+37)*/
l163:pile[v[22]]=160; pile[WZ1]=SUJ; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l164;     /*FNDO0(160,SUJ,jvj+38)*/
pile[v[22]]=jvj+38; 
(*f[4041])( );     /*Z183Z0(jvj+38)*/
l164:pile[v[22]]=120; pile[WZ1]=SUJ; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l165;     /*FNDO0(120,SUJ,jvj+39)*/
pile[v[22]]=jvj+39; 
(*f[4041])( );     /*Z183Z0(jvj+39)*/
l165:pile[v[22]]=735; pile[WZ1]=SUJ; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l166;     /*FNDO0(735,SUJ,jvj+40)*/
pile[v[22]]=jvj+40; 
(*f[4041])( );     /*Z183Z0(jvj+40)*/
l166:pile[v[22]]=114; pile[WZ1]=SUJ; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(114,SUJ,jvj+41)*/
l167:if((x[jvj+41]>0)) goto l168;
pile[v[22]]=113; pile[WZ1]=SUJ; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(113,SUJ,jvj+43)*/
l169:if((x[jvj+43]>0)) goto l170;
pile[v[22]]=107; pile[WZ1]=SUJ; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(107,SUJ,jvj+45)*/
l171:if((x[jvj+45]>0)) goto l172;
pile[v[22]]=105; pile[WZ1]=SUJ; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(105,SUJ,jvj+47)*/
l173:if((x[jvj+47]>0)) goto l174;
pile[v[22]]=108; pile[WZ1]=SUJ; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(108,SUJ,jvj+49)*/
l175:if((x[jvj+49]>0)) goto l176;
pile[v[22]]=128; pile[WZ1]=SUJ; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(128,SUJ,jvj+51)*/
l177:if((x[jvj+51]>0)) goto l178;
pile[v[22]]=184; pile[WZ1]=SUJ; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(184,SUJ,jvj+53)*/
l179:if((x[jvj+53]>0)) goto l180;
pile[v[22]]=600; pile[WZ1]=SUJ; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(600,SUJ,jvj+55)*/
l181:if((x[jvj+55]>0)) goto l182;
pile[v[22]]=712; pile[WZ1]=SUJ; pile[WZ2]=jvj+57; 
(*f[33])( );     /*FNDE0(712,SUJ,jvj+57)*/
l183:if((x[jvj+57]>0)) goto l184;
pile[v[22]]=713; pile[WZ1]=SUJ; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(713,SUJ,jvj+59)*/
l185:if((x[jvj+59]>0)) goto l186;
pile[v[22]]=730; pile[WZ1]=SUJ; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(730,SUJ,jvj+61)*/
l187:if((x[jvj+61]>0)) goto l188;
pile[v[22]]=100; pile[WZ1]=SUJ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l189;     /*FNDO0(100,SUJ,jvj+1)*/
l190:if((T==20)) goto l3;
if((T==566)) goto l7;
if((T!=1718)) goto l195;
pile[v[22]]=1678; pile[WZ1]=SUJ; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l194;     /*FNDO0(1678,SUJ,jvj+7)*/
l195:if(T!=39&&T!=22&&T!=73&&T!=435&&T!=484&&T!=453&&T!=531&&T!=448&&T!=454&&T!=477&&T!=492&&T!=600&&T!=895&&T!=979&&T!=611&&T!=1027&&T!=1050&&T!=284&&T!=1736&&T!=1764&&T!=1617&&T!=1718&&T!=1726) goto l197;
pile[v[22]]=111; pile[WZ1]=SUJ; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l196;     /*FNDO0(111,SUJ,jvj+4)*/
l197:if((T==41)) goto l2;
if((T==89)) goto l4;
if((T==96)) goto l5;
if((T==21)) goto l6;
if((T==22)) goto l22;
if((T!=73)) goto l23;
if((x[jvj+13]==1479)) goto l24;
l23:if(T==435||T==448||T==454||T==477||T==492) goto l24;
l27:pile[v[22]]=160; pile[WZ1]=SUJ; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(160,SUJ,jvj+18)*/
l21:pile[v[22]]=103; pile[WZ1]=SUJ; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,SUJ,jvj+16)*/
l17:pile[v[22]]=102; pile[WZ1]=SUJ; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,SUJ,jvj+15)*/
l11:if((T!=600)) goto l207;
pile[v[22]]=735; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l207;     /*FNDO0(735,jvj+9,jvj+10)*/
pile[v[22]]=120; pile[WZ1]=SUJ; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l206;     /*FNDO0(120,SUJ,jvj+11)*/
l207:v[0]=jvj; v[22]-=1; return;
l1:T=250;
goto l9;
l2:pile[v[22]]=130; pile[WZ1]=SUJ; 
(*f[26])( );if(v[102]) goto l198;     /*FNDC0(130,SUJ,V27)*/
V27=pile[WZ2]; 
goto l23;
l3:pile[v[22]]=101; pile[WZ1]=SUJ; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l191;     /*FNDO0(101,SUJ,jvj+3)*/
goto l195;
l4:pile[v[22]]=162; pile[WZ1]=SUJ; 
(*f[219])( );if(v[102]) goto l199;     /*FNDC2(162,SUJ,V49)*/
V49=pile[WZ2]; 
goto l23;
l5:pile[v[22]]=163; pile[WZ1]=SUJ; 
(*f[44])( );if(v[102]) goto l200;     /*FNDC1(163,SUJ,V53)*/
V53=pile[WZ2]; 
goto l23;
l6:pile[v[22]]=140; pile[WZ1]=SUJ; 
(*f[44])( );if(v[102]) goto l201;     /*FNDC1(140,SUJ,V58)*/
V58=pile[WZ2]; 
goto l23;
l7:pile[v[22]]=628; pile[WZ1]=SUJ; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l192;     /*FNDO0(628,SUJ,jvj+5)*/
l8:pile[v[22]]=644; pile[WZ1]=SUJ; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l193;     /*FNDO0(644,SUJ,jvj+6)*/
goto l195;
l10:x[jvj+9]=250 ;z[jvj+9]=250;
goto l12;
l13:x[jvj+13]=250 ;z[jvj+13]=250;
goto l28;
l15:pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l207;     /*FNDC0(117,jvj+13,V38)*/
V38=pile[WZ2]; 
if((V38>=1)) goto l205;
goto l207;
l16:if(T==43||T==114||T==113||T==61||T==435||T==185||T==108||T==452||T==646||T==120||T==484||T==453||T==531||T==455||T==477||T==492||T==209||T==315||T==212||T==600||T==611||T==570||T==566||T==895||T==927||T==537||T==979||T==1027||T==984||T==1050||T==284||T==1659||T==1617||T==1726||T==1716||T==1908) goto l205;
if((T==73)) goto l15;
if((T!=22)) goto l11;
pile[v[22]]=118; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(118,jvj+13,V36)*/
V36=pile[WZ2]; 
if((V36>=1)) goto l205;
l14:pile[v[22]]=155; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l207;     /*FNDO0(155,jvj+13,jvj+14)*/
if((x[jvj+14]==120)) goto l205;
goto l207;
l18:if((x[jvj+13]==576)) goto l17;
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,jvj+13,V41)*/
V41=pile[WZ2]; 
if((V41>=2)) goto l204;
goto l17;
l19:if((T!=477)) goto l20;
if(x[jvj+13]==464||x[jvj+13]==463) goto l204;
l20:if(T==43||T==114||T==113||T==61||T==108||T==453||T==492||T==209||T==315||T==212||T==600||T==611||T==566||T==570||T==927||T==537||T==895||T==979||T==1027||T==984||T==1659||T==1716||T==1908) goto l204;
if((T==73)) goto l18;
if((T!=22)) goto l17;
pile[v[22]]=118; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(118,jvj+13,V40)*/
V40=pile[WZ2]; 
if((V40>=2)) goto l204;
goto l17;
l22:if(x[jvj+13]==54||x[jvj+13]==434) goto l24;
goto l23;
l24:pile[v[22]]=436; pile[WZ1]=SUJ; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l202;     /*FNDO0(436,SUJ,jvj+17)*/
goto l27;
l25:pile[v[22]]=118; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(118,jvj+13,V61)*/
V61=pile[WZ2]; 
if((V61>=3)) goto l203;
goto l21;
l26:if(T==185||T==209||T==315||T==537||T==895) goto l203;
if((T==22)) goto l25;
if((T!=73)) goto l21;
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+13,V62)*/
V62=pile[WZ2]; 
if((V62>=3)) goto l203;
goto l21;
l30:pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l155;     /*FNDC0(117,jvj+13,V3)*/
V3=pile[WZ2]; 
if((V3>=1)) goto l40;
goto l155;
l33:if((x[jvj+13]==580)) goto l40;
goto l34;
l35:if((x[jvj+13]==576)) goto l153;
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l153;     /*FNDC0(117,jvj+13,V6)*/
V6=pile[WZ2]; 
if((V6>=2)) goto l33;
goto l153;
l42:pile[v[22]]=160; pile[WZ1]=SUJ; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l151;     /*FNDO0(160,SUJ,jvj+25)*/
pile[v[22]]=162; pile[WZ1]=jvj+25; 
(*f[219])( );if(v[102]) goto l151;     /*FNDC2(162,jvj+25,V11)*/
V11=pile[WZ2]; 
if((V11==36)) goto l39;
goto l151;
l46:if(x[jvj+13]==54||x[jvj+13]==434) goto l59;
goto l47;
l50:pile[v[22]]=118; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l149;     /*FNDC0(118,jvj+13,V12)*/
V12=pile[WZ2]; 
if((V12>=3)) goto l43;
goto l149;
l57:if((x[jvj+13]==255)) goto l49;
goto l142;
l69:NNNX=s[V458];
if(NNNX==100||NNNX==130||NNNX==101||NNNX==114||NNNX==102||NNNX==103||NNNX==113||NNNX==111||NNNX==162||NNNX==163||NNNX==140||NNNX==107||NNNX==105||NNNX==337||NNNX==436||NNNX==160||NNNX==120||NNNX==108||NNNX==128||NNNX==184||NNNX==135||NNNX==600||NNNX==611||NNNX==712||NNNX==713||NNNX==523||NNNX==730||NNNX==735||NNNX==666||NNNX==18||NNNX==637||NNNX==628||NNNX==644||NNNX==1219||NNNX==1428||NNNX==1083||NNNX==1592||NNNX==1662||NNNX==1743||NNNX==1742||NNNX==1678||NNNX==1679||NNNX==1596) goto l70;
V99=NNNX;
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V97)*/
V97=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V99; pile[WZ2]=V97; 
(*f[39])( );     /*SDX0(20,V99,V97,V98)*/
V98=pile[WZ3]; 
pile[v[22]]=V98; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V98,(-740),V100)*/
V100=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V100; 
(*f[39])( );     /*SDX0(20,V102,V100,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=V101; 
(*f[40])( );     /*SLG0(V101)*/
l70:V458=t[V458];
goto l68;
l71:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V103)*/
V103=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V103; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V103,134,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=130; pile[WZ2]=V104; 
(*f[39])( );     /*SDX0(20,130,V104,V105)*/
V105=pile[WZ3]; 
pile[v[22]]=V105; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V105,(-740),V106)*/
V106=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V106; 
(*f[39])( );     /*SDX0(20,V102,V106,V107)*/
V107=pile[WZ3]; 
pile[v[22]]=V107; 
(*f[40])( );     /*SLG0(V107)*/
goto l72;
l73:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==101) goto l74;
l75:if((T!=39)) goto l76;
l81:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==162) goto l82;
l83:if((T!=96)) goto l84;
l87:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==140) goto l88;
l89:if((T!=69)) goto l90;
l93:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==135) goto l94;
l95:if((T!=209)) goto l96;
l105:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==730) goto l106;
l107:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==735) goto l108;
l109:if((T!=42)) goto l110;
l115:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==628) goto l116;
l117:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==644) goto l118;
l119:if((T!=611)) goto l120;
l123:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==1083) goto l124;
l125:if((T!=1736)) goto l126;
goto l134;
l74:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V109)*/
V109=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V109; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V109,134,V110)*/
V110=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=101; pile[WZ2]=V110; 
(*f[39])( );     /*SDX0(20,101,V110,V111)*/
V111=pile[WZ3]; 
pile[v[22]]=V111; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V111,(-740),V112)*/
V112=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V112; 
(*f[39])( );     /*SDX0(20,V102,V112,V113)*/
V113=pile[WZ3]; 
pile[v[22]]=V113; 
(*f[40])( );     /*SLG0(V113)*/
goto l75;
l77:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V115)*/
V115=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V115; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V115,134,V116)*/
V116=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=114; pile[WZ2]=V116; 
(*f[39])( );     /*SDX0(20,114,V116,V117)*/
V117=pile[WZ3]; 
pile[v[22]]=V117; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V117,(-740),V118)*/
V118=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V118; 
(*f[39])( );     /*SDX0(20,V102,V118,V119)*/
V119=pile[WZ3]; 
pile[v[22]]=V119; 
(*f[40])( );     /*SLG0(V119)*/
goto l78;
l79:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V133)*/
V133=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V133; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V133,134,V134)*/
V134=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=113; pile[WZ2]=V134; 
(*f[39])( );     /*SDX0(20,113,V134,V135)*/
V135=pile[WZ3]; 
pile[v[22]]=V135; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V135,(-740),V136)*/
V136=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V136; 
(*f[39])( );     /*SDX0(20,V102,V136,V137)*/
V137=pile[WZ3]; 
pile[v[22]]=V137; 
(*f[40])( );     /*SLG0(V137)*/
goto l80;
l82:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V145)*/
V145=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V145; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V145,134,V146)*/
V146=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=162; pile[WZ2]=V146; 
(*f[39])( );     /*SDX0(20,162,V146,V147)*/
V147=pile[WZ3]; 
pile[v[22]]=V147; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V147,(-740),V148)*/
V148=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V148; 
(*f[39])( );     /*SDX0(20,V102,V148,V149)*/
V149=pile[WZ3]; 
pile[v[22]]=V149; 
(*f[40])( );     /*SLG0(V149)*/
goto l83;
l85:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V151)*/
V151=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V151; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V151,134,V152)*/
V152=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=163; pile[WZ2]=V152; 
(*f[39])( );     /*SDX0(20,163,V152,V153)*/
V153=pile[WZ3]; 
pile[v[22]]=V153; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V153,(-740),V154)*/
V154=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V154; 
(*f[39])( );     /*SDX0(20,V102,V154,V155)*/
V155=pile[WZ3]; 
pile[v[22]]=V155; 
(*f[40])( );     /*SLG0(V155)*/
goto l86;
l88:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V157)*/
V157=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V157; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V157,134,V158)*/
V158=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=140; pile[WZ2]=V158; 
(*f[39])( );     /*SDX0(20,140,V158,V159)*/
V159=pile[WZ3]; 
pile[v[22]]=V159; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V159,(-740),V160)*/
V160=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V160; 
(*f[39])( );     /*SDX0(20,V102,V160,V161)*/
V161=pile[WZ3]; 
pile[v[22]]=V161; 
(*f[40])( );     /*SLG0(V161)*/
goto l89;
l91:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V199)*/
V199=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V199; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V199,134,V200)*/
V200=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=108; pile[WZ2]=V200; 
(*f[39])( );     /*SDX0(20,108,V200,V201)*/
V201=pile[WZ3]; 
pile[v[22]]=V201; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V201,(-740),V202)*/
V202=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V202; 
(*f[39])( );     /*SDX0(20,V102,V202,V203)*/
V203=pile[WZ3]; 
pile[v[22]]=V203; 
(*f[40])( );     /*SLG0(V203)*/
goto l92;
l94:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V217)*/
V217=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V217; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V217,134,V218)*/
V218=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=135; pile[WZ2]=V218; 
(*f[39])( );     /*SDX0(20,135,V218,V219)*/
V219=pile[WZ3]; 
pile[v[22]]=V219; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V219,(-740),V220)*/
V220=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V220; 
(*f[39])( );     /*SDX0(20,V102,V220,V221)*/
V221=pile[WZ3]; 
pile[v[22]]=V221; 
(*f[40])( );     /*SLG0(V221)*/
goto l95;
l97:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V223)*/
V223=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V223; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V223,134,V224)*/
V224=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=600; pile[WZ2]=V224; 
(*f[39])( );     /*SDX0(20,600,V224,V225)*/
V225=pile[WZ3]; 
pile[v[22]]=V225; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V225,(-740),V226)*/
V226=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V226; 
(*f[39])( );     /*SDX0(20,V102,V226,V227)*/
V227=pile[WZ3]; 
pile[v[22]]=V227; 
(*f[40])( );     /*SLG0(V227)*/
goto l98;
l99:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V229)*/
V229=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V229; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V229,134,V230)*/
V230=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=611; pile[WZ2]=V230; 
(*f[39])( );     /*SDX0(20,611,V230,V231)*/
V231=pile[WZ3]; 
pile[v[22]]=V231; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V231,(-740),V232)*/
V232=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V232; 
(*f[39])( );     /*SDX0(20,V102,V232,V233)*/
V233=pile[WZ3]; 
pile[v[22]]=V233; 
(*f[40])( );     /*SLG0(V233)*/
goto l100;
l101:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V235)*/
V235=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V235; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V235,134,V236)*/
V236=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=712; pile[WZ2]=V236; 
(*f[39])( );     /*SDX0(20,712,V236,V237)*/
V237=pile[WZ3]; 
pile[v[22]]=V237; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V237,(-740),V238)*/
V238=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V238; 
(*f[39])( );     /*SDX0(20,V102,V238,V239)*/
V239=pile[WZ3]; 
pile[v[22]]=V239; 
(*f[40])( );     /*SLG0(V239)*/
goto l102;
l103:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V241)*/
V241=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V241; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V241,134,V242)*/
V242=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=713; pile[WZ2]=V242; 
(*f[39])( );     /*SDX0(20,713,V242,V243)*/
V243=pile[WZ3]; 
pile[v[22]]=V243; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V243,(-740),V244)*/
V244=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V244; 
(*f[39])( );     /*SDX0(20,V102,V244,V245)*/
V245=pile[WZ3]; 
pile[v[22]]=V245; 
(*f[40])( );     /*SLG0(V245)*/
goto l104;
l106:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V247)*/
V247=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V247; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V247,134,V248)*/
V248=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=730; pile[WZ2]=V248; 
(*f[39])( );     /*SDX0(20,730,V248,V249)*/
V249=pile[WZ3]; 
pile[v[22]]=V249; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V249,(-740),V250)*/
V250=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V250; 
(*f[39])( );     /*SDX0(20,V102,V250,V251)*/
V251=pile[WZ3]; 
pile[v[22]]=V251; 
(*f[40])( );     /*SLG0(V251)*/
goto l107;
l108:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V253)*/
V253=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V253; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V253,134,V254)*/
V254=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=735; pile[WZ2]=V254; 
(*f[39])( );     /*SDX0(20,735,V254,V255)*/
V255=pile[WZ3]; 
pile[v[22]]=V255; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V255,(-740),V256)*/
V256=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V256; 
(*f[39])( );     /*SDX0(20,V102,V256,V257)*/
V257=pile[WZ3]; 
pile[v[22]]=V257; 
(*f[40])( );     /*SLG0(V257)*/
goto l109;
l111:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V259)*/
V259=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V259; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V259,134,V260)*/
V260=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=18; pile[WZ2]=V260; 
(*f[39])( );     /*SDX0(20,18,V260,V261)*/
V261=pile[WZ3]; 
pile[v[22]]=V261; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V261,(-740),V262)*/
V262=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V262; 
(*f[39])( );     /*SDX0(20,V102,V262,V263)*/
V263=pile[WZ3]; 
pile[v[22]]=V263; 
(*f[40])( );     /*SLG0(V263)*/
goto l112;
l113:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V265)*/
V265=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V265; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V265,134,V266)*/
V266=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=637; pile[WZ2]=V266; 
(*f[39])( );     /*SDX0(20,637,V266,V267)*/
V267=pile[WZ3]; 
pile[v[22]]=V267; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V267,(-740),V268)*/
V268=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V268; 
(*f[39])( );     /*SDX0(20,V102,V268,V269)*/
V269=pile[WZ3]; 
pile[v[22]]=V269; 
(*f[40])( );     /*SLG0(V269)*/
goto l114;
l116:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V271)*/
V271=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V271; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V271,134,V272)*/
V272=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=628; pile[WZ2]=V272; 
(*f[39])( );     /*SDX0(20,628,V272,V273)*/
V273=pile[WZ3]; 
pile[v[22]]=V273; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V273,(-740),V274)*/
V274=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V274; 
(*f[39])( );     /*SDX0(20,V102,V274,V275)*/
V275=pile[WZ3]; 
pile[v[22]]=V275; 
(*f[40])( );     /*SLG0(V275)*/
goto l117;
l118:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V277)*/
V277=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V277; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V277,134,V278)*/
V278=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=644; pile[WZ2]=V278; 
(*f[39])( );     /*SDX0(20,644,V278,V279)*/
V279=pile[WZ3]; 
pile[v[22]]=V279; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V279,(-740),V280)*/
V280=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V280; 
(*f[39])( );     /*SDX0(20,V102,V280,V281)*/
V281=pile[WZ3]; 
pile[v[22]]=V281; 
(*f[40])( );     /*SLG0(V281)*/
goto l119;
l121:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V283)*/
V283=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V283; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V283,134,V284)*/
V284=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=1219; pile[WZ2]=V284; 
(*f[39])( );     /*SDX0(20,1219,V284,V285)*/
V285=pile[WZ3]; 
pile[v[22]]=V285; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V285,(-740),V286)*/
V286=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V286; 
(*f[39])( );     /*SDX0(20,V102,V286,V287)*/
V287=pile[WZ3]; 
pile[v[22]]=V287; 
(*f[40])( );     /*SLG0(V287)*/
goto l122;
l124:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V289)*/
V289=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V289; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V289,134,V290)*/
V290=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=1083; pile[WZ2]=V290; 
(*f[39])( );     /*SDX0(20,1083,V290,V291)*/
V291=pile[WZ3]; 
pile[v[22]]=V291; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V291,(-740),V292)*/
V292=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V292; 
(*f[39])( );     /*SDX0(20,V102,V292,V293)*/
V293=pile[WZ3]; 
pile[v[22]]=V293; 
(*f[40])( );     /*SLG0(V293)*/
goto l125;
l127:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V301)*/
V301=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V301; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V301,134,V302)*/
V302=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=1662; pile[WZ2]=V302; 
(*f[39])( );     /*SDX0(20,1662,V302,V303)*/
V303=pile[WZ3]; 
pile[v[22]]=V303; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V303,(-740),V304)*/
V304=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V304; 
(*f[39])( );     /*SDX0(20,V102,V304,V305)*/
V305=pile[WZ3]; 
pile[v[22]]=V305; 
(*f[40])( );     /*SLG0(V305)*/
goto l128;
l129:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V307)*/
V307=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V307; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V307,134,V308)*/
V308=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=1743; pile[WZ2]=V308; 
(*f[39])( );     /*SDX0(20,1743,V308,V309)*/
V309=pile[WZ3]; 
pile[v[22]]=V309; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V309,(-740),V310)*/
V310=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V310; 
(*f[39])( );     /*SDX0(20,V102,V310,V311)*/
V311=pile[WZ3]; 
pile[v[22]]=V311; 
(*f[40])( );     /*SLG0(V311)*/
goto l130;
l131:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V313)*/
V313=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V313; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V313,134,V314)*/
V314=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=1742; pile[WZ2]=V314; 
(*f[39])( );     /*SDX0(20,1742,V314,V315)*/
V315=pile[WZ3]; 
pile[v[22]]=V315; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V315,(-740),V316)*/
V316=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V316; 
(*f[39])( );     /*SDX0(20,V102,V316,V317)*/
V317=pile[WZ3]; 
pile[v[22]]=V317; 
(*f[40])( );     /*SLG0(V317)*/
goto l132;
l133:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V319)*/
V319=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V319; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V319,134,V320)*/
V320=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=1678; pile[WZ2]=V320; 
(*f[39])( );     /*SDX0(20,1678,V320,V321)*/
V321=pile[WZ3]; 
pile[v[22]]=V321; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V321,(-740),V322)*/
V322=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V322; 
(*f[39])( );     /*SDX0(20,V102,V322,V323)*/
V323=pile[WZ3]; 
pile[v[22]]=V323; 
(*f[40])( );     /*SLG0(V323)*/
goto l134;
l135:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V325)*/
V325=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V325; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V325,134,V326)*/
V326=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=1679; pile[WZ2]=V326; 
(*f[39])( );     /*SDX0(20,1679,V326,V327)*/
V327=pile[WZ3]; 
pile[v[22]]=V327; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V327,(-740),V328)*/
V328=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V328; 
(*f[39])( );     /*SDX0(20,V102,V328,V329)*/
V329=pile[WZ3]; 
pile[v[22]]=V329; 
(*f[40])( );     /*SLG0(V329)*/
goto l136;
l137:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==1596) goto l138;
goto l44;
l138:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V331)*/
V331=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V331; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V331,134,V332)*/
V332=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=1596; pile[WZ2]=V332; 
(*f[39])( );     /*SDX0(20,1596,V332,V333)*/
V333=pile[WZ3]; 
pile[v[22]]=V333; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V333,(-740),V334)*/
V334=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V334; 
(*f[39])( );     /*SDX0(20,V102,V334,V335)*/
V335=pile[WZ3]; 
pile[v[22]]=V335; 
(*f[40])( );     /*SLG0(V335)*/
goto l44;
l139:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V169)*/
V169=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V169; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V169,134,V170)*/
V170=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=105; pile[WZ2]=V170; 
(*f[39])( );     /*SDX0(20,105,V170,V171)*/
V171=pile[WZ3]; 
pile[v[22]]=V171; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V171,(-740),V172)*/
V172=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V172; 
(*f[39])( );     /*SDX0(20,V102,V172,V173)*/
V173=pile[WZ3]; 
pile[v[22]]=V173; 
(*f[40])( );     /*SLG0(V173)*/
goto l45;
l140:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V175)*/
V175=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V175; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V175,134,V176)*/
V176=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=337; pile[WZ2]=V176; 
(*f[39])( );     /*SDX0(20,337,V176,V177)*/
V177=pile[WZ3]; 
pile[v[22]]=V177; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V177,(-740),V178)*/
V178=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V178; 
(*f[39])( );     /*SDX0(20,V102,V178,V179)*/
V179=pile[WZ3]; 
pile[v[22]]=V179; 
(*f[40])( );     /*SLG0(V179)*/
goto l60;
l141:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V295)*/
V295=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V295; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V295,134,V296)*/
V296=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=1592; pile[WZ2]=V296; 
(*f[39])( );     /*SDX0(20,1592,V296,V297)*/
V297=pile[WZ3]; 
pile[v[22]]=V297; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V297,(-740),V298)*/
V298=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V298; 
(*f[39])( );     /*SDX0(20,V102,V298,V299)*/
V299=pile[WZ3]; 
pile[v[22]]=V299; 
(*f[40])( );     /*SLG0(V299)*/
goto l56;
l143:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V205)*/
V205=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V205; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V205,134,V206)*/
V206=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=128; pile[WZ2]=V206; 
(*f[39])( );     /*SDX0(20,128,V206,V207)*/
V207=pile[WZ3]; 
pile[v[22]]=V207; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V207,(-740),V208)*/
V208=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V208; 
(*f[39])( );     /*SDX0(20,V102,V208,V209)*/
V209=pile[WZ3]; 
pile[v[22]]=V209; 
(*f[40])( );     /*SLG0(V209)*/
goto l48;
l144:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V181)*/
V181=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V181; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V181,134,V182)*/
V182=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=436; pile[WZ2]=V182; 
(*f[39])( );     /*SDX0(20,436,V182,V183)*/
V183=pile[WZ3]; 
pile[v[22]]=V183; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V183,(-740),V184)*/
V184=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V184; 
(*f[39])( );     /*SDX0(20,V102,V184,V185)*/
V185=pile[WZ3]; 
pile[v[22]]=V185; 
(*f[40])( );     /*SLG0(V185)*/
goto l59;
l146:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V211)*/
V211=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V211; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V211,134,V212)*/
V212=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=184; pile[WZ2]=V212; 
(*f[39])( );     /*SDX0(20,184,V212,V213)*/
V213=pile[WZ3]; 
pile[v[22]]=V213; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V213,(-740),V214)*/
V214=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V214; 
(*f[39])( );     /*SDX0(20,V102,V214,V215)*/
V215=pile[WZ3]; 
pile[v[22]]=V215; 
(*f[40])( );     /*SLG0(V215)*/
goto l54;
l147:for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==120) goto l148;
goto l52;
l148:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V193)*/
V193=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V193; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V193,134,V194)*/
V194=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=120; pile[WZ2]=V194; 
(*f[39])( );     /*SDX0(20,120,V194,V195)*/
V195=pile[WZ3]; 
pile[v[22]]=V195; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V195,(-740),V196)*/
V196=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V196; 
(*f[39])( );     /*SDX0(20,V102,V196,V197)*/
V197=pile[WZ3]; 
pile[v[22]]=V197; 
(*f[40])( );     /*SLG0(V197)*/
goto l52;
l150:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V187)*/
V187=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V187; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V187,134,V188)*/
V188=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=160; pile[WZ2]=V188; 
(*f[39])( );     /*SDX0(20,160,V188,V189)*/
V189=pile[WZ3]; 
pile[v[22]]=V189; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V189,(-740),V190)*/
V190=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V190; 
(*f[39])( );     /*SDX0(20,V102,V190,V191)*/
V191=pile[WZ3]; 
pile[v[22]]=V191; 
(*f[40])( );     /*SLG0(V191)*/
goto l43;
l152:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V163)*/
V163=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V163; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V163,134,V164)*/
V164=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=107; pile[WZ2]=V164; 
(*f[39])( );     /*SDX0(20,107,V164,V165)*/
V165=pile[WZ3]; 
pile[v[22]]=V165; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V165,(-740),V166)*/
V166=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V166; 
(*f[39])( );     /*SDX0(20,V102,V166,V167)*/
V167=pile[WZ3]; 
pile[v[22]]=V167; 
(*f[40])( );     /*SLG0(V167)*/
goto l38;
l154:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V127)*/
V127=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V127; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V127,134,V128)*/
V128=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=103; pile[WZ2]=V128; 
(*f[39])( );     /*SDX0(20,103,V128,V129)*/
V129=pile[WZ3]; 
pile[v[22]]=V129; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V129,(-740),V130)*/
V130=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V130; 
(*f[39])( );     /*SDX0(20,V102,V130,V131)*/
V131=pile[WZ3]; 
pile[v[22]]=V131; 
(*f[40])( );     /*SLG0(V131)*/
goto l32;
l156:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V121)*/
V121=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V121; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V121,134,V122)*/
V122=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=102; pile[WZ2]=V122; 
(*f[39])( );     /*SDX0(20,102,V122,V123)*/
V123=pile[WZ3]; 
pile[v[22]]=V123; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V123,(-740),V124)*/
V124=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V124; 
(*f[39])( );     /*SDX0(20,V102,V124,V125)*/
V125=pile[WZ3]; 
pile[v[22]]=V125; 
(*f[40])( );     /*SLG0(V125)*/
goto l40;
l157:pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V139)*/
V139=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V139; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V139,134,V140)*/
V140=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=111; pile[WZ2]=V140; 
(*f[39])( );     /*SDX0(20,111,V140,V141)*/
V141=pile[WZ3]; 
pile[v[22]]=V141; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V141,(-740),V142)*/
V142=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V142; 
(*f[39])( );     /*SDX0(20,V102,V142,V143)*/
V143=pile[WZ3]; 
pile[v[22]]=V143; 
(*f[40])( );     /*SLG0(V143)*/
goto l158;
l168:x[jvj+42]=s[x[jvj+41]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+41];
pile[v[22]]=jvj+42; 
(*f[4041])( );     /*Z183Z0(jvj+42)*/
x[jvj+41]=t[x[jvj+41]];
goto l167;
l170:x[jvj+44]=s[x[jvj+43]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+43];
pile[v[22]]=jvj+44; 
(*f[4041])( );     /*Z183Z0(jvj+44)*/
x[jvj+43]=t[x[jvj+43]];
goto l169;
l172:x[jvj+46]=s[x[jvj+45]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+45];
pile[v[22]]=jvj+46; 
(*f[4041])( );     /*Z183Z0(jvj+46)*/
x[jvj+45]=t[x[jvj+45]];
goto l171;
l174:x[jvj+48]=s[x[jvj+47]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+47];
pile[v[22]]=jvj+48; 
(*f[4041])( );     /*Z183Z0(jvj+48)*/
x[jvj+47]=t[x[jvj+47]];
goto l173;
l176:x[jvj+50]=s[x[jvj+49]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+49];
pile[v[22]]=jvj+50; 
(*f[4041])( );     /*Z183Z0(jvj+50)*/
x[jvj+49]=t[x[jvj+49]];
goto l175;
l178:x[jvj+52]=s[x[jvj+51]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+51];
pile[v[22]]=jvj+52; 
(*f[4041])( );     /*Z183Z0(jvj+52)*/
x[jvj+51]=t[x[jvj+51]];
goto l177;
l180:x[jvj+54]=s[x[jvj+53]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+53];
pile[v[22]]=jvj+54; 
(*f[4041])( );     /*Z183Z0(jvj+54)*/
x[jvj+53]=t[x[jvj+53]];
goto l179;
l182:x[jvj+56]=s[x[jvj+55]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+55];
pile[v[22]]=jvj+56; 
(*f[4041])( );     /*Z183Z0(jvj+56)*/
x[jvj+55]=t[x[jvj+55]];
goto l181;
l184:x[jvj+58]=s[x[jvj+57]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+57];
pile[v[22]]=jvj+58; 
(*f[4041])( );     /*Z183Z0(jvj+58)*/
x[jvj+57]=t[x[jvj+57]];
goto l183;
l186:x[jvj+60]=s[x[jvj+59]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+59];
pile[v[22]]=jvj+60; 
(*f[4041])( );     /*Z183Z0(jvj+60)*/
x[jvj+59]=t[x[jvj+59]];
goto l185;
l188:x[jvj+62]=s[x[jvj+61]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+61];
pile[v[22]]=jvj+62; 
(*f[4041])( );     /*Z183Z0(jvj+62)*/
x[jvj+61]=t[x[jvj+61]];
goto l187;
l189:V347=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V342)*/
V342=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V342; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V342,300,V343)*/
V343=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=100; pile[WZ2]=V343; 
(*f[39])( );     /*SDX0(20,100,V343,V344)*/
V344=pile[WZ3]; 
pile[v[22]]=V344; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V344,(-740),V345)*/
V345=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V347; pile[WZ2]=V345; 
(*f[39])( );     /*SDX0(20,V347,V345,V346)*/
V346=pile[WZ3]; 
pile[v[22]]=V346; 
(*f[40])( );     /*SLG0(V346)*/
goto l190;
l191:V369=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V364)*/
V364=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V364; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V364,300,V365)*/
V365=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=101; pile[WZ2]=V365; 
(*f[39])( );     /*SDX0(20,101,V365,V366)*/
V366=pile[WZ3]; 
pile[v[22]]=V366; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V366,(-740),V367)*/
V367=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V369; pile[WZ2]=V367; 
(*f[39])( );     /*SDX0(20,V369,V367,V368)*/
V368=pile[WZ3]; 
pile[v[22]]=V368; 
(*f[40])( );     /*SLG0(V368)*/
goto l195;
l192:V445=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V440)*/
V440=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V440; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V440,300,V441)*/
V441=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=628; pile[WZ2]=V441; 
(*f[39])( );     /*SDX0(20,628,V441,V442)*/
V442=pile[WZ3]; 
pile[v[22]]=V442; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V442,(-740),V443)*/
V443=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V445; pile[WZ2]=V443; 
(*f[39])( );     /*SDX0(20,V445,V443,V444)*/
V444=pile[WZ3]; 
pile[v[22]]=V444; 
(*f[40])( );     /*SLG0(V444)*/
goto l8;
l193:V451=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V446)*/
V446=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V446; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V446,300,V447)*/
V447=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=644; pile[WZ2]=V447; 
(*f[39])( );     /*SDX0(20,644,V447,V448)*/
V448=pile[WZ3]; 
pile[v[22]]=V448; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V448,(-740),V449)*/
V449=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V451; pile[WZ2]=V449; 
(*f[39])( );     /*SDX0(20,V451,V449,V450)*/
V450=pile[WZ3]; 
pile[v[22]]=V450; 
(*f[40])( );     /*SLG0(V450)*/
goto l195;
l194:V457=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V452)*/
V452=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V452; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V452,300,V453)*/
V453=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=1678; pile[WZ2]=V453; 
(*f[39])( );     /*SDX0(20,1678,V453,V454)*/
V454=pile[WZ3]; 
pile[v[22]]=V454; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V454,(-740),V455)*/
V455=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V457; pile[WZ2]=V455; 
(*f[39])( );     /*SDX0(20,V457,V455,V456)*/
V456=pile[WZ3]; 
pile[v[22]]=V456; 
(*f[40])( );     /*SLG0(V456)*/
goto l195;
l196:V387=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V382)*/
V382=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V382; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V382,300,V383)*/
V383=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=111; pile[WZ2]=V383; 
(*f[39])( );     /*SDX0(20,111,V383,V384)*/
V384=pile[WZ3]; 
pile[v[22]]=V384; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V384,(-740),V385)*/
V385=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V387; pile[WZ2]=V385; 
(*f[39])( );     /*SDX0(20,V387,V385,V386)*/
V386=pile[WZ3]; 
pile[v[22]]=V386; 
(*f[40])( );     /*SLG0(V386)*/
goto l197;
l198:V353=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V348)*/
V348=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V348; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V348,300,V349)*/
V349=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=130; pile[WZ2]=V349; 
(*f[39])( );     /*SDX0(20,130,V349,V350)*/
V350=pile[WZ3]; 
pile[v[22]]=V350; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V350,(-740),V351)*/
V351=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V353; pile[WZ2]=V351; 
(*f[39])( );     /*SDX0(20,V353,V351,V352)*/
V352=pile[WZ3]; 
pile[v[22]]=V352; 
(*f[40])( );     /*SLG0(V352)*/
goto l23;
l199:V401=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V396)*/
V396=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V396; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V396,300,V397)*/
V397=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=162; pile[WZ2]=V397; 
(*f[39])( );     /*SDX0(20,162,V397,V398)*/
V398=pile[WZ3]; 
pile[v[22]]=V398; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V398,(-740),V399)*/
V399=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V401; pile[WZ2]=V399; 
(*f[39])( );     /*SDX0(20,V401,V399,V400)*/
V400=pile[WZ3]; 
pile[v[22]]=V400; 
(*f[40])( );     /*SLG0(V400)*/
goto l23;
l200:V411=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V406)*/
V406=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V406; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V406,300,V407)*/
V407=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=163; pile[WZ2]=V407; 
(*f[39])( );     /*SDX0(20,163,V407,V408)*/
V408=pile[WZ3]; 
pile[v[22]]=V408; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V408,(-740),V409)*/
V409=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V411; pile[WZ2]=V409; 
(*f[39])( );     /*SDX0(20,V411,V409,V410)*/
V410=pile[WZ3]; 
pile[v[22]]=V410; 
(*f[40])( );     /*SLG0(V410)*/
goto l23;
l201:V421=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V416)*/
V416=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V416; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V416,300,V417)*/
V417=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=140; pile[WZ2]=V417; 
(*f[39])( );     /*SDX0(20,140,V417,V418)*/
V418=pile[WZ3]; 
pile[v[22]]=V418; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V418,(-740),V419)*/
V419=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V421; pile[WZ2]=V419; 
(*f[39])( );     /*SDX0(20,V421,V419,V420)*/
V420=pile[WZ3]; 
pile[v[22]]=V420; 
(*f[40])( );     /*SLG0(V420)*/
goto l23;
l202:V427=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V422)*/
V422=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V422; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V422,300,V423)*/
V423=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=436; pile[WZ2]=V423; 
(*f[39])( );     /*SDX0(20,436,V423,V424)*/
V424=pile[WZ3]; 
pile[v[22]]=V424; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V424,(-740),V425)*/
V425=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V427; pile[WZ2]=V425; 
(*f[39])( );     /*SDX0(20,V427,V425,V426)*/
V426=pile[WZ3]; 
pile[v[22]]=V426; 
(*f[40])( );     /*SLG0(V426)*/
goto l27;
l203:V433=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V428)*/
V428=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V428; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V428,300,V429)*/
V429=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=160; pile[WZ2]=V429; 
(*f[39])( );     /*SDX0(20,160,V429,V430)*/
V430=pile[WZ3]; 
pile[v[22]]=V430; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V430,(-740),V431)*/
V431=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V433; pile[WZ2]=V431; 
(*f[39])( );     /*SDX0(20,V433,V431,V432)*/
V432=pile[WZ3]; 
pile[v[22]]=V432; 
(*f[40])( );     /*SLG0(V432)*/
goto l21;
l204:V381=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V376)*/
V376=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V376; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V376,300,V377)*/
V377=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=103; pile[WZ2]=V377; 
(*f[39])( );     /*SDX0(20,103,V377,V378)*/
V378=pile[WZ3]; 
pile[v[22]]=V378; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V378,(-740),V379)*/
V379=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V381; pile[WZ2]=V379; 
(*f[39])( );     /*SDX0(20,V381,V379,V380)*/
V380=pile[WZ3]; 
pile[v[22]]=V380; 
(*f[40])( );     /*SLG0(V380)*/
goto l17;
l205:V375=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V370)*/
V370=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V370; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V370,300,V371)*/
V371=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=102; pile[WZ2]=V371; 
(*f[39])( );     /*SDX0(20,102,V371,V372)*/
V372=pile[WZ3]; 
pile[v[22]]=V372; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V372,(-740),V373)*/
V373=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V375; pile[WZ2]=V373; 
(*f[39])( );     /*SDX0(20,V375,V373,V374)*/
V374=pile[WZ3]; 
pile[v[22]]=V374; 
(*f[40])( );     /*SLG0(V374)*/
goto l11;
l206:V439=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4755); 
(*f[37])( );     /*SRA0(0,(-4755),V434)*/
V434=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V434; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V434,300,V435)*/
V435=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=120; pile[WZ2]=V435; 
(*f[39])( );     /*SDX0(20,120,V435,V436)*/
V436=pile[WZ3]; 
pile[v[22]]=V436; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V436,(-740),V437)*/
V437=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V439; pile[WZ2]=V437; 
(*f[39])( );     /*SDX0(20,V439,V437,V438)*/
V438=pile[WZ3]; 
pile[v[22]]=V438; 
(*f[40])( );     /*SLG0(V438)*/
goto l207;
}
