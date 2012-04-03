//open/prayer/room/youkoun/2-door.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",@LONG

                ,,;,                ,,              ,;;;;;,,   ,,,,,,,,
            ,,;;;  ';;,          ,  ;'              ;;,,,,;;   ;,,,,,;;
 ,;;;;;;, '';,, ';,,;'       ,,;;'  ;   ;;;,,       ;;'''';;   ;''''';;
     ;       ;;;;''                 ;               ;;,,,,;;   ;,,,,,;;
  ,,,;,,,';;';;,,,,,,,     ,,;;;;;;;;;;;;;;;;;      ;;'''''          ;;
 '''';'''   ,'  ';                ;; ;              ;'               ;;
     ;    ,,,,,;;;';,,,,,       ,;'  ;             ;;                ;;
 ,,,;;;;;   ,,   ;   ,,       ,;'    ;            ,;'                ;;
 ''         ;;  ,;,,,;;   ,,;;'      ';,,,,,,,;;';;'                 ';,
             '''''''''    '''             '''''  ''                   ''

LONG);
     set("item_desc", ([ /* sizeof() == 1 */
      "north" : (: look_door,     "north" :),
]));

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"20",            //���䳡
        "east":"/open/prayer/room/westarea/road34",     //��·
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/door-looker1" : 2,            //�������� 
                
]));
        set("light_up", 1);
        create_door("north","ʥ����ƾ��ִ���", "south",DOOR_CLOSED);
  setup();
}

int valid_leave(object me, string dir)
{

  if(dir=="north" && me->query("gender")== "����" && !present("board",me))
      return notify_fail("[36m�������޷����������ŵ�!�������н���������!![0m\n");
  
      return ::valid_leave(me,dir);
}
    
