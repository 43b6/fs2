inherit ROOM;
void create() {
	set( "short", "$HIR$����$HIG$����$HIB$��ڣ$NOR$" );
	set( "owner", "zeros" );
	set( "object", ([
		"file5"    : "/open/mogi/dragon/obj/key",
		"amount1"  : 116,
		"file1"    : "/open/fire-hole/obj/g-pill",
		"amount5"  : 1,
		"amount3"  : 1,
		"amount4"  : 1,
		"file3"    : "/open/capital/obj/4-2",
		"file4"    : "/open/magic-manor/obj/wood-ball",
	]) );
	set( "build", 10004 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room73.c",
		"north"     : "/open/clan/sky-wu-chi/room/room243",
	]) );
	set( "long", @LONG

       ';,       ,;;,                                             ,,,,         
        ;;         ;;           ,,;;;;;;;;;          ,,       ,;'''  ;;        
        ;;         ;;        ';;''''                 ;;    ,,        ''        
       ,;;;;;;  ,,,;;;;;;          ;,                ;;,,  ;                   
 ,,,,;;';    ;;;'  ;;              ,;,,,,,,,,,,    ,;;;''     ;;;;             
 '''' ,;;          ;;         ,,;;';;'''     ;;      ;'      ,;;'    ,         
     ,; ;,'  ,,,,, ;;        ''    ';  ,;    ;;;     ; ,   ,;';;,  ,;'         
    ;',;;     ,;;' ;;     ;;    ;'  ;  ;,,   ;;    ,,;'    ,,;';;; ',,         
   ;;;' ;          ;;     ;;,  ,,,' ;   ''  ,;;   '''      '';;';;  ';;;       
   ''';;;;     ,,  ;;     ;;;   '        ,,,;;'             ,;' ;;   ''        
       ';;      ';;;;      '             ''''               ;,,,;'             
                   ''                                         '                
LONG);
	setup();
	replace_program(ROOM);
}
