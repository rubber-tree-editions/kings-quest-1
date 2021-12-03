typedef unsigned char agivar;
agivar v0, v1, v2, v3, v4, v5, v6, v7, v8, v9,
      v10, v11, v12, v13, v14, v15, v16, v17, v18, v19,
      v20, v21, v22, v23, v24, v25, v26, v27, v28, v29,
      v30, v31, v32, v33, v34, v35, v36, v37, v38, v39,
      v40, v41, v42, v43, v44, v45, v46, v47, v48, v49,
      v50, v51, v52, v53, v54, v55, v56, v57, v58, v59,
      v60, v61, v62, v63, v64, v65, v66, v67, v68, v69,
      v70, v71, v72, v73, v74, v75, v76, v77, v78, v79,
      v80, v81, v82, v83, v84, v85, v86, v87, v88, v89,
      v90, v91, v92, v93, v94, v95, v96, v97, v98, v99,
      v100, v101, v102, v103, v104, v105, v106, v107, v108, v109,
      v110, v111, v112, v113, v114, v115, v116, v117, v118, v119,
      v120, v121, v122, v123, v124, v125, v126, v127, v128, v129,
      v130, v131, v132, v133, v134, v135, v136, v137, v138, v139,
      v140, v141, v142, v143, v144, v145, v146, v147, v148, v149,
      v150, v151, v152, v153, v154, v155, v156, v157, v158, v159,
      v160, v161, v162, v163, v164, v165, v166, v167, v168, v169,
      v170, v171, v172, v173, v174, v175, v176, v177, v178, v179,
      v180, v181, v182, v183, v184, v185, v186, v187, v188, v189,
      v190, v191, v192, v193, v194, v195, v196, v197, v198, v199,
      v200, v201, v202, v203, v204, v205, v206, v207, v208, v209,
      v210, v211, v212, v213, v214, v215, v216, v217, v218, v219,
      v220, v221, v222, v223, v224, v225, v226, v227, v228, v229,
      v230, v231, v232, v233, v234, v235, v236, v237, v238, v239,
      v240, v241, v242, v243, v244, v245, v246, v247, v248, v249,
      v250, v251, v252, v253, v254, v255;

typedef unsigned char agiflag;
agiflag f0, f1, f2, f3, f4, f5, f6, f7, f8, f9,
        f10, f11, f12, f13, f14, f15, f16, f17, f18, f19,
        f20, f21, f22, f23, f24, f25, f26, f27, f28, f29,
        f30, f31, f32, f33, f34, f35, f36, f37, f38, f39,
        f40, f41, f42, f43, f44, f45, f46, f47, f48, f49,
        f50, f51, f52, f53, f54, f55, f56, f57, f58, f59,
        f60, f61, f62, f63, f64, f65, f66, f67, f68, f69,
        f70, f71, f72, f73, f74, f75, f76, f77, f78, f79,
        f80, f81, f82, f83, f84, f85, f86, f87, f88, f89,
        f90, f91, f92, f93, f94, f95, f96, f97, f98, f99,
        f100, f101, f102, f103, f104, f105, f106, f107, f108, f109,
        f110, f111, f112, f113, f114, f115, f116, f117, f118, f119,
        f120, f121, f122, f123, f124, f125, f126, f127, f128, f129,
        f130, f131, f132, f133, f134, f135, f136, f137, f138, f139,
        f140, f141, f142, f143, f144, f145, f146, f147, f148, f149,
        f150, f151, f152, f153, f154, f155, f156, f157, f158, f159,
        f160, f161, f162, f163, f164, f165, f166, f167, f168, f169,
        f170, f171, f172, f173, f174, f175, f176, f177, f178, f179,
        f180, f181, f182, f183, f184, f185, f186, f187, f188, f189,
        f190, f191, f192, f193, f194, f195, f196, f197, f198, f199,
        f200, f201, f202, f203, f204, f205, f206, f207, f208, f209,
        f210, f211, f212, f213, f214, f215, f216, f217, f218, f219,
        f220, f221, f222, f223, f224, f225, f226, f227, f228, f229,
        f230, f231, f232, f233, f234, f235, f236, f237, f238, f239,
        f240, f241, f242, f243, f244, f245, f246, f247, f248, f249,
        f250, f251, f252, f253, f254, f255;

