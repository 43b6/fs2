// Room: /open/gsword/room/wghouse.c
inherit ROOM;

void create ()
{
  set ("short", "�ؾ����ſ�");
  set ("long", @LONG
���ǲؾ�����ſڣ��㿴����ǰһ��˶����Ҷ�(sign)���ϱ��Կ���
д�š��ؾ����������֣����ſڵ����������������������ĵ����ƺ�
ֱ�����㿴��
 
LONG);

 set("outdoors","/open/gsword/room");
  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/gsword/room/g5-12.c",
  "southwest" : "/open/gsword/room/g5-10.c",
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
  "/daemon/class/swordsman/chenun" :1,
]));

  set("light_up", 1);

  setup();
}
int valid_leave(object me, string dir)
{
if( dir=="east" && present("chen un",environment(me)))
    if(!me->query_temp("allow_read",1))
   return notify_fail("�ų���˵��: ��������,����ؾ�����,��õ�����ͬ��,"
+RANK_D->query_respect(me)+"������ذ�!\n");
return ::valid_leave(me,dir);
}
