#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "�ؾ����ſ�");
  set ("long", "
"HIY"             ;;                ,            ,,          ,;;,     '''';;"NOR"
"HIY"     ';,    ;;;'''            ,;'     ,,;''''             ;'   ; ,,  ;;"NOR"
"HIY"      ';   ''     ',         ,;'            ,,          , ',   ;     ;;"NOR"
"HIY"   ;'  '   ,,;,;'          ,;',,,    ;  ,'  ;'     ;     ,;    ;;''  ;;"NOR"
"HIY"       ;''''';;           ;;;';;'   ;'  ;,  ,,,    ;   ;' ,;;,,,     ;;"NOR"
"HIY"   , ;    ,;;;;           '  ;',,   ';  ''    ''   ;     ,'  ;;      ;;"NOR"
"HIY"   ;,;; ;  ;, '; ,;         ;;';;    '             ;      ';;''''''  ;;"NOR"
"HIY"   ,,; ,; '';' ';;'           ;'       ,,,;''      ;     ,;'  ,,,    ;;"NOR"
"HIY"  ;',; ;; ,;,, ,;;          ,; ,         ;        ;;      , '' ;;    ;;"NOR"
"HIY" ,' ;; ;; ' ;' ' ';,       ,;;;'        ,; ,,,,   ;;      ;  , '     ;;"NOR"
"HIY"   ';  ;;,,;;     ';;,,,    ''     ,;;;'''''''''  ;;                ,;;"NOR"
"HIY"        '           ';;;                           '                ';;"NOR"
");
  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"book2", 
  "out" : __DIR__"2",     
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/doctor/npc/b-guard.c" : 2,
]));
  set("light_up", 1);
  setup();
}

int valid_leave(object me , string dir)
{
    if(dir=="enter" && !present("book_mark",me))
        return notify_fail(HIW"������������һ�ɺ�Ȼ�����赲�����ؾ���֮�ڣ�\n"NOR);
        return ::valid_leave(me,dir);
}