typedef struct agiobj *agiobj;
agiobj o0, o1, o2, o3, o4, o5, o6, o7, o8, o9,
        o10, o11, o12, o13, o14, o15, o16, o17, o18, o19,
        o20, o21, o22, o23, o24, o25, o26, o27, o28, o29,
        o30, o31, o32, o33, o34, o35, o36, o37, o38, o39,
        o40, o41, o42, o43, o44, o45, o46, o47, o48, o49,
        o50, o51, o52, o53, o54, o55, o56, o57, o58, o59,
        o60, o61, o62, o63, o64, o65, o66, o67, o68, o69,
        o70, o71, o72, o73, o74, o75, o76, o77, o78, o79,
        o80, o81, o82, o83, o84, o85, o86, o87, o88, o89,
        o90, o91, o92, o93, o94, o95, o96, o97, o98, o99,
        o100, o101, o102, o103, o104, o105, o106, o107, o108, o109,
        o110, o111, o112, o113, o114, o115, o116, o117, o118, o119,
        o120, o121, o122, o123, o124, o125, o126, o127, o128, o129,
        o130, o131, o132, o133, o134, o135, o136, o137, o138, o139,
        o140, o141, o142, o143, o144, o145, o146, o147, o148, o149,
        o150, o151, o152, o153, o154, o155, o156, o157, o158, o159,
        o160, o161, o162, o163, o164, o165, o166, o167, o168, o169,
        o170, o171, o172, o173, o174, o175, o176, o177, o178, o179,
        o180, o181, o182, o183, o184, o185, o186, o187, o188, o189,
        o190, o191, o192, o193, o194, o195, o196, o197, o198, o199,
        o200, o201, o202, o203, o204, o205, o206, o207, o208, o209,
        o210, o211, o212, o213, o214, o215, o216, o217, o218, o219,
        o220, o221, o222, o223, o224, o225, o226, o227, o228, o229,
        o230, o231, o232, o233, o234, o235, o236, o237, o238, o239,
        o240, o241, o242, o243, o244, o245, o246, o247, o248, o249,
        o250, o251, o252, o253, o254, o255;

typedef char agistr[40];

agistr s0, s1, s2, s3, s4, s5, s6, s7, s8, s9,
        s10, s11, s12, s13, s14, s15, s16, s17, s18, s19,
        s20, s21, s22, s23, s24, s25, s26, s27, s28, s29,
        s30, s31, s32, s33, s34, s35, s36, s37, s38, s39,
        s40, s41, s42, s43, s44, s45, s46, s47, s48, s49,
        s50, s51, s52, s53, s54, s55, s56, s57, s58, s59,
        s60, s61, s62, s63, s64, s65, s66, s67, s68, s69,
        s70, s71, s72, s73, s74, s75, s76, s77, s78, s79,
        s80, s81, s82, s83, s84, s85, s86, s87, s88, s89,
        s90, s91, s92, s93, s94, s95, s96, s97, s98, s99,
        s100, s101, s102, s103, s104, s105, s106, s107, s108, s109,
        s110, s111, s112, s113, s114, s115, s116, s117, s118, s119,
        s120, s121, s122, s123, s124, s125, s126, s127, s128, s129,
        s130, s131, s132, s133, s134, s135, s136, s137, s138, s139,
        s140, s141, s142, s143, s144, s145, s146, s147, s148, s149,
        s150, s151, s152, s153, s154, s155, s156, s157, s158, s159,
        s160, s161, s162, s163, s164, s165, s166, s167, s168, s169,
        s170, s171, s172, s173, s174, s175, s176, s177, s178, s179,
        s180, s181, s182, s183, s184, s185, s186, s187, s188, s189,
        s190, s191, s192, s193, s194, s195, s196, s197, s198, s199,
        s200, s201, s202, s203, s204, s205, s206, s207, s208, s209,
        s210, s211, s212, s213, s214, s215, s216, s217, s218, s219,
        s220, s221, s222, s223, s224, s225, s226, s227, s228, s229,
        s230, s231, s232, s233, s234, s235, s236, s237, s238, s239,
        s240, s241, s242, s243, s244, s245, s246, s247, s248, s249,
        s250, s251, s252, s253, s254, s255;

