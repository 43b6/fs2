// Room: /open/gsword/room/wghouse.c
inherit ROOM;

void create ()
{
  set ("short", "藏经阁门口");
  set ("long", @LONG
这是藏经阁的门口，你看到门前一个硕大的匾额(sign)，上边以楷书
写着--藏经阁--三个大字，在门口的两侧有着两座栩栩如生的雕像，
似乎直盯着你看。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/north",
  "east" : "/open/gsword/room/wghouse1",
]));

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "            ,,   ;;                                               ,,, 
          ';;  ,,;,,,;;        ,,,                   ,,,;';,  ;;'''';;
      ;;;'';;   ;  ,,          ;;     ;;;;''''       ;; ,,;;   ;,;' ;;
                ;;  ';        ;' ;;, ,   ,,  ;,       ;'' ;;   ; ,,,;;
     ,  ,,,,,,;';;''        ,;' ,;'  ;; ;;' ;'        ;,;'';;,,'''  ;;
     ;;  ; ,,,,,,;,  ,     ';'';'   ;' ,;  ';,,       ;   ,;'';;    ;;
     ;;''; ;';;  '; ,;'      ,;',;, ';, ';   ''       ;  ' ';;;     ;;
        ,; ;''';; ;;;'      ;;;'' '   ' ,,,,,,        ;   ,;' ';,,  ;;
   '';;';' ;,,,'   ;;         ,  ;, '''';;''         ,; ,';,,,;;;''';;
     ;' ;  ; ;,,, ;';;,  ,';, ';  '     ;;  ,,,,     ;;   ;;  ,;',,,;;
   ,'  ;' ''    ;;'  ';,;; ';     ,,;'''''''''''''   ';    ;''''  ';;;
",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/chenun.c" : 1,
]));

  set("light_up", 1);
  setup();
}
int valid_leave(object me, string dir)
{
if( dir=="east" && present("un", environment(me)))
   return 0;
return ::valid_leave(me,dir);
}
