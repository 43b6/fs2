// Room: /open/gsword/room/wghouse.c
inherit ROOM;

void create ()
{
  set ("short", "�ؾ����ſ�");
  set ("long", @LONG
���ǲؾ�����ſڣ��㿴����ǰһ��˶����Ҷ�(sign)���ϱ��Կ���
д��--�ؾ���--�������֣����ſڵ����������������������ĵ���
�ƺ�ֱ�����㿴��
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