typedef int agicontrol;
agicontrol c0, c1, c2, c3, c4, c5, c6, c7, c8, c9,
          c10, c11, c12, c13, c14, c15, c16, c17, c18, c19,
          c20, c21, c22, c23, c24, c25, c26, c27, c28, c29,
          c30, c31, c32, c33, c34, c35, c36, c37, c38, c39,
          c40, c41, c42, c43, c44, c45, c46, c47, c48, c49,
          c50, c51, c52, c53, c54, c55, c56, c57, c58, c59,
          c60, c61, c62, c63, c64, c65, c66, c67, c68, c69,
          c70, c71, c72, c73, c74, c75, c76, c77, c78, c79,
          c80, c81, c82, c83, c84, c85, c86, c87, c88, c89,
          c90, c91, c92, c93, c94, c95, c96, c97, c98, c99,
          c100, c101, c102, c103, c104, c105, c106, c107, c108, c109,
          c110, c111, c112, c113, c114, c115, c116, c117, c118, c119,
          c120, c121, c122, c123, c124, c125, c126, c127, c128, c129,
          c130, c131, c132, c133, c134, c135, c136, c137, c138, c139,
          c140, c141, c142, c143, c144, c145, c146, c147, c148, c149,
          c150, c151, c152, c153, c154, c155, c156, c157, c158, c159,
          c160, c161, c162, c163, c164, c165, c166, c167, c168, c169,
          c170, c171, c172, c173, c174, c175, c176, c177, c178, c179,
          c180, c181, c182, c183, c184, c185, c186, c187, c188, c189,
          c190, c191, c192, c193, c194, c195, c196, c197, c198, c199,
          c200, c201, c202, c203, c204, c205, c206, c207, c208, c209,
          c210, c211, c212, c213, c214, c215, c216, c217, c218, c219,
          c220, c221, c222, c223, c224, c225, c226, c227, c228, c229,
          c230, c231, c232, c233, c234, c235, c236, c237, c238, c239,
          c240, c241, c242, c243, c244, c245, c246, c247, c248, c249,
          c250, c251, c252, c253, c254, c255;

struct set {
  struct set_game {
    void (*id)(const char*);
  } game;
  struct set_view {
    void (*v)(int);
  } view;
  struct set_cursor {
    void (*_char)(const char*);
  } cursor;
  struct set_text {
    void (*attribute)(int, int);
  } text;
  struct set_priority {
    void (*v)(agiobj, agivar);
  } priority;
  struct set_menu {
    void (*item)(agistr, agicontrol);
  } menu;
  void (*horizon)(int);
  void (*string)(agistr, const char*);
  void (*cel)(agiobj, int);
  void (*_view)(agiobj, int);
  void (*_priority)(agiobj, int);
  void (*dir)(agiobj, agivar);
  void (*loop)(agiobj, int);
  void (*v)(agivar);
  void (*key)(int, int, agicontrol);
  void (*_menu)(agistr);
} set;

struct add {
  struct add_to {
    void (*pic)(int, int, int, int, int, int, int);
  } _to;
} add;

struct have {
  int (*key)(void);
} have;

struct text {
  void (*screen)(void);
} text;

struct script {
  void (*size)(int);
} script;

struct new {
  struct new_room {
    void (*v)(agivar);
  } room;
  void (*_room)(int);
} new;

struct load {
  void (*_view)(int);
  struct load_view {
    void (*v)(int);
  } view;
  void (*logics)(int);
  void (*sound)(int);
  void (*pic)(int);
} load;

struct draw {
  void (*pic)(int);
} draw;

struct discard {
  void (*pic)(int);
  void (*_view)(int);
} discard;

struct configure {
  void (*screen)(int, int, int);
} configure;

struct reposition {
  struct reposition_to {
    void (*v)(agiobj, agivar, agivar);
  } to;
  void (*_to)(agiobj, int, int);
} reposition;

struct reset {
  void (*v)(int);
} reset;

struct program {
  void (*control)(void);
} program;

struct init {
  void (*joy)(void);
} init;

struct cancel {
  void (*line)(void);
} cancel;

struct echo {
  void (*line)(void);
} echo;

struct save {
  void (*game)(void);
} save;

struct restart {
  void (*game)(void);
} restart;

struct restore {
  void (*game)(void);
} restore;

struct current {
  void (*loop)(agiobj, agivar);
} current;

struct submit {
  void (*_menu)(void);
} submit;

struct show {
  struct show_pri {
    void (*screen)(void);
  } pri;
  void (*_obj)(int);
  void (*pic)(void);
  void (*mem)(void);
} show;

struct shake {
  void (*screen)(int);
} shake;

struct status {
  struct status_line {
    void (*on)(void);
    void (*off)(void);
  } line;
} status;

struct accept {
  void (*input)(void);
} accept;

struct prevent {
  void (*input)(void);
} prevent;

struct call {
  void (*v)(agivar);
} call;

struct animate {
  void (*_obj)(agiobj);
} animate;

struct observe {
  void (*objs)(agiobj);
  void (*blocks)(agiobj);
} observe;

struct ignore {
  void (*objs)(agiobj);
  void (*horizon)(agiobj);
  void (*blocks)(agiobj);
} ignore;

struct follow {
  void (*ego)(agiobj, int, agiflag);
} follow;

struct object {
  struct object_on {
    void (*water)(agiobj);
    void (*land)(agiobj);
  } on;
} object;

struct start {
  void (*cycling)(agiobj);
  void (*motion)(agiobj);
  void (*update)(agiobj);
} start;

struct player {
  void (*control)(void);
} player;

struct reverse {
  void (*loop)(agiobj, agiflag);
} reverse;

struct stop {
  void (*motion)(agiobj);
  void (*cycling)(agiobj);
  void (*update)(agiobj);
  void (*sound)();
} stop;

struct release {
  void (*_priority)(agiobj);
} release;

struct cycle {
  void (*time)(agiobj, agivar);
} cycle;

struct clear {
  void (*lines)(int, int, int);
} clear;

struct step {
  void (*size)(agiobj, agivar);
} step;

struct normal {
  void (*motion)(agiobj);
} normal;

struct position {
  void (*v)(agiobj, agivar, agivar);
} position;

struct enable {
  void (*item)(agicontrol);
} enable;

struct disable {
  void (*item)(agicontrol);
} disable;

struct get {
  void (*posn)(agiobj, agivar, agivar);
  void (*_priority)(agiobj, agivar);
  void (*num)(agistr, agivar);
  void (*v)(agivar);
} get;

struct end {
  struct end_of {
    void (*loop)(agiobj, agiflag);
  } of;
} end;

struct overlay {
  void (*pic)(agivar);
} overlay;

struct move {
  struct move_obj {
    void (*v)(agiobj, agivar, agivar, agivar, agiflag);
  } obj;
  void (*_obj)(agiobj, int, int, int, agiflag);
} move;

struct obj {
  struct obj_status {
    void (*v)(agivar);
  } status;
} obj;

struct print {
  void (*v)(agivar);
} print;

void _draw(agiobj);

#define set(...) _set(__VA_ARGS__)
#define view(...) _view(__VA_ARGS__)
#define reset(...) _reset(__VA_ARGS__)
#define call(...) _call(__VA_ARGS__)
#define char(...) _char(__VA_ARGS__)
#define status(...) _status(__VA_ARGS__)
#define position(...) _position(__VA_ARGS__)
#define draw(...) _draw(__VA_ARGS__)
#define get(...) _get(__VA_ARGS__)
#define obj(...) _obj(__VA_ARGS__)
#define priority(...) _priority(__VA_ARGS__)
#define reposition(...) _reposition(__VA_ARGS__)
#define room(...) _room(__VA_ARGS__)
#define menu(...) _menu(__VA_ARGS__)
#define print(...) _print(__VA_ARGS__)
#define to(...) _to(__VA_ARGS__)

#define null 0

#define goto(x) goto x

